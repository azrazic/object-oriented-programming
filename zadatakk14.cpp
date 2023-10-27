#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
        int i=0,j=0;
    for(int i=1; i<=10; i++)
    {
            cout<<"\n";
            for(int j=1; j<=10; j++)
            {
            cout<<setw(4) <<i*j;
            }}
    cout<<"\n";
            return 0;
}
