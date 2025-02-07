#include <iostream>

using namespace std;

class Person {
    public:
        string name;
        int age;

        Person(string n, int a): name(n), age(a) {}

        void display() {
            cout << "Name: " << name << "\nAge: " << age << "\n";
        }
};

template <typename T> // Template so we can swap any type of variables.
void swapValTemp(T &a, T&b){
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5, b = 10;
    string c = "YOLO", d = "LIFES A LONG RUN";
    double e = 3.14, f = 5.81245;

    cout << "Before: " << a << " " << b << "\n";
    swapValTemp(a,b);
    cout << "After: " << a << " " << b << "\n";

    cout << "Before: " << c << " " << d << "\n";
    swapValTemp(c,d);
    cout << "After: " << c << " " << d << "\n";

    cout << "Before: " << e << " " << f << "\n";
    swapValTemp(e,f);
    cout << "After: " << e << " " << f << "\n";

    Person Alice("Alice", 28);
    Person Johnny("Johnny", 31);

    cout << "Before: \n";
    Alice.display();
    Johnny.display();

    swapValTemp(Alice, Johnny);

    cout << "After: \n";
    Alice.display();
    Johnny.display();

    return 0;
}

