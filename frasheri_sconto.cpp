/*
	Name: sconto
	Copyright: colamonico chiarulli
	Author: anxhelo frasheri
	Date: 03/10/22 11:34
	Description: Dati in input il prezzo di un prodotto e la percentuale di sconto, dare in output il prezzo scontato
*/
#include <iostream>
using namespace std;
int main()
{
	int prezzo;
	int sconto;
	int prezzscont;
	cout<<"inserisci il prezzo ";
	cin>>prezzo
	cout<<"inserisci sconto";
	cin>>sconto;
	prezzscont=prezzo*sconto/100;
	cout<<"il prezzo scontato e'\ "<<prezzscont;
	return 0;
}
