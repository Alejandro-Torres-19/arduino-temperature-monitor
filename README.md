# 🌡️ Sentinel-Cold V1.0

### Arduino-Based Temperature Monitoring System
### Sistema de Monitoreo de Temperatura basado en Arduino

---

## 🧑‍💻 Project Overview / Descripción del proyecto

🇺🇸 **English**

Sentinel-Cold V1.0 is an Arduino-based temperature monitoring system designed to monitor temperature conditions in refrigeration systems.

The system uses an LM35 temperature sensor connected to an Arduino UNO. The measured temperature is displayed on a 16x2 LCD, while green and red LEDs provide a visual indication of the temperature status.

The project was developed as an academic engineering project focused on temperature monitoring, analog signal acquisition, electronics, and embedded systems.

🇲🇽 **Español**

Sentinel-Cold V1.0 es un sistema de monitoreo de temperatura basado en Arduino, diseñado para supervisar las condiciones de temperatura en sistemas de refrigeración.

El sistema utiliza un sensor de temperatura LM35 conectado a un Arduino UNO. La temperatura medida se muestra en una pantalla LCD de 16x2, mientras que los LEDs verde y rojo proporcionan una indicación visual del estado de la temperatura.

El proyecto fue desarrollado como un proyecto académico de ingeniería enfocado en el monitoreo de temperatura, la adquisición de señales analógicas, la electrónica y los sistemas embebidos.

---

## 🎯 Objective / Objetivo

🇺🇸 **English**

The main objective of the system is to monitor temperature continuously and identify conditions that exceed the defined operating threshold.

🇲🇽 **Español**

El objetivo principal del sistema es monitorear continuamente la temperatura e identificar condiciones que superen el umbral de operación establecido.

---

## ⚙️ System Operation / Funcionamiento del sistema

🇺🇸 **English**

The system follows these steps:

1. The LM35 sensor measures the temperature.
2. The Arduino UNO reads the analog signal through pin A0.
3. The Arduino calculates the temperature in degrees Celsius.
4. The current temperature is displayed on the LCD.
5. The LEDs indicate the temperature status.
6. The measured value is sent to the Serial Monitor.

🇲🇽 **Español**

El sistema sigue los siguientes pasos:

1. El sensor LM35 mide la temperatura.
2. El Arduino UNO lee la señal analógica mediante el pin A0.
3. El Arduino calcula la temperatura en grados Celsius.
4. La temperatura actual se muestra en la pantalla LCD.
5. Los LEDs indican el estado de la temperatura.
6. El valor medido se envía al monitor serial.

### System Flow / Diagrama de funcionamiento

```text
       LM35 Temperature Sensor
                  |
                  v
              Arduino UNO
                  |
                  v
           Analog Reading (A0)
                  |
                  v
        Temperature Calculation
                  |
          +-------+-------+
          |               |
          v               v
       LCD 16x2        LED Status
                          |
                   +------+------+
                   |             |
                   v             v
              Green LED       Red LED
               < 10 °C        >= 10 °C
             Normal State    Alert State
```

The temperature is calculated using the following formula:

```text
T(°C) = (ADC Reading × 500) / 1023
```

---

## 🌡️ Temperature Logic / Lógica de temperatura

| Temperature / Temperatura | Status / Estado | LED |
|---|---|---|
| Below 10 °C | Normal operating condition / Condición normal | 🟢 Green / Verde |
| 10 °C or higher | Alert condition / Condición de alerta | 🔴 Red / Rojo |

The system uses a threshold of 10 °C to identify temperature conditions that require attention.

El sistema utiliza un umbral de 10 °C para identificar condiciones de temperatura que requieren atención.

**Note / Nota:** The current Arduino code controls the LEDs and LCD. Although the project documentation includes a buzzer, its control is not implemented in the uploaded version of the `.ino` code.

---

## 🔌 Hardware / Componentes de hardware

| Component | Function / Función |
|---|---|
| Arduino UNO | Main controller / Controlador principal |
| LM35 | Temperature sensor / Sensor de temperatura |
| LM358 | Signal conditioning / Acondicionamiento de señal |
| LCD 16x2 | Temperature display / Visualización de temperatura |
| Green LED | Normal condition indicator / Indicador de condición normal |
| Red LED | Alert indicator / Indicador de alerta |
| Buzzer | Audible alert described in the project documentation / Alarma sonora descrita en la documentación |
| 330 Ω resistors | Current limiting / Limitación de corriente |

---

## 📌 Pin Configuration / Configuración de pines

| Component / Componente | Arduino Pin / Pin de Arduino |
|---|---|
| LM35 analog output / Salida analógica del LM35 | A0 |
| Green LED / LED verde | D7 |
| Red LED / LED rojo | D8 |
| LCD RS | D12 |
| LCD E | D11 |
| LCD D4 | D5 |
| LCD D5 | D4 |
| LCD D6 | D3 |
| LCD D7 | D2 |

