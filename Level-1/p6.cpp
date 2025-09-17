#include<iostream>
using namespace std;
int main(){
    char name='a';
    for(int i=0;i<5;i++){
        for(int j=1;j<=5;j++){
            cout<<name<<" ";
        }
        cout<<endl;
        name+=1;  
    }
    return 0;
}

/*
a a a a a 
b b b b b
c c c c c
d d d d d
e e e e e
*/