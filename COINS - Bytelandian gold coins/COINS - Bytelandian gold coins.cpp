#include <bits/stdc++.h>
using namespace std;

map<int, long long> Dp;

long long int DP(long long int N)
{
    if(N == 0)
        return 0;
    if(N == 1)
        return 1;
    if(Dp[N] != 0)
    {
        return Dp[N];
    }
    else
        return Dp[N]=max(N,(DP(N/2) + DP(N/3) + DP(N/4)));
}

int main()
{
    long long int N;
    while(scanf("%d",&N) != EOF)
    {
        cout << DP(N) << endl;
    }

    return 0;
}
