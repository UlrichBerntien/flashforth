;;; FlashForth device configuration for the dsPIC33E

.equ PLL_DIV, 30              ; Fcy is 27637 KHz (FRC_PLL)
.equ PLL_FBD, PLL_DIV-2
.equ PLL_POST, 2              ; Do not change
.equ PLL_PRE, 2               ; Do not change
.equ FREQ_FIN, 7372800        ; PLL input frequency.
.equ FREQ_OSC, ( FREQ_FIN*PLL_DIV/PLL_PRE/PLL_POST )  ; PLL output frequency. Used with FRCPLL

;.equ  FREQ_OSC, 7372800        ; Used with FNOSC_FRC POSCMD_NONE
;.equ  FREQ_OSC, 16000000       ; Used with FNOSC_PRI POSCMD_HS/XT and external XTAL

; Define the UART used for the operator
.equ OPERATOR_UART, 1        ; 1 or 2

;;; UART1 configuration
.equ BAUDRATE1, 9600 				      ; Serial baudrate UART1. OPERATOR UART -> mandatory
.equ FC1_TYPE, 2                          ; 1 = XON/XOFF, 2=CTS/RTS
.equ AUTOBAUD1, 0                         ; 0 = to use fixed baudrate
                                          ; 1 = Autobaud, First char after reset must be 'U' (0x55)

;;; UART2 configuration
.equ BAUDRATE2, 38400 				      ; Serial baudrate UART2, comment if not used
.equ FC2_TYPE, 1                          ; 1 = XON/XOFF, 2=CTS/RTS
.equ AUTOBAUD2, 0                         ; 0 = to use fixed baudrate
                                          ; 1 = Autobaud, First char after reset must be 'U' (0x55)

; Map UART1 pins
.ifdecl RPINR18
.equ RPINR18VAL, 43          ; U1RXPIN RP43 PB11 pin22 microstickplus
.equ U1_RPO_REGISTER, RPOR4  ; RP42         PB10 pin21 microstickplus
.equ U1_RPO_VALUE, 0x0001    ; UART1 TX on RP42 pin
.equ U1RTSPORT, LATB
.equ U1RTSTRIS, TRISB
.equ U1RTSPIN, 12
.endif

; Map UART2 pins
.ifdecl BAUDRATE2
.ifdecl RPINR19
.equ RPINR19VAL, 0x0001    ; (U2RXPIN)
.equ U2_RPO_REGISTER, RPOR0   ; RP35
.equ U2_RPO_VALUE, 0x0200     ; UART2 TX on RP35 pin
.equ U2RTSPORT, LATB
.equ U2RTSTRIS, TRISB
.equ U2RTSPIN, 0x3
.endif
.endif

; Default number base
.equ BASE_DEFAULT, 10      ; 16 = hexadecimal, 10 = decimal

; Set to 1 for power save when CPU is idle
.equ IDLE_MODE, 1

; Set to 1 for CPU load measurement
.equ CPU_LOAD, 1

; CPU load indicator led definitions
.equ CPU_LOAD_LED, 0       ; set to 0 to disable
.equ CPU_LOAD_TRIS, TRISA
.equ CPU_LOAD_PORT, PORTA
.equ CPU_LOAD_BIT, 0
.equ CPU_LOAD_LED_POLARITY, 1   ; 0 = low on port turns on led, 1 = high on port turns on led

; Define the startup delay for turnkey words. Milliseconds
.equ TURNKEY_DELAY, 2000  ; milliseconds

; UART buffer sizes
; Valid sizes are 7, 15, 31, 63, 127, 255, 511, 1023, etc.
.equ TX1_BUF_SIZE, 0  ; Use 0 for unbuffered TX.
.equ RX1_BUF_SIZE, 31
.equ RX1_OFF_FILL, 8   ; Fill level for XOFF

.equ TX2_BUF_SIZE, 0  ; Use 0 for unbuffered TX.
.equ RX2_BUF_SIZE, 31
.equ RX2_OFF_FILL, 8   ; Fill level for XOFF

; Set to 1 if the UARTS have ERRATA on the UTXBF status flag.
.equ ERRATA_UTXBF, 0

