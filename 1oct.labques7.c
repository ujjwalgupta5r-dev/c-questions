#include <stdio.h>

struct Employee {
    int id;
    char name[20];     
    float basicPay;
    float da;
    float hra;
    float grossSalary;
};
void calculateAndDisplay(struct Employee e) {
    e.da = 0.10 * e.basicPay;      
    e.hra = 0.05 * e.basicPay;     
    e.grossSalary = e.basicPay + e.da + e.hra;  
    printf("employee details");
    printf("id: %d\n", e.id);
    printf("name: %s\n", e.name);
    printf("basic pay: %f\n", e.basicPay);
    printf("da: %f\n", e.da);
    printf("hra: %f\n", e.hra);
    printf("gross salary: %f\n", e.grossSalary);
}

int main() {
    struct Employee emp;

    printf("enter employee id: ");
    scanf("%d", &emp.id);

    printf("enter name (one word): ");
    scanf("%s", emp.name);  // No spaces allowed

    printf("enter basic pay: ");
    scanf("%f", &emp.basicPay);

    calculateAndDisplay(emp);

    return 0;
}
