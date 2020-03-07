//
// Created by alexd on 04.03.2020.
//
#include <iostream>
#include <ctime>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}
int main()
{
    srand(time(0));
    cout << "RAND_MAX = " << RAND_MAX << endl;
    int num; // размер массива
    //  cout << "Enter integer value: ";
    num = 100000; // получение от пользователя размера массива
    //int arr[6] = {4,2,1,3,6,5};
   // int s = 0;
  //  int e = 6;
  //  mergeSort(arr, s, e);



    int* p_darr = new int[num]; // Выделение памяти для массива
    for (int i = 0; i < num; i++)
    {
        // Заполнение массива и вывод значений его элементов
        p_darr[i] = rand();

    }
    mergeSort(p_darr, 0,num-1);

    delete[] p_darr;
    cout << "runtime = " << clock() / 1000.0 << endl;
    return 0;
}



