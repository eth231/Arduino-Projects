int step_count;
void setup() {
  //seting up pins as outputs for motor driver
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  //using switch and based on step_count we can perform each motor step
  //as you can see we are shifting high state every step
  switch(step_count){
    case 0:
     digitalWrite(2, HIGH);
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     digitalWrite(5, LOW);
    break;

    case 1:
     digitalWrite(2, LOW);
     digitalWrite(3, HIGH);
     digitalWrite(4, LOW);
     digitalWrite(5, LOW);
    break;

    case 2:
     digitalWrite(2, LOW);
     digitalWrite(3, LOW);
     digitalWrite(4, HIGH);
     digitalWrite(5, LOW);
    break;

    case 3:
     digitalWrite(2, LOW);
     digitalWrite(3, LOW);
     digitalWrite(4, LOW);
     digitalWrite(5, HIGH);
    break;
  }
  //incrementing step_count value
  step_count++;
  //if it is bigger than should set it to 0
  if(step_count > 3){
    step_count = 0;
  }
  //change the delay to change the speed for this motor 0.002 second is the smallest possible
  delay(4);

}
