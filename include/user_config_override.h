#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// ===== ENABLE CUSTOM MODULES =====
#define USE_DISPLAY_TM1637        // LED 7 đoạn TM1637
#define USE_ROTARY_V1             // Encoder quay
#define USE_IR_REMOTE             // IR Receiver
#define USE_BUZZER                // Buzzer còi
#define USE_PWM_DIMMER            // PWM output (speed control)

// ===== TÙY CHỌN CƠ BẢN =====
#define USER_TEMPLATE "{\"NAME\":\"FanCtrl\",\"GPIO\":[1,1,1,1,6656,6624,1,1,1,1,1,1,1,1],\"FLAG\":0,\"BASE\":18}"
#define MODULE 0  // Generic module

#endif  // _USER_CONFIG_OVERRIDE_H_
