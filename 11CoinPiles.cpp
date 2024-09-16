#include<iostream>
using namespace std; 

int main()
{
    long long int t ; cin >> t ; 
    
    while(t--)
    {
        long long int a , b ; cin >> a >> b ; 
        if((a+b)%3==0)
        {
            if(a>(b*2)  || b >(a*2))
                {
                   cout << "NO" << endl;
                }
            else    
                cout << "YES" << endl ; 
        }
        else
            cout << "NO" << endl ; 
    }
    return 0;
}