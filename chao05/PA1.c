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

    printf("���� ������ �»���� (left, top)? ");
    scanf("%d %d", &left, &top);

    printf("���� ������ ���ϴ��� (right, bottom)? ");
    scanf("%d %d", &right, &bottom);

    printf("���� ��ǥ (x, y)? ");
    scanf("%d %d", &x, &y);

   
    int minX = (left < right) ? left : right;
    int maxX = (left > right) ? left : right;
    int minY = (top < bottom) ? top : bottom;
    int maxY = (top > bottom) ? top : bottom;

    if (x >= minX && x <= maxX && y >= minY && y <= maxY) {
        printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
    }
    else {
        printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
    }

    return 0;
}
