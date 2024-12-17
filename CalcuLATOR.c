#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_HIS 20
#define PI 3.141592654

char history[MAX_HIS][100];
int historyNum = 0;

void storeHistory(const char* expr){
    if (historyNum < MAX_HIS) {
        strcpy(history[historyNum], expr);
        historyNum++;
    } else {
        for (int i = 1; i < MAX_HIS; i++) {
            strcpy(history[i - 1], history[i]);
        }
        strcpy(history[MAX_HIS - 1], expr);
    }
}
void printHistory(){
    if (historyNum == 0) {
        printf("====================\n");
        printf("NO HISTORY AVAILABLE\n");
        printf("====================\n");
        return;
    }
    printf("=========================================\n");
    printf("History:\n");
    for (int i = 0; i < historyNum; i++) {
        printf("%d. %s\n", i + 1, history[i]);
    }
    printf("=========================================\n");
}
void invalidInput(){
    printf("----------------------------\n");
    printf("--INVALID INPUT, TRY AGAIN--\n");
    printf("----------------------------\n");
}
void line(){
    printf("\n");
}
void additionTitle(){
    printf("============\n");
    printf("--ADDITION--\n");
    printf("============\n");
}
void subtractionTitle(){
    printf("===============\n");
    printf("--SUBTRACTION--\n");
    printf("===============\n");
}
void multiplicationTitle(){
    printf("===============\n");
    printf("--SUBTRACTION--\n");
    printf("===============\n");
}
void divisionTitle(){
    printf("============\n");
    printf("--DIVISION--\n");
    printf("============\n");
}
void remainderTitle() {
    printf("=============\n");
    printf("--REMAINDER--\n");
    printf("=============\n");
}
void factorialTitle() {
    printf("=============\n");
    printf("--FACTORIAL--\n");
    printf("=============\n");
}
void sineTitle() {
    printf("=====================\n");
    printf("--SINE (IN RADIANS)--\n");
    printf("=====================\n");
}
void cosineTitle() {
    printf("=======================\n");
    printf("--COSINE (IN RADIANS)--\n");
    printf("=======================\n");
}
void tangentTitle() {
    printf("========================\n");
    printf("--TANGENT (IN RADIANS)--\n");
    printf("========================\n");
}
void logarithmBaseETitle() {
    printf("======================\n");
    printf("--LOGARITHM (BASE e)--\n");
    printf("======================\n");
}
void logarithmBase10Title() {
    printf("=======================\n");
    printf("--LOGARITHM (BASE 10)--\n");
    printf("=======================\n");
}
void exponentialTitle() {
    printf("=====================\n");
    printf("--EXPONENTIAL (e^x)--\n");
    printf("=====================\n");
}
void squareRootTitle() {
    printf("==============\n");
    printf("--SQUAREROOT--\n");
    printf("==============\n");
}
void cubeRootTitle() {
    printf("============\n");
    printf("--CUBEROOT--\n");
    printf("============\n");
}
void powerTitle() {
    printf("=============\n");
    printf("--POWER (^)--\n");
    printf("=============\n");
}
void absoluteTitle() {
    printf("==================\n");
    printf("--ABSOLUTE (|x|)--\n");
    printf("==================\n");
}
void sineInverseTitle() {
    printf("=============================\n");
    printf("--SINE INVERSE (IN RADIANS)--\n");
    printf("=============================\n");
}
void cosineInverseTitle() {
    printf("===============================\n");
    printf("--COSINE INVERSE (IN RADIANS)--\n");
    printf("===============================\n");
}
void tangentInverseTitle() {
    printf("================================\n");
    printf("--TANGENT INVERSE (IN RADIANS)--\n");
    printf("================================\n");
}
void permutationTitle() {
    printf("=====================\n");
    printf("--PERMUTATION (nPr)--\n");
    printf("=====================\n");
}
void combinationTitle() {
    printf("=====================\n");
    printf("--COMBINATION (nCr)--\n");
    printf("=====================\n");
}
//Basic Calculator Functions
void addition(){
    double num1, num2, result = 0;
    char historyEntry[100];
    char input[100];

    printf("Enter two numbers or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num1 = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num1 = -PI;
        } else if (sscanf(input, "%lf", &num1) != 1) {
            system("cls");
            additionTitle();
            invalidInput();
            printf("Enter two numbers or type 'e' to end the operation: ");
            continue;
        } if (scanf("%s", input) != 1) {
            system("cls");
            additionTitle();
            invalidInput();
            printf("Enter two numbers or type 'e' to end the operation: ");
            continue;
        }  if (strcmp(input, "PI") == 0) {
            num2 = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num2 = -PI;
        } else if (sscanf(input, "%lf", &num2) != 1) {
            system("cls");
            additionTitle();
            invalidInput();
            printf("Enter two numbers or type 'e' to end the operation: ");
            continue;
        }
        result = num1 + num2;
        printf("Sum = %.2lf\n", result);

        snprintf(historyEntry, sizeof(historyEntry), "%.2lf + %.2lf = %.2lf", num1, num2, result);
        storeHistory(historyEntry);

        printf("Enter two numbers or type 'e' to end the operation: ");
    }
}
void subtraction(){
    double num1, num2, result = 0;
    char historyEntry[100];
    char input[100];

    printf("Enter two numbers or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num1 = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num1 = -PI;
        } else if (sscanf(input, "%lf", &num1) != 1) {
            system("cls");
            subtractionTitle();
            invalidInput();
            printf("Enter two numbers or type 'e' to end the operation: ");
            continue;
        } if (scanf("%s", input) != 1) {
            system("cls");
            subtractionTitle();
            invalidInput();
            printf("Enter two numbers or type 'e' to end the operation: ");
            continue;
        }  if (strcmp(input, "PI") == 0) {
            num2 = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num2 = -PI;
        } else if (sscanf(input, "%lf", &num2) != 1) {
            system("cls");
            subtractionTitle();
            invalidInput();
            printf("Enter two numbers or type 'e' to end the operation: ");
            continue;
        }
        result = num1 - num2;
        printf("Difference = %.2lf\n", result);

        snprintf(historyEntry, sizeof(historyEntry), "%.2lf - %.2lf = %.2lf", num1, num2, result);
        storeHistory(historyEntry);

        printf("Enter two numbers or type 'e' to end the operation: ");
    }
}
void multiplication(){
    double num1, num2, result = 0;
    char historyEntry[100];
    char input[100];

    printf("Enter two numbers or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num1 = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num1 = -PI;
        } else if (sscanf(input, "%lf", &num1) != 1) {
            system("cls");
            multiplicationTitle();
            invalidInput();
            printf("Enter two numbers or type 'e' to end the operation: ");
            continue;
        } if (scanf("%s", input) != 1) {
            system("cls");
            multiplicationTitle();
            invalidInput();
            printf("Enter two numbers or type 'e' to end the operation: ");
            continue;
        } if (strcmp(input, "PI") == 0) {
            num2 = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num2 = -PI;
        } else if (sscanf(input, "%lf", &num2) != 1) {
            system("cls");
            multiplicationTitle();
            invalidInput();
            printf("Enter two numbers or type 'e' to end the operation: ");
            continue;
        }
        result = num1 * num2;
        printf("Product = %.2lf\n", result);

        snprintf(historyEntry, sizeof(historyEntry), "%.2lf * %.2lf = %.2lf", num1, num2, result);
        storeHistory(historyEntry);

        printf("Enter two numbers or type 'e' to end the operation: ");
    }
}
void division(){
    double num1, num2, result = 0;
    char historyEntry[100];
    char input[100];

    printf("Enter two numbers or type 'e' to end the operation: ");

    while (1) {
        if (num2 != 0){
            if (scanf("%s", input) != 1) {
                invalidInput();
                while (getchar() != '\n');
                continue;
            } if (strcmp(input, "e") == 0) {
                system("cls");
                return;
            } if (strcmp(input, "PI") == 0) {
                num1 = PI;
            } else if (strcmp(input, "-PI") == 0) {
                num1 = -PI;
            } else if (sscanf(input, "%lf", &num1) != 1) {
                system("cls");
                divisionTitle();
                invalidInput();
                printf("Enter two numbers or type 'e' to end the operation: ");
                continue;
            } if (scanf("%s", input) != 1) {
                system("cls");
                divisionTitle();
                invalidInput();
                printf("Enter two numbers or type 'e' to end the operation: ");
                continue;
            }  if (strcmp(input, "PI") == 0) {
                num2 = PI;
            } else if (strcmp(input, "-PI") == 0) {
                num2 = -PI;
            } else if (sscanf(input, "%lf", &num2) != 1) {
                system("cls");
                divisionTitle();
                invalidInput();
                printf("Enter two numbers or type 'e' to end the operation: ");
                continue;
            } if (num2 == 0) {
                system("cls");
                divisionTitle();
                printf("---------------------------------\n");
                printf("--DIVISION BY ZERO IS UNDEFINED--\n");
                printf("---------------------------------\n");
                return division();
            }
            result = num1 / num2;
            printf("Quotient = %.2lf\n", result);

            snprintf(historyEntry, sizeof(historyEntry), "%.2lf / %.2lf = %.2lf", num1, num2, result);
            storeHistory(historyEntry);

            printf("Enter two numbers or type 'e' to end the operation: ");
        }
    }
    line();
}
void basicCalc(){
    int opt;

    while(1){
        printf("Choose a basic arithmetic operation:\n");
        printf("[1] Addition\n");
        printf("[2] Subtraction\n");
        printf("[3] Multiplication\n");
        printf("[4] Division\n");
        printf("[5] Return to Main Menu\n");
        printf("Enter an option: ");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                system("cls");
                additionTitle();
                addition();
                line();
                break;
            case 2:
                system("cls");
                subtractionTitle();
                subtraction();
                line();
                break;
            case 3:
                system("cls");
                multiplicationTitle();
                multiplication();
                line();
                break;
            case 4:
                system("cls");
                divisionTitle();
                division();
                break;
            case 5:
                system("cls");
                return;
            default:
                system("cls");
                invalidInput();
                while (getchar() != '\n');
                return basicCalc();
        }
    }
}
//Scientific Calculator Functions
void remain() {
    long long int num1, num2, result;
    char historyEntry[100];
    char input[100];

    printf("Enter two numbers or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            system("cls");
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num1 = PI;
        } if (strcmp(input, "-PI") == 0) {
            num1 = -PI;
        } else if (sscanf(input, "%lf", &num1) != 1) {
            system("cls");
            remainderTitle();
            invalidInput();
            printf("Enter two numbers or type 'e' to end the operation: ");
            while (getchar() != '\n');
            continue;
        } if (scanf("%s", input) != 1) {
            system("cls");
            remainderTitle();
            invalidInput();
            printf("Enter two numbers or type 'e' to end the operation: ");
            continue;
        } if (strcmp(input, "PI") == 0) {
            num2 = PI;
        } if (strcmp(input, "-PI") == 0) {
            num1 = -PI;
        } else if (sscanf(input, "%lf", &num2) != 1) {
            system("cls");
            remainderTitle();
            invalidInput();
            printf("Enter two numbers or type 'e' to end the operation: ");
            continue;
        } if (num2 == 0) {
            system("cls");
            remainderTitle();
            printf("---------------------------------\n");
            printf("--DIVISION BY ZERO IS UNDEFINED--\n");
            printf("---------------------------------\n");
            continue;
        }

        result = num1 % num2;
        printf("Remainder = %lld\n", result);

        snprintf(historyEntry, sizeof(historyEntry), "%lld %% %lld = %lld", num1, num2, result);
        storeHistory(historyEntry);

        printf("Enter two numbers or type 'e' to end the operation: ");
    }
}
void factorial() {
    unsigned long long int num, result;
    char input[100];
    char historyEntry[300];

    printf("Enter a number to calculate its factorial or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (sscanf(input, "%llu", &num) != 1) {
            system("cls");
            factorialTitle();
            invalidInput();
            printf("Enter a number to calculate its factorial or type 'e' to end the operation: ");
            continue;
        } if ((long long)num < 0) {
            system("cls");
            factorialTitle();
            printf("-----------------------------------------------\n");
            printf("--NEGATIVE NUMBERS IN FACTORIAL ARE UNDEFINED--\n");
            printf("-----------------------------------------------\n");
            printf("Enter a number to calculate its factorial or type 'e' to end the operation: ");
            continue;
        } if (num > 20) {
            system("cls");
            factorialTitle();
            printf("--------------------------------------------\n");
            printf("Please enter a number between 0 and 20.\nThe highest factorial that can be calculated\nis 20 due to memory limitations.\n");
            printf("--------------------------------------------\n");
            printf("Enter a number to calculate its factorial or type 'e' to end the operation: ");
            continue;
        }
        result = 1;
        for (unsigned long long int i = 1; i <= num; ++i) {
            result *= i;
        }
        printf("Factorial of %llu = %llu\n", num, result);

        snprintf(historyEntry, sizeof(historyEntry), "Factorial of %llu (%llu!)= %llu", num, num, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter a number to calculate its factorial or type 'e' to end the operation: ");
    }
}
void sine() {
    double num, result;
    char historyEntry[100];
    char input[100];

    printf("Enter an angle in radians or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num = -PI;
        } else if (sscanf(input, "%lf", &num) != 1) {
            system("cls");
            sineTitle();
            invalidInput();
            printf("Enter an angle in radians or type 'e' to end the operation: ");
            continue;
        }

        result = sin(num);
        printf("RESULT: sin(%.2lf) = %.2lf\n", num, result);

        snprintf(historyEntry, sizeof(historyEntry), "sin(%.2lf) = %.2lf", num, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter an angle in radians or type 'e' to end the operation: ");
    }
}
void cosine() {
    double num, result;
    char historyEntry[100];
    char input[100];

    printf("Enter an angle in radians or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num = -PI;
        } else if (sscanf(input, "%lf", &num) != 1) {
            system("cls");
            cosineTitle();
            invalidInput();
            printf("Enter an angle in radians or type 'e' to end the operation: ");
            continue;
        }

        result = cos(num);
        printf("RESULT: cos(%.2lf) = %.2lf\n", num, result);

        snprintf(historyEntry, sizeof(historyEntry), "cos(%.2lf) = %.2lf", num, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter an angle in radians or type 'e' to end the operation: ");
    }
}
void tangent() {
    double num, result;
    char historyEntry[100];
    char input[100];

    printf("Enter an angle in radians or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num = -PI;
        } else if (sscanf(input, "%lf", &num) != 1) {
            system("cls");
            tangentTitle();
            invalidInput();
            printf("Enter an angle in radians or type 'e' to end the operation: ");
            continue;
        }

        result = tan(num);
        printf("RESULT: tan(%.2lf) = %.2lf\n", num, result);

        snprintf(historyEntry, sizeof(historyEntry), "tan(%.2lf) = %.2lf", num, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter an angle in radians or type 'e' to end the operation: ");
    }
}
void logarithmNatural() {
    double num, result;
    char historyEntry[100];
    char input[100];

    printf("Enter a positive number to calculate its natural logarithm (ln) or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num = -PI;
        } else if (sscanf(input, "%lf", &num) != 1) {
            system("cls");
            logarithmBaseETitle();
            invalidInput();
            printf("Enter a positive number to calculate its natural logarithm (ln) or type 'e' to end the operation: ");
            continue;
        } if (num <= 0) {
            system("cls");
            logarithmBaseETitle();
            printf("-----------------------------------------------------------\n");
            printf("--ZERO(0) AND NEGATIVE NUMBERS IN LOGARITHM ARE UNDEFINED--\n");
            printf("-----------------------------------------------------------\n");
            printf("Enter a positive number to calculate its natural logarithm (ln) or type 'e' to end the operation: ");
            continue;
        }

        result = log(num);
        printf("RESULT: ln(%.2lf) = %.2lf\n", num, result);

        snprintf(historyEntry, sizeof(historyEntry), "ln(%.2lf) = %.2lf", num, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter a positive number to calculate its natural logarithm (ln) or type 'e' to end the operation: ");
    }
}
void logarithmCommon() {
    double num, result;
    char historyEntry[100];
    char input[100];

    printf("Enter a positive number to calculate its logarithm (base 10) or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num = -PI;
        } else if (sscanf(input, "%lf", &num) != 1) {
            system("cls");
            logarithmBase10Title();
            invalidInput();
            printf("Enter a positive number to calculate its logarithm (base 10) or type 'e' to end the operation: ");
            continue;
        } if (num <= 0) {
            system("cls");
            logarithmBase10Title();
            printf("-----------------------------------------------------------\n");
            printf("--ZERO(0) AND NEGATIVE NUMBERS IN LOGARITHM ARE UNDEFINED--\n");
            printf("-----------------------------------------------------------\n");
            printf("Enter a positive number to calculate its logarithm (base 10) or type 'e' to end the operation: ");
            continue;
        }

        result = log10(num);
        printf("RESULT: log10(%.2lf) = %.2lf\n", num, result);

        snprintf(historyEntry, sizeof(historyEntry), "log10(%.2lf) = %.2lf", num, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter a positive number to calculate its logarithm (base 10) or type 'e' to end the operation: ");
    }
}
void exponential() {
    double num, result;
    char historyEntry[100];
    char input[100];

    printf("Enter a number to calculate its exponential (e^x) or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num = -PI;
        } else if (sscanf(input, "%lf", &num) != 1) {
            system("cls");
            exponentialTitle();
            invalidInput();
            printf("Enter a number to calculate its exponential (e^x) or type 'e' to end the operation: ");
            continue;
        }

        result = exp(num);
        printf("RESULT: e^(%.2lf) = %.2lf\n", num, result);

        snprintf(historyEntry, sizeof(historyEntry), "e^(%.2lf) = %.2lf", num, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter a number to calculate its exponential (e^x) or type 'e' to end the operation: ");
    }
}
void squareRoot() {
    double num, result;
    char historyEntry[100];
    char input[100];

    printf("Enter a non-negative number to calculate its square root or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num = PI;
        } else if (sscanf(input, "%lf", &num) != 1) {
            system("cls");
            squareRootTitle();
            invalidInput();
            printf("Enter a non-negative number to calculate its square root or type 'e' to end the operation: ");
            continue;
        } if (num < 0) {
            system("cls");
            squareRootTitle();
            printf("-------------------------------------------------\n");
            printf("--NEGATIVE NUMBERS DON'T HAVE REAL SQUARE ROOTS--\n");
            printf("-------------------------------------------------\n");
            printf("Enter a non-negative number to calculate its square root or type 'e' to end the operation: ");
            continue;
        }

        result = sqrt(num);
        printf("RESULT: sqrt(%.2lf) = %.2lf\n", num, result);

        snprintf(historyEntry, sizeof(historyEntry), "sqrt(%.2lf) = %.2lf", num, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter a non-negative number to calculate its square root or type 'e' to end the operation: ");
    }
}
void cubeRoot() {
    double num, result;
    char historyEntry[100];
    char input[100];

    printf("Enter a number to calculate its cube root or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num = -PI;
        } else if (sscanf(input, "%lf", &num) != 1) {
            system("cls");
            cubeRootTitle();
            invalidInput();
            printf("Enter a non-negative number to calculate its square root or type 'e' to end the operation: ");
            continue;
        }

        result = cbrt(num);
        printf("RESULT: cbrt(%.2lf) = %.2lf\n", num, result);

        snprintf(historyEntry, sizeof(historyEntry), "cbrt(%.2lf) = %.2lf", num, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter a number to calculate its cube root or type 'e' to end the operation: ");
    }
}
void power() {
    double num1, num2, result;
    char historyEntry[100];
    char input[100];

    printf("Enter base and exponent separated by a space or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num1 = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num1 = -PI;
        } else if (sscanf(input, "%lf", &num1) != 1) {
            system("cls");
            powerTitle();
            invalidInput();
            printf("Enter base and exponent separated by a space or type 'e' to end the operation: ");
            continue;
        } if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "PI") == 0) {
            num2 = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num2 = -PI;
        } else if (sscanf(input, "%lf", &num2) != 1) {
            system("cls");
            powerTitle();
            invalidInput();
            printf("Enter base and exponent separated by a space or type 'e' to end the operation: ");
            continue;
        }

        result = pow(num1, num2);
        printf("RESULT: %.2lf^%.2lf = %.2lf\n", num1, num2, result);

        snprintf(historyEntry, sizeof(historyEntry), "%.2lf^%.2lf = %.2lf", num1, num2, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter base and exponent separated by a space or type 'e' to end the operation: ");
    }
}
void absolute() {
    double num, result;
    char historyEntry[100];
    char input[100];

    printf("Enter a number to calculate its absolute value or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num = -PI;
        } else if (sscanf(input, "%lf", &num) != 1) {
            system("cls");
            absoluteTitle();
            invalidInput();
            printf("Enter a number to calculate its absolute value or type 'e' to end the operation: ");
            continue;
        }

        result = fabs(num);
        printf("RESULT: |%.2lf| = %.2lf\n", num, result);

        snprintf(historyEntry, sizeof(historyEntry), "|%.2lf| = %.2lf", num, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter a number to calculate its absolute value or type 'e' to end the operation: ");
    }
}
void sinInverse() {
    double num, result;
    char historyEntry[100];
    char input[100];

    printf("Enter a value (-1 to 1) to calculate its sine inverse (in radians) or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num = -PI;
        } else if (sscanf(input, "%lf", &num) != 1) {
            system("cls");
            sineInverseTitle();
            invalidInput();
            printf("Enter a value (-1 to 1) to calculate its sine inverse (in radians) or type 'e' to end the operation: ");
            continue;
        } if (sscanf(input, "%lf", &num) != 1 || num < -1 || num > 1) {
            system("cls");
            sineInverseTitle();
            printf("--------------------------------------\n");
            printf("--INPUT MUST BE IN THE RANGE -1 TO 1--\n");
            printf("--------------------------------------\n");
            printf("Enter a value (-1 to 1) to calculate its sine inverse (in radians) or type 'e' to end the operation: ");
            continue;
        }

        result = asin(num);
        printf("RESULT: Sine Inverse (%.2lf) = %.2lf radians\n", num, result);

        snprintf(historyEntry, sizeof(historyEntry), "Sine Inverse(%.2lf) = %.2lf radians", num, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter a value (-1 to 1) to calculate its sine inverse (in radians) or type 'e' to end the operation: ");
    }
}
void cosInverse() {
    double num, result;
    char historyEntry[100];
    char input[100];

    printf("Enter a value (-1 to 1) to calculate its cosine inverse (in radians) or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num = -PI;
        } else if (sscanf(input, "%lf", &num) != 1) {
            system("cls");
            cosineInverseTitle();
            invalidInput();
            printf("Enter a value (-1 to 1) to calculate its cosine inverse (in radians) or type 'e' to end the operation: ");
            continue;
        } if (sscanf(input, "%lf", &num) != 1 || num < -1 || num > 1) {
            system("cls");
            cosineInverseTitle();
            printf("--------------------------------------\n");
            printf("--INPUT MUST BE IN THE RANGE -1 TO 1--\n");
            printf("--------------------------------------\n");
            printf("Enter a value (-1 to 1) to calculate its cosine inverse (in radians) or type 'e' to end the operation: ");
            continue;
        }

        result = acos(num);
        printf("RESULT: Cosine Inverse (%.2lf) = %.2lf radians\n", num, result);

        snprintf(historyEntry, sizeof(historyEntry), "Cosine Inverse (%.2lf) = %.2lf radians", num, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter a value (-1 to 1) to calculate its cosine inverse (in radians) or type 'e' to end the operation: ");
    }
}
void tanInverse() {
    double num, result;
    char historyEntry[100];
    char input[100];

    printf("Enter a value (-1 to 1) to calculate its tangent inverse (in radians) or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            num = PI;
        } else if (strcmp(input, "-PI") == 0) {
            num = -PI;
        } else if (sscanf(input, "%lf", &num) != 1) {
            system("cls");
            tangentInverseTitle();
            invalidInput();
            printf("Enter a value (-1 to 1) to calculate its tangent inverse (in radians) or type 'e' to end the operation: ");
            continue;
        } if (sscanf(input, "%lf", &num) != 1 || num < -1 || num > 1) {
            system("cls");
            tangentInverseTitle();
            printf("--------------------------------------\n");
            printf("--INPUT MUST BE IN THE RANGE -1 TO 1--\n");
            printf("--------------------------------------\n");
            printf("Enter a value (-1 to 1) to calculate its tangent inverse (in radians) or type 'e' to end the operation: ");
            continue;
        }

        result = atan(num);
        printf("RESULT: Tangent Inverse (%.2lf) = %.2lf radians\n", num, result);

        snprintf(historyEntry, sizeof(historyEntry), "Tangent Inverse (%.2lf) = %.2lf radians", num, result);
        storeHistory(historyEntry);

        printf("Enter a value (-1 to 1) to calculate its tangent inverse (in radians) or type 'e' to end the operation: ");
    }
}
void permutation() {
    double n, r, nFactorial, nMinusRFactorial, result;
    char input[100];
    char historyEntry[300];

    printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Permutation (nPr) or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        } if (strcmp(input, "PI") == 0) {
            n = PI;
        } else if (strcmp(input, "-PI") == 0) {
            n = -PI;
        } else if (sscanf(input, "%lf", &n) != 1) {
            system("cls");
            permutationTitle();
            invalidInput();
            printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Permutation (nPr) or type 'e' to end the operation: ");
            continue;
        } if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "PI") == 0) {
            r = PI;
        } else if (strcmp(input, "-PI") == 0) {
            r = -PI;
        } else if (sscanf(input, "%lf", &r) != 1) {
            system("cls");
            permutationTitle();
            invalidInput();
            printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Permutation (nPr) or type 'e' to end the operation: ");
            continue;
        } if (n < 0 || r < 0) {
            system("cls");
            permutationTitle();
            printf("-------------------------------------------\n");
            printf("--NEGATIVE NUMBERS ARE NOT ALLOWED IN nPr--\n");
            printf("-------------------------------------------\n");
            printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Permutation (nPr) or type 'e' to end the operation: ");
            continue;
        } if (n < r) {
            system("cls");
            permutationTitle();
            printf("--------------------------------------------\n");
            printf("--'n' MUST BE GREATER THAN OR EQUAL TO 'r'--\n");
            printf("--------------------------------------------\n");
            printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Permutation (nPr) or type 'e' to end the operation: ");
            continue;
        } if (n > 20) {
            system("cls");
            permutationTitle();
            printf("----------------------------------------\n");
            printf("Due to memory limitations, please enter\nvalues where n is between 0 and 20.\n");
            printf("----------------------------------------\n");
            printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Permutation (nPr) or type 'e' to end the operation: ");
            continue;
        }

        nFactorial = 1;
        nMinusRFactorial = 1;
        for (unsigned long long int i = 1; i <= n; ++i) {
            nFactorial *= i;
            if (i == n - r) {
                nMinusRFactorial = nFactorial;
            }
        }
        result = nFactorial / nMinusRFactorial;

        printf("Permutation (nPr) for n = %.2f and r = %.2f is: %.2f\n", n, r, result);

        snprintf(historyEntry, sizeof(historyEntry), "Permutation (nPr) for n = %.2f and r = %.2f = %.2f", n, r, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Permutation (nPr) or type 'e' to end the operation: ");
    }
}
void combination() {
    double n, r, nFactorial, rFactorial, nMinusRFactorial, result;
    char input[100];
    char historyEntry[300];

    printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Combination (nCr) or type 'e' to end the operation: ");

    while (1) {
        if (scanf("%s", input) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        } if (strcmp(input, "e") == 0) {
            system("cls");
            return;
        }  if (strcmp(input, "PI") == 0) {
            n = PI;
        } else if (strcmp(input, "-PI") == 0) {
            n = -PI;
        } else if (sscanf(input, "%lf", &n) != 1) {
            system("cls");
            combinationTitle();
            invalidInput();
            printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Combination (nCr) or type 'e' to end the operation: ");
            continue;
        } if (scanf("%s", input) != 1){
            invalidInput();
            while (getchar() != '\n');
            continue;
        }  if (strcmp(input, "PI") == 0) {
            r = PI;
        } else if (strcmp(input, "-PI") == 0) {
            r = -PI;
        } if (sscanf(input, "%lf", &r) != 1) {
            system("cls");
            combinationTitle();
            invalidInput();
            printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Combination (nCr) or type 'e' to end the operation: ");
            continue;
        } if (n < 0 || r < 0) {
            system("cls");
            combinationTitle();
            printf("-------------------------------------------\n");
            printf("--NEGATIVE NUMBERS ARE NOT ALLOWED IN nCr--\n");
            printf("-------------------------------------------\n");
            printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Combination (nCr) or type 'e' to end the operation: ");
            continue;
        } if (n < r) {
            system("cls");
            combinationTitle();
            printf("--------------------------------------------\n");
            printf("--'n' MUST BE GREATER THAN OR EQUAL TO 'r'--\n");
            printf("--------------------------------------------\n");
            printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Combination (nCr) or type 'e' to end the operation: ");
            continue;
        } if (n > 20) {
            system("cls");
            combinationTitle();
            printf("----------------------------------------\n");
            printf("Due to memory limitations, please enter\nvalues where n is between 0 and 20.\n");
            printf("----------------------------------------\n");
            printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Combination (nCr) or type 'e' to end the operation: ");
            continue;
        }

        nFactorial = 1;
        rFactorial = 1;
        nMinusRFactorial = 1;
        for (unsigned long long int i = 1; i <= n; ++i) {
            nFactorial *= i;
            if (i == r) {
                rFactorial = nFactorial;
            }
            if (i == n - r) {
                nMinusRFactorial = nFactorial;
            }
        }
        result = nFactorial / (rFactorial * nMinusRFactorial);

        printf("Combination (nCr) for n = %.2lf and r = %.2lf is: %.2lf\n", n, r, result);

        snprintf(historyEntry, sizeof(historyEntry), "Combination (nCr) for n = %.2lf and r = %.2lf = %.2lf", n, r, result);
        storeHistory(historyEntry);

        while (getchar() != '\n');

        printf("Enter two numbers 'n' and 'r' (n >= r) to calculate Combination (nCr) or type 'e' to end the operation: ");
    }
}
void sciCal() {
    int opt;
    while (1){
        printf("Scientific Calculator:\n");
        printf("[1] Addition\n");
        printf("[2] Subtraction\n");
        printf("[3] Multiplication\n");
        printf("[4] Division\n");
        printf("[5] Remainder\n");
        printf("[6] Power (^)\n");
        printf("[7] Permutation (nPr)\n");
        printf("[8] Combination (nCr)\n");
        printf("[9] Factorial\n");
        printf("[10] Sine (in radians)\n");
        printf("[11] Cosine (in radians)\n");
        printf("[12] Tangent (in radians)\n");
        printf("[13] Logarithm (base e)\n");
        printf("[14] Logarithm (base 10)\n");
        printf("[15] Exponential (e^x)\n");
        printf("[16] Squareroot(^2)\n");
        printf("[17] Cuberoot(^3)\n");
        printf("[18] Absolute Value\n");
        printf("[19] Sine Inverse (in radians)\n");
        printf("[20] Cosine Inverse (in radians)\n");
        printf("[21] Tangent Inverse (in radians)\n");
        printf("[22] Exit to main menu\n");
        printf("Enter an option: ");
        if (scanf("%d", &opt) != 1) {
            system("cls");
            invalidInput();
            while (getchar() != '\n');
            return sciCal();
        }

        switch (opt) {
            case 1:
                system("cls");
                additionTitle();
                addition();
                break;
            case 2:
                system("cls");
                subtractionTitle();
                subtraction();
                break;
            case 3:
                system("cls");
                multiplicationTitle();
                multiplication();
                break;
            case 4:
                system("cls");
                divisionTitle();
                division();
                break;
            case 5:
                system("cls");
                remainderTitle();
                remain();
                break;
            case 6:
                system("cls");
                powerTitle();
                power();
                break;
            case 7:
                system("cls");
                permutationTitle();
                permutation();
                break;
            case 8:
                system("cls");
                combinationTitle();
                combination();
                break;
            case 9:
                system("cls");
                factorialTitle();
                factorial();
                break;
            case 10:
                system("cls");
                sineTitle();
                sine();
                break;
            case 11:
                system("cls");
                cosineTitle();
                cosine();
                break;
            case 12:
                system("cls");
                tangentTitle();
                tangent();
                break;
            case 13:
                system("cls");
                logarithmBaseETitle();
                logarithmNatural();
                break;
            case 14:
                system("cls");
                logarithmBase10Title();
                logarithmCommon();
                break;
            case 15:
                system("cls");
                exponentialTitle();
                exponential();
                break;
            case 16:
                system("cls");
                squareRootTitle();
                squareRoot();
                break;
            case 17:
                system("cls");
                cubeRootTitle();
                cubeRoot();
                break;
            case 18:
                system("cls");
                absoluteTitle();
                absolute();
                break;
            case 19:
                system("cls");
                sineInverseTitle();
                sinInverse();
                break;
            case 20:
                system("cls");
                cosineInverseTitle();
                cosInverse();
                break;
            case 21:
                system("cls");
                tangentInverseTitle();
                tanInverse();
                break;
            case 22:
                system("cls");
                return;
            default:
                system("cls");
                invalidInput();
                while (getchar() != '\n');
                return sciCal();
        }
    }
}
// Main
int main() {
    int opt;

    while (1) {
        printf("Choose a calculator:\n");
        printf("[1] Basic Calculator\n");
        printf("[2] Scientific Calculator\n");
        printf("[3] Check History\n");
        printf("[4] Exit program\n");
        printf("Enter an option: ");

        if (scanf("%d", &opt) != 1) {
            invalidInput();
            while (getchar() != '\n');
            continue;
        }
        system("cls");
        switch (opt) {
            case 1:
                basicCalc();
                break;
            case 2:
                sciCal();
                break;
            case 3:
                printHistory();
                break;
            case 4:
                printf("Goodbye!\n");
                return 0;
            default:
                invalidInput();
                while (getchar() != '\n');
                break;
        }
    }
    return 0;
}