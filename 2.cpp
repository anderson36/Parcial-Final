#include <iostream>

using namespace std;

int main (){
    int T,a,b,t,R;
    cout << "Ingrese la cantidad de casos" << endl;
    cin>>T;
    t=1;

    while(t<=T){
            cout << "Ingrese su posicion" << endl;
            cin>>a;
            cout << "Ingrese la posicion del acensor" << endl;
            cin>>b;
            R=(b*4)+9+10;
            cout<<"Case "<<t<<": "<<R<<endl;
            t++;
    }
return 0;
}
