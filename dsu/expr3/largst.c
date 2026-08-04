#include<stdio.h>
int main(){
int arr[10],lar=0,i;
printf("enter numbers of array");
for(i=0;i<10;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<10;i++){
    if (arr[i]>lar)
    {
        lar=arr[i];
    }
    
}
printf("largest number : %d",lar);
return 0;
}