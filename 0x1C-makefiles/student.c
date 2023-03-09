#include <stdio.h>
#include "student.h"

void print_student_info(Student student) {
    printf("Name: %s\n", student.name);
    printf("ID: %d\n", student.id);
    printf("GPA: %.2f\n", student.gpa);
}

