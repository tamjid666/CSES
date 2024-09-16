#include<iostream>
using namespace std; 

int main()
{
    long long int size , move = 0 ; cin >> size ; 
    
    long long arr[size] ; 
    for(int i=0; i<size; i++)
    {
        cin >> arr[i] ; 
    }

    for(int i=0; i<size-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            move += (arr[i] - arr[i+1]) ;
            arr[i+1] = arr[i] ; 
        }
    }
    cout << move ;
    return 0; 
}