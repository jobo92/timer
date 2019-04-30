unsigned long startTime;
unsigned long tid;

void setup() {
  Serial.begin(9600);
  startTime = (millis()/1000);
}
void loop() {
  Serial.print("Time: ");
  tid = (millis()/1000);
  Serial.println(tid); //prints time since program started
 
if (tid - startTime == 5)
  {Serial.println("test");}
  
  delay(1000);          // wait a second so as not to send massive amounts of data

  



}
