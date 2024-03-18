//
//  BubbleSort.h
//  DSA&ALGO
//
//  Created by suraj kumar on 15/03/24.
//

#ifndef BubbleSort_h
#define BubbleSort_h

void displayII(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void Bubble(int A[],int n)
{
    int i,j,flag=0;
    
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    displayII(A, n);
}





void bubbleSortMain() {
    int arr[] = {8, 5, 7, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
}


#endif /* BubbleSort_h */
