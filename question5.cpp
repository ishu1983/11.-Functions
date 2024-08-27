#include<iostream>

using namespace std;
char ch(char n){
    if(n == 'Z'){
        return 'A';
    } else{
    return n + 1;
    }
}
int main(){
    cout<<""<<ch('Z')<<endl;
    return 0;
}