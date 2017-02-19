//initializing b - button
const int b1 = 2, b2 = 3, b3 = 4, b4 = 5;

void setup(){
  Serial.begin(9600);
  //setting button as an input
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
  pinMode(b4, INPUT);
  pinMode(8, INPUT);
}

void loop(){

  //if statements for buttons to play tone
  if(digitalRead(b1) == LOW){
    //tone(outputPin, frequency, duration);
    tone(A0,  261, 20);
  }
  if(digitalRead(b2) == LOW){
    tone(A0, 293, 20);
  }
  if(digitalRead(b3) == LOW){
    tone(A0, 329, 20);
    }
  if(digitalRead(b4) == LOW){
    tone(A0, 390, 20);
  }
  
  //reading from b1 to see changes
  Serial.print(digitalRead(b4));
  Serial.print(digitalRead(b3));
  Serial.print(digitalRead(b2));
  Serial.println(digitalRead(b1));
}

