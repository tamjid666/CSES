#include<iostream>
using namespace std; 

int main()
{
    long n ; cin >> n;
    long temp = n ,sum = 0 ; 
    while(n--)
    {
        sum  += n ; 
    }
    if((sum+temp) %2 == 0)
    {
        cout << "YES" << endl ;
        if(temp%4 == 0)
        {
            cout << temp/2 << endl; 
            for(int i=1; i<=temp; i+=4)
            {
                cout << i << " " << i+3 << " "; 
            }
            cout << endl << temp/2 << endl; 
            for(int i=2; i<=(temp-1); i+=4)
            {
                cout << i << " " << i+1 << " "; 
            }
        }
        else
        {
            cout << (temp+1)/2 << endl ; 
            cout << "1 2 " ; 
            for(int i=5; i<=temp-1; i+=4)
                cout << i << " " << i+1 << " "; 
            cout << endl << (temp-1)/2 << endl ; 
            cout << "3 " ; 
            for(int i=4; i<=temp; i+=4)
                cout << i << " " << i+3 << " " ;  
        }
    } 
    else
        cout << "NO" ; 
    return 0; 
}