#include<iostream>

using namespace std;
bool isEven(int n){
    if(n % 2 == 0){
        return true;
    } else{
        return false;
    }
}
int main(){
    cout<<isEven(31)<<endl;
    return 0;
}