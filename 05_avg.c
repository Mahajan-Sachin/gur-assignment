#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
void avgSalary(int arr[]){
    int sum=0;
    for(int i=0;i<10;i++){
         sum=sum+arr[i];
    }
    float sum1=(float)sum;
    float avg=sum1/10.00;
    printf("avg sallary: %.2f",avg);
}
int main(void){
    int array[10];
    printf("enter input");
    for(int i=0;i<10;i++){
        scanf("%d",&array[i]);
    }
    avgSalary(array);
return 0;
}