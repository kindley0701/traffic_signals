void setup() {
  // put your setup code here, to run once:最初に一回だけ読み込まれる
  
  // ポート2のLEDを出力ポートに設定
  pinMode(2,OUTPUT); 
  // ポート7のLEDを出力ポートに設定
  pinMode(7,OUTPUT);
  // ポート8のLEDを出力ポートに設定
  pinMode(8,OUTPUT);
  // ポート10のLEDを出力ポートに設定
  pinMode(10,OUTPUT); 
  // ポート13のLEDを出力ポートに設定
  pinMode(13,OUTPUT); 

  // ポート12のLEDを出力ポートに設定
  pinMode(12,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:何度も読みこまれる(繰り返される)
  
  // ポート8のLEDを点灯
  digitalWrite(8,HIGH);
  // ポート10のLEDを点灯
  digitalWrite(10,HIGH);

  toryanse();

  int i=0;
  for(i=0;i<10;i++){
    // ポート10のLEDを消灯
    digitalWrite(10,LOW);
    // 500mSECディレイ
    delay(250);
    // ポート10のLEDを点灯
    digitalWrite(10,HIGH);
    // 500mSECディレイ
    delay(250);
  };
  // ポート10のLEDを消灯
  digitalWrite(10,LOW);
  
  // ポート13のLEDを点灯
  digitalWrite(13,HIGH);
  // 5000mSECディレイ
  delay(5000);

  // ポート8のLEDを消灯
  digitalWrite(8,LOW);

  // ポート7のLEDを点灯
  digitalWrite(7,HIGH);
  // 1000mSECディレイ
  delay(5000);
  // ポート7のLEDを消灯
  digitalWrite(7,LOW);
  
  // ポート2のLEDを点灯
  digitalWrite(2,HIGH);
  // 5000mSECディレイ
  delay(10000);
  // ポート2のLEDを消灯
  digitalWrite(2,LOW);
  // ポート13のLEDを消灯
  digitalWrite(13,LOW);
}

void toryanse(){
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
  delay(1000);
}
