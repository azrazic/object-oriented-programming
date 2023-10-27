#include<iostream>
using namespace std;
int main()
{
	cout<<"Unesite jedan broj."<<endl;
	int i;
	do {
        cin>>i;	
		if (i%2==0)
			cout<<"Broj je paran."<<endl;
		else cout<<"Broj je neparan."<<endl;
	} 
	while(i>0);
	return 0;
}

