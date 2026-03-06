#include <iostream>
# include "Account.h"
using namespace std;

int main()
{
    Account* a1 = new Checking();
    a1->deposite(1500);
    a1->withdraw(0);
    cout << "\nchecking interest per day: " << a1->daily_interest();

    Account* a2 = new Savings();
    a2->deposite(200.50);
    a2->withdraw(50.50);
    cout << "\nsavings interest per day: " << a2->daily_interest();
}