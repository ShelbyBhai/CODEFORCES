
/*Submitted by : TASNIM DOHA
  Student ID : 1605108 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

double mat1(double a11, double a12, double a13, double a14, double px, double py, double pz)
{
    double r;
    r = (a11*px) + (a12*py) + (a13*pz) + a14;
    return r;
}

double mat2(double a21, double a22, double a23, double a24, double px, double py, double pz)
{
    double s;
    s = (a21*px) + (a22*py) + (a23*pz) + a24;
    return s;
}

double mat3(double a31, double a32, double a33, double a34, double px, double py, double pz)
{
    double t;
    t = (a31*px) + (a32*py) + (a33*pz) + a34;
    return t;
}

int main()
{
    double a11, a12, a13, a14, a21, a22, a23, a24, a31, a32, a33, a34, a41, a42, a43, a44;
    double px, py, pz, tx, ty, tz, tempx, tempy, tempz, ang, val;
    val = PI / 180.0;
    printf("Enter co-ordinates of the point : ");
    scanf("%lf %lf %lf", &px, &py, &pz);
    char ch, axis;
    int i, n;
    printf("Enter number of transformations : ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter type of transformation : ");
        scanf("%*c%c", &ch);

        if(ch == 't' || ch == 'T')
        {
            printf("Enter translation coordinates : ");
            scanf("%lf %lf %lf", &tx, &ty, &tz);
            a11 = 1, a12 = 0, a13 = 0, a14 = tx;
            a21 = 0, a22 = 1, a23 = 0, a24 = ty;
            a31 = 0, a32 = 0, a33 = 1, a34 = tz;
            tempx = mat1(a11, a12, a13, a14, px, py, pz);
            tempy = mat2(a21, a22, a23, a24, px, py, pz);
            tempz = mat3(a31, a32, a33, a34, px, py, pz);
            px = tempx;
            py = tempy;
            pz = tempz;
        }
        else if(ch == 'r' || ch == 'R')
        {
            printf("Enter the axis of rotation : ");
            scanf("%*c%c", &axis);
            printf("Enter angle of rotation : ");
            scanf("%lf", &ang);

            if(axis == 'x')
            {
                a11 = 1, a12 = 0, a13 = 0, a14 = 0;
                a21 = 0, a22 = cos(ang*val), a23 = -sin(ang*val), a24 = 0;
                a31 = 0, a32 = sin(ang*val), a33 = cos(ang*val), a34 = 0;
            }
            else if(axis == 'y')
            {
                a11 = cos(ang*val), a12 = 0, a13 = sin(ang*val), a14 = 0;
                a21 = 0, a22 = 1, a23 = 0, a24 = 0;
                a31 = -sin(ang*val), a32 = 0, a33 = cos(ang*val), a34 = 0;
            }
            else if(axis == 'z')
            {
                a11 = cos(ang*val), a12 = -sin(ang*val), a13 = 0, a14 = 0;
                a21 = sin(ang*val), a22 = cos(ang*val), a23 = 0, a24 = 0;
                a31 = 0, a32 = 0, a33 = 1, a34 = 0;
            }

            tempx = mat1(a11, a12, a13, a14, px, py, pz);
            tempy = mat2(a21, a22, a23, a24, px, py, pz);
            tempz = mat3(a31, a32, a33, a34, px, py, pz);
            px = tempx;
            py = tempy;
            pz = tempz;
        }
    }

    printf("Co-ordinates after transformation : %.5lf , %.5lf , %.5lf\n", px, py, pz);

    return 0;
}
