#include <iostream>

using namespace std;

int main(){
    int int_cost, int_money, bananas;
    cin >> int_cost >> int_money >> bananas;
    int cost = 0;
    for(int i = 1; i <= bananas; i++){
        cost += i*int_cost;
    }

    // cost = (bananas/2) * (2*int_cost + int_cost * (bananas - 1));

    if(cost < int_money){
        cout << 0 << endl;
    }
    else{
        cout << cost - int_money << endl;
    }
    return 0;
}