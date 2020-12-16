#include <stdio.h>
#include <stdlib.h>

int main(void) 

{ 
  int col=0,vid=0;
  printf("Введіть кількість елементів масиву\n");
  scanf("%d",&col);  
  int a[col];

  for (int i=0; i<col; i++)
  { 
    printf("a[%d]=", i);
    scanf("%d", &a[i]);
  }  
  for (int i=0; i<col; i++)
  {  
    if (a[i]<0)
    {
vid=vid+1;
printf("a[%d]=%d\t", i, a[i]);
    }
}
  printf("\n");
printf("Кількість відємних значень = %d\n",vid);
return 0;
}
