#include <bits/stdc++.h>
using namespace std;

long long int dp[5100];
string str;

long long int Result(int n)
{
    if(str[n-1] == '\0')
    {
        return dp[n-1];
    }

    if(((str[n-2]-48) * 10 + str[n-1]-48) <= 26)
    {
        dp[n] = dp[n-2] + dp[n-1];
    }

    else
    {
        dp[n] = dp[n-1];
    }

    Result(n+1);
}

int main()
{
    dp[0] = 1, dp[1] = 1;


    while(1)
    {
        cin >> str;
        if(str[0] == '0')
            break;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == '0')
                str[i] = '9';
            if(str[i+1] == '0')
            {
                str[i] = '9';
                if(i != 0)
                    str[i-1] = '2';
            }
        }

        cout << Result(2) << endl;
    }

    return 0;
}
