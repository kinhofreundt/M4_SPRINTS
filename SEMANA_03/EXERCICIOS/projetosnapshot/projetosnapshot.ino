
int LDR = 6;
int led_branco = 46;
int led_verde = 3;
int led_vermelho = 18;
int led_azul = 8;
int BUZZER = 37;
int binario = 0;
int botao1 = 1;
int botao2 = 2;
int valmax = 8126;
int valmin = 64;

int contador = 0;
int vetor[99];
long intensidade=-5;
int valorLDR;

void setup() 
{
  
  pinMode(led_branco, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_azul, OUTPUT);
  pinMode(LDR, INPUT);
  pinMode(BUZZER,OUTPUT);  
  pinMode(botao1,INPUT_PULLUP);
  pinMode(botao2,INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Teste para ver se roda 1");
  delay(500); //para dar tempo da placa iniciar tudo que precisa

      digitalWrite(led_vermelho, HIGH);
      digitalWrite(led_azul, HIGH);
      digitalWrite(led_verde, HIGH);
      digitalWrite(led_branco, HIGH);
      tone(BUZZER, 1500, 500);
      delay(500);
      digitalWrite(led_vermelho, LOW);
      digitalWrite(led_azul, LOW);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_branco, LOW);
}


void loop() 
{
 int botao_on = digitalRead(botao1);
 int botao_on2 = digitalRead(botao2);

  intensidade = analogRead(LDR);
  Serial.println(intensidade);
  valorLDR = 15*(intensidade-valmin)/(valmax-valmin);

  if(botao_on == LOW)
  {
    Serial.println("Botao 1 apertado");
    if(valorLDR = 0)
    {
      binario = 0000;
      digitalWrite(led_vermelho, LOW);
      digitalWrite(led_azul, LOW);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_branco, LOW);
      tone(BUZZER, valorLDR * 500, 500);
    }
     else if(valorLDR = 1)
    {
      binario = 0001;
      digitalWrite(led_vermelho, LOW);
      digitalWrite(led_azul, LOW);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_branco, HIGH);
      tone(BUZZER, valorLDR * 500, 500);
    }
     else if (valorLDR = 2)
    {
      binario = 0010;
      digitalWrite(led_vermelho, LOW);
      digitalWrite(led_azul, LOW);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_branco, HIGH);
      tone(BUZZER, valorLDR * 500, 500);
    }
     else if(valorLDR = 3)
    {
      binario = 0011;
      digitalWrite(led_vermelho, LOW);
      digitalWrite(led_azul, LOW);
      digitalWrite(led_verde, HIGH);
      digitalWrite(led_branco, HIGH);
      tone(BUZZER, valorLDR * 500, 500);
    }
     else if(valorLDR = 4)
    {
      binario = 0100;
      digitalWrite(led_vermelho, LOW);
      digitalWrite(led_azul, HIGH);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_branco, LOW);
      tone(BUZZER, valorLDR * 500, 500);
    }
     else if(valorLDR = 5)
    {
      binario = 0101;
      digitalWrite(led_vermelho, LOW);
      digitalWrite(led_azul, HIGH);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_branco, HIGH);
      tone(BUZZER, valorLDR * 500, 500);
    }
     else if(valorLDR = 6)
    {
      binario = 0110;
      digitalWrite(led_vermelho, LOW);
      digitalWrite(led_azul, HIGH);
      digitalWrite(led_verde, HIGH);
      digitalWrite(led_branco, LOW);
      tone(BUZZER, valorLDR * 500, 500);
    }
     else if(valorLDR = 7)
    {
      binario = 0111;
      digitalWrite(led_vermelho, LOW);
      digitalWrite(led_azul, HIGH);
      digitalWrite(led_verde, HIGH);
      digitalWrite(led_branco, HIGH);
      tone(BUZZER, valorLDR * 500, 500);
    }
     else if(valorLDR = 8)
    {
      binario = 1000;
      digitalWrite(led_vermelho, HIGH);
      digitalWrite(led_azul, LOW);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_branco, LOW);
      tone(BUZZER, valorLDR * 500, 500);
    }
     else if(valorLDR = 9)
    {
      binario = 1001;
      digitalWrite(led_vermelho, HIGH);
      digitalWrite(led_azul, LOW);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_branco, HIGH);
      tone(BUZZER, valorLDR * 500, 500);
    }
     else if(valorLDR = 10)
    {
      binario = 1010;
      digitalWrite(led_vermelho, HIGH);
      digitalWrite(led_azul, LOW);
      digitalWrite(led_verde, HIGH);
      digitalWrite(led_branco, LOW);
      tone(BUZZER, valorLDR * 500, 500);
    }
     else if(valorLDR = 11)
    {
      binario = 1011;
      digitalWrite(led_vermelho, HIGH);
      digitalWrite(led_azul, LOW);
      digitalWrite(led_verde, HIGH);
      digitalWrite(led_branco, HIGH);
      tone(BUZZER, valorLDR * 500, 500);
    }
     else if(valorLDR = 12)
    {
      binario = 1100;
      digitalWrite(led_vermelho, HIGH);
      digitalWrite(led_azul, HIGH);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_branco, LOW);
      tone(BUZZER, valorLDR * 500, 500);
    }    
     else if(valorLDR = 13)
    {
      binario = 1011;
      digitalWrite(led_vermelho, HIGH);
      digitalWrite(led_azul, HIGH);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_branco, HIGH);
      tone(BUZZER, valorLDR * 500, 500);
    }    
     else if(valorLDR = 14)
    {
      binario = 1110;
      digitalWrite(led_vermelho, HIGH);
      digitalWrite(led_azul, HIGH);
      digitalWrite(led_verde, HIGH);
      digitalWrite(led_branco, LOW);
      tone(BUZZER, valorLDR * 500, 500);
    }
     else if(valorLDR = 15)
    {
      binario = 1111;
      digitalWrite(led_vermelho, HIGH);
      digitalWrite(led_azul, HIGH);
      digitalWrite(led_verde, HIGH);
      digitalWrite(led_branco, HIGH);
      tone(BUZZER, valorLDR * 500, 500);
    }
  }
    delay(1000);
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_azul, LOW);
    digitalWrite(led_verde, LOW);
    digitalWrite(led_branco, LOW);
    vetor[contador] = binario;
    contador += 1;
    if(contador>99)
      Serial.println("Estorou espaço da pilha. Máx é 100!");
    Serial.println(vetor[contador]);
  
  if (botao_on2 == LOW)
  {
    Serial.println("Botao 2 apertado");
    for (int i = 0; i =contador; i++)
    {
      if(vetor[i]= 0000)
        {
        digitalWrite(led_vermelho, LOW);
        digitalWrite(led_azul, LOW);
        digitalWrite(led_verde, LOW);
        digitalWrite(led_branco, LOW);
        tone(BUZZER, valorLDR * 500, 500);
        }
       else if(vetor[i]= 0001)
        {
        digitalWrite(led_vermelho, LOW);
        digitalWrite(led_azul, LOW);
        digitalWrite(led_verde, LOW);
        digitalWrite(led_branco, HIGH);
        tone(BUZZER, valorLDR * 500, 500);
        }
       else if(vetor[i]= 0010)
        {
        digitalWrite(led_vermelho, LOW);
        digitalWrite(led_azul, LOW);
        digitalWrite(led_verde, HIGH);
        digitalWrite(led_branco, LOW);
        tone(BUZZER, valorLDR * 500, 500);
        }
       else if(vetor[i]= 0011)
        {
        digitalWrite(led_vermelho, LOW);
        digitalWrite(led_azul, LOW);
        digitalWrite(led_verde, HIGH);
        digitalWrite(led_branco, HIGH);
        tone(BUZZER, valorLDR * 500, 500);
        }
       else if(vetor[i]= 0100)
        {
        digitalWrite(led_vermelho, LOW);
        digitalWrite(led_azul, HIGH);
        digitalWrite(led_verde, LOW);
        digitalWrite(led_branco, LOW);
        tone(BUZZER, valorLDR * 500, 500);
        }
       else if(vetor[i]= 0101)
        {
        digitalWrite(led_vermelho, LOW);
        digitalWrite(led_azul, HIGH);
        digitalWrite(led_verde, LOW);
        digitalWrite(led_branco, HIGH);
        tone(BUZZER, valorLDR * 500, 500);
        }
       else if(vetor[i]= 0110)
        {
        digitalWrite(led_vermelho, LOW);
        digitalWrite(led_azul, HIGH);
        digitalWrite(led_verde, HIGH);
        digitalWrite(led_branco, LOW);
        tone(BUZZER, valorLDR * 500, 500);
        }
       else if(vetor[i]= 0111)
        {
        digitalWrite(led_vermelho, LOW);
        digitalWrite(led_azul, HIGH);
        digitalWrite(led_verde, HIGH);
        digitalWrite(led_branco, HIGH);
        tone(BUZZER, valorLDR * 500, 500);
        }
       else if(vetor[i]= 1000)
        {
        digitalWrite(led_vermelho, HIGH);
        digitalWrite(led_azul, LOW);
        digitalWrite(led_verde, LOW);
        digitalWrite(led_branco, LOW);
        tone(BUZZER, valorLDR * 500, 500);
        }
       else if(vetor[i]= 1001)
        {
        digitalWrite(led_vermelho, HIGH);
        digitalWrite(led_azul, LOW);
        digitalWrite(led_verde, LOW);
        digitalWrite(led_branco, HIGH);
        tone(BUZZER, valorLDR * 500, 500);
        }
       else if(vetor[i]= 1010)
        {
        digitalWrite(led_vermelho, HIGH);
        digitalWrite(led_azul, LOW);
        digitalWrite(led_verde, HIGH);
        digitalWrite(led_branco, LOW);
        tone(BUZZER, valorLDR * 500, 500);
        }
     else if(vetor[i]= 1011)
      {
        digitalWrite(led_vermelho, HIGH);
        digitalWrite(led_azul, LOW);
        digitalWrite(led_verde, HIGH);
        digitalWrite(led_branco, HIGH);
        tone(BUZZER, valorLDR * 500, 500);
      }
     else if(vetor[i]= 1100)
      {
        digitalWrite(led_vermelho, HIGH);
        digitalWrite(led_azul, HIGH);
        digitalWrite(led_verde, LOW);
        digitalWrite(led_branco, LOW);
        tone(BUZZER, valorLDR * 500, 500);
      }    
     else if(vetor[i]= 1101)
      {
        digitalWrite(led_vermelho, HIGH);
        digitalWrite(led_azul, HIGH);
        digitalWrite(led_verde, LOW);
        digitalWrite(led_branco, HIGH);
        tone(BUZZER, valorLDR * 500, 500);
      }    
     else if(vetor[i]= 1110)
      {
        digitalWrite(led_vermelho, HIGH);
        digitalWrite(led_azul, HIGH);
        digitalWrite(led_verde, HIGH);
        digitalWrite(led_branco, LOW);
        tone(BUZZER, valorLDR * 500, 500);
      }
     else if(vetor[i]= 1111)
      {
        digitalWrite(led_vermelho, HIGH);
        digitalWrite(led_azul, HIGH);
        digitalWrite(led_verde, HIGH);
        digitalWrite(led_branco, HIGH);
        tone(BUZZER, valorLDR * 500, 500);
      } 
    }

  }
}