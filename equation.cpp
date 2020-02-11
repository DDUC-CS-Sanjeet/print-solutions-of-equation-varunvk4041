#include<iostream>
using namespace std;
int combi(int n,int r)
{
    if(r==0)
    return 1;

    else
    return ((n*1.0)/r)*combi(n-1,r-1);
}
void display(int ar[],int n)
{
    for(int i=0; i<n; i++)
    cout<<ar[i]<<" ";

    cout<<endl;
}
void equation(int comb,const int n,const int c)
{
    int num=1,sum,temp,arr[n],i;
    while(comb>0)
    {
        temp=num;
        sum=0;
        i=n-1;
        while(temp!=0)
        {
            sum+=arr[i--]=temp%10;
            temp/=10;
        }
        while(i>=0)
        {
            arr[i--]=0;
        }
        if(sum==c)
        {
            display(arr,n);
            comb--;
        }
        num++;
    }
}
int main()
{
    int n,c,i=0;
    cout<<"Enter value of n and C: ";
    cin>>n>>c;
    equation(combi(n+c-1,n-1),n,c);
    return 0; 
}