/*
	Name: cerchio
	Copyright: colamonico chiarulli
	Author: anxhelo frasheri
	Date: 30/09/22 11:44
	Description: Data in input la misura del raggio, dare in output la circonferenza e l’area del cerchio.
*/
#include<iostream>
using namespace std;
int main()
{
	int raggio;
	float circonferenza;
	float area;
	cout<<"inserisci il raggio ";
	cin>>raggio;
	circonferenza=2*3.14*raggio;
	area=raggio*raggio*3.14;
	cout<<"il risultato della circonferenza e\' "<<circonferenza<<endl;
	cout<<"il risultato dell'area e\' "<<area;
	return 0;
}
