#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Overloading the << operator
    friend ostream& operator<<(ostream& os, const Point& p) {
        os << "Point(" << p.x << ", " << p.y << ")";
        return os;
    }
};

int main() {
    Point p(1, 2);
    cout << p << endl; // Output: Point(1, 2)
    return 0;
}
