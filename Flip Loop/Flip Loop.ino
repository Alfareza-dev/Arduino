int led_1 = 12;
int led_2 = 13;

void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
)

void loop() {
  digitalWrite(led_2, LOW);
  digitalWrite(led_1, HIGH);
  delay(4000);
  digitalWrite(led_2, LOW);
  digitalWrite(led_1, HIGH);
  delay(4000);
}
  
  
