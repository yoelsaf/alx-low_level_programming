#include "main.h"
/*
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
    /* local variable declaration */
    int i = 0, j = 0, k, l = 0, f, s, d = 0;

    while (n1[i] != '0')
        i++;
    while (n2[j] != '\#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/*
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
        int num, tens = 0;

        for (; *n1 && *n2; n1--, n2--, r_index--)
        {
            num = (*n1 - '0') + (*n2 - '0');
            num += tens;
            *(r + r_index) = (num % 10) + '0';
            tens = num / 10;
        }

        for (; *n1; n1--, r_index--)
        {
            num = (*n1 - '0') + tens;
            *(r + r_index) = (num % 10) + '0';
            tens = num / 10;
        }

        for (; *n2; n2--, r_index--)
        {
            num = (*n2 - '0') + tens;
            *(r + r_index) = (num % 10) + '0';
            tens = num / 10;
        }

        if (tens && r_index >= 0)
        {
            *(r + r_index) = (tens % 10) + '0';
            return (r + r_index);
        }

        else if (tens && r_index < 0)
            return (0);

        return (r + r_index + 1);
}
/*
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
        int index, n1_len = 0, n2_len = 0;

        for (index = 0; *(n1 + index); index++)
            n1_len++;

        for (index = 0; *(n2 + index); index++)
            n2_len++;

        if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
            return (0);

        n1 += n1_len - 1;
        n2 += n2_len - 1;
        *(r + size_r) = '\0';

        return (add_strings(n1, n2, r, --size_r));
}
0')
        j++;
    if (i > j)
        l = i;
    else
        l = j;
    if (l + 1 > size_r)
        return (0);
    r[l] = '\0';
    for (k = l - 1; k >= 0; k--)
    {
        i--;
        j--;
        if (i >= 0)
            f = n1[i] - '0';
        else
            f = 0;
        if (j >= 0)
            s = n2[j] - '0';
        else
            s = 0;
        r[k] = (f + s + d) % 10 + '0';
        d = (f + s + d) / 10;
    }
    if (d == 1)
    {
        r[l + 1] = '\0';
        if (l + 2 > size_r)
            return (0);
        while (l-- >= 0)
            r[l + 1] = r[l];
        r[0] = d + '0';
    }
    return (r);
}
