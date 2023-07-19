#include <iostream>
#include <conio.h>

using namespace std;

int main  (){
	int a;
	int i;
	
	cout<<"ingrese el tamaño del vector: ";
	cin>>a;
	
	int numeros[a];
	cout<<"ingrese los datos del vector: "<<endl;
	for (i=0; i<a; i++){
		cin>>numeros[i];
	}
	cout<<"numeros en el orden original: ";
	for (i=0;i<a; i++){
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
	
	cout<<"numeros a la inversa: ";
	for(i=a - 1; i>=0;i--){
		cout<<numeros[i]<<" ";
		}
		
		cout<<endl;
			
		getch();
	
	return 0;		
	}

	

