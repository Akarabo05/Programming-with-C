# Navigate to workspace
cd /workspaces/Programming-with-C

# Create a new file (if not already created)
touch add_ten.c

# Open it in the editor
nano add_ten.c
#include <stdio.h>

int main() {
    int num;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Add 10 to the number
    int result = num + 10;

    // Print the result
    printf("The result is: %d\n", result);

    return 0;
}
