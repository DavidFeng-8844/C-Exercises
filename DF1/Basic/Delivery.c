#include <stdio.h>

int main() {
  float weight;
  int  areaCode;
  float fee;

  printf("Enter the weight of the package (in kilograms): ");
  scanf("%f", &weight);

  printf("Enter the destination area code: ");
  scanf("%d", &areaCode);

  if (areaCode == 1) {
    if (weight <= 1) {
      fee = 10.0 * weight;
    } else {
      fee = 10.0 + (weight - 1) * 8.0;
    }
  } else if (areaCode == 2) {
    if (weight <= 1) {
      fee = 12.0 * weight;
    } else {
      fee = 12.0 + (weight - 1) * 8.0;
    }
  } else if (areaCode == 3) {
    if (weight <= 1) {
      fee = 15.0 * weight;
    } else {
      fee = 15.0 + (weight - 1) * 10.0;
    }
  } else {
    printf("Invalid area code!\n");
    return 1;
  }

  printf("The shipping fee is $%.2f\n", fee);
  return 0;
}
