#include<iostream>

using namespace std;
int sum(int a, int b ){
    int sum = a+b;
    return sum;
}
int diff(int a, int b){
    int diff = a-b;
    return diff;
}
int main(){
    // int s =  sum(2, 5);
    // cout<<"sum = "<<s<<endl;
    int d  = diff(5, 3);
    cout<<"difference = "<<d<<endl;
    return 0;
}