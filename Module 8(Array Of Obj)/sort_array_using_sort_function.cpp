#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    int age;
    // char sec;
};

bool cmp(Student a, Student b){
    if(a.name > b.name) return true;
    else return false;
}

int main()
{
    Student a[3];

    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].cls >> a[i].age;
        cin.ignore();
    }

    // sort function
    sort(a, a+3, cmp);

    for (int i = 0; i < 3; i++)
    {
        cout << a[i].cls << " " << a[i].name<< " "<< a[i].age<< endl;
    }
    

    return 0;
}