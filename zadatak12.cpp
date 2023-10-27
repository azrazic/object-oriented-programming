#include <iostream>
using namespace std;
int main()
{
    int i,n;
    int suma=0;
    cout << "Unesi n: ";
    cin>>n;
   
    cout << "*****************"<<endl;
    cout << "Prosti brojevi"<<endl;
    cout << "*****************"<<endl;
    bool prost;
    int br=0;
    for (int x=1; x<n; x++)
     {prost=true;
      for (int i=2;i < x && prost==true;i++)
           if (x%i==0) prost=false;
      if (prost==true) cout << "  " << x ;
 {
      if (prost==true) {suma=suma+ x ; br++;}
 }
 }
    cout<<endl;
    cout << "Suma prostih brojeva od 1-"<<n<<" je: "<< suma << endl;
    return 0;
}

