int main() {
    int  num1, num2;
    char operator;

    // Taking input for two numbers and the operator
    printf("Enter two numbers followed by an operator (+, -, *, /): ");
    scanf("%f %f %c", &num1, &num2, &operator);

    // Perform the calculation based on the operator
    if (operator == '+') {
        printf("%d", num1, num2, num1 + num2);
    } 
    else if (operator == '-') {
        printf("%d", num1, num2, num1 - num2);
    } 
    else if (operator == '*') {
        printf("%d", num1, num2, num1 * num2);
    } 
    else if (operator == '/') {
        if (num2 != 0) {
            printf("%d", num1, num2, num1 / num2);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
    } 
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}

    


    
    


