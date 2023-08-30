#include <stdio.h>
int main()
{
    int xyz, x, y, z, yzx, zxy;
    if (xyz > 0)
    {
        scanf("%d", &xyz);
    }
    x = xyz / 100;
    y = (xyz / 10) % 10;
    z = xyz % 10;

    yzx = y * 100 + z * 10 + x;
    zxy = z * 100 + x * 10 + y;

    int ans = xyz + yzx + zxy;

    printf("%d\n", ans);
}
