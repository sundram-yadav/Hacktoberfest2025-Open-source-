#include <stdio.h>

int main() {
    char *str = "HELLO";
    char arr[6] = {'H', 'E', 'L', 'L', 'O', '\0'};

    printf("String (str) before: %s\n", str);
 
    for (int i = 0; i < 5; i++) {
        printf("Address of cell number %d = %p\n", i, (void*)str);
        printf("Content at cell number %d = %c\n", i, *str);
        str = str + 1;
    }

 
    printf("\nString literal cannot be modified!\n");

 
    printf("\nArray (arr) before: %s\n", arr);
 
    str = arr;
    *str = 'Y'; // Modify the array via the pointer

    printf("Array (arr) after: %s\n\n", arr);
 
    printf("Address of pointer variable str: %p\n", (void*)&str);
    printf("Value stored in str (i.e., address it points to): %p\n", (void*)str);
    printf("Size of pointer variable str: %zu bytes\n", sizeof(str));
    printf("Size of array arr: %zu bytes\n", sizeof(arr));

    return 0;
}
