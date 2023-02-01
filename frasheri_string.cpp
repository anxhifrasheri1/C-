#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
	char name[]="";
	int lunghezza=0;
	cout<<"inserisci una parola";
	cin>>name;
	lunghezza=strlen(name);
	if(lunghezza>15)
	cout<<"La stringa e troppo lunga.";
	else
	{
		if(lunghezza<=15 && lunghezza>=7)
		cout<<"La stringa e di media lunghezza.";
		else
		{
			if(lunghezza<7)
			cout<<"La stringa e corta.";
		}
	}
	cout<<"la lunghezza e " <<lunghezza <<endl;
}
