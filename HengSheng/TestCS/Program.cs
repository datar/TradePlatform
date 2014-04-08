using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

using WrapperPricingMethod;

namespace TestCS {
    class Program {
        static void Main(string[] args) {
            PricingMethodWrapper pricer = new PricingMethodWrapper();
            System.Console.Write(pricer.BinomialTree(0.2, 0.05, 10 / 365.0, 3650, 3650, 200));
        }
    }
}
