#include<iostream>
using namespace std;
int main(){
    char name='a';
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<char(name+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
a b c d e 
a b c d e 
a b c d e 
a b c d e 
a b c d e 
*/