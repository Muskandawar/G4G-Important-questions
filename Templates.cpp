#include<iostream>
using namespace std;
template<class T>
class Arithmatic{
private:
    T a;
    T b;
public:
    Arithmatic(T a,T b);
    T add();
    T subtract();
};
template<class T>
Arithmatic<T>::Arithmatic(T a,T b){
    this->a=a;
    this->b=b;
}
template<class T>
T Arithmatic<T>::add(){
    T c;
    c=a+b;
    return c;
}
template<class T>
T Arithmatic<T>::subtract(){
    T c;
    c=a-b;
    return c;
}
int main(){
    Arithmatic<int> ar(10,5);
    cout<<ar.add();
    cout<<endl;
    Arithmatic<float>ar1(4.3,2.1);
    cout<<ar1.add();

}
