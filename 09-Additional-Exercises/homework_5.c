
#include <stdio.h>

void read_scores(int scores[], int count) {
    for (int i = 0; i < count; i++) {
        do {
            printf("Enter assessment score %d (0-100): ", i + 1);

            if (scanf("%d", &scores[i]) != 1) {
                printf("Invalid input. Please enter an integer.\n");

                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF) {
                }

                scores[i] = -1;
            }

            if (scores[i] < 0 || scores[i] > 100) {
                printf("Score must be between 0 and 100. Try again.\n");
            }

        } while (scores[i] < 0 || scores[i] > 100);
    }
}

int calculate_total(int scores[], int count) {
    int total = 0;

    for (int i = 0; i < count; i++) {
        total += scores[i];
    }

    return total;
}

double calculate_average(int scores[], int count) {
    int total = calculate_total(scores, count);
    double average = (double) total / count;

    return average;
}

int find_maximum(int scores[], int count) {
    int maximum = scores[0];

    for (int i = 1; i < count; i++) {
        if (scores[i] > maximum) {
            maximum = scores[i];
        }
    }

    return maximum;
}

void print_report(char name[], int total, double average, int maximum) {
    printf("\n========== ASSESSMENT REPORT ==========\n");
    printf("Student Name: %s\n", name);
    printf("Total Score: %d\n", total);
    printf("Average Score: %.2f\n", average);
    printf("Highest Score: %d\n", maximum);
    printf("=======================================\n");
}

int main() {
    int scores[5];
    char name[100];

    printf("Enter student name: ");
    scanf(" %99[^\n]", name);

    read_scores(scores, 5);

    int total = calculate_total(scores, 5);
    double average = calculate_average(scores, 5);
    int maximum = find_maximum(scores, 5);

    printf("\nAll five assessment scores:\n");
    for (int i = 0; i < 5; i++) {
        printf("Score %d: %d\n", i + 1, scores[i]);
    }

    print_report(name, total, average, maximum);

    return 0;
}
