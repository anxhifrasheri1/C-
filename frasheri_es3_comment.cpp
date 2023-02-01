/*
	Name: es3
	Copyright: colamonico
	Author: anxhelo 
	Date: 28/09/22 10:10
	Description: Dato in input un numero intero e un esponente, calcola la potenza.
*/
#include <iostream>
using namespace std;
int main()
{
	int num;
	int esp;
	int pot=1;
	int d;
	cout<<"inserisci il numero";
	cin>>num;
	cout<<"inserisci l'esponente";
	cin>>esp;
	do
	{
		pot=pot*num;
		d=d+1;
	}while (d<esp);
	cout<<"il risultato è"<<pot;
	return 0;
	
	}

