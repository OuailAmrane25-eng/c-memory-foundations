#include <stdio.h>
#include <string.h>

int main(void) {
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy: ");
    if (fgets(item, sizeof(item), stdin) == NULL) {
        return 1;
    }
    item[strcspn(item, "\n")] = '\0';

    printf("What is the price for each item: ");
    if (scanf("%f", &price) != 1) {
        printf("Invalid price input.\n");
        return 1;
    }

    printf("How many items would you like to buy: ");
    if (scanf("%d", &quantity) != 1) {
        printf("Invalid quantity input.\n");
        return 1;
    }

    total = price * quantity;
    printf("The total cost for %d %s(s) is %c%.2f\n", quantity, item, currency, total);

    return 0;
}
