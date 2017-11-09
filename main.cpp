#include <iostream>
using namespace std;

class Rectangle {
private:
    int lenght;
    int height;
    int volume;
public:

    void setLenght(int plenght) {
        lenght = plenght;
    }

    void setHeight(int pheight) {
        height = pheight;
    }

    void Display() {
        std::cout << "Combined Volume is; " << volume << std::endl;
    }

    //Overloading Operator +

    Rectangle operator+(const Rectangle& bRect) {
        Rectangle pRect;
        int vol1, vol2;
        vol1 = this->lenght * this->height;
        vol2 = bRect.lenght * bRect.height;
        pRect.volume = vol1 + vol2;
        return pRect;
    }

    //Overloading Operator ==

    bool operator==(const Rectangle& bRect) {
        if (this->lenght == bRect.lenght &&
                this->height == bRect.height) {
            cout << "The Rectangles are equal" << endl;
            return true;
        }
        cout << "The Rectangles are different" << endl;
        return false;
    }

};

int main() {

    Rectangle newrect1, newrect2, newrect3;
    newrect1.setLenght(3);
    newrect1.setHeight(3);

    newrect2.setLenght(2);
    newrect2.setHeight(2);

    // Test overloading operator +
    newrect3 = newrect2 + newrect1;
    newrect3.Display();

    // Test overloading operator ==
    bool isEquals = newrect1 == newrect2;
    cout << isEquals << endl;

    return 0;
}

