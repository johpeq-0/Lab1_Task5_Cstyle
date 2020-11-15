#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main()
{
    char name[41];
    int age;
    char gender;
    char address[41];
    char married[6];
    float height;

    printf("Name: ");
    (void)scanf(" %40[^\n]s%*c", &name); // [^\n] makes scanf take the full line until the newline character.
    printf("Age: ");
    (void)scanf(" %d%*c", &age);
    printf("Gender (m/f): ");
    (void)scanf(" %c%*c", &gender);
    printf("Address: ");
    (void)scanf(" %40[^\n]s%*c", &address);
    printf("Married (true/false): ");
    (void)scanf(" %s%*c", &married);
    printf("Height in meters: ");
    (void)scanf(" %f%*c", &height);

    printf("\nName: %s",name);
    printf("\nAge: %d", age);
    printf("\nGender: %c", gender);
    printf("\nAddress: %s", address);
    printf("\nMarried: %s", married);
    printf("\nHeight in meters: %f", height);

    return 0;
}