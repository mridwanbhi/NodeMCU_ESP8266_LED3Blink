/*menjalankan 3 LED dengan warna yang berbeda misal merah, hijau dan biru.
  LED akan menyala bergantian dengan waktu jeda 300 ms (silahkan dirubah sesuai keinginan)
*/

#define pinLED1 D5
#define pinLED2 D6
#define pinLED3 D7
void setup() {
  // kode setup dijalan sekali pada saat power on atau tobel reset ditekan
  pinMode(pinLED1, OUTPUT); 
  pinMode(pinLED2, OUTPUT); 
  pinMode(pinLED3, OUTPUT); 
}

void loop() {
  // kode utama disimpan disini, dan akan dijalankan secara berulang:
  digitalWrite(pinLED1, HIGH);
  delay(300);
  digitalWrite(pinLED1, LOW);
  delay(300);
  digitalWrite(pinLED2, HIGH);
  delay(300);
  digitalWrite(pinLED2, LOW);
  delay(300);
  digitalWrite(pinLED2, HIGH);
  delay(300);
  digitalWrite(pinLED2, LOW);
  delay(300);
  digitalWrite(pinLED3, HIGH);
  delay(300);
  digitalWrite(pinLED3, LOW);
  delay(300);
}
