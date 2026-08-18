#include <stdio.h>

int main() {
    float units, bill;

    printf("=========================================\n");
    printf("       ELECTRICITY BILL CALCULATOR       \n");
    printf("=========================================\n");
    printf("Enter total electricity units consumed: ");
    scanf("%f", &units);

    // Decision Making using Else-If Ladder
    if (units < 0) {
        printf("\nInvalid input! Units consumed cannot be negative.\n");
        return 1;
    } 
    else if (units <= 50) {
        // Slab 1: First 50 units @ 0.50
        bill = units * 0.50;
    } 
    else if (units <= 150) {
        // Slab 2: Next 100 units @ 0.75
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    } 
    else if (units <= 250) {
        // Slab 3: Next 100 units @ 1.20
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } 
    else {
        // Slab 4: Above 250 units @ 1.75
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.75);
    }

    // Displaying the final calculated bill
    printf("=========================================\n");
    printf("Total Units Consumed : %.2f units\n", units);
    printf("Total Electricity Bill: Rs. %.2f\n", bill);
    printf("=========================================\n");

    return 0;
}
