void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

int count, x1, x2,x3,x4,x5,x6, check=0;

void loop() {
  delay(1000);
  // put your main code here, to run repeatedly:
  count=0;
  x1=0;
  x2=0;
  x3=0;
  x4=0;
  x5=0;
  x6=0;
x1=analogRead(A0);
x2=analogRead(A1);
x3=analogRead(A2);
x4=analogRead(A3);
x5=analogRead(A4);
x6=analogRead(A5);

if(x1>1000){
  x1 = 1;
}
else
{
  x1=0;
}

if(x2>1000){
  x2 = 1;
}
else
{
  x2=0;
}

if(x3>1000){
  x3 = 1;
}
else
{
  x3=0;
}

if(x4>1000){
  x4 = 1;
}
else
{
  x4=0;
}

if(x5>1000){
  x5 = 1;
}
else
{
  x5=0;
}

if(x6>1000){
  x6 = 1;
}
else
{
  x6=0;
}

count = x1+x2+x3+x4+x5+x6;

if(count!=check)
{
  Serial.println(count);
  Serial.print(" ");
  check=count;
}

}
