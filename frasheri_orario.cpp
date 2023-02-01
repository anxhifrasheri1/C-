/*
	Name: orario
	Copyright: colamonico chiarulli
	Author: anxhelo frasheri
	Date: 30/09/22 12:08
	Description: Dato in input un orario (come ore e minuti), dare in output il valore totale in minuti.
*/
#include <iostream>
using namespace std;
int main()
{
	int ore=0;
	int min=0;
	int tot=0;
	int oremin=0;
	cout<<"inserisci le ore";
	cin>>ore;
	cout<<"inserisci i minuti";
	cin>>min;
	oremin=ore*60;
	tot=oremin+min;
	cout<<"i minuti totali del ora sono"<<tot<<endl;
	return 0;
}
