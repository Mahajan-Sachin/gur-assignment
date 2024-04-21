#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
void IndexHighestSalary(int arr[]){
    int highest=INT_MIN;
    int index;
    for(int i=0;i<10;i++){
        if(highest<arr[i]){
            highest=arr[i];
            index=i;
        }
    }
    printf("Index Highest sallary: %d",index);
}
int main(void){
    int array[10];
    printf("enter input\n");
    for(int i=0;i<10;i++){
        scanf("%d",&array[i]);
    }
    IndexHighestSalary(array);
return 0;
}