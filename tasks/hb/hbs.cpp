#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

// Class to represent a Patient (OOP Encapsulation)
class Patient {
public:
    int recordNumber;
    string name, address, disease, specialistRoom, date, serviceType;
    int age;
    char sex;
    double totalCharge, totalDeposited, moneyToReturn;

    void inputDetails(int id, string service) {
        recordNumber = id;
        serviceType = service;
        cout << "\n--- Adding " << serviceType << " Patient Record ---" << endl;
        cout << "Record Number: " << recordNumber << endl;
        cin.ignore();
        cout << "Name: "; getline(cin, name);
        cout << "Address: "; getline(cin, address);
        cout << "Age: "; cin >> age;
        cout << "Sex (m/f): "; cin >> sex;
        cin.ignore();
        cout << "Disease Description: "; getline(cin, disease);
        cout << "Specialist Room No: "; getline(cin, specialistRoom);
        cout << "Date (yyyy/mm/dd): "; getline(cin, date);
        
        cout << "\n--- Financial Information ---" << endl;
        cout << "Total Charge: Rs."; cin >> totalCharge;
        cout << "Total Deposited: Rs."; cin >> totalDeposited;
        moneyToReturn = totalDeposited - totalCharge;
        cout << "Total Money to Return: Rs." << moneyToReturn << endl;
    }

    void displayDetails() const {
        cout << "\n------------------------------------" << endl;
        cout << "Record No: " << recordNumber << " | Service: " << serviceType << " | Date: " << date << endl;
        cout << "Name: " << name << " | Age: " << age << " | Sex: " << sex << endl;
        cout << "Address: " << address << endl;
        cout << "Disease: " << disease << " | Specialist Room: " << specialistRoom << endl;
        cout << "Charge: " << totalCharge << " | Deposited: " << totalDeposited << " | Return: " << moneyToReturn << endl;
        cout << "------------------------------------" << endl;
    }
};

// Manager class to handle File I/O and Logic
class HospitalManager {
    string fileName = "hospital_records.dat";

public:
    void addNewRecord() {
        Patient p;
        int choice;
        cout << "\n1. O.P.D. Service\n2. Emergency Service\nChoose service: ";
        cin >> choice;
        
        string service = (choice == 1) ? "O.P.D." : "Emergency";
        
        // Simple ID generation (in a real app, you'd check the last ID in file)
        int id = rand() % 1000 + 1; 
        p.inputDetails(id, service);

        ofstream outFile(fileName, ios::binary | ios::app);
        outFile.write(reinterpret_cast<char*>(&p), sizeof(Patient));
        outFile.close();
        cout << "Record added successfully!\n";
    }

    void listRecords() {
        cout << "\n1. Alphabetical Order\n2. Emergency Patients\n3. O.P.D. Patients\n4. By Particular Date\nChoose: ";
        int choice; cin >> choice;

        ifstream inFile(fileName, ios::binary);
        Patient p;
        vector<Patient> list;

        while (inFile.read(reinterpret_cast<char*>(&p), sizeof(Patient))) {
            if (choice == 2 && p.serviceType != "Emergency") continue;
            if (choice == 3 && p.serviceType != "O.P.D.") continue;
            if (choice == 4) {
                static string filterDate;
                if (filterDate.empty()) { cout << "Enter date (yyyy/mm/dd): "; cin >> filterDate; }
                if (p.date != filterDate) continue;
            }
            list.push_back(p);
        }
        inFile.close();

        if (choice == 1) {
            sort(list.begin(), list.end(), [](const Patient& a, const Patient& b) {
                return a.name < b.name;
            });
        }

        for (const auto& patient : list) {
            patient.displayDetails();
            cout << "Press Enter to see next record...";
            cin.ignore(); cin.get();
        }
    }

    void searchOrEdit() {
        cout << "\n1. Search by Record Number\n2. Search by Name\nChoose: ";
        int choice; cin >> choice;
        
        fstream file(fileName, ios::binary | ios::in | ios::out);
        Patient p;
        bool found = false;
        
        if (choice == 1) {
            int id; cout << "Enter ID: "; cin >> id;
            while (file.read(reinterpret_cast<char*>(&p), sizeof(Patient))) {
                if (p.recordNumber == id) {
                    p.displayDetails();
                    found = true;
                    askToEdit(file, p);
                    break;
                }
            }
        } else {
            string n; cout << "Enter Full Name: "; cin.ignore(); getline(cin, n);
            while (file.read(reinterpret_cast<char*>(&p), sizeof(Patient))) {
                if (p.name == n) {
                    p.displayDetails();
                    found = true;
                    askToEdit(file, p);
                    break;
                }
            }
        }
        if (!found) cout << "No records available.\n";
        file.close();
    }

    void askToEdit(fstream& file, Patient& p) {
        cout << "Do you want to edit this record? (y/n): ";
        char ch; cin >> ch;
        if (ch == 'y' || ch == 'Y') {
            p.inputDetails(p.recordNumber, p.serviceType);
            int pos = -1 * static_cast<int>(sizeof(Patient));
            file.seekp(pos, ios::cur);
            file.write(reinterpret_cast<char*>(&p), sizeof(Patient));
            cout << "Record updated.\n";
        }
    }

    void deleteRecord() {
        int id; cout << "Enter patient record number to delete: "; cin >> id;
        ifstream inFile(fileName, ios::binary);
        ofstream outFile("temp.dat", ios::binary);
        Patient p;
        bool found = false;

        while (inFile.read(reinterpret_cast<char*>(&p), sizeof(Patient))) {
            if (p.recordNumber == id) {
                p.displayDetails();
                cout << "Press Enter to confirm deletion...";
                cin.ignore(); cin.get();
                found = true;
            } else {
                outFile.write(reinterpret_cast<char*>(&p), sizeof(Patient));
            }
        }
        inFile.close(); outFile.close();
        remove(fileName.c_str());
        rename("temp.dat", fileName.c_str());
        if (found) cout << "Record deleted successfully.\n";
        else cout << "Record not found.\n";
    }
};

int main() {
    HospitalManager hm;
    int choice;
    string date;
    
    cout << "ALKA HOSPITAL\nJawalakhel, Lalitpur\n---------------------\n";
    cout << "Enter today's Date (yyyy/mm/dd): "; cin >> date;

    while (true) {
        cout << "\n1. Add new patient record\n2. Search or edit record\n3. Know the records of patients\n4. Delete the records\n5. Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1: hm.addNewRecord(); break;
            case 2: hm.searchOrEdit(); break;
            case 3: hm.listRecords(); break;
            case 4: hm.deleteRecord(); break;
            case 5: exit(0);
            default: cout << "Invalid choice.\n";
        }
    }
    return 0;
}