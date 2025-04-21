![Imagem do WhatsApp de 2025-04-21 à(s) 18 35 03_e6056198](https://github.com/user-attachments/assets/a72264fa-5a07-4086-883d-c4696b551327)

# Ball balance with PID controller
Ball balance project with PID controller on Arduino

The experiment platform was created with the aim of designing and testing various types of
types of controllers, compensators and digital filters, as well as for projects to
identification of open-loop systems.

## Mode of Operation

The bridge consists of a closed-loop dynamic system with feedback from the output to the input.
to the input and a PID controller. The ultrasonic sensor reads the system's output (distance of the
distance) and sends it to the microcontroller, which calculates the control input via a PID controller and sends it to the
PID controller and sends the actuator the angle needed to balance the ball in the center of the bridge.
center of the bridge.

## Devices Used

1. Microcontroller: Arduino Uno R3 (ATmega328P)
2. Ultrasonic sensor: HC-SR04
3. Actuator: Micro Servo 9g SG90

## System parameters

PID gains:
- KP = 6.0
- KI = 0.04
- KD = 11.0

Physical definition of the system:
- SENSOR_OFFSET = 2.0   (Sensor offset)
- BRIDGE_LENGTH = 19.0  (Total length of bridge in cm)
- SETPOINT = 8.0        (Desired position of the ball in cm)

---

Português: 

# Ponte de equilíbrio de bola com controlador PID
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
- KP = 6.0 
- KI = 0.04
- KD = 11.0

Definição física do sistema:
- SENSOR_OFFSET = 2.0       (Offset do sensor)
- PONTE_COMPRIMENTO = 19.0  (Comprimento total da ponte em cm)
- SETPOINT = 8.0            (Posição desejada da bolinha em cm)
