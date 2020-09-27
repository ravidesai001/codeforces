#include <iostream>

using namespace std;

int main(){
    string name;
    int count = 0;
    cin >> name;
    for(int i = 0; i < name.length(); i++){
        bool match = false;
        for(int j = i + 1; j < name.length(); j++){
            if(name[i] == name[j]){
                match = true;
            }
        }
        if(!match){
            count++;
        }
    }
    if(count % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}