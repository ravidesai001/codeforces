#include <iostream>

using namespace std;

int main(){
    int money; int bills = 0;
    cin >> money;
    if(money >= 100){
        int temp = money/100;
        money -= (temp * 100);
        bills+=temp;
    }
    if(money >= 20){
        int temp = money/20;
        money -= (temp * 20);
        bills+=temp;
    }
    if(money >= 10){
        int temp = money/10;
        money -= (temp * 10);
        bills+=temp;
    }
    if(money >= 5){
        int temp = money/5;
        money -= (temp * 5);
        bills+=temp;
    }
    if(money >= 1){
        int temp = money/1;
        money -= (temp * 1);
        bills+=temp;
    }
    cout << bills << endl;
    return 0;
}