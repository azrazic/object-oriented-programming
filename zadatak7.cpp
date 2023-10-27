#include<iostream>
using namespace std;
int main()
{
	cout<<"Unesite jedan broj."<<endl;
	int i;
	cin>>i;
	if(i<0) {
		cout<<"Uneseni broj je negativan."<<endl;
	}
	else if(i>0){
		cout<<"Uneseni broj je pozitivan."<<endl;
	}
	 else if(i==0)
	 {
		cout<<"Unijeli ste nulu."<<endl;
	 }
	return 0;
}
