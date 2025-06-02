#define _BOARD_GPIO_C_

#include "startup.h"
#include "fastio.h"

extern const cfg_pin_info PIN_MAP[BOARD_NR_GPIO_PINS] = {

  {0,  PortA, Pin00, &adc1, ADC1_IN0,        Func_Gpio},       // PA0
  {1,  PortA, Pin01, &adc1, ADC1_IN1,        Func_Gpio},       // PA1
  {2,  PortA, Pin02, &adc1, ADC1_IN2,        Func_Gpio},       // PA2
  {3,  PortA, Pin03, &adc1, ADC1_IN3,        Func_Gpio},       // PA3
  {4,  PortA, Pin04, &adc1, ADC12_IN4,       Func_Gpio},       // PA4
  {5,  PortA, Pin05, &adc1, ADC12_IN5,       Func_Gpio},       // PA5
  {6,  PortA, Pin06, &adc1, ADC12_IN6,       Func_Gpio},       // PA6
  {7,  PortA, Pin07, &adc1, ADC12_IN7,       Func_Gpio},       // PA7
  {8,  PortA, Pin08, NULL,  ADC_PIN_INVALID, Func_Usart2_Rts}, // PA8
  {9,  PortA, Pin09, NULL,  ADC_PIN_INVALID, Func_Usart2_Tx},  // PA9
  {10, PortA, Pin10, NULL,  ADC_PIN_INVALID, Func_Sdio},       // PA10
  {11, PortA, Pin11, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PA11
  {12, PortA, Pin12, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PA12
  {13, PortA, Pin13, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PA13 SWDIO
  {14, PortA, Pin14, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PA14 SWCLK
  {15, PortA, Pin15, NULL,  ADC_PIN_INVALID, Func_Usart2_Rx},  // PA15
	
  {0,  PortB, Pin00, &adc1, ADC12_IN8,       Func_Gpio},       // PB0
  {1,  PortB, Pin01, &adc1, ADC12_IN9,       Func_Gpio},       // PB1
  {2,  PortB, Pin02, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PB2
  {3,  PortB, Pin03, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PB3
  {4,  PortB, Pin04, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PB4
  {5,  PortB, Pin05, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PB5
  {6,  PortB, Pin06, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PB6
  {7,  PortB, Pin07, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PB7
  {8,  PortB, Pin08, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PB8
  {9,  PortB, Pin09, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PB9
  {10, PortB, Pin10, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PB10
  {11, PortB, Pin11, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PB11 10k->vcc
  {12, PortB, Pin12, NULL,  ADC_PIN_INVALID, Func_Spi3_Mosi},  // PB12
  {13, PortB, Pin13, NULL,  ADC_PIN_INVALID, Func_Spi3_Miso},  // PB13
  {14, PortB, Pin14, NULL,  ADC_PIN_INVALID, Func_Spi3_Sck},   // PB14
  {15, PortB, Pin15, NULL,  ADC_PIN_INVALID, Func_Spi3_Nss0},  // PB15

  {0,  PortC, Pin00, &adc1, ADC12_IN10,      Func_Usart1_Tx},  // PC0
  {1,  PortC, Pin01, &adc1, ADC12_IN11,      Func_Usart1_Rx},  // PC1
  {2,  PortC, Pin02, &adc1, ADC1_IN12,       Func_Gpio},       // PC2
  {3,  PortC, Pin03, &adc1, ADC1_IN13,       Func_Gpio},       // PC3
  {4,  PortC, Pin04, &adc1, ADC1_IN14,       Func_Gpio},       // PC4
  {5,  PortC, Pin05, &adc1, ADC1_IN15,       Func_Gpio},       // PC5
  {6,  PortC, Pin06, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PC6
  {7,  PortC, Pin07, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PC7
  {8,  PortC, Pin08, NULL,  ADC_PIN_INVALID, Func_Sdio},       // PC8
  {9,  PortC, Pin09, NULL,  ADC_PIN_INVALID, Func_Sdio},       // PC9
  {10, PortC, Pin10, NULL,  ADC_PIN_INVALID, Func_Sdio},       // PC10
  {11, PortC, Pin11, NULL,  ADC_PIN_INVALID, Func_Sdio},       // PC11
  {12, PortC, Pin12, NULL,  ADC_PIN_INVALID, Func_Sdio},       // PC12
  {13, PortC, Pin13, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PC13
  {14, PortC, Pin14, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PC14
  {15, PortC, Pin15, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PC15

  {0,  PortD, Pin00, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD0
  {1,  PortD, Pin01, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD1
  {2,  PortD, Pin02, NULL,  ADC_PIN_INVALID, Func_Sdio},       // PD2
  {3,  PortD, Pin03, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD3
  {4,  PortD, Pin04, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD4
  {5,  PortD, Pin05, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD5
  {6,  PortD, Pin06, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD6
  {7,  PortD, Pin07, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD7
  {8,  PortD, Pin08, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD8
  {9,  PortD, Pin09, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD9
  {10, PortD, Pin10, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD10
  {11, PortD, Pin11, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD11
  {12, PortD, Pin12, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD12
  {13, PortD, Pin13, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD13
  {14, PortD, Pin14, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD14
  {15, PortD, Pin15, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PD15

  {0,  PortE, Pin00, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE0
  {1,  PortE, Pin01, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE1
  {2,  PortE, Pin02, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE2
  {3,  PortE, Pin03, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE3
  {4,  PortE, Pin04, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE4
  {5,  PortE, Pin05, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE5
  {6,  PortE, Pin06, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE6
  {7,  PortE, Pin07, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE7
  {8,  PortE, Pin08, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE8
  {9,  PortE, Pin09, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE9
  {10, PortE, Pin10, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE10
  {11, PortE, Pin11, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE11
  {12, PortE, Pin12, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE12
  {13, PortE, Pin13, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE13
  {14, PortE, Pin14, NULL,  ADC_PIN_INVALID, Func_Sdio},       // PE14
  {15, PortE, Pin15, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PE15

  {0,  PortH, Pin00, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PH0 OSC_IN
  {1,  PortH, Pin01, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PH1 OSC_OUT*/
  {2,  PortH, Pin02, NULL,  ADC_PIN_INVALID, Func_Gpio},       // PH2
};

// Basically everything that is defined having ADC
extern const uint8_t boardADCPins[BOARD_NR_ADC_PINS] = {
    PA0,PA1,PA2,PA3,PA4,PA5,PA6,PA7,PB0,PB1,PC0,PC1,PC2,PC3,PC4,PC5
};

extern void setup_gpio(void )
{  
    stc_port_init_t stcPortInit;
    MEM_ZERO_STRUCT(stcPortInit);

    PORT_DebugPortSetting(0x1C,Disable);
    
     // initiallize LED port
    stcPortInit.enPinMode = Pin_Mode_Out;
    stcPortInit.enExInt = Disable;
    stcPortInit.enPullUp = Disable;
    // LED0 and LED1 Port/Pin initialization
    //PORT_InitMapp(LED, &stcPortInit);
}

DEFINE_HWSERIAL(Serial1, 1);
DEFINE_HWSERIAL(Serial2, 2);

#undef _BOARD_GPIO_C_
