#include <stdio.h>

long long int power(long long int a, long long int b)
{
    long long int backup,c;
    backup = a;

    for(c=1; c<b; c++)
    {
        a *= backup;
    }

    return a;

}

int main()
{
    long long int T,X=0,i,Arr[99999],Change=0;
    double N,Sum;
    scanf("%lld",&T);

    while(T--){

        scanf("%lf",&N);
        Sum = 0;
        i=1;
        while(1)
        {
            X = power(5,i);

            if(X > N)
            {
                goto end;
            }

            Arr[i-1] = N/X;
            Sum += Arr[i-1];

            i++;
        }

        end:
        Change = (int)Sum;
        printf("%lld\n",Change);

    }


    return 0;

}
