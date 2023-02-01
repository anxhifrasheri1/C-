#include <iostream>
using namespace std;
int main()
{
int N=0;
int input=0;
int i=0;
int vettore[i];
do
{
	
	switch(input)
	{
		case 1:
		cout<<"inserisci il vettore : "; 
		cin>>N;
		for(i=0;i<N;i++)
		{
			cout<<"inserire il numero"<<i<<":";
			cin>>vettore[i];
		}
	

	break;
	
	
		case 2:
		for(i=0;i<N;i++)
		{
			cout<<"l'elemento del vettore'"<<i<<"e\':"<<endl<<vettore[i]<<endl;	
		}
		break;
		
		case 3:
		for(i=0;i>N;i++)
		{
			cout<<"l'elemento del vettore'"<<i<<"e\':"<<endl<<vettore[i]<<endl;	
		}
		break;
		
		
		case 4:
		input=4;
		break;
}}
while(input==4);

return 0;

}


