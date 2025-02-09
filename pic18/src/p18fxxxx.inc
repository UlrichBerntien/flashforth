;**********************************************************************
;                                                                     *
;    Filename:      p18fxxxx.inc                                      *
;    Date:          09.08.2022                                        *
;    FF Version:    5.0                                               *
;    Copyright:     Mikael Nordman                                    *
;    Author:        Mikael Nordman                                    *
;                                                                     * 
;    Modified:                                                        *
;**********************************************************************
;    FlashForth is licensed acording to the GNU General Public License*
;**********************************************************************
;;; FlashForth processor configuration selection
#ifdef __18F242
    #include "p18fxx2xx8.inc"
    #define  p18fxx2xx8_fix_1
    #define  PICTYPE PIC18F242
    #define PICLEN    9
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F442
    #include "p18fxx2xx8.inc"
    #define  p18fxx2xx8_fix_1
    #define  PICTYPE PIC18F442
    #define PICLEN    9
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff 
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F252
    #include "p18fxx2xx8.inc"
    #define  p18fxx2xx8_fix_1
    #define  PICTYPE PIC18F252
    #define PICLEN    9
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff 
#endif
#ifdef __18F452
    #include "p18fxx2xx8.inc"
    #define  p18fxx2xx8_fix_1
    #define  PICTYPE PIC18F452
    #define PICLEN    9
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff
#endif
#ifdef __18F248
    #include "p18fxx2xx8.inc"
    #define  p18fxx2xx8_fix_1
    #define  PICTYPE PIC18F248
    #define PICLEN    9
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F258
    #include "p18fxx2xx8.inc"
    #define  p18fxx2xx8_fix_1
    #define  PICTYPE PIC18F258  
    #define PICLEN    9
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff
#endif
#ifdef __18F448
    #include "p18fxx2xx8.inc"
    #define  p18fxx2xx8_fix_1
    #define  PICTYPE PIC18F448
    #define PICLEN    9
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F458
    #include "p18fxx2xx8.inc"
    #define  p18fxx2xx8_fix_1
    #define  PICTYPE PIC18F458
    #define PICLEN    9
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff
#endif
#ifdef __18F2455
    #include "p18f2455-2550-4455-4550.inc"
    #define  PICTYPE PIC18F2455
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #ifdef USB_CDC
    #define RAM_LO    0xf000
    #define RAM_HI    0xf3ff
    #else
    #define RAM_LO    0xf000
    #define RAM_HI    0xf7ff            
    #endif   
#endif
#ifdef __18F2550
    #include "p18f2455-2550-4455-4550.inc"
    #define  PICTYPE PIC18F2550
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #ifdef USB_CDC
    #define RAM_LO    0xf000
    #define RAM_HI    0xf3ff            
    #else
    #define RAM_LO    0xf000
    #define RAM_HI    0xf7ff
    #endif  
#endif
#ifdef __18F4455
    #include "p18f2455-2550-4455-4550.inc"
    #define  PICTYPE PIC18F4455
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x5fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #ifdef USB_CDC
    #define RAM_LO    0xf000
    #define RAM_HI    0xf3ff
    #else
    #define RAM_LO    0xf000
    #define RAM_HI    0xf7ff            
    #endif
#endif
#ifdef __18F4550
    #include "p18f2455-2550-4455-4550.inc"
    #define  PICTYPE PIC18F4550
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf3ff
#endif
#ifdef __18F2420
    #include "p18f2420-2520-4420-4520.inc"
    #define  PICTYPE PIC18F2420
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F2520
    #include "p18f2420-2520-4420-4520.inc"
    #define PICTYPE PIC18F2520
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff
#endif
#ifdef __18F4420
    #include "p18f2420-2520-4420-4520.inc"
    #define  PICTYPE PIC18F4420
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F4520
    #include "p18f2420-2520-4420-4520.inc"
    #define  PICTYPE PIC18F4520
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff
#endif
#ifdef __18F2525
    #include "p18f2525-2620-4525-4620.inc"
    #define  PICTYPE PIC18F2525
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbfff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif
#ifdef __18F2620
    #include "p18f2525-2620-4525-4620.inc"
    #define  PICTYPE PIC18F2620
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif
#ifdef __18F4525
    #include "p18f2525-2620-4525-4620.inc"
    #define  PICTYPE PIC18F4525
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbfff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif
#ifdef __18F4620
    #include "p18f2525-2620-4525-4620.inc"
    #define  PICTYPE PIC18F4620
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif

