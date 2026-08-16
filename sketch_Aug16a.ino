#define echoPin 6
#define trigPin 7
#define buzzerPin 8

int maximumRange = 40;
int minimumRange =0;



void setup() {
  // put your setup code here, to run once:

  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzerPin,OUTPUT);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
 int olcum =mesafe(maximumRange,minimumRange);
 melodi(olcum*10);

}
int mesafe(int maxrange,int minrange)

{
   long duration,distance;

   digitalWrite(trigPin,LOW);
   delayMicroseconds(2);
   digitalWrite(trigPin,HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin,LOW);

   duration=pulseIn(echoPin,HIGH);
   distance= duration / 58.2;
   delay(50); //50 ms bekliyoruz.

   if(distance >= maxrange || distance <= minrange)
   return 0;
   return distance;

   
}

int melodi(int dly)
{
  tone(buzzerPin,440);
  delay(dly);
  noTone(buzzerPin);
  delay(dly);

}


