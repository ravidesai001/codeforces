#include <iostream>

using namespace std;

int main(){
    int money; int bills = 0;
    cin >> money;
    while(money > 0){
        if(money % 100 == 0){
            bills++;
            money -= 100;
        }
        else if(money % 20 == 0){
            bills++;
            money -=20;
        }
        else if(money % 10 == 0){
            bills++;
            money -=10;
        }
        else if(money % 5 == 0){
            bills++;
            money -=5;
        }
        else{
            bills++;
            money--;
        }
    }
    cout << bills << endl;
    return 0;
}