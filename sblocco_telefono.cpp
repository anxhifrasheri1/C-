/*
	Name: sblocco cellulare
	Copyright: 
	Author: anxhelo frasheri
	Date: 29/11/22 13:34
	Description: Il programma legge 4 cifre inserite dall’utente e le imposta come pin.
	Il programma successivamente chiede di reinserire il pin, se viene inserito quello 
	corretto scrive “telefono sbloccato”, altrimenti lo richiede e al terzo tentativo 
	errato visualizza il messaggio “telefono bloccato”
*/
#include <iostream>
using namespace std;
int main()
{
	char password[4];
	char pin[4];
	int scelta=0;
	
	
	cout<<"Gentile utente,"<<endl;
	cout<<"se premi 1, imposti la password per la prima volta e accedi con la password stabilita sbloccando il dispositivo"<<endl;
	cout<<"se premi 2, imposti una nuova password al dispositivo"<<endl;
	cin>>scelta;

	switch(scelta)
	{
		case 1:
		cout<<"impostare la password di 4 cifre: ";
		cin>>password;
		
		
		do
		{

			cout<<"conferma la password ";
			cin>>password;
			
			if(pin!=password) 
			{cout<<"pin sbagliato"<<endl;}
			else 
			{cout<<"telefono sbloccato"<<endl;
						}			
		}while (password==pin);
		
		break;
		
		
		case 2:
		cout<<"imposta la nuova password al dispostivo: ";
		cin>>password;	
		
		
		do
		{
			cout<<"conferma la password ";
			cin>>password;
			
			if(password!=pin)
			cout<<"password errata"<<endl;	
			
		}while (password==pin);
		cout<<"telefono sbloccato"<<endl;
		
		break;	
	}

return 0;
	
	
	
}
