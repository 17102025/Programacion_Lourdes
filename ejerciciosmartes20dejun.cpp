#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	int i;
	
	cout<<"ingrese una frase:" <<endl;
	
	char cad[50];
	
	cin.getline (cad,50,'\n');{
		cout<<"la frase que ingreso es: "<<endl;
		cout<<cad<<endl;
		
	}
	
	
	strrev (cad);
	
	cout<<cad<<endl;
	
	getch();
	
	return 0;
	
	
}
