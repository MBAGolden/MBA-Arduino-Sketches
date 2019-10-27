/*
    Created by MBAGolden
    This sketch is to have multiple PWM outputs with varying duty cycles.
*/

void setup() {
     pinMode(11, OUTPUT); // 80% Duty Cycle
     pinMode(10, OUTPUT); // 60% Duty cycle
     pinMode(9, OUTPUT);  // 40% Duty cycle
     pinMode(6, OUTPUT);  // 20% Duty cycle
     pinMode(5, OUTPUT);  // 50% Duty cycle (fast)
}

void loop() {
    digitalWrite(11, HIGH);          
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    delay(10);
    digitalWrite(5, LOW);
    delay(10);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);  // Pin 6 on for .2 seconds off for .8 = 20%
    delay(10);
    digitalWrite(5, LOW);
    delay(10);
    digitalWrite(5, HIGH);
    digitalWrite(9, LOW);  // Pin 9 on for .4 seconds off for .6 = 40%
    delay(10);
    digitalWrite(5, LOW);
    delay(10);
    digitalWrite(5, HIGH);
    digitalWrite(10, LOW); // Pin 10 on for .6 seconds off for .4 = 60%
    delay(10);
    digitalWrite(5, LOW);
    delay(10);
    digitalWrite(5, HIGH);
    digitalWrite(11, LOW); // Pin 11 on for .8 seconds off for .2 = 80%
    delay(10);
    digitalWrite(5, LOW);
    delay(10);             // 100ms or .1 seconds total loop
}
