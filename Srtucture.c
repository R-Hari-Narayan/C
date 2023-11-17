#include<stdio.h>

void main(){
    struct Student
    {
        char *Name;
        int Rollno;
        float cgpa;
    };
    
    struct Student S1;
    S1.Name= "Hari";
    S1.Rollno= 32;
    S1.cgpa= 10.0;

    struct Student S2;
    S2.Name= "Rohan";
    S2.Rollno= 44;
    S2.cgpa= 8.56;

    struct Student S3;
    S3.Name= "Prajwal";
    S3.Rollno= 28;
    S3.cgpa= 9.2;

    printf("Student1 name: %s\n",S1.Name);
    printf("Student1 roll number: %d\n",S1.Rollno);
    printf("Student1 cgpa: %f\n",S1.cgpa);

    printf("Student2 name: %s\n",S2.Name);
    printf("Student2 roll number: %d\n",S2.Rollno);
    printf("Student2 cgpa: %f\n",S2.cgpa);

    printf("Student3 name: %s\n",S3.Name);
    printf("Student3 roll number: %d\n",S3.Rollno);
    printf("Student3 cgpa: %f\n",S3.cgpa);
}