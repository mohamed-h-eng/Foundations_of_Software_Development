#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    // Attr
    string model, color;
    float speed, price, fuel;
    bool started;
    // methods
public:
    // def cons
    Car() {
        model = "";
        color = "red";
        speed = 0;
        price = 1500;
        fuel = 10;
        started = false;
    }
    // params
    Car(string m, string c,
        float s, float p,
        float f, bool str) {
        model = m;
        color = c;
        speed = s;
        price = p;
        fuel = f;
        started = str;
    }

    void set_color(string c) {
        color = c;
    }
    void set_speed(float  s) {
        speed = s;
    }
    string get_color() {
        return color;
    }
    float get_speed() {
        return speed;
    }

};


int main()
{
    Car c("BMW", "Blue", 0, 3000, 20, true);
    c.set_color("Black");
    cout << c.get_color() << '\n';


    return 0;
}