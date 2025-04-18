
// ==============================================
// Pin definitions for the encoders
// ==============================================
#define ENC1_A 23 // Pin used on ESP32 for the ENC1_A
#define ENC1_B 22 // Pin used on ESP32 for the ENC1_B
#define ENC2_A 21 // Pin used on ESP32 for the ENC1_A
#define ENC2_B 19 // Pin used on ESP32 for the ENC1_B

// ==============================================
// Pin definitions for the motors
// ==============================================
#define MOT1_A 16 // Pin used on ESP32 for the MOT1_A
#define MOT1_B 4  // Pin used on ESP32 for the MOT1_B
#define MOT2_A 18 // Pin used on ESP32 for the MOT1_A
#define MOT2_B 17  // Pin used on ESP32 for the MOT1_B

// ==============================================
// PWM Channel definitions for the motors
// ==============================================
#define PWM1_A 0 // PWM Channel attached to MOT1_A
#define PWM1_B 1 // PWM Channel attached to MOT1_B
#define PWM2_A 2 // PWM Channel attached to MOT1_A
#define PWM2_B 3 // PWM Channel attached to MOT1_B

// ==============================================
// Variables
// ==============================================
unsigned long Serial_time = 0; // Serial time in us
double w1, w1_ref, MOT1_cmd;   // Speed, reference ,and command for the motor 1
double w2, w2_ref, MOT2_cmd;   // Speed, reference ,and command for the motor 2
volatile long EncoderTick1;    // Encoder tick count for encoder 1
volatile long EncoderTick2;    // Encoder tick count for encoder 2
