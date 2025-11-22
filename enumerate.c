#include <stdio.h>
enum month
{
    jan = 1,
    feb,march,apr,may,jun,jul,aug,sep,oct,nov,dec

};
void main()
{
    enum month m;
    m = may;
    char *season;
    switch(m)
    {
        case dec:case jan: case feb:
        season = "winter"; break;
        case march:case apr: case may:
        season = "summer"; break;
        case jun:case jul:case aug:
        season = "monsoon"; break;
        case sep:case oct:case nov:
        season = "spring"; break;
    }
    printf("season is %s",season);
}
