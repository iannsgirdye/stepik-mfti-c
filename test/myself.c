// Последовательность Бабицкого --- аналог последовательности Фибоначчи, но с тремя элементами
// ivan(0) = 0, ivan(1) = 1, ivan(2) = 2, 
// ivan(n) = ivan(n - 1) + ivan(n - 2) + ivan(n - 3)
// ivan(3) = ivan(3 - 1) + ivan(3 - 2) + ivan(3 - 3)

#include <stdio.h>

int ivan(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else if(n == 2)
    {
        return 2;
    }
    return ivan(n - 1) + ivan(n - 2) + ivan(n - 3);
}

int main()
{
    int n;
    printf("Введите номер: ");
    scanf("%d", &n);
    
    printf("Значение: %d\n", ivan(n));

    return 0;
}
