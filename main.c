#include<stdio.h>
#define N 11

void outputArray(int a[], unsigned n)
{
   unsigned i;
   for (i = 0; i < n; i++)
      printf("a[%i] = %i\n", i, a[i]);
   putchar('\n');
}
void insertionSort(int a[], unsigned n)
{
   int i, j, help;
   for (i = 1; i < n; i++)
   {
      help = a[i];
      j = i - 1;
      while ((j >= 0) && (help < a[j]))
      {
         a[j+1] = a[j];
         j--;
      }
      a[++j] = help;
   }
}
int main(void)
{
   int a[N] = { 22, 77, 34, 3, 69, 24, 18, 98, 41, 64, 55 };
   printf("unsorted array\n");
   outputArray(a, N);
   insertionSort(a, N);
   printf("sorted array\n");
   outputArray(a, N);
   return 0;
}
