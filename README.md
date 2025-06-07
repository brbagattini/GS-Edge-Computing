# Sistema de Monitoramento de Enchentes com Arduino

## Descrição do problema

Áreas urbanas e residenciais de risco sofrem com enchentes causadas por chuvas intensas e drenagem insuficiente. Esses eventos podem causar prejuízos materiais e colocar vidas em risco. 

## Solução proposta

Este projeto utiliza sensores conectados a um Arduino Uno para monitorar o ambiente e identificar condições de risco de alagamento. O sistema atua localmente, acionando alertas visuais e sonoros, além de um relé que simula a ativação de um sistema de bombeamento ou barreira.

## Funcionalidades

- Leitura do nível de água com potenciômetro (simula sensor de nível).
- Leitura da umidade do solo com potenciômetro.
- Detecção de chuva com botão digital.
- Alerta visual com LED.
- Alerta sonoro com buzzer.
- Acionamento de relé simulando bomba de drenagem.

## Componentes utilizados

- Arduino Uno
- 2x Potenciômetro (nível de água e umidade)
- Botão (chuva)
- LED vermelho
- Buzzer
- Relé simples (`wokwi-relay`)
- Jumpers e conexões no Wokwi

## Instruções de simulação

1. Acesse o projeto no Wokwi:
   [https://wokwi.com/projects/433062604313803777

2. Gire os potenciômetros para simular aumento no nível da água e alteração da umidade do solo.
3. Pressione o botão para simular chuva.
4. Observe os alertas no LED, buzzer e ativação do relé conforme as condições detectadas.

## Vídeo demonstrativo

Link para o vídeo explicativo e de simulação:  
[https://youtu.be/Ll8BKvJyalg

## Integrantes

- Bruno Bagattini
- Nathália Cordeiro
- Vitor Bugallo
