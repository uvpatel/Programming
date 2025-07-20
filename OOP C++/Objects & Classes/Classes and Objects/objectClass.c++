#include <iostream>
#include <string>
using namespace std;

class student
{

private:
    string id;
    string name;

public:
    string department;
    float cgpa;

    // setter // Constuctor // called when object created.
    student(string ID, string NAME, string DEPARTMENT, float CGPA)
    {
        id = ID;
        name = NAME;
        department = DEPARTMENT;
        cgpa = CGPA;
    }

    // getter
    void studentinfo()
    {
        cout  << " Student's Name: "<< name << endl;
        cout << " Student's ID: " << id  << endl;
        cout << " Student's CGPA: " << cgpa << endl;
        cout << " Student's Department: " << department << endl;
    }
};

int main()
{
    student s1("24cp431", "Urvil Patel", "Computer Science", 10);
    s1.studentinfo();
}