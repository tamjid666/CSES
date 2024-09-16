#include<iostream>
using namespace std; 

int main()
{
    long long n ; cin >> n ; 
    long long int divisor = 5 ; 
    int ans = 0 ; 
    while(n>=divisor)
    {
        ans += (n/divisor);
        divisor *=5 ; 
    }
    cout << ans ; 
    return 0; 
}