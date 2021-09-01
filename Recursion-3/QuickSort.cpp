#include<iostream>
using namespace std;

void swap(int input[], int i, int j) {
  int temp = input[i];
  input[i] = input[j];
  input[j] = temp;
}
int partition(int input[], int start, int end) {
  int count = 0;
  int partitionElement = input[start];
  for(int i = start + 1; i <= end; i++) {
    if(input[i] < partitionElement)
      count++;
  }
  int partitionIndex = start + count;
  swap(input, start, partitionIndex);
  int i = start,j = end;
  while(i < partitionIndex && j > partitionIndex) {
      if(input[i] <= partitionElement) {
          i++;
      }
      else if(input[j] >= partitionElement) {
          j--;
      }
      else {
          swap(input, i, j);
          i++;
          j--;
      }
  }
  return partitionIndex;
}
void quickSort(int input[], int start, int end) {
  if(start >= end)
    return;
  int partitionIndex = partition(input, start, end);
  quickSort(input, start, partitionIndex);
  quickSort(input, partitionIndex + 1, end);
}
void quickSort(int input[], int size) {
  quickSort(input, 0, size - 1);
}
int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


