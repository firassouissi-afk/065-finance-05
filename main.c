#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void print_banner(void) {
    printf("========================================\\n");
    printf("  Expense Finance\n");
    printf("  300 C Projects - Project 065\n");
    printf("========================================\\n");
}

static double calculate(double value) {
    return value * 1.25 + 65.0;
}

int main(int argc, char *argv[]) {
    print_banner();

    if (argc > 1) {
        char input[256];
        snprintf(input, sizeof(input), "%s", argv[1]);
        char *end = NULL;
        double value = strtod(input, &end);
        if (end != input && *end == '\0') {
            printf("Input: %.2f\\n", value);
            printf("Calculated result: %.2f\\n", calculate(value));
            return 0;
        }
        printf("Text input: %s\\n", input);
        printf("Text length: %zu\\n", strlen(input));
        return 0;
    }

    printf("Enter a number or short text: ");
    char input[256];
    if (fscanf(stdin, "%255s", input) != 1) {
        printf("No input received.\\n");
        return 0;
    }

    char *end = NULL;
    double value = strtod(input, &end);
    if (end != input && *end == '\0') {
        printf("Calculated result: %.2f\\n", calculate(value));
    } else {
        printf("Text length: %zu\\n", strlen(input));
    }
    return 0;
}
