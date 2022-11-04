#pragma once
#include "IStatistics.h"


class Average : public IStatistics {
public:
    Average();
    void update(double next);
    double eval() const override;
    const char * name() const override;
private:
    double m_average, m_sum;
    int m_count;
};


