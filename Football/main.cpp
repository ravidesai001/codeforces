#include <iostream>

using namespace std;

int main(){
    string players;
    cin >> players;
    int count = 1;
    bool danger = false;
    for(int i = 0; i < players.length(); i++){
        if(players[i] == players[i + 1]){
            count += 1;
        }
        else{
            count = 1;
        }
        if(count == 7){
            danger = true;
        }
    }
    if(danger){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}