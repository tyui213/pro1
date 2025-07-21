#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int left;
    int top;
    int right;
    int bottom;
    int x;
    int y;

    printf("선택 영역의 좌상단점 (left, top)? ");
    scanf("%d %d", &left, &top);

    printf("선택 영역의 우하단점 (right, bottom)? ");
    scanf("%d %d", &right, &bottom);

    printf("점의 좌표 (x, y)? ");
    scanf("%d %d", &x, &y);

   
    int minX = (left < right) ? left : right;
    int maxX = (left > right) ? left : right;
    int minY = (top < bottom) ? top : bottom;
    int maxY = (top > bottom) ? top : bottom;

    if (x >= minX && x <= maxX && y >= minY && y <= maxY) {
        printf("직사각형 모양의 선택 영역 내의 점입니다.\n");
    }
    else {
        printf("직사각형 모양의 선택 영역 밖의 점입니다.\n");
    }

    return 0;
}
