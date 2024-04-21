#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

void IndexlowestSalary(int arr[]){
    int lowest = INT_MAX;
    int index;
    for(int i = 0; i < 10; i++){
        if(lowest>arr[i]){
            lowest = arr[i];
            index = i;
        }
    }
    printf("Index of lowest Salary: %d\n", index);
}

int main(void){
    int array[10];
    printf("Enter 10 salaries:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    IndexlowestSalary(array);
    return 0;
}
