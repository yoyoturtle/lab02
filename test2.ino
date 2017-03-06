/*main*/

const byte NUM=8;
const byte
led[]={10,9,8,7,6,5,4,3};
const int delaytime=500;
int ii;
void setup() {
for (ii=0;ii<NUM;ii++)
{ pinMode(led[ii],OUTPUT);
 digitalWrite(led[ii],LOW);
}
}


void loop()
{


/*全亮全滅*/
for(ii=0;ii<NUM;ii++)

{ digitalWrite(led[ii],HIGH);
 delay(200);
 
 }
 for (ii=0;ii<NUM;ii++)
{
 digitalWrite(led[ii],LOW);
}
delay(delaytime);
}