;;; USER AREA sizes for the OPERATOR task
.equ RETURN_STACK_SIZE, 128          ; 64 cells return stack
.equ PARAMETER_STACK_SIZE, 96        ; 48 cells parameter stack
.equ INTERRUPT_STACK_FRAME, 16       ; 8 cells interrupt stack frame  on return stack
.equ TIB_SIZE, 84                    ; 84 chars tib size
.equ HOLD_SIZE, 10                   ; 10 chars hold area

;;; Storage space for OPERATOR uservariables 2 and upwards
;;; EXAMPLE: 8 user myUserVar  -> define UADDSIZE 8
.equ UADDSIZE, 0

; Set to 1 for extra debug info after an exception reset
.equ DEBUG_INFO, 1

; Set to 1 to see when FF writes to flash and eeprom
; 'F' is printed before each flash write.
; 'E' is printed before each eeprom write
.equ DEBUG_FLASH, 1

; Include the example for calling a C function. C4+,  C4add.c
.equ C_EXAMPLE, 0

; Include the 32-bit float number support
.equ FLOATS, 0

; Set to 1 to allow control-o to reset FlashForth
.equ CTRL_O_WARM_RESET, 1

; Method 1 updates flash and eeprom after each ok prompt.
; Method 2 updates flash and eeprom after no flash or eeprom
; update requests have been made for a time of WRITE_TIMEOUT
.equ WRITE_METHOD, 2
.equ WRITE_TIMEOUT, 300         ; milliseconds

;;; Memory mapping prefixes
.equ SFR_SIZE,       0x1000
.equ PFLASH,         SFR_SIZE+RAM_SIZE
.equ HI_TEMP,        PFLASH+FLASH_SIZE
.if HI_TEMP > 0xffff
.equ FLASH_HI,       (0xffff)
.else
.equ FLASH_HI,       (HI_TEMP-1)
.endif

;;; Flash memory commands. Do not modify.
.equ FLASH_ERASE,    0x4003  ; Memory page erase
.equ FLASH_WRITE,    0x4001  ; Memory row write
.equ FLASH_WRITE_SINGLE, 0x4001;Memory double word write
.equ FLASH_WRITE_DOUBLE, 0x4001;Memory double word write
.equ FLASH_ROWSIZE,  0x0002	; Row size, words
.equ FLASH_ROWS,     0x0200	; Rows
.equ FBUFSIZE,       FLASH_ROWSIZE*FLASH_ROWS*2
.equ FBUFMASK,       ~(FBUFSIZE-1)


.if (0x10000 - SFR_SIZE - RAM_SIZE) < FLASH_SIZE
.equ WANT_X, 1
.else
.equ WANT_X, 0
.endif

.equ FCY, (FREQ_OSC/2)
.equ MS_PR_VAL, ((FCY/1000)-1)			      ; Timer value for 1 ms ticks
.equ BAUD_DIV1, (FCY/4/BAUDRATE1)-1		  ; UART1 divisor
.ifdecl BAUDRATE2
.equ BAUD_DIV2, (FCY/4/BAUDRATE2)-1		  ; UART2 divisor
.endif
.equ write_delay, 20                      ; Flash write delay

.if FLASH_SIZE > (0x10000 - PFLASH + (FBUFSIZE*4))
.equ DPS_LOW,  0    ; EEPROM emulation after end of addressable kernel
.else
.equ DPS_LOW,  1    ; EEPROM emulation inside kernel
.endif
.if DPS_LOW == 0    ; EEPROM EMULATION after end of addressable kernel
.equ DPS_ADDR, 0x10000 - PFLASH
.equ DPS_BASE, DPS_ADDR&0xffff
.equ DPS_PAGE, DPS_ADDR>>16
.else               ; EEPROM emulation inside kernel
.equ DPS_BASE, (KERNEL_END -  FBUFSIZE*4))  ; AND IBUFMASK in runtime
.equ DPS_PAGE, 0
.endif

;;; Different flash write logic for E devices
.equ PIC2433E, 1

; Amount of interrupt vectors
.equ IVECSIZE, 126

; USB CDC support
.equ USB_CDC, 0		    ; 1 includes the USB CDC support into FlashForth
			      
