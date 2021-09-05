#include<iostream>
using namespace std;
struct Student_Det
{
    string name;
    int rno;
    float cg;
    string grade;
}student[5];
int main() 
{
    cout << "Input the details:" << endl;
    int i;
    for(i=0;i<5;i++)
    {
         cout << "Name :" << endl;
         cin >> student[i].name;
         cout << "Roll No :" << endl;
         cin >> student[i].rno;
         cout << "CGPA :" << endl;
         cin >> student[i].cg;
         cout << "Grade :" << endl;
         cin >> student[i].grade;
    }
    cout << "The details are :" << endl;
    for(i=0;i<5;i++)
    {
         cout << "Name :" << student[i].name << endl;
         cout << "Roll No :" << student[i].rno << endl;
         cout << "CGPA :" <<  student[i].cg << endl;
         cout << "Grade :" << student[i].grade << endl;
    }
}
