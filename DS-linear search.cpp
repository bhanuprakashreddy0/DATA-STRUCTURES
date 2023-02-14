#include <stdio.h>
int main()
{
  int array[100], search,i, n;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d integer(s)\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
  printf("Enter a number to search\n");
  scanf("%d", &search);
  for (i = 0; i < n; i++)
  {
    if (array[i] == search)
    {
      printf("The element %d is present at location %d.\n", search, i+1);
      break;
    }
  }
  if (i == n)
    printf("The element %d is not present in the array.\n", search);

  return 0;
}
