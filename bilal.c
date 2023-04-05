
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
  #define clocks 1000
  //this one's for quicksort.
void swap(int *x, int *y); //deprecated
void quicksort(int array[], int length);
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);
  //this one's for heapsort.
void heap_sort(int b[],int heapsize);
void build_max_heap(int b[],int heapsize);
void max_heapify(int b[],int i,int heapsize);

int main(){
  int a[10000],b[1000];
  int length = 1000;
        for (int i = 0; i < length; i++){
              a[i]=rand();
              b[i]=a[i];}
    int heapsize=9999;
long long int clock_start1=clock();
          quicksort(a, length);
          for (int i = 0; i < length; i++)
              printf("%d ", a[i]);
          printf("\n");
long long int clock_end1=clock();

          heap_sort(b, heapsize);
          for (int i = 0; i < length; i++)
              printf("%d ", b[i]);
          printf("\n");
long long int clock_end2=clock();
    printf("=>quick_sort_time:%llu s",(clock_end1-clock_start1));
    printf("=>heap_sort_time:%llu s",(clock_end2-clock_end1));

  return 0;
}
void swap(int *x, int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}
void quicksort(int array[], int length){
  srand(time(NULL));
  quicksort_recursion(array, 0, length - 1);
}

void quicksort_recursion(int array[], int low, int high){
  if (low < high){
    int pivot_index = partition(array, low, high);
    quicksort_recursion(array, low, pivot_index - 1);
    quicksort_recursion(array, pivot_index + 1, high);
  }
}
int partition(int array[], int low, int high)
{
  int pivot_index = low + (rand() % (high - low));
  if (pivot_index != high)
    swap(&array[pivot_index], &array[high]);
  int pivot_value = array[high];
  int i = low;
  for (int j = low; j < high; j++){
    if (array[j] <= pivot_value){
      swap(&array[i], &array[j]);
      i++;
    }
  }
  swap(&array[i], &array[high]);
  return i;
}
void heap_sort(int b[],int heapsize){
      int tmp;
      build_max_heap(b,heapsize);
      for(int i=heapsize;i>0;i--){
        tmp=b[i];
        b[0]=tmp;
        heapsize--;
        max_heapify(b,0,heapsize);
      }
}
void build_max_heap(int b[],int heapsize){

  for(int i=heapsize/2;i>=0;i--)
        max_heapify(b, i,heapsize);
}
void max_heapify(int b[],int i,int heapsize){
    int tmp,largest;
    int l=(2*i)+1;
    int r=(2*i)+2;
  if((l<=heapsize)&&(b[l]>b[i]))
      largest=l;
  else
      largest=i;
  if((r<=heapsize)&&(b[r]>b[largest]))
    largest=r;
  if(largest!=i){
    tmp=b[i];
    b[i]=b[largest];
    b[largest]=tmp;
    max_heapify(b,largest,heapsize);
  }
}
