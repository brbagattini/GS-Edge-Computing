const int nivelAguaPin = A0;
const int chuvaPin = 2;
const int umidadePin = A1;
const int ledPin = 3;
const int buzzerPin = 4;
const int relePin = 5;
const int limiarNivelAgua = 700;
const int limiarUmidade = 400;
void setup() {
 pinMode(ledPin, OUTPUT);
 pinMode(buzzerPin, OUTPUT);
 pinMode(relePin, OUTPUT);
 pinMode(chuvaPin, INPUT);
 Serial.begin(9600);
}
void loop() {
 int nivelAgua = analogRead(nivelAguaPin);
 int umidade = analogRead(umidadePin);
 int chuva = digitalRead(chuvaPin);
 if (nivelAgua > limiarNivelAgua) {
   digitalWrite(ledPin, HIGH);
   digitalWrite(buzzerPin, HIGH);
   digitalWrite(relePin, HIGH);
   Serial.println("Alerta: Nível de água alto!");
 } else {
   digitalWrite(ledPin, LOW);
   digitalWrite(buzzerPin, LOW);
   digitalWrite(relePin, LOW);
 }
 if (chuva == HIGH) {
   digitalWrite(ledPin, HIGH);
   digitalWrite(buzzerPin, HIGH);
   Serial.println("Alerta: Chuva detectada!");
 }
 if (umidade < limiarUmidade) {
   digitalWrite(relePin, HIGH);
   Serial.println("Alerta: Solo seco! Irrigando...");
 } else {
   digitalWrite(relePin, LOW);
 }
 delay(1000);
}