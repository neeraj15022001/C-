#include <iostream>
using namespace std;

void swap(int input[], int i, int j) {
    int temp = input[i];
    input[i] = input[j];
    input[j] = temp;
}
void merge(int input[], int start, int mid, int end) {
    int i = start, j = mid+1, k = start;
    while(i <= mid && j <= end) {
        if(input[i] < input[j]) {
            temp[k] = input[i];
            i++;
        } else {
			temp[k] = input[j];
            j++;
        }
        k++;
    }
    while(i <= mid) {
        temp[k] = input[i];
        i++;
        k++;
    }
    while(j <= end) {
        temp[k] = input[j];
        j++;
        k++;
    }
    int size = end-start+1;
    for(i = 0; i < size; i++) {
        input[start+i] = temp[i];
    }
}
void mergeSortHelper(int input[], int start, int end) {
    if(start >= end)
        return;
    int mid = (start+end)/2;
    mergeSortHelper(input, start, mid);
    mergeSortHelper(input, mid+1, end);
    merge(input, start, mid, end);
}
void mergeSort(int input[], int size){
	mergeSortHelper(input, 0 ,size-1);
}


int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}