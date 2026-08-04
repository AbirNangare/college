#include<stdio.h>
#include<string.h>
int main(){
    int i,ct=0;
    char *scr;
    char *hu[10] = {"apple","apple","apple","banana","mango","grape","grape","fig","orange","orange"};
    printf("enter fruit : ");
    scanf("%s",scr);
    for(i=0;i<10;i++){
        if (strcmp(hu[i],scr)==0)
        {
            ct++;
        }
    }
    if (ct > 0)
    {
        printf("fruit found %d times \n",ct);
    }
    else{
        printf("fruit not found\n");
    }
}