#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        // (*this).name = name;
        // (*this).age = age;

        this->age = age;
        this->name = name;
    }
};

int main()
{
    Person seyam("Iktiup Mahmud", 20);

    cout << seyam.name << " " << seyam.age << endl;

    return 0;
}