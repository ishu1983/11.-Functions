#include<iostream>

using namespace std;
int absquare(int a, int b){
    return a*a + b*b + 2*a*b;
}
int main(){
    cout<<""<<absquare(2, 5)<<endl;
    return 0;
}