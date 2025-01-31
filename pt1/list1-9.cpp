#include <cstdio>

int absolute_value(int x);
int sum(int x, int y);

int main() {
    int my_num = -10;
    printf("The abslute value of %d is %d\n", my_num, absolute_value(my_num));
    printf("The sum of %d and %d is %d\n", my_num, absolute_value(my_num), sum(my_num, absolute_value(my_num)));
}

int absolute_value(int x) {
    if (x < 0) {
        return  x * -1;
    } else {
        return x;
    }
}

int sum(int x, int y) {
    return x + y;
}