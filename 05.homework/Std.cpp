#include <cmath>
#include "Std.h"

Std::Std() : m_std_sum{0}, m_count{0}{};

void Std::update(double next) {
    Average::update(next);
    m_std_sum += pow((next - Average::eval()), 2);
    m_count++;
    m_std = m_std_sum / m_count;
}

double Std::eval() const {
    return m_std;
}

const char * Std::name() const{
    return "Standart deviation";
}