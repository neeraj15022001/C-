#include<iostream>
#include<climits>
using namespace std;

void Leaders(int* arr,int len) {
  bool isLeader = true;
  for(int i = 0; i < len ; i++) {
    isLeader = true;
    for(int j = i + 1; j < len; j++) {
      if(arr[j] > arr[i]) {
        isLeader = false;
        break;
      }
    }
    if(isLeader)
      cout << arr[i] << " "; 
  }
}

int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];
	
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}
