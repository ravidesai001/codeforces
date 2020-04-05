#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int l = 1; l < n; l++){ // start with 1 leader.
        if((n-l) % l == 0){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}