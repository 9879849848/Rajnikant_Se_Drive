 //WAP to find area of circle, rectangle and triangle
 #include<stdio.h>
 main ()
 {
  float radius,area_circle;
  printf("Enter radius of circle:");
  scanf("%f",&radius);
  area_circle=3.14*radius*radius;
  printf("Area of circle:%f",area_circle);	
} 

//rectangle
#include<stdio.h>
 main ()
{

    	int height,width,area_rectangle;
    	printf("Enter Height and Width of Rectangle :");
    	scanf("%d%d",&height,&width);
    	area_rectangle=height*width;
    	printf("Area of the rectangle:%d",area_rectangle);
	
}
#include<stdio.h>
 main ()
{

    	int height,base,area_triangle;
    	printf("Enter Height and Width of triangle :");
    	scanf("%d%d",&height,&base);
    	area_triangle=height*base*1/2;
    	printf("Area of the triangle:%d",area_triangle);
	
}

