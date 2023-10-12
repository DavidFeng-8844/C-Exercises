#include <stdio.h>

int main() {
  int weight, areaCode;
  float fee;

  printf("Enter the weight of the package (in grams): ");
  scanf("%d", &weight);

  printf("Enter the destination area code: ");
  scanf("%d", &areaCode);

  if (weight <= 500) {
    if (areaCode == 1) {
      fee = 3.0;
    } else if (areaCode == 2) {
      fee = 4.0;
    } else if (areaCode == 3) {
      fee = 5.0;
    } else {
      printf("Invalid area code\n");
      return 0;
    }
  } else {
    if (areaCode == 1) {
      fee = 3.0 + 0.5 * (weight - 500) / 100;
    } else if (areaCode == 2) {
      fee = 4.0 + 0.5 * (weight - 500) / 100;
    } else if (areaCode == 3) {
      fee = 5.0 + 0.5 * (weight - 500) / 100;
    } else {
      printf("Invalid area code\n");
      return 0;
    }
  }

  printf("The shipping fee is $%.2f\n", fee);
  return 0;
}
