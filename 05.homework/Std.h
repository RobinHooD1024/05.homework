#pragma once
#include "Average.h"

class Std : public Average {
public:
    Std();
    void update(double next);
    double eval() const override;
    const char * name() const override;
private:
    double m_std, m_std_sum;
    int m_count;
};

