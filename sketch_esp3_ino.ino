/* In questa esperienza ho realizzato un contatore con la scheda Arduino, utilizzando un display a 7 segmenti. Creato lo schema elettrico utilizzando il programma Fritzing,
ho scritto il programma usando l'ambiente di sviluppo proprio di Arduino. Ho dichiarato una variabile con una lettera rappresentante ogni segmento del display e vi ho assegnato il
numero del pin Arduino collegatovi, ho dichiarato anche una variabile per specificare il tempo di delay (in millesimi di secondo).
Nella funzione setup() (di inizializzazione) ho impostato tutti i pin usati in modalità OUTPUT (con la funzione pinMode()), dato che verranno usati solamente, appunto, per dare
in output un valore (0 o 1).
Nella funzione loop() ho scritto il corpo vero e proprio del programma per l'accensione dei segmenti, e dunque per la rappresentazione dei numeri del contatore.
Ogni numero ha bisogno di specifici segmenti (LED) accesi, dunque, tramite la funzione digitalWrite(), specifico il segmento da comandare (tramite la variabile chimata come una lettera,
dichiarata in precedenza) e se dare tensione (HIGH) o non darla (LOW): a seconda che sia un display a catodo, o ad anodo comune, si avrà, rispettivamente, il segmento acceso con HIGH
e spento con LOW; dopodiché, inpostati i valori per i LED, con la funzione delay() attendo un numero di millisecondi corrispondente alla variabile messa come argomento (in questo caso ms)
la quale è stata dichiarata in precedenza.
Ripeto il procedimento cambiando configurazione dei LED per ogni numero (da 0 a 9), ripetendo questa parte di codice con la funzione predefinita di arduino loop() si avrà infine il contatore.
*/

// variabili per i LED
int a=2;
int b=3;
int c=5;
int d=6;
int e=7;
int f=8;
int g=9;
int ms=1000; // millisecondi da aspettare ogni volta per cambiare da un numero all'altro

void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  
  // tutti spenti
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(ms);
  
  // 0
  digitalWrite(a,LOW); // accendo o spengo un LED (dandogli o non dandogli tensione con HIGH o LOW)
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(ms); // attendo 1 secondo (1000 ms) con delay
  
  // 1
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(ms);
  
  // 2
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  delay(ms);
  
  // 3
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  delay(ms);
  
  // 4
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(ms);
  
  // 5
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(ms);
  
  // 6
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(ms);
  
  // 7
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(ms);
  
  // 8
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(ms);
  
  // 9
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(ms);
}
