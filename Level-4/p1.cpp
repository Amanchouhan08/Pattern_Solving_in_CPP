#include<iostream>;
using namespace std;
int main(){
    int i,j,k,l;
 for(i=1;i<=5;i++){
    for(k=1;k<=5-i;k++){
        cout<<" ";
    }
    for(l=1;l<=i;l++){
        cout<<l;
    }
    for(j=i-1;j>0;j--){
        cout<<j;
    }
    cout<<endl;
 }
 return 0;
}

/*
    1
   121
  12321
 1234321
123454321
*/