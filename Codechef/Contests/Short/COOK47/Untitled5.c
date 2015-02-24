 #include<stdio.h>

int t[100005],c[100005];

void quicksort(int,int);

int main(){
  int h,i;

  printf("Enter size of the array: ");
  scanf("%d",&h);

  printf("Enter %d elements: ",h);
  for(i=0;i<h;i++)
    scanf("%d %d",&c[i],&t[i]);

  quicksort(0,h-1);
  for(i=0;i<h;i++)
    printf(" %d",c[i]);
printf("\n");
  for(i=0;i<h;i++)
    printf(" %d",t[i]);

  return 0;
}

void quicksort(int first,int last){
    int pivot,j,temp1,temp2,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(c[i]<=c[pivot]&&i<last)
                 i++;
             while(c[j]>c[pivot])
                 j--;
             if(i<j){
                 temp1=c[i];
                 temp2 = t[i];
                  c[i] = c[j];
                  t[i] = t[j];
                  c[j] = temp1;
                  t[j] = temp2;
             }
         }

         temp1 = c[pivot];
         temp2 = t[pivot];
         c[pivot]=c[j];
         t[pivot] = t[j];
         c[j] = temp1;
         t[j] = temp2;
         quicksort(first,j-1);
         quicksort(j+1,last);

    }
}
