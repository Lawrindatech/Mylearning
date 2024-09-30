#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x = 200, y = 200, radius = 100;
    circle(x, y, radius);

    getch();
    closegraph();
    return 0;
}
