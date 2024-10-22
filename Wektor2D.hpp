class Wektor2D
{
    private:
        double x, y;

    public:
    Wektor2D() : x(0), y(0) {} 
    

    Wektor2D(double x, double y) : x(x), y(y) {}

    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }

    double getX() const { return x; }
    double getY() const { return y; }

    Wektor2D operator+(const Wektor2D& other) const {
        return Wektor2D(x + other.x, y + other.y);
    }

    double operator*(const Wektor2D& other) const {
        return (x * other.x + y * other.y);
    }
};