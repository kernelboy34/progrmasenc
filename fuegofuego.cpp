#include<iostream>
using namespace std;

int main()
{

    int a,b;
	cout<<"incresa tu numero:  ";
	cin>>a;
	cout<<"incresa tu numero:  ";
	cin>>b;
	while(a==b){
		cout<<"incresa tu numero : ";
		cin>>a;
		cout<<"incresa tu numero: ";
		cin>>b;
		break;
	}
	if(a<b){
		cout<<"el numero  "<< a<<"  ++++++++es menor++++++++++ "<<endl;	
	}
	if(a>b){
		cout<<"el numero   "<< a <<"es mayor"<<endl;
	}	
	
	if(b<a){
		cout<<"el numero  "<< b << "  +++++++++es menor++++++++  "<<endl;
	}
	if(b>a){
		cout<<"el numero  "<< b <<"es el mayor"<<endl;
	}
	system("pause");
	
}
	
