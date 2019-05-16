# PCA-pump

This arduino code drives NEMA17 bipolar stepper motor using A4988 driver.

Interfacing of A4988 driver with NEMA17 bipolar stepper motor is done by following [this video](https://www.youtube.com/watch?v=5CmjB4WF5XA).

The same code can be used to drive the bipolar stepper motor of PCA pump.

A4988 requires 8V-35V power supply (to VMOT) to drive the motor.

### Images

1. **PCA-to-A4988.jpg ->** This image shows the wiring from A4988 to PCA pump's bipolar stepper motor. Note that wiring sequence can be reversed and motor will work without any problem. Therefore, before starting the motor, the direction of motor's rotation has to be checked.

2. **A4988 wiring diagram ->** The wiring diagram is taken from [HowToMechatronics](https://www.youtube.com/user/DejanNedelkovski). 

Cheers!



