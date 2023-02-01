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

