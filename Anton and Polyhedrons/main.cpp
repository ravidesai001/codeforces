#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int faces = 0; string currentShape;
    for(int i = 0; i < n; i++){
        cin >> currentShape;
        if(currentShape == "Tetrahedron"){
            faces+=4;
        }
        else if(currentShape == "Cube"){
            faces+=6;
        }
        else if(currentShape == "Octahedron"){
            faces+=8;
        }
        else if(currentShape == "Dodecahedron"){
            faces+=12;
        }
        else if(currentShape == "Icosahedron"){
            faces+=20;
        }
    }
    cout << faces << endl;
    return 0;
}