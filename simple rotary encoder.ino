 #define outputA 21
 #define outputB 19
 int counter = 0; 
 int aState;
 int aLastState;  
 void setup() { 
   pinMode (outputA,INPUT);
   pinMode (outputB,INPUT);
   Serial.begin (9600);
   aLastState = digitalRead(outputA);   
 } 
 void loop() { 
   aState = digitalRead(outputA); 
   if (aState != aLastState){     
     if (digitalRead(outputB) != aState) { 
      counter = (counter + 10 + random(2,6));} 
     else {
      counter = (counter - 10 + random(2,6));}
     Serial.print("Position: ");
     Serial.println(counter);
   } 
   aLastState = aState; 
 }
