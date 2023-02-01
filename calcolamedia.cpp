#include <iostream>
using namespace std;
void cmedia(int a, int b)
{
	double media;
	double tot;
	media=(a+b)/2;
	tot=media+10;
	cout<<"la media e: "<<tot<<endl;
}
int main()
{
	
	double a;
	double b;
	
	
	cout<<"inserisci il primo valore"<<endl;
	cin>>a;
	cout<<"inserisci il secondo valore"<<endl;
	cin>>b;
	
	cmedia(a,b);
	return 0;
}
