#include <stdio.h>
#include <string.h> 
typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point p1 = {10, 20};
    Point p2 = {10, 20};
    Point p3 = {5, 15};

    if (memcmp(&p1, &p2, sizeof(Point)) == 0) {
        printf("p1 and p2 are identical (using memcmp).\n");
    } else {
        printf("p1 and p2 are not identical (using memcmp).\n");
    }

    if (memcmp(&p1, &p3, sizeof(Point)) == 0) {
        printf("p1 and p3 are identical (using memcmp).\n");
    } else {
        printf("p1 and p3 are not identical (using memcmp).\n");
    }

    return 0;
}