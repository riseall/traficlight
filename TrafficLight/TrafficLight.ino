//Praktikum Sistem Digital dan Mikroprosessor
//Jobsheet 4

int UM=1;
int UK=2;
int UH=3;
int TM=4;
int TK=5;
int TH=6;
int SM=7;
int SK=8;
int SH=9;
int BM=10;
int BK=11;
int BH=12;

void setup() {
  // put your setup code here, to run once:
  pinMode(UM, OUTPUT);
  pinMode(UK, OUTPUT);
  pinMode(UH, OUTPUT);
  pinMode(UB, OUTPUT);
  pinMode(TM, OUTPUT);
  pinMode(TK, OUTPUT);
  pinMode(TH, OUTPUT);
  pinMode(TB, OUTPUT);
  pinMode(SM, OUTPUT);
  pinMode(SK, OUTPUT);
  pinMode(SH, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Arah Utara Jalan
  digitalWrite(UM,LOW);
  digitalWrite(UK,LOW);
  digitalWrite(UH,HIGH);
  digitalWrite(TM,HIGH);
  digitalWrite(TK,LOW);
  digitalWrite(TH,LOW);
  digitalWrite(SM,HIGH);
  digitalWrite(SK,LOW);
  digitalWrite(SH,LOW);
  delay(6000);

  digitalWrite(UM,LOW);
  digitalWrite(UK,HIGH);
  digitalWrite(UH,LOW);
  digitalWrite(TM,HIGH);
  digitalWrite(TK,LOW);
  digitalWrite(TH,LOW);
  digitalWrite(SM,HIGH);
  digitalWrite(SK,LOW);
  digitalWrite(SH,LOW);
  delay(1000);

  //Arah Timur Jalan
  digitalWrite(UM,HIGH);
  digitalWrite(UK,LOW);
  digitalWrite(UH,LOW);
  digitalWrite(TM,LOW);
  digitalWrite(TK,LOW);
  digitalWrite(TH,HIGH);
  digitalWrite(SM,HIGH);
  digitalWrite(SK,LOW);
  digitalWrite(SH,LOW);
  delay(6000);

  digitalWrite(UM,HIGH);
  digitalWrite(UK,LOW);
  digitalWrite(UH,LOW);
  digitalWrite(TM,LOW);
  digitalWrite(TK,HIGH);
  digitalWrite(TH,LOW);
  digitalWrite(SM,HIGH);
  digitalWrite(SK,LOW);
  digitalWrite(SH,LOW);
  delay(1000);

  //Arah Selatan Jalan
  digitalWrite(UM,HIGH);
  digitalWrite(UK,LOW);
  digitalWrite(UH,LOW);
  digitalWrite(TM,HIGH);
  digitalWrite(TK,LOW);
  digitalWrite(TH,LOW);
  digitalWrite(SM,LOW);
  digitalWrite(SK,LOW);
  digitalWrite(SH,HIGH);
  delay(6000);

  digitalWrite(UM,HIGH);
  digitalWrite(UK,LOW);
  digitalWrite(UH,LOW);
  digitalWrite(TM,HIGH);
  digitalWrite(TK,LOW);
  digitalWrite(TH,LOW);
  digitalWrite(SM,LOW);
  digitalWrite(SK,HIGH);
  digitalWrite(SH,LOW);
  delay(1000);

  //Arah Barat Jalan
  digitalWrite(UM,HIGH);
  digitalWrite(UK,LOW);
  digitalWrite(UH,LOW);
  digitalWrite(TM,HIGH);
  digitalWrite(TK,LOW);
  digitalWrite(TH,LOW);
  digitalWrite(SM,LOW);
  digitalWrite(SK,LOW);
  digitalWrite(SH,HIGH);
  delay(6000);

  digitalWrite(UM,HIGH);
  digitalWrite(UK,LOW);
  digitalWrite(UH,LOW);
  digitalWrite(TM,HIGH);
  digitalWrite(TK,LOW);
  digitalWrite(TH,LOW);
  digitalWrite(SM,LOW);
  digitalWrite(SK,HIGH);
  digitalWrite(SH,LOW);
  delay(1000);
}
