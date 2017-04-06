/*
 * Generated by MTK SP DrvGen Version 03.13.6 for MT6580. Copyright MediaTek Inc. (C) 2013.
 * Thu Apr 06 22:54:34 2017
 * Do Not Modify the File.
 */

#ifndef __CUST_GPIO_USAGE_H__
#define __CUST_GPIO_USAGE_H__


#define GPIO_ACCDET_EINT_PIN         (GPIO0 | 0x80000000)
#define GPIO_ACCDET_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_ACCDET_EINT_PIN_M_CLK   GPIO_MODE_05
#define GPIO_ACCDET_EINT_PIN_M_EINT   GPIO_MODE_06

#define GPIO_GYRO_EINT_PIN         (GPIO1 | 0x80000000)
#define GPIO_GYRO_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_GYRO_EINT_PIN_M_MDEINT   GPIO_MODE_06
#define GPIO_GYRO_EINT_PIN_M_EINT   GPIO_MODE_07

#define GPIO_CTP_RST_PIN         (GPIO2 | 0x80000000)
#define GPIO_CTP_RST_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CTP_RST_PIN_M_EINT   GPIO_MODE_06
#define GPIO_CTP_RST_PIN_M_PWM   GPIO_MODE_07

#define GPIO_SDHC_EINT_PIN         (GPIO3 | 0x80000000)
#define GPIO_SDHC_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_SDHC_EINT_PIN_M_EINT   GPIO_MODE_06

#define GPIO_MSE_EINT_PIN         (GPIO4 | 0x80000000)
#define GPIO_MSE_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_MSE_EINT_PIN_M_MDEINT   GPIO_MODE_05
#define GPIO_MSE_EINT_PIN_M_EINT   GPIO_MODE_06

#define GPIO_CTP_EINT_PIN         (GPIO5 | 0x80000000)
#define GPIO_CTP_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CTP_EINT_PIN_M_CLK   GPIO_MODE_03
#define GPIO_CTP_EINT_PIN_M_EINT   GPIO_MODE_06

#define GPIO_ALS_EINT_PIN         (GPIO6 | 0x80000000)
#define GPIO_ALS_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_ALS_EINT_PIN_M_EINT   GPIO_MODE_06

#define GPIO_CAMERA_FLASH_EN_PIN         (GPIO8 | 0x80000000)
#define GPIO_CAMERA_FLASH_EN_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_FLASH_EN_PIN_M_MDEINT   GPIO_MODE_05
#define GPIO_CAMERA_FLASH_EN_PIN_M_PWM   GPIO_MODE_02

#define GPIO_EXT_SPKAMP_EN_PIN         (GPIO12 | 0x80000000)
#define GPIO_EXT_SPKAMP_EN_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_EXT_SPKAMP_EN_PIN_M_EINT   GPIO_MODE_06

#define GPIO_PMIC_EINT_PIN         (GPIO13 | 0x80000000)
#define GPIO_PMIC_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_PMIC_EINT_PIN_M_EINT   GPIO_MODE_01

#define GPIO_SWCHARGER_EN_PIN         (GPIO15 | 0x80000000)
#define GPIO_SWCHARGER_EN_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_SWCHARGER_EN_PIN_M_MDEINT   GPIO_MODE_03

#define GPIO_SPEAKER_EN_PIN         (GPIO17 | 0x80000000)
#define GPIO_SPEAKER_EN_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_SPEAKER_EN_PIN_M_CLK   GPIO_MODE_03
#define GPIO_SPEAKER_EN_PIN_M_EINT   GPIO_MODE_06

#define GPIO_LCD_BIAS_ENN_PIN         (GPIO19 | 0x80000000)
#define GPIO_LCD_BIAS_ENN_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_LCD_BIAS_ENN_PIN_M_EINT   GPIO_MODE_06
#define GPIO_LCD_BIAS_ENN_PIN_M_NFI   GPIO_MODE_01
#define GPIO_LCD_BIAS_ENN_PIN_M_I2S2_WS   GPIO_MODE_02
#define GPIO_LCD_BIAS_ENN_PIN_M_I2C_SDA   GPIO_MODE_03
#define GPIO_LCD_BIAS_ENN_PIN_M_JTDO   GPIO_MODE_04
#define GPIO_LCD_BIAS_ENN_PIN_M_CMCSK   GPIO_MODE_05

