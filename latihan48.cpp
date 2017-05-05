#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int bil,i,j,n,batasj;
    batasj=5;
    n=9;
    i=1;
    while(i<=6)
    {
        bil=n;
        j=1;
        while(j<=batasj)
        {
            cout << bil << " " ;
            bil=bil-2;
            j=j+1;
        }
    cout << "\n" ;
    n=n-2;
    batasj=batasj-1;
    i=i+1;
    }
getche();
}
