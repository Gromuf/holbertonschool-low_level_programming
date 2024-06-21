#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers without using long long, malloc,
 * pointers, array/tables, or structures
 * Return: 0
 */

int main(void)
{
    int counter, overflow;
    unsigned long a1 = 1;
    unsigned long a2 = 1;
    unsigned long sum;
    unsigned long a1_head, a1_tail, a2_head, a2_tail, sum_head, sum_tail;

    printf("1, 1");

    for (counter = 3; counter < 93; counter++)
    {
        sum = a1 + a2;
        a1 = a2;
        a2 = sum;
        printf(", %lu", sum);
    }

    a1_head = a1 / 1000000000; /* break larger num into 2 parts */
    a1_tail = a1 % 1000000000;
    a2_head = a2 / 1000000000;
    a2_tail = a2 % 1000000000;

    for (; counter < 99; counter++)
    {
        overflow = (a1_tail + a2_tail) / 1000000000;
        sum_tail = (a1_tail + a2_tail) - (1000000000 * overflow);
        sum_head = (a1_head + a2_head) + overflow;

        printf(", %lu%09lu", sum_head, sum_tail);

        a1_head = a2_head;
        a1_tail = a2_tail;
        a2_head = sum_head;
        a2_tail = sum_tail;
    }

    printf("\n");

    return (0);
}
