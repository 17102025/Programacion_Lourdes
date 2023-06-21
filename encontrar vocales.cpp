#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(){
	
cout<<"Ingrese la frase: "<<endl;

char cad[35];	
int a=0, e=0, i=0 ,o=0 ,u=0;

int z;
cin.getline(cad,35,'\n');	

for(int i=0; i<35; i++){
	switch(cad[i]){
		case 'a' : a++; break;
		case 'e' : e++; break;
		case 'i' : i++; break;
		case 'o' : o++; break;
		case 'u' : u++; break;
}
}
cout<<"\n";
cout<<"El numero de veces que uso cada vocal es de: "<<endl;

printf("Vocal a: %d\n", a);
printf("Vocal e: %d\n", e);
printf("Vocal i: %d\n", i);
printf("Vocal o: %d\n", o);
printf("Vocal u: %d\n", u);
system("pause");

z=a+e+i+o+u;
cout<<"\n";
cout<<"El numero de veces que se uso una vocal es de: \n"<<z<<" veces"<<endl;
		
getch(); 
return 0;

}
	
