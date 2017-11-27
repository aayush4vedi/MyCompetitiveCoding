#include <bits/stdc++.h>
using namespace std;

int check(int a[3], int b[3])
{
    int sum = 0, flag = -1;
    for(int i = 0; i<3; i++)
    {
        if(a[i]>=b[i])
            sum = sum + (a[i] - b[i]);
        else
            flag = 0;
    }
    if((sum > 0) && (flag == -1))
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int a[3], b[3], c[3], i, j, flag = -1;



            cin>>a[0]>>a[1]>>a[2];
            cin>>b[0]>>b[1]>>b[2];
            cin>>c[0]>>c[1]>>c[2];

        if(check(a, b))
            if(check(b, c))
                flag = 1;
            else
                if(check(c, b) &&check(a, c))
                    flag = 1;

        if(check(b, c))
            if(check(c, a))
                flag = 1;
            else
                if(check(a, c) && check(b, a))
                    flag = 1;

        if(check(c, a))
            if(check(a, b))
                flag = 1;
            else
                if(check(b, a) && check(c, b))
                    flag = 1;

        if(flag == -1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;

            t--;
    }

    return 0;
}
