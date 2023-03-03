void setup() {
  // put your setup code here, to run once:

  // ポート12のLEDを出力ポートに設定
  pinMode(12,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:

  // 音を鳴らす(ポート，周波数，秒数mSEC)
  tone(12,440,1000);
  // 1mSECディレイ
  delay(1000);
  tone(12,440,500);
  delay(500);
  tone(12,392,500);
  delay(500);
  tone(12,440,500);
  delay(500);
  tone(12,440,250);
  delay(250);
  tone(12,392,250);
  delay(250);
  tone(12,330,800);
  delay(1000);

  tone(12,494,500);
  delay(500);
  tone(12,494,250);
  delay(250);
  tone(12,494,250);
  delay(250);
  tone(12,587,500);
  delay(500);
  tone(12,494,250);
  delay(250);
  tone(12,440,250);
  delay(250);
  tone(12,494,250);
  delay(250);
  tone(12,440,250);
  delay(250);
  tone(12,392,250);
  delay(250);
  tone(12,392,250);
  delay(250);
  tone(12,440,1000);
  delay(10000);
}
