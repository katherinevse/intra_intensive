#include <stdio.h>
#include <string.h>



struct all_students
{
    char name [50];
    int age;
    int year;
};

void printStudent(struct all_students student) 
{
    printf("Имя: %s\n", student.name);
    printf("Возраст: %d\n", student.age);
    printf("Курс: %d\n", student.year);
}


int main ()
{
    struct all_students student1; // Создание переменной структуры "Студент" с именем "student1"
    strcpy(student1.name, "Иванов Иван");
    student1.age = 20;
    student1.year = 2;


    struct all_students student2;
    strcpy(student2.name, "Петр Петров");
    student2.age = 21;
    student2.year = 3;

    printStudent(student1);
    printStudent(student2);



    return 0;
}