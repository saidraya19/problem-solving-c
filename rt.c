#include <stdio.h>

int main(int argc, char **argv, char **env)
{
    int i = 0;

    // كنستعملو Loop باش ندوزو على كاع السطور لي فـ env
    // env[i] كيكون NULL فاش كيساليو المتغيرات
    while (env[i] != NULL)
    {
        printf("Variable %d: %s\n", i, env[i]);
        i++;
    }
    return (0);
}
