#include <iostream>
#include <string>

class Figure {
public:
    int get_sides_count() { return sides_count_; }
    std::string get_name() { return name_; }
    Figure() : Figure(0, "Фигура") {};
protected:
    Figure(int s_c, std::string n) { sides_count_ = s_c; name_ = n; }
private:
    int sides_count_;
    std::string name_;
};
class Triangle : public Figure {
public:
    Triangle() : Figure (3, "Треугольник") {};
};

class Quadrangle : public Figure {
public:
    Quadrangle() : Figure (4, "Четырёхугольник") {};
};

int main()
{
    Figure f;
    Triangle t;
    Quadrangle q;

    setlocale(LC_ALL, "Russian");
    std::cout << "Количество сторон:" << std::endl;
    std::cout << f.get_name() << ": " << f.get_sides_count() << std::endl;
    std::cout << t.get_name() << ": " << t.get_sides_count() << std::endl;
    std::cout << q.get_name() << ": " << q.get_sides_count() << std::endl;
}