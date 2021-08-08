// Better Approach by viktorakaps
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void minLengthWord(char input[], char output[]){
	int min=INT_MAX;
    int len=0;
	int i,j=0;
    int st=0;
    int en=0;
    for(i=0;input[i]!='\0';i++){
        if(input[i]==' '){
            len=i-j;
            if(len<min){
                min=len;
                st=j;
                en=i-1;
            }
            j=i+1;
        }
    }
    len=i-j;
    if(len<min){
       min=len;
       st=j;
       en=i-1;
    }
    
    int m=0;
    for(i=st;i<=en;i++){
        output[m]=input[i];
        m++;
    }
}

int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}

