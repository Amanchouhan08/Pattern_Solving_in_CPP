#include<iostream>;
using namespace std;
int main(){
   char name='a';
   for(int i=1;i<=5;i++){
       for(int j=0;j<i;j++){
            cout<<name<<" ";
       }
       cout<<endl;
       name+=1;
   }
return 0;
}

/*
a 
b b
c c c
d d d d
e e e e e
*/