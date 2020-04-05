#include <iostream>

using namespace std;

int main(){
    string base;
    cin >> base;
    string cards[5];
    // taking 5 input cards in hand
    for(int i = 0; i < 5; i++){
        cin >> cards[i];
    }
    string ans = "NO";
    for(string card : cards){
        if(card.at(0) == base.at(0) ||
        card.at(1) == base.at(1)){
            ans = "YES";
        }
    }
    cout << ans << endl;
    return 0;
}