#define GPIO_LCD_BIAS_ENP_PIN         (GPIO21 | 0x80000000)
#define GPIO_LCD_BIAS_ENP_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_LCD_BIAS_ENP_PIN_M_CLK   GPIO_MODE_03
#define GPIO_LCD_BIAS_ENP_PIN_M_EINT   GPIO_MODE_06

#define GPIO_SIM1_SCLK         (GPIO22 | 0x80000000)
#define GPIO_SIM1_SCLK_M_GPIO   GPIO_MODE_00
#define GPIO_SIM1_SCLK_M_CLK   GPIO_MODE_01
#define GPIO_SIM1_SCLK_M_EINT   GPIO_MODE_06

#define GPIO_SIM1_SIO         (GPIO23 | 0x80000000)
#define GPIO_SIM1_SIO_M_GPIO   GPIO_MODE_00
#define GPIO_SIM1_SIO_M_EINT   GPIO_MODE_06
#define GPIO_SIM1_SIO_M_SIM1_SIO   GPIO_MODE_01

#define GPIO_SIM2_SIO         (GPIO24 | 0x80000000)
#define GPIO_SIM2_SIO_M_GPIO   GPIO_MODE_00
#define GPIO_SIM2_SIO_M_EINT   GPIO_MODE_06
#define GPIO_SIM2_SIO_M_SIM2_SIO   GPIO_MODE_01

#define GPIO_SIM2_SCLK         (GPIO25 | 0x80000000)
#define GPIO_SIM2_SCLK_M_GPIO   GPIO_MODE_00
#define GPIO_SIM2_SCLK_M_CLK   GPIO_MODE_01
#define GPIO_SIM2_SCLK_M_EINT   GPIO_MODE_06

#define GPIO_AUD_CLK_MOSI_PIN         (GPIO26 | 0x80000000)
#define GPIO_AUD_CLK_MOSI_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_AUD_CLK_MOSI_PIN_M_CLK   GPIO_MODE_01
#define GPIO_AUD_CLK_MOSI_PIN_M_EINT   GPIO_MODE_06

#define GPIO_AUD_DAT_MOSI_PIN         (GPIO27 | 0x80000000)
#define GPIO_AUD_DAT_MOSI_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_AUD_DAT_MOSI_PIN_M_EINT   GPIO_MODE_06
#define GPIO_AUD_DAT_MOSI_PIN_M_AUD_DAT_MOSI   GPIO_MODE_01

#define GPIO_AUD_DAT_MISO_PIN         (GPIO28 | 0x80000000)
#define GPIO_AUD_DAT_MISO_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_AUD_DAT_MISO_PIN_M_EINT   GPIO_MODE_06
#define GPIO_AUD_DAT_MISO_PIN_M_AUD_DAT_MISO   GPIO_MODE_01

#define GPIO_CAMERA_RDP0_A_PIN         (GPIO35 | 0x80000000)
#define GPIO_CAMERA_RDP0_A_PIN_M_EINT   GPIO_MODE_06
#define GPIO_CAMERA_RDP0_A_PIN_M_GPI   GPIO_MODE_00
#define GPIO_CAMERA_RDP0_A_PIN_M_PAD_RDP0_A   GPIO_MODE_01
#define GPIO_CAMERA_RDP0_A_PIN_M_CMCSK   GPIO_MODE_02

#define GPIO_CAMERA_RDN0_A_PIN         (GPIO36 | 0x80000000)
#define GPIO_CAMERA_RDN0_A_PIN_M_EINT   GPIO_MODE_06
#define GPIO_CAMERA_RDN0_A_PIN_M_GPI   GPIO_MODE_00
#define GPIO_CAMERA_RDN0_A_PIN_M_PAD_RDN0_A   GPIO_MODE_01
#define GPIO_CAMERA_RDN0_A_PIN_M_CMCSD   GPIO_MODE_02

