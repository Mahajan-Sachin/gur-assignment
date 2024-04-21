#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
void HighestSalary(int arr[]){
    int highest=INT_MIN;
    for(int i=0;i<10;i++){
        if(highest<arr[i]){
            highest=arr[i];
        }
    }
    printf("Highest sallary: %d",highest);
}
int main(void){
    int array[10];
    printf("enter input\n");
    for(int i=0;i<10;i++){
        scanf("%d",&array[i]);
    }
    HighestSalary(array);
return 0;
}