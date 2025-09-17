#include<iostream>
using namespace std;
int main(){
    int c=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<c;
        }
        cout<<endl;
        c=c+1;
    }
    return 0;
}

/*
11111
22222
33333
44444
55555
*/