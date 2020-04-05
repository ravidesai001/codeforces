#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    string s[n]; string t[m];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < m; i++){
        cin >> t[i];
    }
    int q; cin >> q;
    int queries[q];
    for(int j = 0; j < q; j++){
        cin >> queries[j];
    }
    for(int year : queries){
        cout << s[(year - 1) % n] + t[(year - 1) % m] << endl;
    }
    return 0;
}