#include<iostream>
using namespace std;
int main()
{
	int broj;
	cout<<"Unesite broj:";
	cin>>broj;
	int suma=1;
	for(int i=1; i<=broj; i++)
	{
		suma=suma*i;
	}
	cout<<"Faktorijel broja " <<broj<< " je "<<suma<<endl;
	return 0;
}
