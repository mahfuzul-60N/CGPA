#include<stdio.h>
main()
{
    float gpa[20], sum=0; int i,  courses;

    printf("Number's of Course: "); // value of n
    scanf("%d", &courses); // value of the course

    for (i=0; i<courses; i++)
    {
        printf("Enter GPA of Course %d: ", i+1);
        scanf("%f", &gpa[i]); //array value
        sum = sum + gpa[i]; // total value
    }
    printf("Average CGPA is: %.2f", sum/(float)courses); // avg result
}
