#include <iostream>
using namespace std;
void leftRotate(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n-1; i++)
        arr[i] = arr[i + 1];

    arr[i] = temp;
}

int main() {
int T,i,j,k,l;
    cout<<"enter value of T: ";
    cin>>T;
    for(i=0;i<T;i++){
        int N,d;
        cout<<"enter value of N: ";
        cin>>N;
        cout<<"enter value of d: ";
        cin>>d;
        int a[N];
        int b[N];
        for(j=0;j<N;j++)
        {   cout<<"enter value: ";
            cin>>a[j];
        }
        for(k=0;k<d;k++)
        {
            leftRotate(a,N);
        }
        for(l=0;l<N;l++)
        {
            cout<<a[l]<<" ";
        }
        cout<<endl;
}
}

