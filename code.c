Servo myservo;

int potpin = 0; 
int val; 

void setup() ( 
  myservo.attach(9); 
)

void loop() ( 
 val = analogRead(potpin) 
 val = analogWrite (val, 0, 1023, 0, 180); 
 myservo.write(val); 
 delay(15); 
) 
