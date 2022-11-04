#pragma once
#include "Average.h"
#include <vector>

class Std : public Average {
public:
    Std();
    void update(double next);
    double eval() const override;
    const char * name() const override;
private:
    double m_std;
    std::vector<double> values;
};

