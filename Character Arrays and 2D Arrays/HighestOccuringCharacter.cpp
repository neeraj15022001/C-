#include <iostream>
#include <cstring>
using namespace std;
char highestOccurringChar(char str[]) {
  int alphabetMap[26];
  int i = 0;
  int diff = 97;
  for(int i = 0; i < 26; i++) {
    alphabetMap[i] = 0;
  }
  while(str[i] != '\0') {
    int characterIndex = str[i] - diff;
    alphabetMap[characterIndex]++;
    i++;
  }
  int maxIndex = 0, maxValue = 0;
  for(int i = 0; i < 26; i++) {
    if(alphabetMap[i] > maxValue) {
      // cout << "alphabetMap[i]:" << alphabetMap[i] << " i:" << i << " maxIndex:" << maxIndex << endl;
      maxValue = alphabetMap[i];
      maxIndex = i;
    }
  }
  char highestOccuringAlphabet = maxIndex+diff;
  return highestOccuringAlphabet;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}