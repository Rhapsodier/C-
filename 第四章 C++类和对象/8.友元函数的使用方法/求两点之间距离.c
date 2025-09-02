#include<stdio.h>
#include<math.h>

typedef struct{
    double x;
    double y;
}Point;

int NewPoint(Point *p)
{
    printf("Please input x and y:");
    scanf("%lf %lf",&p->x,&p->y);
    return 0;
}

double Distance(Point p1,Point p2)
{
   double xx;
   double yy;
   double dis;
   xx = p1.x-p2.x;
   yy = p1.y-p2.y;
   dis = sqrt(xx*xx+yy*yy);
   return dis;
}

int main()
{
    Point p1,p2;
    NewPoint(&p1);
    NewPoint(&p2);
    printf("The distance between two points is %lf",Distance(p1,p2));
    return 0;
}