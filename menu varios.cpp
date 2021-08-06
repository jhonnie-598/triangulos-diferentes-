/******************
   Objetivo:  Triangulos diferentes
   Author: todos
   Fecha: Julio /2021
*******************************/
#include <iostream>

using namespace std;

short menu(void);
void primosGemelos(void);
bool esPrimo(int numero);
void divisibilidad_11 (void);

int main()
{	short opc;
	
	do
	{
		opc = menu();
		switch (opc)
		{
			case 1:
				cout << "  \n primos gemelos";
				primosGemelos();
				break;
			case 2:
				cout <<" \n triangulo de divisbilidad por 11";
				divisibilidad_11 ();
				cout <<endl;
				system ("pause");
				break;
			case 0:
				cout <<" \n finnnnnn";
				break;
			default:
			cout <<"\n opcion invalida ";		
		}
	}while (opc !=0);
	return 0;
	
}

short menu (void)
{
	short opcion;
	
	system ("cls");
	system ("color 4b");
	cout <<"\t\t *******menu********"<<endl <<endl;
	cout <<"\t \t. 1. numeros gemelos \n";
	cout <<"\t \t. 2. triangulo de divisibilidad por 11 \n";
	cout <<"\t \t. 0. terminar \n";
	cout <<"\t \t ingrese la opcion ";
	cin >> opcion;
	
	while(opcion< 0 or opcion > 2)
	{
		cout << "\r Valor no valido ingrese opcion =====>";
		cin >> opcion;
	}
	return opcion;
}
void primosGemelos(void){
	int i;
	int n;
	cout<< "\n Ingrese Numero \n";
	cin>> n;
	while(n<2 or n>35000){
		cout<< "\n Ingrese numero valido 2-35000";
			cin>> n;
	}
	for(i = 2 ; i < n; i++){
		if(esPrimo(i)==true and esPrimo(i+2)==true){
			cout<<"\n "<< i <<" "<< i + 2<<"  Son Gemelos";
		}
	}
}

bool esPrimo(int numero){
	int i;
	if(numero==0 or numero==1){
		return false;
		}else{
			for(i = 2;i < numero; i++){
				if(numero % i==0){
					return false;
					}
			} return true;
		}	
	}

void divisibilidad_11 (void)
{
	int numero;
	int cociente, residuo, resultado;
	cout<<"ingrese numero ===>"; cin >>numero;
	while(resultado > 0 or resultado >10)
	{
		cociente = resultado / 10;
		residuo = resultado % 10;
		resultado = cociente - residuo;
		cout << endl << resultado;
	}
	
	if (resultado == 0 or resultado % 11 ==0)
	{
		cout <<endl <<"divisible";
	}
	else
	{
		cout <<endl <<"no es divisible por 11";
	}
}
