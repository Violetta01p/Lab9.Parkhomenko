#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

struct Circle {
    double radius;
    Point center;
};

int main() {
    Circle circle;
    Point point;

    cout << "Enter circle radius and center (radius x y): ";
    cin >> circle.radius >> circle.center.x >> circle.center.y;

        cout << "Enter point coordinates (x y): ";
    cin >> point.x >> point.y;

      double dx = point.x - circle.center.x;
    double dy = point.y - circle.center.y;
    double distanceSquared = dx * dx + dy * dy;

     if (distanceSquared <= circle.radius * circle.radius) {
        cout << "The point is inside the circle." << endl;
    } else {
        cout << "The point is outside the circle." << endl;
    }

    return 0;
}
