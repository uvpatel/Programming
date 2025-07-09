#include <iostream>
using namespace std;

int rand_num(){
    return rand()%10 + 1;
}

long long amountMoney;

int main() {
    cout << " Enter deposit amount to play game : ";
    cin  >> amountMoney;
    while (true)
    {
       long long betting_amount;
       if (amountMoney == 0)
       {
        cout<<"sorry you are lose all your money you balance now is 0 "<<endl;
        return 0;
       }
       cout << "Enter bitting amount" << endl;

       if (betting_amount > amountMoney)
       {
        cout << "You don't have enough money" << endl;
        continue;
       }
       
       cout << "Guess one: " << endl;
       int n;
       cin >> n;
       if (n>10 || n<= 0)
       {
        cout << "Wrong number,Try again" << endl;
        continue;

       }
       else{
        int r = rand_num();
        if (r==n)
        {
            amountMoney = amountMoney + (betting_amount);
            cout << "Winner . \n Your Balance now is "<<amountMoney << endl;
        }else{
            amountMoney = amountMoney-betting_amount;
            cout << "Loser . \n Your balance now is " << amountMoney;
        }
        
       }
    }
    
    return 0;
}