#ifdef __18F6527
    #include "p18f6722-family.inc"
    #define  PICTYPE PIC18F6527
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbfff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif
#ifdef __18F6622
    #include "p18f6722-family.inc"
    #define  PICTYPE PIC18F6622
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif
#ifdef __18F6627
    #include "p18f6722-family.inc"
    #define PICTYPE PIC18F6627
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif
#ifdef __18F6722
    #include "p18f6722-family.inc"
    #define  PICTYPE PIC18F6722
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif
#ifdef __18F8527
    #include "p18f8722-family.inc"
    #define  PICTYPE PIC18F8527
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbfff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif
#ifdef __18F8622
    #include "p18f8722-family.inc"
    #define  PICTYPE PIC18F8622
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif
#ifdef __18F8627
    #include "p18f8722-family.inc"
    #define  PICTYPE PIC18F8627
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif
#ifdef __18F8722
    #include "p18f8722-family.inc"
    #define  PICTYPE PIC18F8722
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif
#ifdef __18F2458
    #include "p18f2458-2553-4458-4553.inc"
    #define  PICTYPE PIC18F2458
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x5fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #ifdef USB_CDC
    #define RAM_LO    0xf000
    #define RAM_HI    0xf3ff
    #else
    #define RAM_LO    0xf000
    #define RAM_HI    0xf7ff            
    #endif
#endif
#ifdef __18F2553
    #include "p18f2458-2553-4458-4553.inc"
    #define  PICTYPE PIC18F2553
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #ifdef USB_CDC
    #define RAM_LO    0xf000
    #define RAM_HI    0xf3ff
    #else
    #define RAM_LO    0xf000
    #define RAM_HI    0xf7ff            
    #endif
#endif
#ifdef __18F4458
    #include "p18f2458-2553-4458-4553.inc"
    #define  PICTYPE PIC18F4458
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x5fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #ifdef USB_CDC
    #define RAM_LO    0xf000
    #define RAM_HI    0xf3ff
    #else
    #define RAM_LO    0xf000
    #define RAM_HI    0xf7ff            
    #endif
