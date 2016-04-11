#define SENSOR1 A0
#define SENSOR2 A1

// Declarations
int pin_switch = 3,
    // digital pins
    pin_speaker = 11,
    pin_led = 2;

int controller;

long hes_value_1,
     hes_value_2,
     val_1,current_time;

void setup() {
  Serial.begin(9600);
  pinMode(pin_speaker , OUTPUT);
  pinMode(pin_led, OUTPUT);  

  // output
  pinMode(pin_switch, INPUT);
}

void loop() {
  // read input 
  controller = digitalRead(pin_switch);
  
  //  Serial.println(controller);
  if (controller == HIGH){
    val_1 = analogRead(SENSOR1);
      if ((val_1 >= 500 && val_1 <= 530) && (val_2 >= 500 && val_2 <= 530)) {
        Serial.println(val_1);
        delay(3000);
        analogWrite(pin_speaker, 3);
        digitalWrite(pin_led, HIGH);
      
      // Serial.println(pinHes_1);
      // current_time = millis();
      // if (pinSwitch == HIGH) {
          // while (millis() <= current_time + 60000) {
          // }
      // }
    }else{}
  }else{
    analogWrite(pin_speaker, 0);
    digitalWrite(pin_led, LOW);
  }
}