#define RM1 2
#define RM2 3
#define LM1 4
#define LM2 5
#define RS 6
#define LS 7


void setup()
{
 pinMode (RM1,OUTPUT);
 pinMode (RM2,OUTPUT);
 pinMode (LM1,OUTPUT);
 pinMode (LM2,OUTPUT);
 pinMode (RS,INPUT);
 pinMode (LS,INPUT);
}


void loop() 
{

  if(digitalRead (RS)==1 && digitalRead (LS)==1)
    { digitalWrite(RM1,HIGH);
     digitalWrite(RM2,LOW);
     digitalWrite(LM1,HIGH);
     digitalWrite(LM2,LOW);
}

  if(digitalRead (RS)==0 && digitalRead (LS)==0)
   {  digitalWrite(RM1,HIGH);
     digitalWrite(RM2,LOW);
     digitalWrite(LM1,HIGH);
     digitalWrite(LM2,LOW);
}
 
  if(digitalRead (RS)==1 && digitalRead (LS)==0)
 {    digitalWrite(RM1,HIGH);
     digitalWrite(RM2,LOW);
     digitalWrite(LM1,LOW);
     digitalWrite(LM2,HIGH);
}
   

  if(digitalRead (RS)==0 && digitalRead (LS)==1)
{    digitalWrite(RM1,LOW);
     digitalWrite(RM2,HIGH);
     digitalWrite(LM1,HIGH);
     digitalWrite(LM2,LOW);
}
}
