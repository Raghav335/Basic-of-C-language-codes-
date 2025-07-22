int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial of negative number doesn't exist.\n");
    else {
        for(i = 1; i <= n; i++)
            fact *= i;
        printf("Factorial = %llu\n", fact);
    }

    return 0;
}
