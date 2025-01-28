#include<iostream>
using namespace std;
class  Student{
    public:
    string name;
    int age, roll_no;
    string grade;
};
int main()
{
    //object 
    Student s1;
    s1.name="RK";
    s1.age=15;
    s1.roll_no=54;
    s1.grade="d15";
    cout<<s1.age<<" ";
}