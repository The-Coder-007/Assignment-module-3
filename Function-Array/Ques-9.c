// WAP to show difference between Structure and Union.

/*

Structures and unions are both used to group related data together in C, but they have some key differences in terms of how they allocate memory and how they handle data.


STRUCTURE 

In a structure, each member has its own allocated memory space.
Members of a structure are accessed using their individual names.
The memory required for a structure is the sum of the memory required by each member.
All members of a structure are allocated memory simultaneously.

example : struct Point {
    int x;
    int y;
};

Union:

In a union, all members share the same memory space.
Members of a union are accessed using the union's name, and only one member can be active at any given time.
The memory required for a union is the size of its largest member.
Memory is allocated for only one member at a time, and changing the value of one member will overwrite the value of other members.
Example: union Data {
    int intValue;
    float floatValue;
};

*/

#include <stdio.h>

// Define a structure
struct Point {
    int x;
    int y;
};

// Define a union
union Data {
    int intValue;
    float floatValue;
};

int main() {
    // Structure example
    struct Point p;
    p.x = 10;
    p.y = 20;
    printf("Structure: x = %d, y = %d\n", p.x, p.y);

    // Union example
    union Data d;
    d.intValue = 10;
    printf("Union: intValue = %d\n", d.intValue);
    d.floatValue = 3.14;
    printf("Union: floatValue = %.2f\n", d.floatValue);

    return 0;
}