#include <iostream>
#include <string>

class Shape {
protected:
    double x1, y1, x2, y2;

public:
    Shape() : x1(0.0), y1(0.0), x2(0.0), y2(0.0) {}

    Shape(double x_1, double y_1, double x_2, double y_2) : x1(x_1), y1(y_1), x2(x_2), y2(y_2) {}

    virtual bool isCircle() = 0;
    virtual void drawShape() = 0;
    virtual std::string objectInfo() = 0;
};

class Ellipse : public Shape {
public:
    Ellipse() : Shape() {}

    Ellipse(double x_1, double y_1, double x_2, double y_2) : Shape(x_1, y_1, x_2, y_2) {}

    bool isCircle() override {
        return (x2 - x1) == (y2 - y1);
    }

    void drawShape() override {
        std::cout << "Ellipse drawn on the form in green color\n";
    }

    std::string objectInfo() override {
        return "Ellipse Coordinates: (" + std::to_string(x1) + ", " + std::to_string(y1) + "), (" + std::to_string(x2) + ", " + std::to_string(y2) + ")";
    }
};

int main() {
    Ellipse ellipse1(0.0, 0.0, 5.0, 5.0);
    Ellipse ellipse2;

    std::cout << "Is Ellipse 1 a Circle: " << (ellipse1.isCircle() ? "Yes" : "No") << "\n";
    ellipse1.drawShape();
    std::cout << "Info of Ellipse 1: " << ellipse1.objectInfo() << "\n";

    double x1, y1, x2, y2;
    std::cout << "Enter the coordinates of the ellipse (x1 y1 x2 y2): ";
    std::cin >> x1 >> y1 >> x2 >> y2;

    Ellipse ellipse3(x1, y1, x2, y2);

    std::cout << "Is Ellipse 3 a Circle: " << (ellipse3.isCircle() ? "Yes" : "No") << "\n";
    ellipse3.drawShape();
    std::cout << "Info of Ellipse 3: " << ellipse3.objectInfo() << "\n";

    return 0;
}
