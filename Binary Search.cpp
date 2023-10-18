#include <iostream>
using namespace std;

int BinarySearch (int A[],int n,int item)
{
    int l=0;
    int h= n-1;
    int mid = (l+h)/2;

    if ( A[mid] == item)
    {
        return mid;
    }

    else if (item < A[mid])
    {
        h = mid + 1;
    }
    else
    {
        l = mid - 1;
    }

    return -1;
}


int main ()
{
    int n,item;
    cin>>n;

    int A[n];

    for (int i=0; i<n; i++)
    {
        cin>> A[i];
    }
    cin>>item;

    BinarySearch(A,n,item);

    int found = 0;

    for (int i=0; i<n; i++)
    {
        if (A[i] == item)
        {
            cout<< "Found at index: "<< i <<endl;
            found++;
            break;
        }
    }

    if (found == 0)
    {
        cout<< "Not Found" <<endl;
    }


    return 0;
}
