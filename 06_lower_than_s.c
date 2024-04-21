#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int CountEmployeesBelowSalary(int arr[], int size, int inputSalary) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] < inputSalary) {
            count++;
        }
    }
    return count;
}

int main(void) {
    int numEmployees=10;
    int salaries[10]; // Assuming a maximum of 10 employees
    printf("Enter salaries for %d employees:\n", numEmployees);
    for(int i = 0; i < numEmployees; i++) {
        scanf("%d", &salaries[i]);
    }

    int inputSalary;
    printf("Enter the input salary: ");
    scanf("%d", &inputSalary);

    int countBelow = CountEmployeesBelowSalary(salaries, numEmployees, inputSalary);
    printf("Number of employees with salary less than %d: %d\n", inputSalary, countBelow);

    return 0;
}
