//twinkle twinkle little star
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
  
  firstSection(); //play first section

  secondSection();  //play first section
  
  thirdSection(); //play third section
  
  fourthSection(); //play fourth section

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
  }
  else{
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
  beep(g, 400);
  beep(c, 400);
  beep(c, 200);
  beep(d, 100);
  beep(c, 200);
  beep(b, 200);
  beep(a, 400);
  beep(a, 400);

  delay(10);
}

void secondSection()
{
  beep(a, 400);
  beep(d, 400);
  beep(d, 200);
  beep(e, 100);
  beep(d, 200);
  beep(c, 200);
  beep(b, 400);
  beep(g, 400);

  delay(10);
}

void thirdSection()
{
  beep(g, 400);
  beep(e, 400);
  beep(e, 200);
  beep(f, 100);
  beep(e, 200);
  beep(d, 200);
  beep(c, 400);
  beep(a, 400);
  
  delay(10);
}

void fourthSection()
{
  beep(g, 200);
  beep(g, 200);
  beep(a, 400);
  beep(d, 400);
  beep(b, 400);
  beep(c, 400);
  
  delay(200);
}
