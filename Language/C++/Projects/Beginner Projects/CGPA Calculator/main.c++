#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

double CgpaCalc(double marks[],int n){
    double grad[n];
    double cgpa,sum =0;
    for (int i = 0; i < n; i++)
    {
        grad[i] =(marks[i]/10);
    }
     for(int i = 0; i < n; i++) 
    {
       sum += grad[i];
    }

    cgpa = sum / n;

    return cgpa;
}
int main()
{
    

    // int totalSubject;
    // cout << "Enter Number of Subjects: ";

    // cin >> totalSubject;
    // vector<int> Marks = {90,80,70,60,50};
    
    // for (int i = 0; i < Marks.size(); i++)
    // {
    //     Marks[i] /= 10;
    // }
   
    // float totolMarks = accumulate(Marks.begin(),Marks.end(),0); 

    // cout << "Total Grade: " <<totolMarks << endl;
    
    // // float cgpa = totolMarks/totalSubject;
    // float cgpa = totolMarks * 9.5;


    // cout << "Your CGPA is " << cgpa << endl;

    int n = 5;
    double marks[] = {90,80,70,80,90};
    double cgpa = CgpaCalc(marks,n);

    cout << "CGPA = " << cgpa <<endl;
    cout << "CGPA % " << cgpa *9.5;

    return 0;
}