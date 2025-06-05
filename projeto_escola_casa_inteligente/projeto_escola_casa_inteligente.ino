const int PIR = 2;  // Pno Digital que o PIR está plugado
const int ledVerde = 13;

const int MQ135 = A0; // Pino Analogico  do mq-135

void acenderLEDAoDetectarPresenca() {
  int buzzer = 11;

  if (estadoPIR == HIGH) {
    digitalWrite(ledVerde, HIGH);
  delay(1000);
    Serial.println("gas ativado");
  } else {
    digitalWrite(ledVerde, LOW);
  delay(1000);
    Serial.println("gas destivado");
  }
}

void verificarVazamentoDeGas(){}

void verificarVasamentoDeGas(){
  int estadoMQ135 = analogRead(MQ135);

  Serial.println(estadoMQ135);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //Fala ao programa que o pino 13 será uma saída/output
  pinMode(ledVerde, OUTPUT);
  pinMode(MQ135, INPUT);

  Serial.println("Calibrando os sensores");
  delay(10000);
  Serial.println("Censores calibrados!!!!;) Pode testar haha");
}

void loop() {
  // put your main code here, to run repeatedly:
  //As instruções no loop será somente chamada de funções
  acenderLEDAoDetectarPresenca();
  verificarVasamentoDeGas();
}

