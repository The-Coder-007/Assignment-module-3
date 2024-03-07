// Write a C program to determine eligibility for admission to a professional
// course based on the following criteria
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
// in Chem>=50 and Total in all three subject >=190 or Total in Maths and
// Physics >=140 --------------------------------------Input the marks obtained in
// Physics :65 Input the marks obtained in Chemistry :51 Input the marks
// obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
// 188 Total marks of Maths and Physics : 137 The candidate is not eligible.

#include <stdio.h>

int main() {
    int phy_marks, chem_marks, maths_marks, total_marks, total_maths_physics;

    // Input marks obtained in Physics, Chemistry, and Mathematics
    printf("Enter marks obtained in Physics: ");
    scanf("%d", &phy_marks);
    printf("Enter marks obtained in Chemistry: ");
    scanf("%d", &chem_marks);
    printf("Enter marks obtained in Mathematics: ");
    scanf("%d", &maths_marks);

    // Input total marks of Maths, Physics, and Chemistry
    printf("Enter total marks of Maths, Physics, and Chemistry: ");
    scanf("%d", &total_marks);

    // Input total marks of Maths and Physics
    printf("Enter total marks of Maths and Physics: ");
    scanf("%d", &total_maths_physics);

    // Check eligibility based on criteria
    if ((phy_marks >= 55 && chem_marks >= 50 && maths_marks >= 65 && total_marks >= 190) || total_maths_physics >= 140) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
