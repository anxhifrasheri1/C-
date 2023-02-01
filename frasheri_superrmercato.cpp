#include <iostream>
using namespace std;
int main ()
{
	float prezzo=0.0;
	int pezzi=0.0;
	float sconto=0.0;
	cout<<"inserisci il prezzo del prodotto";
	cin>>prezzo;
	cout<<"insersci i pezzi da comprare";
	cin>>pezzi;
	if(pezzi==2)
	sconto=(prezzo*2)/100*20;
	else
	{
		if(pezzi==3)
		sconto=(prezzo*3)/100*30;
		else
		{
			if(pezzi>=4)
			sconto=(prezzo*pezzi)/100*40;
			else
			{
				if(pezzi==1)
				cout<<"non ci sta nessuno sconto";
			}
		}
	}
	cout<<"lo sconto e " <<sconto <<endl;
	return 0;
}
