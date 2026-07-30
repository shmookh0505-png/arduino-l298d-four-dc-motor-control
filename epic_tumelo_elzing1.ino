// تعريف منافذ الأردوينو المتصلة بالمحركات اليمنى
const int IN1 = 9;
const int IN2 = 8;

// تعريف منافذ الأردوينو المتصلة بالمحركات اليسرى
const int IN3 = 11;
const int IN4 = 10;

void setup() {
  // إعداد المنافذ كمخرجات
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // 1- الحركة للأمام لمدة 30 ثانية
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(30000); // 30,000 ملي ثانية = 30 ثانية

  // 2- الحركة للخلف لمدة دقيقة (60 ثانية)
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(60000); // 60,000 ملي ثانية = 60 ثانية

  // 3- لليمين ولليسار بالتناوب لمدة دقيقة
  // سنقوم بتنفيذ حلقة تدور لليمين لثانية ولليسار لثانية، وتتكرر 30 مرة ليكون المجموع 60 ثانية
  for (int i = 0; i < 30; i++) {
    // الدوران لليمين (عكس اتجاه المحركات اليمنى ودفع اليسرى للأمام)
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(1000); // ثانية واحدة

    // الدوران لليسار (عكس اتجاه المحركات اليسرى ودفع اليمنى للأمام)
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(1000); // ثانية واحدة
  }
  
  // إيقاف المحركات تماماً بعد انتهاء المهمة
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  
  // إيقاف حلقة Loop لكي لا يتكرر التسلسل من البداية
  while(true); 
}