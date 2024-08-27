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
  pinMode(BM, OUTPUT);
  pinMode(TM, OUTPUT);
  pinMode(TK, OUTPUT);
  pinMode(TH, OUTPUT);
  pinMode(BK, OUTPUT);
  pinMode(SM, OUTPUT);
  pinMode(SK, OUTPUT);
  pinMode(SH, OUTPUT);
  pinMode(BH, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Arah Utara ,Selatan Jalan
  digitalWrite(UM,HIGH);
  digitalWrite(UK,LOW);
  digitalWrite(UH,LOW);
  digitalWrite(SM,HIGH);
  digitalWrite(SK,LOW);
  digitalWrite(SH,LOW);
  digitalWrite(TM,LOW);
  digitalWrite(TK,LOW);
  digitalWrite(TH,HIGH);
  digitalWrite(BM,LOW);
  digitalWrite(BK,LOW);
  digitalWrite(BH,HIGH);
  delay(6000);

  digitalWrite(UM,LOW);
  digitalWrite(UK,LOW);
  digitalWrite(UH,HIGH);
  digitalWrite(SM,LOW);
  digitalWrite(SK,LOW);
  digitalWrite(SH,HIGH);
  digitalWrite(TM,LOW);
  digitalWrite(TK,HIGH);
  digitalWrite(TH,LOW);
  digitalWrite(BM,LOW);
  digitalWrite(BK,HIGH);
  digitalWrite(BH,LOW);
  
  delay(1000);

  //Arah Timur, Barat Jalan
  digitalWrite(UM,LOW);
  digitalWrite(UK,LOW);
  digitalWrite(UH,HIGH);
  digitalWrite(SM,LOW);
  digitalWrite(SK,LOW);
  digitalWrite(SH,HIGH);
  digitalWrite(TM,HIGH);
  digitalWrite(TK,LOW);
  digitalWrite(TH,LOW);
  digitalWrite(BM,HIGH);
  digitalWrite(BK,LOW);
  digitalWrite(BH,LOW);
  delay(6000);

  digitalWrite(UM,LOW);
  digitalWrite(UK,HIGH);
  digitalWrite(UH,LOW);
  digitalWrite(SM,LOW);
  digitalWrite(SK,HIGH);
  digitalWrite(SH,LOW);
  digitalWrite(TM,LOW);
  digitalWrite(TK,LOW);
  digitalWrite(TH,HIGH);
  digitalWrite(BM,LOW);
  digitalWrite(BK,LOW);
  digitalWrite(BH,HIGH);
  delay(1000);
}
