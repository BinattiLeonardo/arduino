1. // Armazena o estado do botão lido
2. int estadoBotao = 0;
3.
4. void setup()
5. {
6. // Porta 13 (LED_BUILTIN) em modo de saída(escrita)
7. pinMode(LED_BUILTIN, OUTPUT);
8. // Porta 12 (Botão) em modo de entrada(leitura)
9. pinMode(12, INPUT);
10. }
11.
12. void loop() {
13. // Leitura do botão na porta 12
14. estadoBotao = digitalRead(12);
15.
16. // Liga ou desliga o LED
17. if (estadoBotao == HIGH) {
18. digitalWrite(LED_BUILTIN, HIGH);
19. } else {
20. digitalWrite(LED_BUILTIN, LOW);
21. }
22. // Atrase um pouco para melhorar o desempenho da simulação
23. delay(10);
24. }
