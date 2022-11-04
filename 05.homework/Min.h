#pragma once
#include "IStatistics.h"


class Min : public IStatistics {
public:
    Min();
    void update(double next);
    double eval() const;
    const char * name() const override;
private:
    double m_min;
};
