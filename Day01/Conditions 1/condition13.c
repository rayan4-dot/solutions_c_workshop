#include <stdio.h>


// objectif : where's the dot P ? 

int segment(float x1, float y1, float x2, float y2, float px, float py) {

    // if the dot is at the same line as the segment
    float crossP = (py - y1) * (x2 - x1) - (px - x1) * (y2 - y1);
    
    
    //the “crossP” part checks if they line up
    
    if (crossP != 0) {
        return 0; // if the dot is at the segment
    }

    // if the dot is at the end of the segment
    if (px < x1 || px > x2 || py < y1 || py > y2) {
        return 0; // Le point n'est pas sur le segment
    }

}

int main() {
    // addressing the dots coordinates

    float x1, y1, x2, y2; 
    float px, py;       

    printf("coordinates of first end dot x1, y1 : ");
    scanf("%f %f", &x1, &y1);
    printf("coordinates of second end dot(x2, y2) : ");
    scanf("%f %f", &x2, &y2);
    printf("coordinates of the points (px, py) : ");
    scanf("%f %f", &px, &py);

    // if the dot is at the segment 

    if (segment(x1, y1, x2, y2, px, py)) {
        printf("The dot (%f, %f) is on the segment.\n", px, py);

        // If Point P lines up, then yes it's one the segment
    } else {
        printf("The dot (%f, %f) isn't on the sefment.\n", px, py);
    }
//     nope, it’s not on the segment.
    return 0;
}
