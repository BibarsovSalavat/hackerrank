#include <stdio.h>
#include <stdlib.h>

#define MAX_HEIGHT 41

// Boxes through a Tunnel
// https://www.hackerrank.com/challenges/too-high-boxes/problem

/*
 * You are transporting some boxes through a tunnel, where each box is a parallelepiped, and is characterized by its
 * length, width and height.
 * The height of the tunnel 41 feet and the width can be assumed to be infinite. A box can be carried through
 * the tunnel only if its height is strictly less than the tunnel's height. Find the volume of each box that
 * can be successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated.
 *
*/

struct Sbox {
    int width, height, length;
};

typedef struct Sbox box;

int get_volume(box box){

    return box.width * box.height * box.length;
}

int is_lower_than_max_height(box b) {
    /**
    * Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
    */
    return b.height < MAX_HEIGHT ? 1: 0;
}

int main(){

    int n;
    scanf("%d", &n);
    box *boxes = malloc(n * sizeof(box));
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    }
    for (int i = 0; i < n; i++) {
        if (is_lower_than_max_height(boxes[i])) {
            printf("%d\n", get_volume(boxes[i]));
        }
    }

    return 0;
}