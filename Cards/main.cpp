#include <iostream>

using namespace std;

int main(){
    int n;
    string sequence;
    cin >> n >> sequence;
    int zs = 0; int ns= 0;
    for(int i = 0; i < n; i++){
        if(sequence.at(i) == 'z'){
            zs++;
        }
        else if(sequence.at(i) == 'n'){
            ns++;
        }
    }
    string ans = "";
    for(int j = 0; j < ns; j++){
        ans+="1 ";
    }
    for(int k = 0; k < zs; k++){
        ans+="0 ";
    }
    cout << ans << endl;
    return 0;
}