#define GPIO_CAMERA_RDP1_A_PIN         (GPIO37 | 0x80000000)
#define GPIO_CAMERA_RDP1_A_PIN_M_EINT   GPIO_MODE_06
#define GPIO_CAMERA_RDP1_A_PIN_M_GPI   GPIO_MODE_00
#define GPIO_CAMERA_RDP1_A_PIN_M_PAD_RDP1_A   GPIO_MODE_01
#define GPIO_CAMERA_RDP1_A_PIN_M_CMCSD   GPIO_MODE_02

#define GPIO_CAMERA_RDN1_A_PIN         (GPIO38 | 0x80000000)
#define GPIO_CAMERA_RDN1_A_PIN_M_EINT   GPIO_MODE_06
#define GPIO_CAMERA_RDN1_A_PIN_M_GPI   GPIO_MODE_00
#define GPIO_CAMERA_RDN1_A_PIN_M_PAD_RDN1_A   GPIO_MODE_01
#define GPIO_CAMERA_RDN1_A_PIN_M_CMCSD   GPIO_MODE_02

#define GPIO_CAMERA_RCP_A_PIN         (GPIO39 | 0x80000000)
#define GPIO_CAMERA_RCP_A_PIN_M_EINT   GPIO_MODE_06
#define GPIO_CAMERA_RCP_A_PIN_M_GPI   GPIO_MODE_00
#define GPIO_CAMERA_RCP_A_PIN_M_PAD_RCP_A   GPIO_MODE_01
#define GPIO_CAMERA_RCP_A_PIN_M_CMCSD   GPIO_MODE_02

#define GPIO_CAMERA_RCN_A_PIN         (GPIO40 | 0x80000000)
#define GPIO_CAMERA_RCN_A_PIN_M_EINT   GPIO_MODE_06
#define GPIO_CAMERA_RCN_A_PIN_M_GPI   GPIO_MODE_00
#define GPIO_CAMERA_RCN_A_PIN_M_PAD_RCN_A   GPIO_MODE_01

#define GPIO_MSDC0_CLK         (GPIO41 | 0x80000000)
#define GPIO_MSDC0_CLK_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_CLK_M_EINT   GPIO_MODE_06
#define GPIO_MSDC0_CLK_M_MC0_CK   GPIO_MODE_01

#define GPIO_MSDC0_CMD         (GPIO42 | 0x80000000)
#define GPIO_MSDC0_CMD_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_CMD_M_EINT   GPIO_MODE_06
#define GPIO_MSDC0_CMD_M_MC0_CMD   GPIO_MODE_01

#define GPIO_MSDC0_DAT0         (GPIO43 | 0x80000000)
#define GPIO_MSDC0_DAT0_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT0_M_EINT   GPIO_MODE_06
#define GPIO_MSDC0_DAT0_M_MC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT1         (GPIO44 | 0x80000000)
#define GPIO_MSDC0_DAT1_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT1_M_EINT   GPIO_MODE_06
#define GPIO_MSDC0_DAT1_M_MC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT2         (GPIO45 | 0x80000000)
#define GPIO_MSDC0_DAT2_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT2_M_EINT   GPIO_MODE_06
#define GPIO_MSDC0_DAT2_M_MC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT3         (GPIO46 | 0x80000000)
#define GPIO_MSDC0_DAT3_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT3_M_EINT   GPIO_MODE_06
#define GPIO_MSDC0_DAT3_M_MC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT4         (GPIO47 | 0x80000000)
#define GPIO_MSDC0_DAT4_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT4_M_EINT   GPIO_MODE_06
#define GPIO_MSDC0_DAT4_M_MC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT5         (GPIO48 | 0x80000000)
#define GPIO_MSDC0_DAT5_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT5_M_EINT   GPIO_MODE_06
#define GPIO_MSDC0_DAT5_M_MC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT6         (GPIO49 | 0x80000000)
#define GPIO_MSDC0_DAT6_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT6_M_EINT   GPIO_MODE_06
#define GPIO_MSDC0_DAT6_M_MC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_DAT7         (GPIO50 | 0x80000000)
#define GPIO_MSDC0_DAT7_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_DAT7_M_EINT   GPIO_MODE_06
#define GPIO_MSDC0_DAT7_M_MC0_DAT   GPIO_MODE_01

