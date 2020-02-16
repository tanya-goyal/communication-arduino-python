void setup() {
  Serial.begin(9600);
  Serial.println("hi from arduino!!");
}
void loop() {
  
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');
    Serial.print("You sent me: ");
    //Serial.println(data);
    if (data=="W")
    {//Serial.println("forward\n");
      forward();
      }
    else if(data=="F")
    {Serial.println("front\n");
    }
    else if (data=="R")
    {Serial.println("right\n");}+
    else
    {Serial.println("back\n");}
   
    
     
  }
}
void forward() {
  int signal = 1700; // Set signal value, which should be between 1100 and 1900</p>
  Serial.println(signal);}
