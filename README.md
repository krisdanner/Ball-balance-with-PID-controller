# Ball balance with PID controller
Ball balance project with PID controller on Arduino

Projeto de ponte de equilíbrio de bola com controlador PID no Arduino

A plataforma de experimento foi criada com o objetivo de projetos e testes de vários
tipos de controladores, compensadores e filtros digitais, e também, para projetos de
identificação de sistemas em malha aberta.

## Modo de Funcionamento

A ponte consiste em um sistema dinâmico em malha fechada com realimentação da saída
para a entrada e controladdor PID. O sensor ultrassônico ler a saída do sistema (distância da
bolinha) e envia para o microcontrolador, que faz os cálculos da entrada de controle através
de um controlador PID e envia para o atuador o ângulo necessário para equilibrar a bola no 
centro da ponte.

## Dispositivos Utilizados

1. Microcontrolador: Arduino Uno R3 (ATmega328P)
2. Sensor ultrassônico: HC-SR04
3. Atuador: Micro Servo 9g SG90

## Parâmetros do Sistema 

Ganhos do PID:
KP 6.0 
KI 0.04
KD 11.0

Definição física do sistema:
SENSOR_OFFSET = 2.0;       // Offset do sensor
PONTE_COMPRIMENTO = 19.0;  // Comprimento total da ponte em cm
SETPOINT = 8.0;            // Posição desejada da bolinha (cm)