#endif
#ifdef __18F4553
    #include "p18f2458-2553-4458-4553.inc"
    #define  PICTYPE PIC18F4553
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf3ff
#endif
#ifdef __18F2480
    #include "p18f2480-2580-4480-4580.inc"
    #define  PICTYPE PIC18F2480
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F2580
    #include "p18f2480-2580-4480-4580.inc"
    #define  PICTYPE PIC18F2580
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff
#endif
#ifdef __18F4480
    #include "p18f2480-2580-4480-4580.inc"
    #define  PICTYPE PIC18F4480
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F4580
    #include "p18f2480-2580-4480-4580.inc"
    #define  PICTYPE PIC18F4580
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff
#endif
#ifdef __18F2423
    #include "p18f2423-2523-4423-4523.inc"
    #define  PICTYPE PIC18F2423
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F2523
    #include "p18f2423-2523-4423-4523.inc"
    #define  PICTYPE PIC18F2523
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff
#endif
#ifdef __18F4423
    #include "p18f2423-2523-4423-4523.inc"
    #define  PICTYPE PIC18F4423
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F4523
    #include "p18f2423-2523-4423-4523.inc"
    #define  PICTYPE PIC18F4523
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff
#endif
#ifdef __18F2585
    #include "p18f2585-2680-4585-4680.inc"
    #define  PICTYPE PIC18F2585
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbfff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xfcff
#endif
#ifdef __18F2680
    #include "p18f2585-2680-4585-4680.inc"
    #define  PICTYPE PIC18F2680
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xfcff
#endif
#ifdef __18F4585
    #include "p18f2585-2680-4585-4680.inc"
    #define  PICTYPE PIC18F4585
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbfff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xfcff
#endif
#ifdef __18F4680
    #include "p18f2585-2680-4585-4680.inc"
    #define  PICTYPE PIC18F4680
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xfcff
#endif
#ifdef __18F2682
    #include "p18f2682-2685-4682-4685.inc"
    #define  PICTYPE PIC18F2682
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xfcff
#endif
#ifdef __18F2685
    #include "p18f2682-2685-4682-4685.inc"
    #define  PICTYPE PIC18F2685
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xfcff
#endif
#ifdef __18F4682
    #include "p18f2682-2685-4682-4685.inc"
    #define  PICTYPE PIC18F4682
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xfcff
#endif
#ifdef __18F4685
    #include "p18f2682-2685-4682-4685.inc"
    #define  PICTYPE PIC18F4685
    #define PICLEN    10
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xfcff
#endif
#ifdef __18F14K22
    #include "p18f14k22.inc"
    #define PICTYPE PIC18F14K22
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf1ff
#endif
#ifdef __18LF14K22
    #include "p18f14k22.inc"
    #define PICTYPE PIC18F14K22
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf1ff
#endif
#ifdef __18F24K20
    #include "p18f2x4xk20.inc"
    #define PICTYPE PIC18F24K20
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F25K20
    #include "p18f2x4xk20.inc"
    #define PICTYPE PIC18F25K20
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff
#endif
#ifdef __18F26K20
    #include "p18f2x4xk20.inc"
    #define PICTYPE PIC18F26K20
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif
#ifdef __18F44K20
    #include "p18f2x4xk20.inc"
    #define PICTYPE PIC18F44K20
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F45K20
    #include "p18f2x4xk20.inc"
    #define PICTYPE PIC18F45K20
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff
#endif
#ifdef __18F46K20
    #include "p18f2x4xk20.inc"
    #define PICTYPE PIC18F46K20
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff5f
#endif

#ifdef __18F24K22
    #include "p18f2x4xk22.inc"
    #define PICTYPE PIC18F24K22
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F25K22
    #include "p18f2x4xk22.inc"
    #define PICTYPE PIC18F25K22
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff
#endif
#ifdef __18F26K22
    #include "p18f2x4xk22.inc"
    #define PICTYPE PIC18F26K22
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff37
#endif
#ifdef __18F44K22
    #include "p18f2x4xk22.inc"
    #define PICTYPE PIC18F44K22
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff
#endif
#ifdef __18F45K22
    #include "p18f2x4xk22.inc"
    #define PICTYPE PIC18F45K22
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf5ff
#endif
#ifdef __18F46K22
    #include "p18f2x4xk22.inc"
    #define PICTYPE PIC18F46K22
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff37
#endif
#ifdef __18F65K22
    #include "p18f87k22-family.inc"
    #define PICTYPE PIC18F65K22
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf7ff
#endif
#ifdef __18F66K22
    #include "p18f87k22-family.inc"
    #define PICTYPE PIC18F66K22
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff15
#endif
#ifdef __18F85K22
    #include "p18f87k22-family.inc"
    #define PICTYPE PIC18F85K22
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf7ff
#endif
#ifdef __18F86K22
    #include "p18f87k22-family.inc"
    #define PICTYPE PIC18F86K22
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xff15
#endif
#ifdef __18F65K90
    #include "p18f87k90-family.inc"
    #define PICTYPE PIC18F65K90
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf7ff
#endif
#ifdef __18F66K90
    #include "p18f87k90-family.inc"
    #define PICTYPE PIC18F66K90
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xfef3
#endif
#ifdef __18F85K90
    #include "p18f87k90-family.inc"
    #define PICTYPE PIC18F85K90
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xf7ff
#endif
#ifdef __18F86K90
    #include "p18f87k90-family.inc"
    #define PICTYPE PIC18F86K90
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xebff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #define RAM_LO    0xf000
    #define RAM_HI    0xfef3
