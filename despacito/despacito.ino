//avengers theme song
//by Jude Nkereuwem
//10-2021
//www.placidlearn.com


const float c = 261.63;
const int d = 294;
const int e = 329;
const float eF = 311.127;
const int f = 349;
//const int fS = 370;
const int fS = 185;
const float g = 391.995;
const int gS = 415;
const int a = 440;
const int aS = 440;
const float aF = 415.305;
//const int b = 466;
const int b = 247;
const int bF = 1;
const float cH = 523.2;
const float cS = 277.183;
const int cSH = 523;
const int dH = 587;
const int dSH = 622;
const int eH = 622;

const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;

const int buzzerPin = 8;
const int ledPin1 = 12;
const int ledPin2 = 13;

int counter = 0;

void setup() {
  
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

}

void loop() {
  //play first section
  firstSection();

  /*/play first section
  secondSection();

  //Variant 1
  beep(aF, 350);
  beep(g, 2500);
  beep(g, 100);
  beep(f, 300);
  beep(eF, 100);
  beep(f, 500);
  beep(eF, 300);
  beep(c, 2000);*/

  delay(1000);
}

void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);

  //Play different LED depending on value of counter
  if(counter % 2 == 0)
  {
    digitalWrite(ledPin1, HIGH);
    delay(duration);
    digitalWrite(ledPin1, LOW);
  }else
  {
    digitalWrite(ledPin2, HIGH);
    delay(duration);
    digitalWrite(ledPin2, LOW);
  }    
  
  //Stop tone on buzzerPin
  noTone(buzzerPin);

  delay(50);

  //Increment counter
  counter++;
}

void firstSection()
{
  beep(d, 600);
  beep(cS, 600);
  beep(b, 300);
  beep(fS, 300);
  //-------------------
  beep(fS, 100);
  beep(fS, 100);
  beep(fS, 100);
  beep(fS, 100);
  beep(fS, 100);
  beep(b, 100);
  beep(b, 100);
  beep(b, 100);
  beep(b, 300);
  
  beep(a, 100);
  beep(b, 300);
  beep(g, 500);
  //----------------
  beep(g, 100);
  beep(g, 100);
  beep(g, 100);
  beep(g, 100);
  beep(b, 100);
  beep(b, 100);
  beep(b, 100);
  beep(b, 100);
  beep(b, 300);

  beep(cS, 100);
  beep(d, 300);
  beep(a, 500);
  //-----------------
  beep(a, 100);
  beep(a, 100);
  beep(a, 100);
  beep(a, 100);
  beep(a, 100);
  //beep(a, 100);
  beep(d, 100);
  beep(d, 100);
  beep(d, 100);
  beep(d, 300);
  
  beep(e, 100);
  beep(e, 300);
  beep(cS, 500);
  
  //delay(300);

  /*beep(e, 300);
  beep(e, 600);
  beep(b, 100);
  beep(cSH, 700);
  beep(a, 300);
  beep(b, 300);
  beep(e, 1100);

  delay(100);*/
}

void secondSection()
{
  beep(e, 300);
  beep(e, 600);
  beep(b, 100);
  beep(a, 1500);
  beep(g, 700);
  beep(fS, 700);
  beep(e, 1800);

  delay(300);

  beep(e, 300);
  beep(e, 600);
  beep(b, 100);
  beep(cSH, 700);
  beep(a, 900);
  beep(b, 1200);
  beep(e, 1100);

  delay(100);
}
