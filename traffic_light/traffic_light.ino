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
}

void loop() {
  // put your main code here, to run repeatedly:何度も読みこまれる(繰り返される)
  
  // ポート8のLEDを点灯
  digitalWrite(8,HIGH);
  // ポート10のLEDを点灯
  digitalWrite(10,HIGH);
  // 10000mSECディレイ
  
  delay(10000);

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
  delay(20000);
  // ポート2のLEDを消灯
  digitalWrite(2,LOW);
  // ポート13のLEDを消灯
  digitalWrite(13,LOW);
}
