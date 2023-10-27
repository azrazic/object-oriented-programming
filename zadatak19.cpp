#include<iostream>
#include<string>
using namespace std;
int main()
{
std::string rijec;
cout<<"Unesite rijec: ";
cin>>rijec;

std::string malaslova;
std::string velikaslova;
std::string cifra;
std::string ostalo;
for(int i=0;i<rijec.size();i++)
{
int c = rijec[i];
if(c >= 'a' && c <= 'z'){

malaslova+=rijec.at(i);
}
else if(c >= 'A' && c <= 'Z') {
        
velikaslova+=rijec.at(i);
}

else if(c >= '0' && c <= '9')
{
cifra+=rijec.at(i);

}
else{ 
ostalo+=rijec.at(i);
}}
cout<<"Mala slova: "<<malaslova<<endl;
cout<<"Velika slova: "<<velikaslova<<endl;
cout<<"Cifre: "<<cifra<<endl;
cout<<"Ostali karakteri: "<<ostalo<<endl;

return 0;
}

