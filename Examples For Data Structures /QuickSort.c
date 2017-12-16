// quickSort.c
#include <stdio.h>

void quickSort( int[], int, int);
int partition( int[], int, int);

void main()
{
    int a[] = { 7, 12, 1, -2, 0, 15, 4, 11, 9};

    int i;
    printf("\n\nUnsorted array is:  ");
    for(i = 0; i < 9; ++i)
        printf(" %d ", a[i]);

    quickSort( a, 0, 8);

    printf("\n\nSorted array is:  ");
    for(i = 0; i < 9; ++i)
        printf(" %d ", a[i]);

}

void quickSort( int a[], int p, int r)
{
    int q;

    if( p < r )
    {
        // divide and conquer
        q = partition( a, p, r);
        quickSort( a, p, q-1);
        quickSort( a, q+1, r);
    }

}

int partition( int a[], int p, int r) {
    int pivot, i, q, t;
    pivot = a[p];
    i = p; q = r+1;

    while( 1)
    {
        do ++i; while( a[i] <= pivot && i <= r );
        do --q; while( a[q] > pivot );
        if( i >= q ) break;
        t = a[i]; a[i] = a[q]; a[q] = t;
    }
    t = a[p]; a[p] = a[q]; a[q] = t;
    return q;
}