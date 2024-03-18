#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

class Point {
private:
    int m_x;
    int m_y;
public:
    Point() {
        m_x = 0;
        m_y = 0;
    }

    Point(int x, int y) : m_x(x), m_y(y) {
    }

    [[nodiscard]] Point left() const {
        return {m_x, m_y - 1};
    }

    [[nodiscard]] Point right() const {
        return {m_x, m_y + 1};
    }

    [[nodiscard]] Point down() const {
        return {m_x + 1, m_y};
    }

    [[nodiscard]] Point up() const {
        return {m_x - 1, m_y};
    }

    [[nodiscard]] int getX() const {
        return m_x;
    }

    [[nodiscard]] int getY() const {
        return m_y;
    }

    friend istream &operator>>(istream &in, Point &point) {
        in >> point.m_x >> point.m_y;
        return in;
    }

    bool operator==(Point point) const {
        return m_x == point.m_x && m_y == point.m_y;
    }
};

class Eq {
private:
    Point m_self;
public:
    explicit Eq(Point self) : m_self(self) {}

    bool operator()(Point p) {
        return m_self == p;
    }
};

class Horse {
private:
    Point m_loc;
    vector<Point> m_controls;
public:
    explicit Horse(Point loc) : m_loc(loc) {
        m_controls.push_back(m_loc.left().left().up());
        m_controls.push_back(m_loc.left().left().down());
        m_controls.push_back(m_loc.left().up().up());
        m_controls.push_back(m_loc.left().down().down());
        m_controls.push_back(m_loc.right().up().up());
        m_controls.push_back(m_loc.right().down().down());
        m_controls.push_back(m_loc.right().right().up());
        m_controls.push_back(m_loc.right().right().down());
        m_controls.push_back(m_loc);
    }

    bool control(Point loc) {
        return any_of(m_controls.begin(), m_controls.end(), Eq(loc));
    }
};

long long res[25][25] = {-1};

long long count(Point src, Point des, Horse horse) {
    if (res[src.getX()][src.getY()] != -1) {
        return res[src.getX()][src.getY()];
    }
    long long result;
    if (src == des) {
        result = 1;
    } else if ((horse.control(src.right()) || src.right().getY() > des.getY()) &&
               (horse.control(src.down()) || src.down().getX() > des.getX())) {
        result = 0;
    } else if (horse.control(src.right()) || src.right().getY() > des.getY()) {
        result = count(src.down(), des, horse);
    } else if (horse.control(src.down()) || src.down().getX() > des.getX()) {
        result = count(src.right(), des, horse);
    } else {
        result = count(src.down(), des, horse) + count(src.right(), des, horse);
    }
    res[src.getX()][src.getY()] = result;
    return result;
}

int main() {
    memset(res, -1, sizeof(res));
    Point des;
    Point horseP;
    cin >> des >> horseP;
    Horse horse(horseP);
    cout << count(Point(), des, horse) << endl;
    return 0;
}