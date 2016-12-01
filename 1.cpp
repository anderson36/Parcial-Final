#include <iostream>

using namespace std;

int main(){
    int T,i,j,x1,x2,y1,y2,CVACAS,vx,vy;
    cout << "indique la cantidas de casos" << endl;
    cin>>T;

    i=0;

    while(i<T){
            cout<< "ingree la coordenada x1"<<endl;
            cin>> x1;
            cout<< "ingree la coordenada y1"<<endl;
            cin>> y1;
            cout<< "ingree la coordenada x2"<<endl;
            cin>> x2;
            cout<< "ingree la coordenada y2"<<endl;
            cin>> y2;


            cout <<" ingrese la cantidad de vacas"<< endl;

            cin>> CVACAS;
            j=0;

            while(j<CVACAS){
                    cout<<"ingrese la coordenada de la vaca "<< j+1 <<" en x";
                    cin>> vx;
                    cout<<"ingrese la coordenada de la vaca "<< j+1 <<" en y";
                    cin>> vy;
                if((vx>x1&&vx<x2)&&(vy>y1&&vy<y2)){
                    cout << "yes" << endl;
                }else{
                    cout << "no" << endl;
                }
                j++;
            }


        i++;
    }
    return 0;


}




