#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
void lowestSalary(int arr[]){
    int lowest=INT_MAX;
    for(int i=0;i<10;i++){
        if(lowest>arr[i]){
            lowest=arr[i];
        }
    }
    printf("lowest sallary: %d",lowest);
}
int main(void){
    int array[10];
    printf("enter input\n");
    for(int i=0;i<10;i++){
        scanf("%d",&array[i]);
    }
    lowestSalary(array);
return 0;
}