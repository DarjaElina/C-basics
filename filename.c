#include <unistd.h>

int main(void)
{
    int i = 97;

    while (i <= 122)
    {
        write(1, &i, 1);
        i++;
    }
}
