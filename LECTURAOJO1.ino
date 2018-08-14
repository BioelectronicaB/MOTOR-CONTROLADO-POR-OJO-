int senalOjo=A0;
int lecturaOjo=0;


void setup() 
{
Serial.begin(9600);
pinMode(senalOjo,INPUT);
pinMode(9,OUTPUT);
}

void loop() 
{
lecturaOjo=analogRead(senalOjo);
Serial.print(lecturaOjo);
Serial.print(",");
Serial.print(700);
Serial.print(",");
Serial.println(000);
if(lecturaOjo>=750)
{
digitalWrite(9,HIGH);
delay(10);
}
else
{digitalWrite(9,LOW);
delay(10);
}
//grados= map(lecturaOjo, 500, 800, 10, 170);     // scale it to use it with the servo (value between 0 and 180)
//myservo.write(grados);                  // sets the servo position according to the scaled value

//if(lecturaOjo>=630)
//{myservo.write(180);
//digitalWrite(10,HIGH);
//lecturaOjo=analogRead(senalOjo);
//Serial.print(lecturaOjo);
//Serial.print(",");
//Serial.print(700);
//Serial.print(",");
//Serial.println(500);
//delay(500);}
//else
//{myservo.write(0);
//digitalWrite(10,LOW);
//lecturaOjo=analogRead(senalOjo);
//Serial.print(lecturaOjo);
//Serial.print(",");
//Serial.print(700);
//Serial.print(",");
//Serial.println(500);
//delay(20);}

delay(20);
}
