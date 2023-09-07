#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - keygen for crackme5
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
    char *username;
    char *serial;
    int len, i, j, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6;
    (void)argc;

    if (argc != 2)
        return (1);
    username = argv[1];
    len = strlen(username);
    serial = calloc(1, 7);
    serial[0] = username[0] ^ 0x3b;
    for (i = 0, j = 0; i < len; i++)
        j += username[i];
    serial[1] = ((char)j ^ 0x4f);
    for (j = 1, i = 0; i < len; i++)
        j *= username[i];
    serial[2] = ((char)j ^ 0x55);
    for (j = 0, i = 0; i < len; i++)
    {
        if (username[i] > j)
            j = username[i];
    }
    srand(j ^ 0xe);
    serial[3] = rand();
    for (j = 0, i = 0; i < len; i++)
        j += username[i] * username[i];
    serial[4] = ((char)j ^ 0xef);
    for (j = 0, i = 0; i < username[0]; i++)
    {
        tmp1 = rand();
        tmp2 = tmp1 >> 0x1f;
        tmp3 = tmp1 >> 0x1e;
        tmp4 = tmp1 >> 0x1d;
        tmp5 = tmp1 >> 0x1c;
        tmp6 = tmp1 >> 0x1b;
        j = tmp1 - (tmp2 + tmp3 + tmp4 + tmp5 + tmp6);
    }
    serial[5] = ((char)j ^ 0xe5);
    printf("%s", serial);
    free(serial);
    return (0);
}