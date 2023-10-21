#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int mark1, mark2;
    Person(string n, int a, int m1, int m2)
    {
        name = n;
        age = a;
        mark1 = m1;
        mark2 = m2;
    }

    void hello()
    {
        cout << "Hello" << endl;
        cout << name << endl;
        cout << age << endl;
        cout << name << " " << age << endl;
    }

    int total_mark()
    {
        return mark1 + mark2;
    }
};

int main()
{
    // string s;
    Person Rakib("Rakib Ullah", 14, 99, 80);

    // cout << Rakib.age ;
    // cout << Rakib.name ;
    Rakib.hello();
    cout << Rakib.total_mark() << endl;

    return 0;
}