
#include<stdio.h>
int main(){
    int arr[40],position,pos,i,size,value;
   printf("Enter number of elements in array:");
   scanf("%d",&size);
   printf("Enter %d elements are:\n",size);
   for(i=0;i<size;i++)
      scanf("%d",&arr[i]);
   printf("Enter the position where you want to insert the element:");
   scanf("%d",&pos);
   printf("enter the value into that position:");
   scanf("%d",&value);
   for(i=size-1;i>=pos-1;i--)
      arr[i+1]=arr[i];
   arr[pos-1]= value;
   printf("After inserting the value is\n");
   for(i=0;i<=size;i++)
      printf("%d\n",arr[i]);
      printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);
   if (position >= size+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = position - 1; i < size - 1; i++)
         arr[i] = arr[i+1];
      printf("After deleting the value:\n");
      for (i = 0; i < size - 1; i++)
         printf("%d\n", arr[i]);
   }
   return 0;
}
