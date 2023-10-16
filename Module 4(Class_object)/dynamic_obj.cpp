#include <bits/stdc++.h>
using namespace std;

class Student{
    public:   
        int roll;
        int clss;
        char sec;
        string name;

    Student(int r, int c, char s, string n){
        roll = r;
        clss = c;
        sec = s;
        name = n;
    };
};

int main()
{
    // Student seyam(5, 13, 'A', "Iktiup Mahmud");   
    
    // without constructor
    // Student * pointer = new tudent;

    // with constructor
    Student *pointer = new Student(5, 13, 'A', "Iktiup Mahmud");

    // cout << pointer->clss << endl;

    // shortcut 
    // array sign
    // (*abcd). = abcd->



    cout << (*pointer).name << endl;
    cout << pointer->name << endl;

    // delete an object 
    delete pointer;

    return 0;
}
