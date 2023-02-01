#include<iostream>
using namespace std;
int main()
{
int dimensione=0;
int vettore[dimensione];
int scelta;
int i;
int j;
int k;
int q;
int e;
int contatorepari =0;
int contatoredispari=1;
int maggiori=0;


do
{
	cout<<"premi 1, per la lunghezza del vettore. "<<endl;
	cout<<"premi 2, stampa a video il vettore con un ciclo. "<<endl;
	cout<<"premi 3, conta quanti numeri pari ci sono nel vettore e stampa il risultato. "<<endl;
	cout<<"premi 4, conta quanti numeri dispari ci sono nel vettore e stampa il risultato. "<<endl;
	cout<<"premi 5, conta quanti numeri ci sono maggiori di un numero dato in input e stampa il risultato. "<<endl;
	cout<<"premi 6, esca dal programma. "<<endl;	
	
	

	
	cin>>scelta;
	
	switch(scelta)
	{

	case 1:
		cout<<"inserisci il numero della lunghezza: "<<endl;
		cin>>dimensione;
	
	
		for(i=0; i<dimensione; i++)
		{
		cout<<"inserisci elemento: ";	
		cin>>vettore[i];
		}
		break;


	case 2:
		cout<<"stampo il vettore"<<endl;	
		for(j=0; j<dimensione; j++)
		{
		cout<<vettore[j]<<endl;
		}
		break;


	case 3:
		cout<<"stampo i pari"<<endl;	
		for(k=0; k<dimensione; k++)
		{
		if(vettore[k]%2==0)
			{
			contatorepari=contatorepari+1;
			}
		}
		cout<<"i pari sono:"<<contatorepari<<endl;
		break;
	
	
	
	case 4:	
		cout<<"stampo i dispari"<<endl;	
		for(q=0; q<dimensione; q++)
		{
			if(vettore[q]%2==0)
			{
			contatoredispari=contatoredispari=+1;
			}
		}
		cout<<"i dispari sono: "<<contatoredispari<<endl;
		break;

	case 5:
		cout<<"stampo i numeri maggiori"<<endl;	
		for(e=0; e>dimensione; e++)
		{
		maggiori=maggiori+1;
		}
		cout<<"i maggiori sono"<<e<<endl;
		break;
	
	
	case 6:
		return 0;
	break;
	
	
	}

}while(scelta=!6);

return 0;

}
