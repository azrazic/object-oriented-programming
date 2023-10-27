#include <iostream>
using namespace std;
 
int main()
{
    int suma=0,n;
    cout<<"Do broja: ";
    cin>>n;
     
    for(int i=1;i<=n;++i)
        suma+=i;
    cout<<"Suma: "<<suma<<endl;
}
