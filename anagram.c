/*
** EPITECH PROJECT, 2019
** anagram.c
** File description:
** find anagram
*/

#include <unistd.h>
#include <stdlib.h>

void anagram(char *s1, char *s2)
{
    while (*s2){
        if (*s1 = *s2)
            s1++;
        s2++;
    }
    if (!*s1)
        write(1, "anagram!", 8);
    else
        write(1, "no anagrams.", 13);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        anagram(av[1], av[2]);
    }
    else
        return (84);
    write(1, "\n", 1);
    return (0);
}
