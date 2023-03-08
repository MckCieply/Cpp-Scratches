#include <iostream>

using namespace std;

int main(){
    int choice;
    bool flag = true;
    int a, b, result;
    cout << "Please choose your operation: \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n>> ";
    cin >> choice;
    if(choice >= 1 && choice <= 4){
        cout << "Please pass your first number: \n>> ";
        cin >> a;
        cout << "Please pass your second number: \n>> ";
        cin >> b;
        if (choice == 1){
            result = a + b;
        }
        else if (choice == 2){
            result = a - b;
        }
        else if (choice == 3){
            result = a * b;
        }
        else if (choice == 4){
            if( b != 0)
                result = a / b;
            else{
                cout << "You cannot divide by 0";
                flag = false;
            }
        }
    }
    else{
        cout << "You passed wrong number";
        flag = false;
    }
    if(flag){
        cout << "Your result is equal to " <<  result <<".";
    }
}