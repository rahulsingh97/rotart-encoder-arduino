# rotart-encoder-arduino
rotart encoder made simple

pins
```c
 #define outputA 21
 #define outputB 19
 ```
 variable to remember state
 ```
 int counter = 0; 
 int aState;
 int aLastState;  
 ```
 opening serial port at 9600 baud rate
 ```
 void setup() { 
   pinMode (outputA,INPUT);
   pinMode (outputB,INPUT);
   Serial.begin (9600);
   aLastState = digitalRead(outputA);   
 } 
 ```
 get data and print
 ```
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
 ```
 here the counter increases by 10 enery time along with a random value 
 to disable this randon value remove `+ random(2,6)`
 ```
 counter = (counter + 10 + random(2,6));}
 ```
 
