#include <stdio.h>

struct student {
    char name[20];
    int math;
    int science;
    int english;
    int history;
};

int main() {
    struct student students[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter the math score for %s: ", students[i].name);
        scanf("%d", &students[i].math);
        printf("Enter the science score for %s: ", students[i].name);
        scanf("%d", &students[i].science);
        printf("Enter the english score for %s: ", students[i].name);
        scanf("%d", &students[i].english);
        printf("Enter the history score for %s: ", students[i].name);
        scanf("%d", &students[i].history);
    }

    for (i = 0; i < 5; i++) {
        printf("\nName: %s\n", students[i].name);
        printf("Math: %d\n", students[i].math);
        printf("Science: %d\n", students[i].science);
        printf("English: %d\n", students[i].english);
        printf("History: %d\n", students[i].history);
    }

    return 0;
}