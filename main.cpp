#include<iostream>
using namespace std;

int main()
{
int x, y, modulo=0, division=0;
cout<<"Digite que desea dividir: ";
cin>>x;
cout<<"Digite el numero por el que desea dividir: ";
cin>>y;

division = x/y;
modulo = x%y;

cout<<"El resultado de la división es: "<<division<<endl<;
cout<<"El módulo de la división es :"<<modulo<<endl;

return 0;
}
