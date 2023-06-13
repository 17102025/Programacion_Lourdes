#iclude<iostream>
using namespace std:
	int main ()
	{
		int i,j,filas,columnas,**matriz,*sumafilas,*sumacolumnas;
		cout<<"ingresa el numeroi de filas:";
		cin>> filas;
		cout<<"ingrese el nunmero de columnas:";
		cin>>columnas;
		matriz = new int *[filas];
		for(i=0,i<filas,++i){
		matriz[i] = new int[columnas];
		}
		sumafilas= new int[filas];
		sumacolumnas = new int[columas];
		
		for(i = 0;i < filas;++i){
			for(j=0; j < columnas; ++j){
				cout<<"ingresa un numero:";
				cin>> matriz [i][j];
				
			}
		}
		for(i = 0;i < filas; ++i){
			sumafilas[i] = 0
			}
		for (i = 0; j < xolumnas; ++j ){
			sumacolumnas[j] = 0;
		}	
		for(i = 0; i < filas; ++i){
			for (j = 0; j < columnas; ++j){
				cout<< matriz [i][j]<<" ";
				}
				cout<<endl;
		}
		return 0;
		}
	}
