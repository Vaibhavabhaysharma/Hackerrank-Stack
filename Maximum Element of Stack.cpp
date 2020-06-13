#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int max(long int y, long int x)
{
    return (y >= x ? y : x);
}

int main()
{
    int n,type,top=-1;
    long int stack[100000],x;
    cin>>n;
    while(n--)
    {
        cin>>type;
        if(type==1)
        {
            cin>>x;
            if(top==-1) 
                stack[++top]=x;
            else
                {stack[top+1]=max(stack[top],x);
                ++top;
                }
        }
        if(type==2)
            --top;
        if(type==3)
            cout<<stack[top]<<endl;
    }
        return 0;
}