#endif
#ifdef __18F14K50
    #include "p18f14k50.inc"
    #define PICTYPE PIC18F14K50
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #ifdef USB_CDC
    #define RAM_LO    0xf000
    #define RAM_HI    0xf1ff
    #else
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff            
    #endif
#endif
#ifdef __18LF14K50
    #include "p18f14k50.inc"
    #define PICTYPE PIC18F14K50
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xecff
    #ifdef USB_CDC
    #define RAM_LO    0xf000
    #define RAM_HI    0xf1ff
    #else
    #define RAM_LO    0xf000
    #define RAM_HI    0xf2ff            
    #endif
#endif
#ifdef __18F24K50
    #include "p18f24k50-25k50-45k50.inc"
    #define PICTYPE PIC18F24K50
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #ifdef USB_CDC
    #define RAM_LO    0xf000
    #define RAM_HI    0xf3ff
    #else
    #define RAM_LO    0xf000
    #define RAM_HI    0xf7ff            
    #endif
#endif
#ifdef __18F25K50
    #include "p18f24k50-25k50-45k50.inc"
    #define PICTYPE PIC18F25K50
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #ifdef USB_CDC
    #define RAM_LO    0xf000
    #define RAM_HI    0xf3ff
    #else
    #define RAM_LO    0xf000
    #define RAM_HI    0xf7ff            
    #endif
#endif
#ifdef __18F45K50
    #include "p18f24k50-25k50-45k50.inc"
    #define PICTYPE PIC18F45K50
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xec00
    #define EEPROM_HI 0xefff
    #ifdef USB_CDC
    #define RAM_LO    0xf000
    #define RAM_HI    0xf3ff
    #else
    #define RAM_LO    0xf000
    #define RAM_HI    0xf7ff            
    #endif
#endif
#ifdef __18F24K42
    #define PICTYPE PIC18F24K42
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xbc00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xc3ff
    #include "p18f24k42.inc"
#endif
#ifdef __18F25K42
    #define PICTYPE PIC18F25K42
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xbf00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xc7ff
    #include "p18fxxk42.inc"
#endif
#ifdef __18F26K42
    #define PICTYPE PIC18F26K42
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbbff
    #define EEPROM_LO 0xbc00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xcfff   
    #include "p18fxxk42.inc"
#endif
#ifdef __18F27K42
    #define PICTYPE PIC18F27K42
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbbff
    #define EEPROM_LO 0xbc00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xdfff
    #include "p18fxxk42.inc"
#endif
#ifdef __18F45K42
    #define PICTYPE PIC18F45K42
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbeff
    #define EEPROM_LO 0xbf00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xc7ff
    #define SFR_LO    0xf800
    #include "p18fxxk42.inc"
#endif
#ifdef __18F46K42
    #define PICTYPE PIC18F46K42
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbbff
    #define EEPROM_LO 0xbc00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xcfff   
    #include "p18fxxk42.inc"
#endif
#ifdef __18F47K42
    #define PICTYPE PIC18F47K42
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbbff
    #define EEPROM_LO 0xbc00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xdfff
    #include "p18fxxk42.inc"
#endif
#ifdef __18F55K42
    #define PICTYPE PIC18F55K42
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbeff
    #define EEPROM_LO 0xbf00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xc7ff
    #define SFR_LO    0xf800
    #include "p18fxxk42.inc"
#endif
#ifdef __18F56K42
    #define PICTYPE PIC18F56K42
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbbff
    #define EEPROM_LO 0xbc00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xcfff   
    #include "p18fxxk42.inc"
#endif
#ifdef __18F57K42
    #define PICTYPE PIC18F57K42
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbbff
    #define EEPROM_LO 0xbc00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xdfff
    #include "p18fxxk42.inc"
#endif
#ifdef __18F25K83
    #include "p18fxxk83.inc"
    #define PICTYPE PIC18F25K83
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbbff
    #define EEPROM_LO 0xbc00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xc7ff
    #define SFR_LO    0xf800
#endif
#ifdef __18F26K83
    #include "p18fxxk83.inc"
    #define PICTYPE PIC18F26K83
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbbff
    #define EEPROM_LO 0xbc00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xcfff   
