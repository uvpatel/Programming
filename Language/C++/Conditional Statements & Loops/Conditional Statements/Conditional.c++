#include <iostream>
#include <cctype>
using namespace std;

int main() {
//    1) Find n is positive or nagetive.
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;
    if(n >= 0){
        cout << "n is positive" << endl;
    } else {
        cout << "n is negative" << endl;
    }
   
    // 2) User can Vote or not.
    int age;
    cout << "Enter Your Age: " << endl;
    cin >> age;
    if(age >= 18){
        cout << "You Can Vote." << endl;
    } else {
        cout << "You Can't Vote." << endl;
    }
   
    // 3) Number is odd or even
    
    int number;
    cout << "Enter Number: " << endl;
    cin >> number;
    if(number % 2 == 0){
        cout << "Number is Even" << endl;
    } else {
        cout << "Number is Odd" << endl;
    }
   

    // 4) Grading System

    float Marks;
    cout << "Enter Your Marks: " << endl;
    cin >> Marks ;

    if (Marks <= 100 &&  Marks >= 90)
    {
        cout << "Congratulation 🎉, You get a A Grade" << endl;
    }
    else if (Marks <= 90 && Marks >= 80)
    {
        cout << "You Get B Grade." << endl;
    }
    else if (Marks <=80 && Marks >= 70 )
    {
        cout << "You Get C Grade." << endl;
    }
    else if (Marks <= 70 && Marks >= 60 )
    {
        cout << "You Get D Grade." << endl;
    }
    
    else if (Marks <= 60 && Marks >= 50 )
    {
        cout << "You Get E Grade." << endl;
    }
    
    else{
        cout << "👍 Better Luck Next Time Work Hard!" << endl;
    }



    // 5) Find character lowercase or uppercase.

    // Approach one (Implicit Convertion)
    char ch;
    cout << "Enter Character: " << endl;
    cin >> ch;
    
    if ( (int)ch <= 90  && (int)ch >= 65)
    {
        cout << "The Character is Uppercase" << endl;
    }
    else if ( (int)ch <= 122 && (int)ch >= 97)
    {
        cout << "The Character is in Lowercase" << endl;
    }
    else{
        cout << "The Given Character is Other Character." << endl;
    }
    
    // Approach Two
    
    if(isupper(ch)){
        cout << "The given character is in Uppercase" << endl;
    }
    else if (islower(ch))
    {
        cout << "The Given Character is in Lowercase" << endl;
    }
    else{
        cout << "The Given Character is Not an Alphabetical Character" << endl;
    }
    
    // Approach Three

    if ( ch >= 'A' && ch <= 'Z')
    {
        cout << "The Character is Uppercase" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "The Character is in Lowercase" << endl;
    }
    else{
        cout << "The Given Character is Other Character." << endl;
    }

    // Using Ternary Number is Postive or Negative

    float num;
    cin >> num;
    cout << "Enter Number Check for Wheter it is Positive or Negative: " << endl;

    (num >= 0) ? cout << "The Number is Positive" : cout << "The Number is Negative " << endl;

    return 0;
}
