// #include<stdio.h>
// #include <stdlib.h>
// #define NUM_ROWS 3
// #define NUM_COLS 2
// int arr2D[NUM_ROWS][NUM_COLS];
// int ** arr2D = (int **) malloc(NUM_ROWS*sizeof(int*));
// for (int i=0; i<NUM_ROWS; i++)
// {
// arr2D[i] = (int*) malloc(NUM_COLS*sizeof(int));
// }
// arr2D[1][2] = 10; // is a valid assignmen;
#include <stdio.h>
#include <stdlib.h>

void copy(int * a, int n, int * c)
{
c = (int*) malloc(sizeof(int)*n);

for (int i=0; i<n; i++)

{
c[i]=a[i];

}
}
int main(){

int a[5] = {1,2,3,4,5};

int * b;
copy(a,5,b);

for(int i=0;i<5;i++){
printf("%d\t",b[i]);

}
return 0;
}