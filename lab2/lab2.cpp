#include <iostream>
#include <string>

class Ellipse {
private:
    double x1, y1, x2, y2;

public:
    Ellipse() : x1(0.0), y1(0.0), x2(0.0), y2(0.0) {}

    Ellipse(double x_1, double y_1, double x_2, double y_2) : x1(x_1), y1(y_1), x2(x_2), y2(y_2) {}

    bool isCircle() {
        return (x2 - x1) == (y2 - y1);
    }

    void drawEllipse() {
        std::cout << "Эллипс, нарисованный на бланке зеленым цветом\n";
    }

    std::string objectInfo() {
        return "Координаты эллипса: (" + std::to_string(x1) + ", " + std::to_string(y1) + "), (" + std::to_string(x2) + ", " + std::to_string(y2) + ")";
    }
};

int main() {
    Ellipse ellipse1(0.0, 0.0, 5.0, 5.0);
    Ellipse ellipse2;

    std::cout << "Является ли эллипс 1 окружностью: " << (ellipse1.isCircle() ? "да" : "нет") << "\n";
    ellipse1.drawEllipse();
    std::cout << "Информация об эллипсе 1: " << ellipse1.objectInfo() << "\n";

    double x1, y1, x2, y2;
    std::cout << "Введите координаты эллипса (x1 y1 x2 y2): ";
    std::cin >> x1 >> y1 >> x2 >> y2;

    Ellipse ellipse3(x1, y1, x2, y2);

    std::cout << "Является ли эллипс 3 окружностью: " << (ellipse3.isCircle() ? "да" : "нет") << "\n";
    ellipse3.drawEllipse();
    std::cout << "Информация об эллипсе 3: " << ellipse3.objectInfo() << "\n";

    return 0;
}
