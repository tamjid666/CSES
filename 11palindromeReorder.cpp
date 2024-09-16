#include<iostream>
using namespace std; 

string solution(string s)
{
    int size = s.length(); 
    string ans(size,' ');

    int freq[26]  = {}; 
    for(int i=0; i<size;  i++)
    {
        freq[s[i]-'A']++;
    }

    int odd=0 ; 
    for(int i=0; i<26; i++)
    {
        if(freq[i]%2 != 0)
            odd++;
    }
    if(odd>1)
        return "NO SOLUTION"; 
    
    int left = 0 , right = size - 1; 
    for(int i=0; i<size; i++)
    {
        if(freq[s[i]-'A']%2 == 1)
        {
            ans[size/2] = s[i]; 
            freq[s[i]-'A']--; 
        }
        while(freq[s[i]-'A']>0)
        {
            ans[left++] = ans[right--] = s[i]; 
            freq[s[i]-'A'] -= 2 ; 
        }
    }
    return ans ; 
}
int main()
{
    string s ; cin >> s ; 
    cout << solution(s) << endl; 
    return 0;
}