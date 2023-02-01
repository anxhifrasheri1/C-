/*
	Name:resto
	Copyright:colamonico chiarulli 
	Author: anxhelo frasheri
	Date: 05/10/22 08:42
	Description: 
Questo programma, dati in input il prezzo da pagare e la banconota a mia disposizione, mi dice quante e quali monete o banconote dovrò restituire
*/
#include <iostream>
using namespace std;
int main()
{
    float prezzo=0;
	float banconota=0;
	float resto=0;
	int diecic;
	int ventic;
	int cinquantac;
	int une;
	int duee;
	int cinquee;
    cout<<"inserisci il prezzo";
	cin>>prezzo;
	cout<<"inserisci la banconota";
	cin>>banconota;
	if(banconota>resto)
	resto=banconota-prezzo;
        	if(resto>=2){
        		resto=resto-2;
        		duee=duee+1;}
        			if(resto>=2){
        				resto=resto-2;
        				duee=duee+1;}
        			else{
        				if(resto>=1){
        					resto=resto-1;
        					une=une+1;}
        					if(resto>cinquantac){
        						resto=resto-cinquantac;
        						cinquantac=cinquantac+1;}
        						if(resto>ventic){
									resto=resto-ventic;
									ventic=ventic+1;}
									if(resto>diecic)
										{
										resto=resto-diecic;
										diecic=diecic+1;}
							
        					
        					
						}
        				
	 cout<<"il resto e "<<resto;
   
return 0;
    
}

