#define INPUT_SIZE 60
int a = 100;
int b= 50;
int c = 30;
int d= 40;
int e= 40;
int f= 40;
void setup() {
  
Serial.begin(9600);
Serial.print("hi");
}
void loop() {
  
  if (Serial.available() > 0) {

// Get next command from Serial (add 1 for final 0)
  char input[INPUT_SIZE + 1];
  byte size = Serial.readBytes(input, INPUT_SIZE);
  Serial.flush();
  // Add the final 0 to end the C string
  input[size] = 0;
  char* command = strtok(input, "_");
  String p = "";
  int i = 0;
while (command != NULL)
{
p = p  + 'w';
if (i == 0){
  p = p +'a' + (a + atoi(command));
  //a= a + atoi(command);
  i++;
}

else if (i == 1){
  p = p +'b' + (b + atoi(command));
  //b=b+atoi(command);
  i++;
}

else if (i == 2){
  p = p +'c' + (c + atoi(command));
  i++;
 // c = c+ atoi(command);
}
else if (i==3){
  p = p +'d' + (d + atoi(command));
  i++;
  //d = d+ atoi(command);
}
else if(i==4){
  p = p +'e' + (e + atoi(command));
  i++;
}
  //e=e+ atoi(command);}
else if(i==5){
  p = p +'f' + (f + atoi(command));

}
  //f=f+ atoi(command);}
    // Find the next command in input string
    command = strtok(NULL, "_");
    }
p = p+'s';
Serial.println(p);

Serial.flush();

}
}
