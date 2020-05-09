#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int queries[n];
    for(int i = 0; i < n; i++){
        cin >> queries[i];
    }
    for(int q : queries){
        if(q == 2){
            // 2 extra matches needed
            cout << 2 << endl;
        }
        else if(q % 2 == 0 && q > 2){
            // no extra matches needed
            cout << 0 << endl;
        }
        else if(q % 2 != 0){
            // 1 extra to make it even
            cout << 1 << endl;
        }
    }
    return 0;
}