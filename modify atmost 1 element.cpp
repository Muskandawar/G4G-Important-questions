#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements :- ";
    cin>>n;
    int a[n]
    int i=0,j=0;
    int count=0;
    for(i=0;i<n;i++){
        cout<<"enter elements: ";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
                count++;
    }
    if(count==0 || count==1)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}

