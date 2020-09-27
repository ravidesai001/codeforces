#include <iostream>
#include<set>

using namespace std;

// uses more memory but should be quicker with larger inputs.
// takes same time as the n squared algorithm for short inputs of < 100.

int main(){
    string name;
    cin >> name;
    set<int> distincts;
    for(int i = 0; i < name.length(); i++){
        distincts.insert(name[i]);
    }
    if(distincts.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}