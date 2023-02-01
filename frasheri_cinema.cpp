/*
	Name: cinema
	Copyright: colamonico chiarulli
	Author: anxhelo frahseri
	Date: 19/10/22 09:54
	Description: 
*/
#include <iostream>
using namespace std;
int main()
{
	float prezzo=10.0, sconto=0.0;
	int eta=0, sesso=0;
	cout<<"quanti anni hai";
	cin>>eta;
	cout<<"che sesso sei(se sei maschio inserisci 0 se sei femmina inerisci 1)";
	cin>>sesso;
	if(eta<=18)
	{
		sconto=prezzo*15/100;
	} 
	else
	{
		if(eta>=19 && eta<=64)
		prezzo=prezzo
	}
	else
	{
		if(eta>65)
			if(sesso==0)
			sconto=prezzo*20/100
		
	}
	else 
	{
		sconto=prezzo*25/100
	}
	cout<<"lo sconto e " <<sconto <<endl;
	return 0;
	
	
	
}
