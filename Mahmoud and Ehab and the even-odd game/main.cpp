#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string currentWin = "Ehab";
    if(n % 2 == 0){
        currentWin = "Mahmoud";
    }
    else{
        currentWin = "Ehab";
    }
    cout << currentWin << endl;
    return 0;
}