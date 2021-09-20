#include<iostream>
using namespace std;


 int main(){
    int a,b;
    float nota,total;
    float j,g;
    cout<<"	Ingresan varios datos por teclado, hasta que ingrese el 0. Indicar cuántos fueron positivos:     ";
    cin>>a;
    cout<<"segundo dato : ";
    cin>> b;
    j=0;
    g=500;
    nota=j/a;
    total=g/b;
    cout<<"nota es "<<nota<<endl;
    cout<<"total es"<<total<<endl;
    
    if (nota < total ){
    	cout<<"tu nota es  "<<nota<<" y total  "<<total<<endl;
    }
    
    else{
    	cout<<"termino ";
	}

system("pause");		
}
