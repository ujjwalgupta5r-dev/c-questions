#include <stdio.h>
struct Student {
    int rollno;
    char name[10];
    float marks;
};

struct Student inputStudent() {
    struct Student s;
    printf("enter roll number: ");
    scanf("%d", &s.rollno);
    printf("enter name: ");
    scanf("%s", s.name);
    printf("enter marks: ");
    scanf("%f", &s.marks);
    return s;
}

void displayStudent(struct Student s) {
    printf("student Details");
    printf("roll Number: %d", s.rollno);
    printf("name: %s", s.name);
    printf("marks: %f", s.marks);
}

int main() {
    struct Student s1 = inputStudent();
    displayStudent(s1);
    return 0;
}
