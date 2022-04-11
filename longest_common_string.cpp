// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

string longestCommonPrefix(string a[], int n)
{
    sort(a, a + n);
    string s = a[0];
    string t = a[n - 1];

    if (s[0] != t[0])
    {
        return "-1";
    }

    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            break;
        }
        else
        {
            ans += s[i];
        }
    }

    return ans;
}