#include<iostream>
using namespace std;

int main() {
	int N;
	
	do {
		cout<<"Inserisci N: ";
		cin>>N;
	}while (N<=0);
	
	int v[N];
	
	for (int i=0;i<N;i++) {
		cout<<"Inserisci un numero: ";
		cin>>v[i];
	}
	
	cout<<"Visualizzo gli elementi!\n";
	for (int i=0;i<N;i++) {
		cout<<v[i]<<'\t';
	}
	
	for (int i=0;i<N;i++) {
		if (v[i]%2==0)
			v[i]*=3;
	}
	
	cout<<"\nVisualizzo gli elementi modificati!\n";
	for (int i=N-1;i>=0;i--) {
		cout<<v[i]<<'\t';
	}

	return 0;
	
}