#define GPIO_MSDC0_RSTB         (GPIO51 | 0x80000000)
#define GPIO_MSDC0_RSTB_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC0_RSTB_M_EINT   GPIO_MODE_06
#define GPIO_MSDC0_RSTB_M_MC0_RSTB   GPIO_MODE_01

#define GPIO_MSDC1_CLK         (GPIO52 | 0x80000000)
#define GPIO_MSDC1_CLK_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC1_CLK_M_CLK   GPIO_MODE_01
#define GPIO_MSDC1_CLK_M_EINT   GPIO_MODE_03
#define GPIO_MSDC1_CLK_M_JTMS   GPIO_MODE_04

#define GPIO_MSDC1_CMD         (GPIO53 | 0x80000000)
#define GPIO_MSDC1_CMD_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC1_CMD_M_EINT   GPIO_MODE_03
#define GPIO_MSDC1_CMD_M_MSDC1_CMD   GPIO_MODE_01

#define GPIO_MSDC1_DAT3         (GPIO54 | 0x80000000)
#define GPIO_MSDC1_DAT3_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC1_DAT3_M_EINT   GPIO_MODE_03
#define GPIO_MSDC1_DAT3_M_MSDC1_DAT   GPIO_MODE_01
#define GPIO_MSDC1_DAT3_M_JTDO   GPIO_MODE_04

#define GPIO_MSDC1_DAT2         (GPIO55 | 0x80000000)
#define GPIO_MSDC1_DAT2_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC1_DAT2_M_EINT   GPIO_MODE_03
#define GPIO_MSDC1_DAT2_M_MSDC1_DAT   GPIO_MODE_01
#define GPIO_MSDC1_DAT2_M_JTDI   GPIO_MODE_04

#define GPIO_MSDC1_DAT1         (GPIO56 | 0x80000000)
#define GPIO_MSDC1_DAT1_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC1_DAT1_M_EINT   GPIO_MODE_03
#define GPIO_MSDC1_DAT1_M_MSDC1_DAT   GPIO_MODE_01

#define GPIO_MSDC1_DAT0         (GPIO57 | 0x80000000)
#define GPIO_MSDC1_DAT0_M_GPIO   GPIO_MODE_00
#define GPIO_MSDC1_DAT0_M_EINT   GPIO_MODE_03
#define GPIO_MSDC1_DAT0_M_MSDC1_DAT   GPIO_MODE_01
#define GPIO_MSDC1_DAT0_M_JTCK   GPIO_MODE_04

#define GPIO_I2C0_SCA_PIN         (GPIO58 | 0x80000000)
#define GPIO_I2C0_SCA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C0_SCA_PIN_M_EINT   GPIO_MODE_06
#define GPIO_I2C0_SCA_PIN_M_I2C_SCL   GPIO_MODE_01

#define GPIO_I2C1_SCA_PIN         (GPIO59 | 0x80000000)
#define GPIO_I2C1_SCA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C1_SCA_PIN_M_EINT   GPIO_MODE_06
#define GPIO_I2C1_SCA_PIN_M_I2C_SCL   GPIO_MODE_01

#define GPIO_I2C2_SCA_PIN         (GPIO60 | 0x80000000)
#define GPIO_I2C2_SCA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C2_SCA_PIN_M_EINT   GPIO_MODE_06
#define GPIO_I2C2_SCA_PIN_M_I2C_SCL   GPIO_MODE_01

#define GPIO_I2C0_SDA_PIN         (GPIO61 | 0x80000000)
#define GPIO_I2C0_SDA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C0_SDA_PIN_M_EINT   GPIO_MODE_06
#define GPIO_I2C0_SDA_PIN_M_I2C_SDA   GPIO_MODE_01

#define GPIO_I2C1_SDA_PIN         (GPIO62 | 0x80000000)
#define GPIO_I2C1_SDA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C1_SDA_PIN_M_EINT   GPIO_MODE_06
#define GPIO_I2C1_SDA_PIN_M_I2C_SDA   GPIO_MODE_01

