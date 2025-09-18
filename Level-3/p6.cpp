#include<iostream>;
using namespace std;
int main(){
    int k;
 for(int i=1;i<=5;i++){
    for(int j=1;j<=5-i;j++){
        cout<<" ";
    }
    for(k=1;k<=i;k++){
            cout<<"*";
    }
    for(int l=2;l<k;l++){
        cout<<"*";
    }
    cout<<endl;
 }
 return 0;
}

/*
    *
   ***
  *****
 *******
*********
*/