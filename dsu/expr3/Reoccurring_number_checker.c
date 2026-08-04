#include<stdio.h>
int main(){
    int num,i,ct=0;
    int arr[10]={1,2,3,3,4,4,5,5,66,78};
    printf("enter number");
    scanf("%d",&num);
    for(i=0;i<10;i++){
        if (arr[i]==num)
        {
            ct++;
        }
    }
    if (ct > 0)
    {
        printf("number found %d times \n",ct);
    }
    else{
        printf("number not found");
    }
    printf("number of comperisons %d \n",i);
}