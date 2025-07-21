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
// Constuctors
    Teacher(float sal, string sub, string name, int ID)
    {
        Tname = name;
        subject = sub;
        salary = sal;
        id = ID;
    }
    // Function to Display info
    void getinfo();
    ~Teacher();
};

void Teacher::getinfo()
{
    cout << "Teacher's Name: " << Tname <<endl;
    cout << "Subject Name: " << subject << endl;
    cout << "Salary : " << salary <<endl;
    cout << "Student's ID : " << id << endl;
}
Teacher::~Teacher()
{
    cout << "Destructor Worked" << endl;
    
}




int main()
{
    Teacher t1(50000.00, "C++ OOP & DSA", "Sharadha Didi", 1);
    t1.getinfo();

    return 0;
}