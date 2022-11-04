#include "Average.h"

Average::Average() : m_sum{0}, m_count{0} {
}
void Average::update(double next){
    m_sum+=next;
    m_count++;
    m_average = m_sum / m_count;
}
double Average::eval() const{
    return m_average;
}

const char * Average::name() const{
    return "average";
}
