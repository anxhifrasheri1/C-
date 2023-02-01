#include <iostream>
using namespace std;
int main()
{
	int alunni;
	int i;
	int vsuff=0;
	int vinsuff=0;
	bool v=false;
	int vet[i];
	
	
	
	cout<<"quanti sono gli alunni della classe: ";
	cin>>alunni;
	
	cout<<"inserisci i voti della verifica"<<endl;
	for(i=0;i<alunni;i++)
	{
		cin>>vet[i];	
		
	if(vet[i]>=6)
	{
		vsuff=vsuff+1;		
	}
	else
	{
		vinsuff=vinsuff+1;
	}
	}
	

	cout<<"i voti insufficienti sono: "<<vinsuff<<endl;
	cout<<"i voti sufficienti sono: "<<vsuff<<endl;
	
	
	if(vinsuff>vsuff)
	{
		v=true;
		cout<<"la maggiore parte degli alunni ha preso un buon voto e sono "<<vsuff;
	}
	else
	{
		v=false;
		cout<<"la maggior parte degli alunni non ha preso un buon voto e sono"<<vinsuff;
	}
	
	
	return 0;

}
