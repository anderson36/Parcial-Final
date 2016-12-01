#include <iostream>
#include <cmath>

using namespace std;

int main (){
    float pi,R,Ac,L,AR,S;
    int T,i;

    pi=2*acos(0.0);
    cout << "indique la cantidas de casos " << endl;
    cin>>T;
    i=0;
    while(i<T){

        cout << "ingrese el radio del circulo " << endl;
        cin>> R;

        Ac=pi*R*R;
        L=R+R;
        AR=L*L;
        S=AR-Ac;

        cout << "el area de la sombra es =: " << S << endl;

        i++;


    }

    return 0;
}



