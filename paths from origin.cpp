#include <iostream>
using namespace std;
long long int factorial(int p){
    int i;
    long long int fact=1;
    for(i=1;i<=p;i++){
        fact=fact*i;
    }
    return fact;
}
int main() {
	//code
	int T,i,m,n;
    long long int paths=0;
	cin>>T;
	for(i=0;i<T;i++){
	    cin>>n;
	    cin>>m;
	    paths=(factorial(n+m))/(factorial(n)*factorial(m));
	    cout<<paths;
	}
}
