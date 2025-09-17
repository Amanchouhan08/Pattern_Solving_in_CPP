#include<iostream>;
using namespace std;
int main(){
 for(int i=5;i>0;i--){
    for(int j=5;j>i-1;j--){
        cout<<j<<" ";
    }
    cout<<endl;
 }
 return 0;
}

/*
5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1 
*/