#endif
#ifdef __18F04Q40
    #include "p18fxxq40.inc"
    #define PICTYPE PIC18F04Q40
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xbe00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xc8ff   
    #define FBUFFER   0x0900
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F14Q40
    #include "p18fxxq40.inc"
    #define PICTYPE PIC18F14Q40
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xbe00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xc8ff   
    #define FBUFFER   0x0900
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F05Q40
    #include "p18fxxq40.inc"
    #define PICTYPE PIC18F05Q40
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xbe00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xccff   
    #define FBUFFER   0x0d00
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F15Q40
    #include "p18fxxq40.inc"
    #define PICTYPE PIC18F15Q40
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xbe00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xccff   
    #define FBUFFER   0x0d00
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F06Q40
    #include "p18fxxq40.inc"
    #define PICTYPE PIC18F06Q40
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbdff
    #define EEPROM_LO 0xbe00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xd4ff   
    #define FBUFFER   0x1500
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F16Q40
    #include "p18fxxq40.inc"
    #define PICTYPE PIC18F16Q40
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbdff
    #define EEPROM_LO 0xbe00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xd4ff   
    #define FBUFFER   0x1500
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F04Q41
    #include "p18fxxq40.inc"
    #define PICTYPE PIC18F04Q41
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xbe00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xc8ff   
    #define FBUFFER   0x0900
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F14Q41
    #include "p18fxxq40.inc"
    #define PICTYPE PIC18F14Q41
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x3fff
    #define EEPROM_LO 0xbe00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xc8ff   
    #define FBUFFER   0x0900
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F05Q41
    #include "p18fxxq40.inc"
    #define PICTYPE PIC18F05Q41
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xbe00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xccff   
    #define FBUFFER   0x0d00
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F15Q41
    #include "p18fxxq40.inc"
    #define PICTYPE PIC18F15Q41
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xbe00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xccff   
    #define FBUFFER   0x0d00
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F06Q41
    #include "p18fxxq41.inc"
    #define PICTYPE PIC18F06Q41
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbdff
    #define EEPROM_LO 0xbe00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xd4ff   
    #define FBUFFER   0x1500
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F16Q41
    #include "p18fxxq41.inc"
    #define PICTYPE PIC18F16Q41
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbdff
    #define EEPROM_LO 0xbe00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xd4ff   
    #define FBUFFER   0x1500
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F25Q43
    #include "p18fxxq43.inc"
    #define PICTYPE PIC18F25Q43
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0x7fff
    #define EEPROM_LO 0xbc00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xccff   
    #define FBUFFER   0x0d00   
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F26Q43
    #include "p18fxxq43.inc"
    #define PICTYPE PIC18F26Q43
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbbff
    #define EEPROM_LO 0xbc00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xd4ff
    #define FBUFFER   0x1500   
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
#ifdef __18F27Q43
    #include "p18fxxq43.inc"
    #define PICTYPE PIC18F27Q43
    #define PICLEN    11
    #define FLASH_LO  0x0000
    #define FLASH_HI  0xbbff
    #define EEPROM_LO 0xbc00
    #define EEPROM_HI 0xbfff
    #define RAM_LO    0xc000
    #define RAM_HI    0xe4ff
    #define FBUFFER   0x3500
    #undef  _FLASH_ERASE_SIZE
    #define _FLASH_ERASE_SIZE 0x100
    #define EEPROM_ADDRU 0x38
    #define EEPROM_MASKH 0x01
#endif
;;; Some constants controlling how writes to program flash is made.
    flash_write_outer_loop equ _FLASH_ERASE_SIZE/_FLASH_WRITE_SIZE
    flash_write_inner_loop equ _FLASH_WRITE_SIZE
    flash_block_size equ _FLASH_ERASE_SIZE
    flash_block_mask equ flash_block_size - 1;
    flash_pointer_mask equ ( ~ flash_block_mask ) & 0xff

#ifndef FLASH_HI
#error CHIP NOT SUPPORTED
#endif