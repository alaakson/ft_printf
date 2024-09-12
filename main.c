#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ret1, ret2;

    // Character
    char c = 'A';
    ret1 = printf("Original: %c\n", c);
    ret2 = ft_printf("Custom: %c\n", c);

    // String
    char *str = "Hello, world!";
    ret1 = printf("Original: %s\n", str);
    ret2 = ft_printf("Custom: %s\n", str);

    // Pointer
    void *ptr = &c;
    ret1 = printf("Original: %p\n", ptr);
    ret2 = ft_printf("Custom: %p\n", ptr);

    // Decimal / Integer
    int d = 42;
    ret1 = printf("Original: %d\n", d);
    ret2 = ft_printf("Custom: %d\n", d);

    // Unsigned Integer
    unsigned int u = 42000;
    ret1 = printf("Original: %u\n", u);
    ret2 = ft_printf("Custom: %u\n", u);

    // Hexadecimal (lowercase)
    ret1 = printf("Original: %x\n", u);
    ret2 = ft_printf("Custom: %x\n", u);

    // Hexadecimal (uppercase)
    ret1 = printf("Original: %X\n", u);
    ret2 = ft_printf("Custom: %X\n", u);

    // Percent sign
    ret1 = printf("Original: %%\n");
    ret2 = ft_printf("Custom: %%\n");

    return 0;
}
