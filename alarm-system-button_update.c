#define SENSOR1 A0
#define SENSOR2 A1

// Declarations
int pin_switch = 3,
    // digital pins
    pin_speaker = 11,
    pin_led = 2,
    button = 8;

int wireController,buttonController,val_2,val_3,count=0;

long hes_value_1,
     hes_value_2,
     val_1,current_time;

void setup() {
  Serial.begin(9600);
  //outputs
  pinMode(pin_speaker , OUTPUT);
  pinMode(pin_led, OUTPUT);  

  //inputs
  pinMode(pin_switch, INPUT);
  pinMode(button, INPUT);
}

void loop() {
  // read input 
  wireController = digitalRead(pin_switch);
  buttonController = digitalRead(button);
  //  Serial.println(controller);
  //if (wireController == HIGH){
  if (buttonController == HIGH){
    val_1 = analogRead(SENSOR1);
    val_2 = analogRead(SENSOR2);
    //val_3 = digitalRead(button);

    Serial.println(val_3);
    
      if ((val_1 >= 500 && val_1 <= 530) && (val_2 >= 500 && val_2 <= 530)) {
        //Serial.println(val_1);
      //Serial.println(val_2);
        analogWrite(pin_speaker, 3);
        digitalWrite(pin_led, HIGH);
        delay(350);
        digitalWrite(pin_led,LOW);
        delay(350);
        count+=1;
        //Serial.print(count);      
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