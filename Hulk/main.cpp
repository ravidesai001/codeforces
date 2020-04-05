#include <iostream>

using namespace std;

int main(){
    int layers;
    cin >> layers;
    string feelings = "I hate";
    if(layers == 1){
        feelings += " it";
        cout << feelings << endl;
    }
    else{
        for(int i = 2; i <= layers; i++){
            feelings += " that ";
            if(i % 2 != 0){
                feelings += "I hate";
            }
            else{
                feelings += "I love";
            }
        }
        feelings += " it";
        cout << feelings << endl;
    }
    return 0;
}