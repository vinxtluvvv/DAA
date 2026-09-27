#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Second largest element

// int main() {
//     int a[100], n, i;
//     int largest, second;
//     printf("Enter size: ");
//     scanf("%d", &n);
//     printf("Enter elements: ");
//     for(i = 0; i < n; i++)
//         scanf("%d", &a[i]);
//     largest = second = -999999;
//     for(i = 0; i < n; i++) {
//         if(a[i] > largest) {
//             second = largest;
//             largest = a[i];
//         }
//         else if(a[i] > second && a[i] != largest) {
//             second = a[i];
//         }
//     }
//     if(second == -999999){
//         printf("No second largest element");}
//     else{
//         printf("Second largest = %d", second);}
//     return 0;
// }



// Frequency of each distinct element


// int main() {
//     int a[100], n, i, j, count;
//     printf("Enter size: ");
//     scanf("%d", &n);
//     printf("Enter elements: ");
//     for(i = 0; i < n; i++)
//         scanf("%d", &a[i]);
//     for(i = 0; i < n; i++) {
//         count = 1;
//         if(a[i] == -1)
//             continue;
//         for(j = i + 1; j < n; j++) {
//             if(a[i] == a[j]) {
//                 count++;
//                 a[j] = -1;
//             }}
//         printf("%d->%d\n", a[i], count);
//     }
//     return 0;
// }



// Merge two sorted arrays


// int main() {
//     int a[100], b[100], c[200];
//     int n, m, i, j, k;

//     printf("Enter size of first array: ");
//     scanf("%d", &n);

//     printf("Enter first sorted array: ");
//     for(i = 0; i < n; i++)
//         scanf("%d", &a[i]);

//     printf("Enter size of second array: ");
//     scanf("%d", &m);
//     printf("Enter second sorted array: ");

//     for(i = 0; i < m; i++)
//         scanf("%d", &b[i]);
//     i = 0;
//     j = 0;
//     k = 0;
//     while(i < n && j < m) {
//         if(a[i] < b[j])
//             c[k++] = a[i++];
//         else
//             c[k++] = b[j++];
//     }
//     while(i < n)
//         c[k++] = a[i++];
//     while(j < m)
//         c[k++] = b[j++];
//     printf("Merged array: ");
//     for(i = 0; i < k; i++)
//         printf("%d ", c[i]);

//     return 0;
// }



// Palindrome string


// int main() {
//     char str[100];
//     int i, j, flag = 1;

//     printf("Enter a word: ");
//     scanf(" %s", str);
//     i = 0;
//     j = strlen(str) - 1;
//     while(i < j) {
//         while(i < j && str[i] == ' ')
//             i++;
//         while(i < j && (str[j] == ' '))
//             j--;
//         if(tolower(str[i]) != tolower(str[j])) {
//             flag = 0;
//             break;}
//         i++,j--;
//     }
//     if(flag)
//         printf("palindrome");
//     else
//         printf("not a palindrome");
//     return 0;
// }



// Matrix multiplication

 
// int main() {
//     int a[10][10], b[10][10], c[10][10];
//     int r1, c1, r2, c2;
//     int i, j, k;
//     printf("Enter rows and columns of first matrix: ");
//     scanf("%d %d", &r1, &c1);
//     printf("Enter rows and columns of second matrix: ");
//     scanf("%d %d", &r2, &c2);
//     if(c1 != r2) { 
//         printf("Matrix multiplication not possible");
//         return 0;
//     }
//     printf("Enter first matrix:\n");
//     for(i = 0; i < r1; i++)
//         for(j = 0; j < c1; j++)
//             scanf("%d", &a[i][j]);
//     printf("Enter second matrix:\n");
//     for(i = 0; i < r2; i++)
//         for(j = 0; j < c2; j++)
//             scanf("%d", &b[i][j]);
//     for(i = 0; i < r1; i++) {
//         for(j = 0; j < c2; j++) {
//             c[i][j] = 0;
//             for(k = 0; k < c1; k++)
//                 c[i][j] += a[i][k] * b[k][j];
//         }
//     }
//     printf("Result:\n");
//     for(i = 0; i < r1; i++) {
//         for(j = 0; j < c2; j++)
//             printf("%d ", c[i][j]);
//         printf("\n");
//     }
//     return 0;
// }



// Pairs whose sum equals target


// int main() {
//     int a[100], n, target;
//     int i, j;
//     printf("Enter size: ");
//     scanf("%d", &n);
//     printf("Enter elements: ");
//     for(i = 0; i < n; i++)
//         scanf("%d", &a[i]);
//     printf("Enter target: ");
//     scanf("%d", &target);
    
//     for(i = 0; i < n; i++) {
//         for(j = i + 1; j < n; j++) {
//             if(a[i] + a[j] == target)
//                 printf("(%d, %d) ", a[i], a[j]);
//         }}
//     return 0;
// }


