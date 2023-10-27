#include<iostream>
using namespace std;
int main() {
	int i;
	//ukoliko se zahtjeva od korisnika unos parnog broja
	cout<<"Unesite paran broj."<<endl;
	do{
		cin>>i;
	}
	while(i%2==0);
		return 0;
}
