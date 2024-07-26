
// project 1 oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class university {
protected :
    string studentName;
    int id;
    string subject;
    string doctor;
    int doctorId;
public:
    university() {
        cout << "no data entered" << endl;
    }
   university(string k, int j) {
        studentName = k;
        id = j;
        cout << "student is recorded" << endl;
    }
    university(string s, string d, int i) {
        subject = s;
        doctor = d;
        doctorId = i;
        cout << "subject and doctor recorded" << endl;
        cout << "subject and doctor recorded" << endl;
    
    }

    
};




int main()
{
    
    
}



