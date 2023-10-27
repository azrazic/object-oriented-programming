#include<iostream>
using namespace std;
int main() 
{
std::string rijec;
cout<<"Unesi rijec."<<endl;
cin>>rijec;
std::string obrnuto;
for(int i=rijec.size()-1 ; i>=0; --i) {
	obrnuto+=rijec[i];
}
if(obrnuto==rijec) {
	cout<<"Rijec je palindrom."<<endl;
}
else {
	cout<<"Rijec nije palindrom.";
}
return 0;
}
