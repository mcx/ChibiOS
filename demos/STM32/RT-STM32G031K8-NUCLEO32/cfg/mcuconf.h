/*
    ChibiOS - Copyright (C) 2006..2020 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * STM32G0xx drivers configuration.
 * The following settings override the default settings present in
 * the various device driver implementation headers.
 * Note that the settings for each driver only have effect if the whole
 * driver is enabled in halconf.h.
 *
 * IRQ priorities:
 * 3...0        Lowest...Highest.
 *
 * DMA priorities:
 * 0...3        Lowest...Highest.
 */

#ifndef MCUCONF_H
#define MCUCONF_H

#define STM32G0xx_MCUCONF
#define STM32G031_MCUCONF
#define STM32G041_MCUCONF

/*
 * HAL driver system settings.
 */
#define STM32_NO_INIT                       FALSE
#define STM32_CLOCK_DYNAMIC                 FALSE
#define STM32_VOS                           STM32_VOS_RANGE1
#define STM32_PWR_CR2                       (STM32_PVDRT_LEV0 | STM32_PVDFT_LEV0 | STM32_PVDE_DISABLED)
#define STM32_PWR_CR3                       (PWR_CR3_EIWUL)
#define STM32_PWR_CR4                       (0U)
#define STM32_PWR_PUCRA                     (0U)
#define STM32_PWR_PDCRA                     (0U)
#define STM32_PWR_PUCRB                     (0U)
#define STM32_PWR_PDCRB                     (0U)
#define STM32_PWR_PUCRC                     (0U)
#define STM32_PWR_PDCRC                     (0U)
#define STM32_PWR_PUCRD                     (0U)
#define STM32_PWR_PDCRD                     (0U)
#define STM32_PWR_PUCRF                     (0U)
#define STM32_PWR_PDCRF                     (0U)
#define STM32_HSIDIV_VALUE                  1
#define STM32_HSI16_ENABLED                 TRUE
#define STM32_HSE_ENABLED                   FALSE
#define STM32_LSI_ENABLED                   TRUE
#define STM32_LSE_ENABLED                   TRUE
#define STM32_SW                            STM32_SW_PLLRCLK
#define STM32_PLLSRC                        STM32_PLLSRC_HSI16
#define STM32_PLLM_VALUE                    2
#define STM32_PLLN_VALUE                    16
#define STM32_PLLP_VALUE                    2
#define STM32_PLLQ_VALUE                    4
#define STM32_PLLR_VALUE                    2
#define STM32_HPRE                          STM32_HPRE_DIV1
#define STM32_PPRE                          STM32_PPRE_DIV1
#define STM32_MCOSEL                        STM32_MCOSEL_NOCLOCK
#define STM32_MCOPRE                        STM32_MCOPRE_DIV1
#define STM32_LSCOSEL                       STM32_LSCOSEL_NOCLOCK

/*
 * Peripherals clocks and sources.
 */
#define STM32_USART1SEL                     STM32_USART1SEL_PCLK
#define STM32_USART2SEL                     STM32_USART2SEL_PCLK
#define STM32_LPUART1SEL                    STM32_LPUART1SEL_PCLK
#define STM32_I2C1SEL                       STM32_I2C1SEL_PCLK
#define STM32_I2S1SEL                       STM32_I2S1SEL_SYSCLK
#define STM32_LPTIM1SEL                     STM32_LPTIM1SEL_PCLK
#define STM32_TIM1SEL                       STM32_TIM1SEL_TIMPCLK
#define STM32_RNGSEL                        STM32_RNGSEL_HSI16
#define STM32_RNGDIV_VALUE                  1
#define STM32_ADCSEL                        STM32_ADCSEL_PLLPCLK
#define STM32_RTCSEL                        STM32_RTCSEL_NOCLOCK

/*
 * Shared IRQ settings.
 */
#define STM32_IRQ_EXTI0_1_PRIORITY          3
#define STM32_IRQ_EXTI2_3_PRIORITY          3
#define STM32_IRQ_EXTI4_15_PRIORITY         3
#define STM32_IRQ_EXTI1921_PRIORITY         3

#define STM32_IRQ_USART1_PRIORITY           2
#define STM32_IRQ_USART2_PRIORITY           2
#define STM32_IRQ_LPUART1_PRIORITY          2

#define STM32_IRQ_TIM1_UP_PRIORITY          1
#define STM32_IRQ_TIM1_CC_PRIORITY          1
#define STM32_IRQ_TIM2_PRIORITY             1
#define STM32_IRQ_TIM3_PRIORITY             1
#define STM32_IRQ_TIM14_PRIORITY            1
#define STM32_IRQ_TIM16_PRIORITY            1
#define STM32_IRQ_TIM17_PRIORITY            1

/*
 * ADC driver system settings.
 */
#define STM32_ADC_USE_ADC1                  FALSE
#define STM32_ADC_ADC1_CFGR2                ADC_CFGR2_CKMODE_ADCCLK
#define STM32_ADC_ADC1_DMA_PRIORITY         2
#define STM32_ADC_ADC1_DMA_IRQ_PRIORITY     2
#define STM32_ADC_ADC1_DMA_STREAM           STM32_DMA_STREAM_ID_ANY
#define STM32_ADC_PRESCALER_VALUE           2

