#include <iostream>
using namespace std;

int main() {
    float n,max,min,s,p,negativo,i;
    i=0;
    p=0;
    n=0;
    s=0;
    do
    {
        cout << "inserisci il numero" <<endl;
        cin >> n;
         if(i=0)
         {
            max=n;
         }
         else
        {
            if (n>max)
             {
                max=n;
             }
             else
             {

             }
        }     
        if(i=0)
        {
            min=n;
        }
        else
        {
            if (n<min)
            {
                min=n;
            }
            else
            {

            }
        }
        if(n>0)
        {
          s=s+0;
          p=p+1;
        }
        else
        {
            n=n+1;
        }
        i=i+1;
        
    }  
    while(n!=0);
    cout << "il numero maggiore è" << max << endl;
    cout << "il numero minore è" << min << endl;
    cout << "sono stati inseriti numeri" << negativo << "numeri negativi" <<endl;
    cout << "la media dei valori positivi è" << s/p <<endl;
}

 




//LEGGERE LE ISTRUZIONI NEL FILE README.md
