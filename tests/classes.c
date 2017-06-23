#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Class_t;
struct Class_t {
    int (*add)(int, int);
    int a;
    int b;
    struct Class_t *thing;
};
typedef struct Class_t Class;

int add_int(int a, int b){
    return a + b;
}

int main(void){
    Class stuff = {&add_int, 1, 3};
    stuff.thing = (struct Class_t*)malloc(sizeof(struct Class_t));
    stuff.thing->add = &add_int;
    stuff.thing->a = 2;
    stuff.thing->b = 5; // {&add_int, 2, 5};
    int c = stuff.add(stuff.a, stuff.b);
    int d = stuff.thing->add(stuff.a, stuff.thing->a);
    printf("%d\n", c);
    printf("%d\n", d);
}
