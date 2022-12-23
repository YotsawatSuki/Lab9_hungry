#include<iostream>
#include<string>
using namespace std;

int main(){
    double age, H ,B;
    string Character;
    cout << "Enter your age: ";
    cin >> age;
    if(age<=25){
        cout << "Enter your height: ";
        cin >> H;
        if(H<100){
            Character = "Chopper";

        }else if(H<180){
            Character = "Usopp";
        }else{
            cout << "Enter your bounty: ";
            cin >> B;
            if(B>1100000000){
                Character =  "Zoro";
            }else{
                Character =  "Sanji";
            }
        }
    }else if(age <= 60){
        cout << "Enter your bounty: ";
        cin >> B;
        if(B > 500000000){
            Character = "Jinbe";
        }else{
            Character = "Franky";
        }
    }else{
        Character = "Brook";
    }
    cout << "Your character = " << Character;
    return 0;
}




