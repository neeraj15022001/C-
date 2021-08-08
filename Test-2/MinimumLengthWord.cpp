// Brute Force
#include<iostream>
#include<cstring>
using namespace std;

void minLengthWord(char input[], char output[]){
  char ch[10000];
  int i = 0, k = 0, min = 100000, lengthOfString = 0;
  while(input[i] != '\0') {
    if(input[i] == ' ') {
      ch[k] = '\0';
      lengthOfString = strlen(ch);
      // for(int n = 0; n < lengthOfString; n++)
        // cout << (int)ch[n] << " ";
      // cout << endl;
      if(lengthOfString < min) {
        min = lengthOfString;
        int j = 0;
        for(j = 0; j < lengthOfString; j++) {
          output[j] = ch[j];
        }
        output[j] = '\0';
      }
      k = 0;
      i++;
    }
    ch[k++] = input[i++];
  }
  ch[k] = '\0';
  // int m = 0;
  // while(ch[m] != '\0')
    // cout << ch[m++];
  lengthOfString = strlen(ch);
  // cout << lengthOfString << endl;
  if(lengthOfString < min) {
        min = lengthOfString;
        int j = 0;
        for(j = 0; j < lengthOfString; j++) {
          output[j] = ch[j];
        }
        output[j] = '\0';
  }
  // cout << "min: " << min << endl;
  // for(int j = 0; j < min; j++) {
    // cout << output[j];

}


int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}