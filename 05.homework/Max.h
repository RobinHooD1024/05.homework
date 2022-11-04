#pragma once
#include "IStatistics.h"


class Max : public IStatistics {
public:
    Max();
    void update(double next);
    double eval() const;
    const char * name() const override;
private:
    double m_max;
};
