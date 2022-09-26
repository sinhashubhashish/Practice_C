// "linearsearch.c"
#include "search.h"
// this function searches for ele in arr and returns its position (index +1) or returns -1 if not found
int search(int arr[], int size, int ele)
{
for(int i=0;i < size; i++)
{
if(arr[i]==ele)
{
return i+1;
}
}
return -1;
}
// "linearsearchR2L.c"
// this function searches for ele in arr from right to left
int searchR2L(int arr[], int size, int ele)
{
for(int i=size-1; i >= 0; i--)
{
if(arr[i]==ele)
{
return size - (i);
}
}
return -1;
}