/*
 * GPT driver system settings.
 */
#define STM32_GPT_USE_TIM1                  FALSE
#define STM32_GPT_USE_TIM2                  FALSE
#define STM32_GPT_USE_TIM3                  FALSE
#define STM32_GPT_USE_TIM14                 FALSE
#define STM32_GPT_USE_TIM16                 FALSE
#define STM32_GPT_USE_TIM17                 FALSE

/*
 * I2C driver system settings.
 */
#define STM32_I2C_USE_I2C1                  FALSE
#define STM32_I2C_USE_I2C2                  FALSE
#define STM32_I2C_BUSY_TIMEOUT              50
#define STM32_I2C_I2C1_RX_DMA_STREAM        STM32_DMA_STREAM_ID_ANY
#define STM32_I2C_I2C1_TX_DMA_STREAM        STM32_DMA_STREAM_ID_ANY
#define STM32_I2C_I2C2_RX_DMA_STREAM        STM32_DMA_STREAM_ID_ANY
#define STM32_I2C_I2C2_TX_DMA_STREAM        STM32_DMA_STREAM_ID_ANY
#define STM32_I2C_I2C1_IRQ_PRIORITY         3
#define STM32_I2C_I2C2_IRQ_PRIORITY         3
#define STM32_I2C_I2C1_DMA_PRIORITY         3
#define STM32_I2C_I2C2_DMA_PRIORITY         3
#define STM32_I2C_DMA_ERROR_HOOK(i2cp)      osalSysHalt("DMA failure")

/*
 * ICU driver system settings.
 */
#define STM32_ICU_USE_TIM1                  FALSE
#define STM32_ICU_USE_TIM2                  FALSE
#define STM32_ICU_USE_TIM3                  FALSE

/*
 * PWM driver system settings.
 */
#define STM32_PWM_USE_TIM1                  FALSE
#define STM32_PWM_USE_TIM2                  FALSE
#define STM32_PWM_USE_TIM3                  FALSE
#define STM32_PWM_USE_TIM14                 FALSE
#define STM32_PWM_USE_TIM16                 FALSE
#define STM32_PWM_USE_TIM17                 FALSE

/*
 * RTC driver system settings.
 */
#define STM32_RTC_PRESA_VALUE               32
#define STM32_RTC_PRESS_VALUE               1024
#define STM32_RTC_CR_INIT                   0
#define STM32_RTC_TAMPCR_INIT               0

/*
 * SERIAL driver system settings.
 */
#define STM32_SERIAL_USE_USART1             FALSE
#define STM32_SERIAL_USE_USART2             FALSE
#define STM32_SERIAL_USE_LPUART1            TRUE

/*
 * SIO driver system settings.
 */
#define STM32_SIO_USE_USART1                FALSE
#define STM32_SIO_USE_USART2                FALSE
#define STM32_SIO_USE_LPUART1               FALSE

/*
 * SPI driver system settings.
 */
#define STM32_SPI_USE_SPI1                  FALSE
#define STM32_SPI_USE_SPI2                  FALSE
#define STM32_SPI_SPI1_RX_DMA_STREAM        STM32_DMA_STREAM_ID_ANY
#define STM32_SPI_SPI1_TX_DMA_STREAM        STM32_DMA_STREAM_ID_ANY
#define STM32_SPI_SPI2_RX_DMA_STREAM        STM32_DMA_STREAM_ID_ANY
#define STM32_SPI_SPI2_TX_DMA_STREAM        STM32_DMA_STREAM_ID_ANY
#define STM32_SPI_SPI1_DMA_PRIORITY         1
#define STM32_SPI_SPI2_DMA_PRIORITY         1
#define STM32_SPI_SPI1_IRQ_PRIORITY         2
#define STM32_SPI_SPI2_IRQ_PRIORITY         2
#define STM32_SPI_DMA_ERROR_HOOK(spip)      osalSysHalt("DMA failure")

/*
 * ST driver system settings.
 */
#define STM32_ST_IRQ_PRIORITY               2
#define STM32_ST_USE_TIMER                  2

/*
 * TRNG driver system settings.
 * NOTE: STM32G041 only.
 */
#define STM32_TRNG_USE_RNG1                 FALSE

/*
 * UART driver system settings.
 */
#define STM32_UART_USE_USART1               FALSE
#define STM32_UART_USE_USART2               FALSE
#define STM32_UART_USART1_RX_DMA_STREAM     STM32_DMA_STREAM_ID_ANY
#define STM32_UART_USART1_TX_DMA_STREAM     STM32_DMA_STREAM_ID_ANY
#define STM32_UART_USART2_RX_DMA_STREAM     STM32_DMA_STREAM_ID_ANY
#define STM32_UART_USART2_TX_DMA_STREAM     STM32_DMA_STREAM_ID_ANY
#define STM32_UART_USART1_DMA_PRIORITY      0
#define STM32_UART_USART2_DMA_PRIORITY      0
#define STM32_UART_DMA_ERROR_HOOK(uartp)    osalSysHalt("DMA failure")

/*
 * WDG driver system settings.
 */
#define STM32_WDG_USE_IWDG                  FALSE

#endif /* MCUCONF_H */
