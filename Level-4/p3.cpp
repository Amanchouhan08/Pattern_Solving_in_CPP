#include<iostream>;
using namespace std;
int main(){
    int i,j,k,l,m,n,o,p,q,r;
 for(i=1;i<5;i++){
    for(j=5;j>i;j--){
        cout<<"*";
    }
    for(k=1;k<i;k++){
        cout<<" ";
    }
    for(l=1;l<i;l++){
        cout<<" ";
    }
    for(m=5;m>i;m--){
        cout<<"*";
    }
    cout<<endl;
 }
 for(n=1;n<5;n++){
    for(o=1;o<=n;o++){
        cout<<"*";
    }
    for(p=3;p>n-1;p--){
        cout<<" ";
    }
    for(p=3;p>n-1;p--){
        cout<<" ";
    }
    for(r=1;r<n+1;r++){
       cout<<"*";
    }

    cout<<endl;
 }
 return 0;
}

/*
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********
*/