// Rotate array right by K positions



// int main() {
//     int a[100], n, k;
//     int i, j, temp;

//     printf("Enter size: ");
//     scanf("%d", &n);

//     printf("Enter elements: ");
//     for(i = 0; i < n; i++)
//         scanf("%d", &a[i]);

//     printf("Enter K: ");
//     scanf("%d", &k);
//     k = k % n;
//     for(i = 0; i < k; i++) {
//         temp = a[n - 1];
//         for(j = n - 1; j > 0; j--)
//             a[j] = a[j - 1];
//         a[0] = temp;
//     }
//     printf("Rotated array: ");
//     for(i = 0; i < n; i++)
//         printf("%d ", a[i]);
//     return 0;
// }



// Student Result Analysis



// struct Student {
//     int roll;
//     char name[50];
//     int marks[5];
//     int total;
//     float percentage;
//     char grade;
// };

// int main() {
//     struct Student s[100];
//     int n, i, j, topper = 0;
//     float average = 0;
//     printf("Enter number of students: ");
//     scanf("%d", &n);
//     for(i = 0; i < n; i++) {
//         printf("\nEnter roll number: ");
//         scanf("%d", &s[i].roll);
//         printf("Enter name: ");
//         scanf(" %s", s[i].name);
//         s[i].total = 0;
//         printf("Enter marks of 5 subjects: ");
//         for(j = 0; j < 5; j++) {
//             scanf("%d", &s[i].marks[j]);
//             s[i].total += s[i].marks[j];
//         }
//         s[i].percentage = s[i].total / 5.0;

//         if(s[i].percentage >= 90)
//             s[i].grade = 'A';
//         else if(s[i].percentage >= 75)
//             s[i].grade = 'B';
//         else if(s[i].percentage >= 60)
//             s[i].grade = 'C';
//         else if(s[i].percentage >= 40)
//             s[i].grade = 'D';
//         else
//             s[i].grade = 'F';
//         average += s[i].percentage;
//         if(s[i].total > s[topper].total)
//             topper = i;
//     }
//     printf("\nStudent Results:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d  %s  Total=%d  Percentage=%f  Grade=%c\n",
//                s[i].roll, s[i].name, s[i].total,
//                s[i].percentage, s[i].grade);
//     }
//     printf("\nClass Topper: %s\n", s[topper].name);
//     printf("\nStudents who failed:\n");
//     for(i = 0; i < n; i++) {
//         for(j = 0; j < 5; j++) {
//             if(s[i].marks[j] < 40) {
//                 printf("%s\n", s[i].name);
//                 break;
//             }
//         }}
//     printf("\nClass Average = %f", average / n);
//     return 0;
// }



// 


struct Book {
    int id;
    char title[100];
    char author[100];
    int total;
    int available;
};
int main() {
    struct Book b[100];
    int n = 0, choice, id, i;
    while(1) {
        printf("\n1. Add Book");
        printf("\n2. Search Book");
        printf("\n3. Issue Book");
        printf("\n4. Return Book");
        printf("\n5. Display Unavailable Books");
        printf("\n6. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 1) {
            printf("Enter book ID: ");
            scanf("%d", &b[n].id);
            getchar();
            printf("Enter title: ");
            fgets(b[n].title, 100, stdin);
            b[n].title[strcspn(b[n].title, "\n")] = '\0';
            printf("Enter author: ");
            fgets(b[n].author, 100, stdin);
            b[n].author[strcspn(b[n].author, "\n")] = '\0';
            printf("Enter total copies: ");
            scanf("%d", &b[n].total);
            b[n].available = b[n].total;
            n++;
        }
        else if(choice == 2) {
            printf("Enter book ID: ");
            scanf("%d", &id);
            for(i = 0; i < n; i++) {
                if(b[i].id == id) {
                    printf("Title: %s\n", b[i].title);
                    printf("Author: %s\n", b[i].author);
                    printf("Available: %d\n", b[i].available);
                }
            }
        }
        else if(choice == 3) {
            printf("Enter book ID: ");
            scanf("%d", &id);
            for(i = 0; i < n; i++) {
                if(b[i].id == id) {
                    if(b[i].available > 0) {
                        b[i].available--;
                        printf("Book issued");
                    }
                    else
                        printf("Book unavailable");
                }
            }
        }
        else if(choice == 4) {
            printf("Enter book ID: ");
            scanf("%d", &id);

            for(i = 0; i < n; i++) {
                if(b[i].id == id) {
                    if(b[i].available < b[i].total) {
                        b[i].available++;
                        printf("Book returned");
                    }
                }
            }
        }
        else if(choice == 5) {
            printf("\nUnavailable Books:\n");

            for(i = 0; i < n; i++) {
                if(b[i].available == 0)
                    printf("%d  %s\n", b[i].id, b[i].title);
            }
        }
        else if(choice == 6)
            break;
    }
    return 0;
}
