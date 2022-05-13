#include <iostream>

using  namespace std;

void details(string subcriberName, int phoneNumber, string international){
    cout << subcriberName << endl;
    cout << phoneNumber << endl;
    cout << international << endl;
}

int main(){
    string x;
    int y;
    string z;

    cout << "Enter name: " << endl;
    cin >> x;
    cout << "Enter phone number: " << endl;
    cin >> y;
    cout << "Are you international(Y/N): " << endl;
    cin >> z;

    details(x, y, z);

    float distance;
    int duration;
    cout << "Enter distnace: " << endl;
    cin >> distance;
    cout << "Enter duration: " << endl;
    cin >> duration;

    if(z == "Y"){
        float price;
        if (distance < 25){
            price = 0.55;
            float total = price * duration;
            cout << "Your total price is RM" << total << endl;
        }else if (distance >= 25 and distance < 75){
            price = 0.85;
            float total = price * duration;
            cout << "Your total price is RM" << total << endl;
        }else if (distance >= 75 and distance < 300){
            price = 1.20;
            float total = price * duration;
            cout << "Your total price is RM" << total << endl;
        }else if (distance >= 300 and distance <= 1000){
            price = 2.20;
            float total = price * duration;
            cout << "Your total price is RM" << total << endl;
        }else{
            price = 3.20;
            float total = price * duration;
            cout << "Your total price is RM" << total << endl;
        } 

    }else if (z == "N"){
        float price;
        if (distance < 25){
            price = 0.35;
            float total = price * duration;
            cout << "Your total price is RM" << total << endl;
        }else if (distance >= 25 and distance < 75){
            price = 0.65;
            float total = price * duration;
            cout << "Your total price is RM" << total << endl;
        }else if (distance >= 75 and distance < 300){
            price = 1.00;
            float total = price * duration;
            cout << "Your total price is RM" << total << endl;
        }else if (distance >= 300 and distance <= 1000){
            price = 2.00;
            float total = price * duration;
            cout << "Your total price is RM" << total << endl;
        }else{
            price = 3.00;
            float total = price * duration;
            cout << "Your total price is RM" << total << endl;
        } 
    }
}