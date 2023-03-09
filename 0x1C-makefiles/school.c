#include <stdio.h>
#include "student.h"
#include "teacher.h"

int main() {
    Student student1 = {"Alice", 1001, 3.8};
    Student student2 = {"Bob", 1002, 3.5};
    
    Teacher teacher1 = {"Charlie", 2001, "Mathematics"};
    Teacher teacher2 = {"David", 2002, "English"};
    
    printf("Students:\n");
    print_student_info(student1);
    print_student_info(student2);
    
    printf("\nTeachers:\n");
    print_teacher_info(teacher1);
    print_teacher_info(teacher2);
    
    return 0;
}

