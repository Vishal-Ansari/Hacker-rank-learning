// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int marks[100], n, i, sumb = 0, sumg = 0;
//     char gender;
//     scanf("%d", &n);
//     printf("enter the marks\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &marks[i]);
//     }
//     fflush(stdin);
//     scanf("%c", &gender);

    // for (i = 0; i < n; i = i + 2)
    // {
    //     sumb = sumb + marks[i];
    // }
    // for (i = 1; i < n; i = i + 2)
    // {
    //     sumg = sumg + marks[i];
    // }
    // if (gender == 'b')
    // {
    //     printf("%d", sumb);
    // }
    // else if(gender=='g')
    // {
    //     printf("%d", sumg);
    // }
    // else
    // {
    //     printf("sum is 0");
    // }
// return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int *marks, int number_of_students, char gender)
{
    int i,sumb=0,sumg=0;
 for (i = 0; i < number_of_students; i = i + 2)
    {
        sumb = sumb + marks[i];
    }
    for (i = 1; i < number_of_students; i = i + 2)
    {
        sumg = sumg + marks[i];
    }
    if (gender == 'b')
    {
        return  sumb;
    }
    else if(gender=='g')
    {
        return sumg;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *)malloc(number_of_students * sizeof(int));

    for (int student = 0; student < number_of_students; student++)
    {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender );
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d",sum);
    free(marks);

}