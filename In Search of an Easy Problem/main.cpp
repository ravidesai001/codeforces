#include <iostream>

using namespace std;

int main(){
    int numPeople; 
    cin >> numPeople;
    
    int currentInput; string isHard = "EASY";
    for(int i = 0; i < numPeople; i++){
        cin >> currentInput;
        if(currentInput == 1){
            isHard = "HARD";
        }
    }
    cout << isHard << endl;
    return 0;
}