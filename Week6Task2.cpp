#include <iostream>

class Laskutoimitus {
public:
    virtual double laske(double x, double y) = 0; 
};

class Yhteenlasku : public Laskutoimitus {
public:
    double laske(double x, double y) override {
        return x + y;
    }
};

class Kertolasku : public Laskutoimitus {
public:
    double laske(double x, double y) override {
        return x * y;
    }
};

int main() {
    Laskutoimitus* osoitin = new Yhteenlasku();

    double tulosYhteenlasku = osoitin->laske(2.0, 3.0);
    std::cout << "Yhteenlasku: " << tulosYhteenlasku << std::endl;

    delete osoitin;

    osoitin = new Kertolasku();

    double tulosKertolasku = osoitin->laske(2.0, 3.0);
    std::cout << "Kertolasku: " << tulosKertolasku << std::endl;

    delete osoitin;

    return 0;
}
