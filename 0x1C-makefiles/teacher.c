#include <stdio.h>
#include "teacher.h"

void print_teacher_info(Teacher teacher) {
    printf("Name: %s\n", teacher.name);
    printf("ID: %d\n", teacher.id);
    printf("Department: %s\n", teacher.department);
}

