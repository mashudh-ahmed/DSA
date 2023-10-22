#include <iostream>
using namespace std;

void countSort(int A[], int n) {

  int output[10];
  int count[10];
  int max = A[0];

  for (int i = 1; i < n; i++) {
    if (A[i] > max)
      max = A[i];
  }


  for (int i = 0; i <= max; ++i)
    {
    count[i] = 0;
    }


  for (int i = 0; i < n; i++)
    {
    count[A[i]]++;
    }

  for (int i = 1; i <= max; i++)
    {
    count[i] += count[i-1];
    }


  for (int i = n - 1; i >= 0; i--)
    {
    output[count[A[i]] - 1] = A[i];
    count[A[i]]--;
    }


  for (int i=0 ; i<n; i++)
    {
      A[i] = output[i];
    }
}


void printArray(int array[], int n) {
  for (int i = 0; i < n; i++)
    cout << array[i] << " ";
  cout << endl;
}


int main() {

    int n;
    cin>>n;

    int A[n];

  for (int i=0; i<n; i++)
  {
      cin>> A[i];
  }

  countSort(A, n);
  printArray(A, n);
}
