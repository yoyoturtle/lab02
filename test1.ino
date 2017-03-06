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
/*左移*/
 {
for(ii=0;ii<NUM;ii++)

{ digitalWrite(led[ii],HIGH);
 delay(delaytime);
 digitalWrite(led[ii],LOW);
 }
 for (ii=0;ii<NUM;ii++)
{
 digitalWrite(led[ii],LOW);
}
delay(delaytime);


/*右移*/
 for(ii=NUM-1;ii>=0;ii--)

{ digitalWrite(led[ii],HIGH);
 delay(delaytime);
 digitalWrite(led[ii],LOW);
 }
 for (ii=0;ii<NUM;ii++)
{
 digitalWrite(led[ii],LOW);
}
delay(delaytime);
}

