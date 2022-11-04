#include <cmath>
#include "Std.h"

Std::Std() {};

void Std::update(double next) {
    double sum = 0;
    values.push_back(next);
    Average::update(next);
    for (auto x : values) {
        sum += pow((x - Average::eval()), 2);
    }
    m_std = sqrt(sum / values.size());
}

double Std::eval() const {
    return m_std;
}

const char * Std::name() const{
    return "Standart deviation";
}