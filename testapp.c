#include <stdio.h>
#include "mm.h"

typedef struct emp_ {

    char name[32];
    uint32_t emp_id;
} emp_t;

typedef struct student_ {

    char name[32];
    uint32_t rollno;
    uint32_t marks_phys;
    uint32_t marks_chem;
    uint32_t marks_maths;
} student_t;

int
main(int argc, char **argv){

    mm_init();
    mm_instantiate_new_page_family("emp_t", sizeof(emp_t));
    mm_instantiate_new_page_family("student_t", sizeof(student_t));

    emp_t *emp1 = xcalloc("emp_t", 1);
    emp_t *emp2 = xcalloc("emp_t", 1);
    emp_t *emp3 = xcalloc("emp_t", 1);
    emp_t *emp4 = xcalloc("emp_t", 3);
    student_t *stud1 = xcalloc("student_t", 1);
    student_t *stud2 = xcalloc("student_t", 2);
    student_t *stud3 = xcalloc("student_t", 1);
    mm_print_memory_usage();
    xfree(emp1);
    mm_print_memory_usage();
    xfree(emp2);
    mm_print_memory_usage();
    xfree(emp3);
    mm_print_memory_usage();
    xfree(emp4);
    mm_print_memory_usage();
    xfree(stud1);
    mm_print_memory_usage();
    xfree(stud2);
    mm_print_memory_usage();
    xfree(stud3);
    mm_print_memory_usage();
    return 0;
}