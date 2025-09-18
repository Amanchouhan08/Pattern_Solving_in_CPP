#include<iostream>;
using namespace std;
int main(){
    int i,j,k,l;
 for(i=0;i<5;i++){
    for(j=1;j<=i;j++){
        cout<<" ";
    }
    for(k=5;k>i;k--){
      cout<<"*";
    }
    for(l=4;l>i;l--){
        cout<<"*";
    }
    cout<<endl;
 }
 return 0;
}

/*
*********
 *******
  *****
   ***
    *
*/