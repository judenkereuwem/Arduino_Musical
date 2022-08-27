//spiderman theme song
//by Jude Nkereuwem
//05-2021
//www.placidlearn.com


const float c = 261.63;
const int cS = 278;
const int d = 294;
const int e = 329;
const float eF = 311.127;
const int f = 349;
const int fS = 370;
const float g = 391.995;
const int gS = 415;
const int a = 440;
const int aS = 440;
const float aF = 415.305;
const int b = 466;
const float cH = 523.2;
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
  //play nokia tune.
  firstSection();
  delay(100);
  
  secondSection();
  delay(100);
  
  thirdSection();
  delay(2000);
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
  beep(eH, 100);
  beep(d, 150);
  beep(fS, 300);
  beep(gS, 200);

  delay(50);
}

void secondSection()
{
  beep(cS, 100);
  beep(b, 150);
  beep(d, 300);
  beep(e, 200);

  delay(50);
}

void thirdSection()
{
  beep(b, 100);
  beep(a, 150);
  beep(cS, 300);
  beep(e, 300);
  beep(a, 400);

  delay(50);
}
