#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    string Tname;
    string subject;
    float salary;
    int id;

public:
    Teacher(float salary, string subject, string Tname, int id)
    {
        this->Tname = Tname;
        this->subject = subject;
        this->salary = salary;
        this->id = id;
        
    }
    void getinfo();
};

void Teacher::getinfo()
{
    cout << "Teacher's Name: " << Tname <<endl;
    cout << "Subject Name: " << subject << endl;
    cout << "Salary : " << salary <<endl;
    cout << "Student's ID : " << id << endl;
}

int main()
{
    Teacher t1(50000.00, "C++ OOP & DSA", "Sharadha Didi", 1);
    t1.getinfo();

    return 0;
}