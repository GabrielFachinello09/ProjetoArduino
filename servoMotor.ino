// Função que se repete infinitamente

void loop() {
  for (int posicao = 0; posicao <= 180; posicao ++){
    // Cria a variável posicao e inicia ela com o valor 0, e repete o loop enquanto ele for menor que 180 (adiciona 1 ao ângulo a cada repetição)
    // Deixa o Servo no ângulo da variável posicao
    servo.write(posicao);
    // Mostra a variável no monitor serial
    Serial.println(posicao);
    // Aguarda 50 milissegundos a cada repetição
    

  }
   for (int posicao = 180; posicao >= 0; posicao --) {
     // Igual o for anterior, mas invertido para fazer o motor "voltar" de 180° para 0°
     servo.write(posicao);
     Serial.println(posicao);
     
   }
}
