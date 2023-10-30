#include <stdio.h>

// Declare functions
int Construct_Array(int array[], int size);
void Display_Array(int array[], int size);
void Add_Arrays(int array1[], int size1, int array2[], int size2, int result[]);

int main()
{
    int choose;
    int array[100];
    int array2[100];
    int result[100]; // Array to store the result of addition
    int size1 = 0; // Variable to track the size of array
    int size2 = 0; // Variable to track the size of array2
    int resultSize = 0; // Variable to track the size of the result array
    char anotherOperation; // Variable to ask for another operation

    do {
        printf("Choose from the following operations:\n");
        printf("1: for Making An Array\n");
        printf("2: for Making A Second Array\n");
        printf("3: for Accessing An Array\n");
        printf("4: for Accessing An Array2\n");
        printf("5: for Addition Of Arrays\n");

        // Get user's choice
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            size1 = Construct_Array(array, 100); // Call the function to create an array
            break;
        case 2:
            size2 = Construct_Array(array2, 100); // Call the function to create a second array
            break;
        case 3:
            Display_Array(array, size1); // Call the function to display the first array
            break;
        case 4:
            Display_Array(array2, size2); // Call the function to display the second array
            break;
        case 5:
            if (size1 == 0 || size2 == 0) {
                printf("Please create both arrays before adding them.\n");
            } else {
                Add_Arrays(array, size1, array2, size2, result);
                resultSize = size1 > size2 ? size1 : size2; // Result size is the larger of the two input arrays
                Display_Array(result, resultSize);
            }
            break;
        default:
            printf("Invalid choice\n");
            break;
        }

        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &anotherOperation); // Note the space before %c to consume the newline character
    } while (anotherOperation == 'y' || anotherOperation == 'Y');

    return 0;
}

// Function to construct an array
int Construct_Array(int array[], int size)
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n > size) {
        printf("Array size is too large.\n");
        return 0;
    }

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    return n;
}

// Function to display an array
void Display_Array(int array[], int size)
{
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Function to add two arrays and store the result in a third array
void Add_Arrays(int array1[], int size1, int array2[], int size2, int result[])
{
    int maxSize = size1 > size2 ? size1 : size2;
    for (int i = 0; i < maxSize; i++) {
        result[i] = (i < size1 ? array1[i] : 0) + (i < size2 ? array2[i] : 0);
    }
}
