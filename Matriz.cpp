/* programa que lee y suma los elementos de una matriz*/
#include <iostream>
using namespace std;

int main(){
	int F=100, C=100, f1, c1, suma,vertical; //asignar los valores de la matriz
	int mat[F][C];
	//aplicar los controles do while
	do
	{
		cout<<"Ingrese el numero de filas<1...100>: "; cin>>f1;	
	} while(f1<=1 || f1>100);
	do
	{
		cout<<"Ingrese el numero de columnas<1...100>: "; cin>>c1;
	} while(f1<=1 || f1>100);
	
	//ingresa los valores a la matriz 
	for (int i=0; i<f1; i++)
	{
		for(int j=0; j<c1; j++)
		{	
			cout<<"mat["<<i<<"]["<<j<<"]:";	
			cin>>mat[i][j];	//ingreso de valores
		
		}
	}
	//suma las filas
	for  (int i=0; i<f1; i++)
	{
	    suma=0;
	    for (int j=0; j<c1; j++)
	    {
	        suma+=mat[i][j];
	    }   
	    cout<<"la suma de las filas es:"<<suma<<endl;
	}
	
	//muestra los valores de la matriz
	cout<<"Los valores de la matriz son:\n";
	for (int i=0; i<f1; i++)
	{
		for(int j=0; j<c1; j++)
		{
			 	
			cout<<"mat["<<i<<"]["<<j<<"]:";	
			cout<<mat[i][j]<<endl; //escritura de valores 	
		}
	}	
return 0;	
}

