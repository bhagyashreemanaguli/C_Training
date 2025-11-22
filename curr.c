#include <stdio.h>
void fake_swap(float ca,float cb)
{
    float temp = 0;
    temp = ca;
    ca = cb;
    cb = temp;
    printf("fake_swap fn ca = %f cb = %f\n",ca,cb);
}
void real_swap(float *ca,float *cb)
{
    float temp = 0;
    temp = *ca;
    *ca = *cb;
    *cb = temp;
    printf("real_swap fn ca = %f cb = %f\n",*ca,*cb);
}
void main()
{
    float ca,cb;
    printf("enter currency a");
    scanf("%f",&ca);
    printf("enter currency b");
    scanf("%f",&cb);

    fake_swap(ca,cb);
    printf("fake swap fn ca = %f cb = %f\n",ca,cb);

    real_swap(&ca, &cb);
    printf("real swap fn ca = %f cb = %f\n",ca,cb);
}
