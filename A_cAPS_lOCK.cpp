#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve()
{
    int cap = 0;
    string s;
    cin >> s;
    if (s.length() == 1)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (islower(s[i]))
            {
                s[i] = toupper(s[i]);
            }
        }
    }
    else
    {
        for (int i = 1; i < s.length(); i++)
        {
            if(isupper(s[i])){
                cap++;
            }
        }
        if(cap==(s.length()-1)){
            for (int i = 0; i < s.length(); i++)
            {
                if(isupper(s[i])){
                    s[i]=tolower(s[i]);
                }
                else{
                    s[i]=toupper(s[i]);
                }
            }
        }
    }
    cout<<s;
}

int main()
{
    fast_io;
    solve();
    return 0;
}