#include <stdio.h>
void main()
{
    int s1 = 50, s2 = 65, s3 = 71, s4 = 36, s5 = 78;
    float totalMarksObtained = s1 + s2 + s3 + s4 + s5;
    float per = (totalMarksObtained / 500) * 100;
    printf("per: %f ", per);
}