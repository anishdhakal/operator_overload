using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point();
    Point(int, int);
    void setX(int);
    void setY(int);
    void setXY(int, int);
    int getX();
    int getY();
    Point operator+(Point)const;
    void print();
};
