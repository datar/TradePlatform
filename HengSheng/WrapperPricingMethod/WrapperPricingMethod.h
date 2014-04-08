// WrapperPricingMethod.h

#pragma once

#include <iostream>

#include "PricingMethod.h"

using namespace std;
using namespace System;

namespace WrapperPricingMethod {
    public ref class PricingMethodWrapper{
    private:
        CPricingMethod* native;

    public:
        PricingMethodWrapper(){
            native = new CPricingMethod();
        }
    public:
        double BinomialTree(double Sigma, double R, double T, double S, double K, unsigned int Step){
            return native->BinomialTree(Sigma, R, T, S, K, Step);
        }
    };
}
