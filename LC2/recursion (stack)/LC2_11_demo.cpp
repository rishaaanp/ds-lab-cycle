#include "LC2_11.cpp"

int main() {
    int intArr[] = {17, 67, 4, 5, 16, 17};
    MergeSort<int>::mergeSort(intArr, sizeof(intArr) / sizeof(int));

    cout << "Sorted integer array: ";
    for (int i = 0; i < sizeof(intArr) / sizeof(int); i++)
        cout << intArr[i] << " ";
    cout << endl;
    double doubleArr[] = {3.14, 1.618, 2.718, 0.577};
    MergeSort<double>::mergeSort(doubleArr, sizeof(doubleArr) / sizeof(double));
    cout << "Sorted double array: ";
    for (int i = 0; i < sizeof(doubleArr) / sizeof(double); i++)
        cout << doubleArr[i] << " ";
    cout << endl;
    return 0;
}