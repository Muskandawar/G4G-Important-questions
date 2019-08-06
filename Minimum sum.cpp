#include<iostream>
#include<math.h>
using namespace std;
void sort(int a[],int n)
{
    for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[j]>a[i])
            swap(a[i],a[j]);
    }
}
}
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int N,j,k;
        int d1=0;
        int d2=0;
        int sum=0;
        cin>>N;
        int p=1;
        int q=1;
        int a[N];
        for(j=0;j<N;j++)
        {
            cin>>a[j];
        }
        sort(a,N);
    for(j=0;j<N;j++)
        {
            cout<<a[j]<<" ";
        }
        for(k=0;k<N;k++)
        {
            if(k%2==0)
            {
                d1=d1+a[k]*p;
                p=p*10;

            }
            else
            {
                d2=d2+a[k]*q;
                q=q*10;

            }
        }
        sum=d1+d2;
        cout<<sum;
    }
}