#define GPIO_I2C2_SDA_PIN         (GPIO63 | 0x80000000)
#define GPIO_I2C2_SDA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_I2C2_SDA_PIN_M_EINT   GPIO_MODE_06
#define GPIO_I2C2_SDA_PIN_M_I2C_SDA   GPIO_MODE_01

#define GPIO_KPD_KCOL0_PIN         (GPIO64 | 0x80000000)
#define GPIO_KPD_KCOL0_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_KPD_KCOL0_PIN_M_EINT   GPIO_MODE_06
#define GPIO_KPD_KCOL0_PIN_M_KPCOL   GPIO_MODE_01

#define GPIO_KPD_KROW1_PIN         (GPIO65 | 0x80000000)
#define GPIO_KPD_KROW1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_KPD_KROW1_PIN_M_EINT   GPIO_MODE_06
#define GPIO_KPD_KROW1_PIN_M_KPROW   GPIO_MODE_01

#define GPIO_GPS_LNA_PIN         (GPIO67 | 0x80000000)
#define GPIO_GPS_LNA_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_GPS_LNA_PIN_M_EINT   GPIO_MODE_06
#define GPIO_GPS_LNA_PIN_M_PWM   GPIO_MODE_03

#define GPIO_DSI_TE_PIN         (GPIO68 | 0x80000000)
#define GPIO_DSI_TE_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_DSI_TE_PIN_M_EINT   GPIO_MODE_06
#define GPIO_DSI_TE_PIN_M_DSI_TE   GPIO_MODE_01

#define GPIO_KPD_KROW0_PIN         (GPIO69 | 0x80000000)
#define GPIO_KPD_KROW0_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_KPD_KROW0_PIN_M_MDEINT   GPIO_MODE_03
#define GPIO_KPD_KROW0_PIN_M_KPROW   GPIO_MODE_01

#define GPIO_LCM_RST         (GPIO70 | 0x80000000)
#define GPIO_LCM_RST_M_GPIO   GPIO_MODE_00
#define GPIO_LCM_RST_M_EINT   GPIO_MODE_06
#define GPIO_LCM_RST_M_LCM_RST   GPIO_MODE_01

#define GPIO_CAMERA_CMPDN_PIN         (GPIO71 | 0x80000000)
#define GPIO_CAMERA_CMPDN_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_CMPDN_PIN_M_EINT   GPIO_MODE_06

#define GPIO_CAMERA_CMRST_PIN         (GPIO73 | 0x80000000)
#define GPIO_CAMERA_CMRST_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_CMRST_PIN_M_EINT   GPIO_MODE_06

#define GPIO_CAMERA_CMPDN1_PIN         (GPIO74 | 0x80000000)
#define GPIO_CAMERA_CMPDN1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_CMPDN1_PIN_M_EINT   GPIO_MODE_07

#define GPIO_CAMERA_CMRST1_PIN         (GPIO76 | 0x80000000)
#define GPIO_CAMERA_CMRST1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_CAMERA_CMRST1_PIN_M_EINT   GPIO_MODE_07

#define GPIO_UART_URXD1_PIN         (GPIO77 | 0x80000000)
#define GPIO_UART_URXD1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_UART_URXD1_PIN_M_MDEINT   GPIO_MODE_04
#define GPIO_UART_URXD1_PIN_M_URXD   GPIO_MODE_01

#define GPIO_UART_UTXD1_PIN         (GPIO78 | 0x80000000)
#define GPIO_UART_UTXD1_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_UART_UTXD1_PIN_M_MDEINT   GPIO_MODE_04
#define GPIO_UART_UTXD1_PIN_M_UTXD   GPIO_MODE_01

#define GPIO_GSE_1_EINT_PIN         (GPIO83 | 0x80000000)
#define GPIO_GSE_1_EINT_PIN_M_GPIO   GPIO_MODE_00
#define GPIO_GSE_1_EINT_PIN_M_EINT   GPIO_MODE_06


/*Output for default variable names*/
/*@XXX_XX_PIN in gpio.cmp          */



#endif /* __CUST_GPIO_USAGE_H__ */


