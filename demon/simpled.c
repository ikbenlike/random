#define _DEFAULT_SOURCE
#include <unistd.h>

int main(void){
    int state = daemon(0, 1);
    if(state == -1){
        return 1;
    }
    else {
        while(1){
        }
    }
    return 0;
}