---

## 💻 Software and Technologies / Software y tecnologías

The project was programmed using the Arduino programming environment and C/C++.

El proyecto fue programado utilizando el entorno de programación de Arduino y C/C++.

### Main technologies / Tecnologías principales

- Arduino UNO
- Arduino C/C++
- LiquidCrystal library / Biblioteca LiquidCrystal
- Analog-to-Digital Conversion (ADC) / Conversión analógica-digital
- Serial Monitor / Monitor serial
- LM35 temperature sensor / Sensor de temperatura LM35
- LCD interfacing / Interfaz con pantalla LCD

---

## 📐 Signal Conversion / Conversión de señal

🇺🇸 **English**

The Arduino UNO uses its 10-bit analog-to-digital converter (ADC) to read the analog signal from the LM35 sensor.

The implemented calculation is:

```cpp
temperatura = ((sensor * 500.0) / 1023);
```

The formula assumes a 5 V analog reference and converts the ADC reading into a temperature value in degrees Celsius, consistent with the LM35's nominal sensitivity of 10 mV/°C.

🇲🇽 **Español**

El Arduino UNO utiliza su convertidor analógico-digital (ADC) de 10 bits para leer la señal analógica del sensor LM35.

El cálculo implementado es:

```cpp
temperatura = ((sensor * 500.0) / 1023);
```

La fórmula considera una referencia analógica de 5 V y convierte la lectura del ADC en un valor de temperatura en grados Celsius, de acuerdo con la sensibilidad nominal del LM35 de 10 mV/°C.

---

## ⏱️ Data Monitoring / Monitoreo de datos

🇺🇸 **English**

The program updates the temperature reading approximately once per second. The measured value is also transmitted through the serial interface at 9600 baud, allowing the user to observe the readings through the Arduino Serial Monitor.

🇲🇽 **Español**

El programa actualiza la lectura de temperatura aproximadamente una vez por segundo. El valor medido también se transmite mediante la interfaz serial a 9600 baudios, lo que permite observar las lecturas a través del monitor serial de Arduino.

---

## 📚 Documentation / Documentación

The project includes the following technical documents:

- 📘 [User Manual / Manual de Usuario](user-manual.pdf)
- 🔧 [Preventive and Corrective Maintenance Manual / Manual de Mantenimiento](maintenance-manual.pdf)
- 📊 [Project Presentation / Presentación del proyecto](project-presentation.pdf)
- 🔌 [Circuit Diagram / Diagrama del circuito](circuit-diagram.jpeg)

These documents provide additional information about system operation, maintenance, calibration, troubleshooting, and circuit design.

Estos documentos proporcionan información adicional sobre el funcionamiento del sistema, el mantenimiento, la calibración, la solución de problemas y el diseño del circuito.

---

## 🛠️ Maintenance / Mantenimiento

The maintenance documentation covers the following procedures:

- LM35 sensor inspection and cleaning
- Electrical connection inspection
- Signal stability verification
- Temperature calibration using a reference thermometer
- LCD inspection
- LM358 diagnosis
- Troubleshooting and component replacement

La documentación de mantenimiento contempla los siguientes procedimientos:

- Inspección y limpieza del sensor LM35
- Revisión de conexiones eléctricas
- Verificación de la estabilidad de la señal
- Calibración de temperatura mediante un termómetro de referencia
- Inspección de la pantalla LCD
- Diagnóstico del LM358
- Solución de problemas y reemplazo de componentes

---

## 🎓 Academic Project / Proyecto académico

🇺🇸 **English**

This project was developed as part of my Mechatronics Engineering studies at Universidad Tecnológica de México (UNITEC).

It demonstrates the application of basic electronics, sensor integration, analog signal acquisition, temperature measurement, and microcontroller programming.

🇲🇽 **Español**

Este proyecto fue desarrollado como parte de mis estudios de Ingeniería en Mecatrónica en la Universidad Tecnológica de México (UNITEC).

Demuestra la aplicación de electrónica básica, integración de sensores, adquisición de señales analógicas, medición de temperatura y programación de microcontroladores.

### Skills Demonstrated / Habilidades aplicadas

- Embedded systems / Sistemas embebidos
- Arduino programming / Programación de Arduino
- Analog signal acquisition / Adquisición de señales analógicas
- Temperature monitoring / Monitoreo de temperatura
- Basic electronics / Electrónica básica
- Sensor integration / Integración de sensores
- LCD interfacing / Interfaz con pantallas LCD
- Technical documentation / Documentación técnica
- Troubleshooting and maintenance / Solución de problemas y mantenimiento

---

## 👨‍💻 Author / Autor

**Alejandro Torres Reyes**

Mechatronics Engineering Student / Estudiante de Ingeniería en Mecatrónica

Universidad Tecnológica de México (UNITEC)

GitHub: [Alejandro-Torres-19](https://github.com/Alejandro-Torres-19)
