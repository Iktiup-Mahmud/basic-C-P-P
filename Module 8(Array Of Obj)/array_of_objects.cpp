#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int cls;
    char sec;

    // while we take array of objects it don't neeed to make a constructor
    // Student(string name,int age,int cls,char sec){
    //     this->name= name;
    //     this->age= age;
    //     this->cls= cls;
    //     this->sec=sec;
    // };
};

int main()
{
    // Student seyam("Iktiup Mahmud", 10, 13, 'A');
    // cout << seyam.name;

    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].age >> a[i].cls;
        cin.ignore();
    }
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << " " << a[i].age << " " << a[i].cls << endl;
    }

    return 0;
}