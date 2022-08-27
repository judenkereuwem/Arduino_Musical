//Birthday song
//by Jude Nkereuwem
//05-2021
//www.placidlearn.com


const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 440;
const int b = 466;
const int cH = 494;
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

  //play first section
  secondSection();

  thirdSection();

  fourthSection();

  delay(650);
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
  beep(g, 200);
  beep(g, 200);
  beep(a, 500);
  beep(g, 500);
  beep(c, 500);
  beep(b, 500);

  delay(500);
}

void secondSection()
{
  beep(g, 200);
  beep(g, 200);
  beep(a, 500);
  beep(g, 500);
  beep(d, 500);
  beep(c, 500);

  delay(500);
}

void thirdSection()
{
  beep(g, 200);
  beep(g, 200);
  beep(gH, 500);
  beep(e, 500);
  beep(c, 500);
  beep(b, 500);
  beep(a, 500);

  delay(30);
}

void fourthSection()
{
  beep(fH, 200);
  beep(fH, 200);
  beep(e, 500);
  beep(c, 500);
  beep(d, 500);
  beep(c, 500);

  delay(200);
}
