/*
	Name: calcolatrice
	Copyright: 
	Author: anxhelo frasheri
	Date: 29/11/22 13:34
	Description: La prima scelta chiede all'utente l'input di due valori interi e fa l'operazione somma e restituisce il risultato.
La seconda scelta chiede all'utente l'input di due valori interi e fa l'operazione sottrazione e restituisce il risultato.

La terza scelta chiede all'utente l'input di due valori interi e fa l'operazione moltiplicazione e restituisce il risultato.

La quarta scelta chiede all'utente l'input di due valori interi e fa l'operazione divisione e restituisce il risultato.

La quinta scelta esce dal programma.
*/
#include <iostream>
using namespace std;
int main()
{
	double a;
	double b;
	int digita;
	int somma;
	int sottrazione;
	int moltiplicazione;
	int divisione;

do 
{
	cout<<"digitando 1 chiedi all'utente l'input di due valori interi e fa l'operazione somma e restituisce il risultato"<<endl;
	cout<<"digitando 2 chiedi all'utente l'input di due valori interi e fa l'operazione sottrazione e restituisce il risultato"<<endl;
	cout<<"digitando 3 chiedi  all'utente l'input di due valori interi e fa l'operazione moltiplicazione e restituisce il risultato";
	cout<<"digitando 4 chiedi all'utente l'input di due valori interi e fa l'operazione divisione e restituisce il risultato"<<endl;
	cout<<"digitando 5 esci dal programma"<<endl;
	
	cout<<endl;
	cout<<"inserisci una scelta: ";
	cin>>digita;


	switch(digita)
	{
		
		case 1:
		cout<<"inserisci 2 numeri interi"<<endl;
		cin>>a;
		cin>>b;
		somma=a+b;
		cout<<"la somma e "<<somma<<endl;
		break;
		
		
		
		case 2:
		cout<<"inserisci 2 numeri interi"<<endl;
		cin>>a;
		cin>>b;
		if(a<b)
		{
			cout<<"inserisci il primo numero maggiore del secondo numero "<<endl;
			cin>>a;
			cin>>b;
			sottrazione=a-b;
			cout<<"la sottrazione e "<<sottrazione<<endl;
		}
		else
		{
			sottrazione=a-b;	
		}
		break;
		
		
		
		case 3:
		cout<<"inserisci 2 numeri interi"<<endl;
		cin>>a;
		cin>>b;
		moltiplicazione=a*b;	
		cout<<"la moltiplicazione e "<<moltiplicazione<<endl;
		break;
		
		
		
		
		case 4:
		cout<<"inserisci 2 numeri interi"<<endl;
		cin>>a;
		cin>>b;
		if(a<b)
		{
			cout<<"inserisci il primo numero maggiore del secondo numero "<<endl;
			cin>>a;
			cin>>b;
			divisione=a/b;
			cout<<"la divisione e "<<divisione<<endl;
		}
		else
		{
			divisione=a/b;
			cout<<"la divisione e "<<divisione<<endl;	
		}
		break;
		
		
		
		
			case 5:
		cout<<"ESCI DAL PROGRAMMA"<<endl;
		break;
		
	}
} while(digita!=5);


	
	
return 0;
	
}
