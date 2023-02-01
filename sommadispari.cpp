#include <iostream>
using namespace std;
int main()
{
	int num=0;
    int somma=0;
    
    cout<<"inserisci il numero";
    cin>>num;

    if(num%2==0)
    	num=num-1;
	while(num>0)
	{
		somma=somma+num;
		num=num-2;
	}

	cout<<"la somma di tutti i numeri minori o uguali dispari di num e'\ "<<somma;

return 0;

}
