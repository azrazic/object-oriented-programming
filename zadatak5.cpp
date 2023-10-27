#include <iostream>
using namespace std;
int main()
{
  char c;
  cout << "Unesite karakter: ";
  cin >> c;
  if(c >= 'A' && c <= 'Z')
 cout  << "Unijeli ste veliko slovo."<<endl;
 else if(c >= 'a' && c <= 'z')
 cout<<"Unijeli ste malo slovo."<<endl;
 else if(c >= '0' && c <= '9')
 cout << "Unijeli ste cifru."<<endl;
 else cout << "Unijeli ste neki drugi karakter."<<endl;
 return 0;
}
