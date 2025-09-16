#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your name and age :- ";
    cin >> name >> age;

    cout << "Dear " << name << ", next year your age will be " << age + 1 << endl;

    return 0;
}