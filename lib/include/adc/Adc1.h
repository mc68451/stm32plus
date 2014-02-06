/*
 * This file is a part of the open source stm32plus library.
 * Copyright (c) 2011,2012,2013 Andy Brown <www.andybrown.me.uk>
 * Please see website for licensing terms.
 */

#pragma once


namespace stm32plus {


  /**
   * ADC1 declaration
   *
   * @tparam Features A list of all the features you want to include with this ADC
   */

  template<class... Features>
  struct Adc1 : AdcPeripheral<PERIPHERAL_ADC1>,
                Features... {
    /**
     * Constructor
     * @param params Initialisation parameters
     */

    Adc1(const Parameters& params=Parameters())
        : AdcPeripheral<PERIPHERAL_ADC1>(params),
          Features(static_cast<Adc&>(*this))... {
    }
  };
}
