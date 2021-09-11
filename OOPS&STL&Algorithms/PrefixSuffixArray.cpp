void printArray(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void prefixSumArrayImplementation() {
//    Solve multiple queries in O(n)
//  Formulae for A[i,j] = A[j] - A[i-1]
    int arr[] = {6, 3, -2, 4, -1, 0, -5};
    int arrSize = sizeof(arr) / sizeof(int);
    int prefixSumArray[arrSize];
    int query1[] = {0, 0, 2, 3};
    int query2[] = {4, 6, 6, 5};
    int numberOfQueries = sizeof(query1) / sizeof(int);
    for (int i = 0; i < arrSize; ++i) {
        if (i == 0) {
            prefixSumArray[i] = arr[i];
        } else {
            prefixSumArray[i] = prefixSumArray[i - 1] + arr[i];
        }
    }
    printArray(prefixSumArray, arrSize);
    for (int i = 0; i < numberOfQueries; ++i) {
        int j = query1[i];
        int k = query2[i];
        int ans = -1;
        if (j != 0)
            ans = prefixSumArray[k] - prefixSumArray[j - 1];
        else
            ans = prefixSumArray[k];
        cout << ans << endl;
    }

}