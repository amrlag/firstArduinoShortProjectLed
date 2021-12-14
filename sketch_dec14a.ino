int monPin=11;

void setup() {
  // put your setup code here, to run once:

  pinMode(monPin, OUTPUT); //arduino comprend qu'il doit me donner des résultats ici ; obliger d'intancier le pin et dire de quel type il est

  

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(monPin, HIGH);
  delay(2000);
  digitalWrite(monPin, LOW);
  delay(2000);

}
