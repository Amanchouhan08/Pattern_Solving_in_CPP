#include<iostream>;
using namespace std;
int main(){
    char name='A';
 for(int i=1;i<=5;i++){
    for(int j=1;j<=5-i;j++){
        cout<<" ";
    }
    for(int k=0;k<i;k++){
       cout<<char(name+k);
    }
    cout<<endl;
 }
 return 0;
}

/*
    A
   AB
  ABC
 ABCD
ABCDE
*/