// Declarations
int pin_switch = 3,
    // analog pins
    pin_hes_1 = 0,
    pin_hes_2 = 1,
    // digital pins
    pin_speaker = 11,
    pin_led = 2;

int controller;

long hes_value_1,
     hes_value_2,
     current_time;

void setup() {
  Serial.begin(9600);
  pinMode(pin_speaker , OUTPUT);
  pinMode(pin_led, OUTPUT);


  // pins for hes
  pinMode(pin_hes_1, INPUT);
  pinMode(pin_hes_2, INPUT);

  // output
  pinMode(pin_switch, INPUT);
}

void loop() {
  controller = digitalRead(pin_switch);
  Serial.println(controller);
  if (controller == HIGH){
    long val_1 = analogRead(pin_hes_1);
    long val_2 = analogRead(pin_hes_2);
    //int val = digitalRead(pin_hes_1);
    //Serial.println(val_1);
    analogWrite(pin_speaker, 3);
    digitalWrite(pin_led, HIGH);
    //  Serial.println(pinHes_1);
    //  current_time = millis();
    //  if (pinSwitch == HIGH) {
    //    while (millis() <= current_time + 60000) {

    //    }
    //  }
  } else {
    analogWrite(pin_speaker, 0);
    digitalWrite(pin_led, LOW);
  }

}
