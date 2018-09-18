int pushButton = 8;
int led = 13;
boolean led_1 = false;
boolean lastButton = LOW;

void setup() {
  // put your setup code here, to run once:

  pinMode(pushButton, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(pushButton) == HIGH && lastButton == LOW) {
    //if the condition is true the led will turn on.
    //last button is initialy low.
    led_1 = !led_1; //inverse value of led_1. which yield to true
    lastButton = HIGH;

  }
  else {

    lastButton = digitalRead(pushButton);

  }
  digitalWrite(led, led_1);
}
