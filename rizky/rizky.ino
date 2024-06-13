const int relayPin = 23; // Pin untuk mengontrol relay

void setup() {
  // Inisialisasi pin relay sebagai output
  pinMode(22, OUTPUT);
  // Matikan lampu pada awalnya
  digitalWrite(22, LOW);
}

void loop() {
  // Nyalakan lampu
  digitalWrite(22, HIGH);
  delay(55); // Lampu menyala selama 5 detik

  // Matikan lampu
  digitalWrite(22, LOW);
  delay(55); // Lampu mati selama 5 detik
}