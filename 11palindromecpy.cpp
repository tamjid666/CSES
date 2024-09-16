#include<iostream>
using namespace std; 

string solve(string s)
{
    int N = s.length(); 
    string ans(N,' ');

    int freq[26] = {}; 
    for(int i=0; i<N; i++)
        freq[s[i] - 'A'] ++ ;

    int count = 0; 
    for(int i=0; i<26; i++)
        if(freq[i]%2 != 0)
            count++;
    
    if(count > 1)
        return "No solution ";

    int left = 0 , right = N-1 ; 
    for(int i=0; i<N; i++)
    {
        if(freq[s[i]-'A'] %2 == 1)
        {
            ans[N/2] = s[i] ; 
            freq[s[i] - 'A']--;
        }
        while(freq[s[i]-'A'] > 0)
        {
            ans[left++] = ans[right--] = s[i] ; 
            freq[s[i]-'A'] -= 2; 
        }
    }
    return ans ; 
}

int main()
{
    string s ; cin >> s ; 
    cout << solve(s) << endl; 
    return 0; 
}