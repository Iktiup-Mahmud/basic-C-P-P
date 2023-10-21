#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }
};

int main()
{
    Person *seyam = new Person("Iktiup Mahmud", 20);
    Person *sakib = new Person("Sakib", 21);

    // don't do
    // seyam = sakib;

// 1
    // sakib->name = seyam->name;
    // sakib->age = seyam->age;

    // 2
    *sakib = *seyam;

    // cout << seyam->name << endl;
    // cout << sakib->name << endl;

    delete seyam;
    // cout << seyam->name << endl;
    cout << sakib->name << endl;

    return 0;
}