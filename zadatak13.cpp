#include <iostream>
using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper;
    cout<<"************************"<<endl;
    cout << "Vrijednost1: ";
    cin>>x;
    cout<<"Operacija: ";
    cin>>oper;
    cout<<"Vrijednost2: ";
    cin>>y;
    if(y!=0){
    if( oper=='+')
            result=x+y;
    else if (oper=='-')
            result=x-y;
    else if(oper=='*')
            result=x*y;
    else if(oper=='/')
            result=x/y;
    else if(oper=='^'){
	   double result{1};
for (int i = 0; i < y; ++i){
result*=x;}

    cout<<"Rezultat: "<<result<<endl;
}}
        else
{
cout<<"Unijeli ste nevalidnu operaciju!"<<endl;
}
cout<<"************************"<<endl;

  return 0;
  }  
