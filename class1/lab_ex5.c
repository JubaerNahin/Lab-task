#include<stdio.h>
int main()
{
    double length,breadth,radius,rec_area,rec_perimeter,circle_area,circle_circumference;
    printf("length of rectangle:");
    scanf("%lf",&length);
    printf("breadth of rectangle:");
    scanf("%lf",&breadth);
    printf("radius of a circle:");
    scanf("%lf",&radius);
    rec_area=length*breadth;
    rec_perimeter=2*(length+breadth);
    circle_area=3.1416*radius*radius;
    circle_circumference=2*3.1416*radius;
    printf("Area of rectangle:%.2lf\n",rec_area);
    printf("Perimeter of rectangle:%.2lf\n",rec_perimeter);
    printf("Area of circle:%.2lf\n",circle_area);
    printf("circumference of circle:%.2lf\n",circle_circumference);
    return 0;
}
