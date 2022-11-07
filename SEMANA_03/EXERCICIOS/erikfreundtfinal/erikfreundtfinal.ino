int leds[4] = {46,3,8,18};
int ldr = 6;
int b1 = 1;
int b2 = 2;
int vetor[99] = {};
int vetor2[4] = {};
int count = 0;
int buzzer = 37;

float binario(float ldr, float min, float max){
  float binario = 15*(ldr-min)/(max-min);
  return binario;
}

void setup() {
  Serial.begin(115200);
    for(int i=0;i<=4; i++){
    pinMode(leds[i], OUTPUT);
  }
  pinMode(ldr, INPUT);
  pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
}

void loop() {
  int ldr_value = analogRead(ldr);
  int ldr_binario = binario(ldr_value,8126,64);
  
  int b1_pressed = digitalRead(b1);
  int b2_pressed = digitalRead(b2);

  if(b1_pressed == LOW){
    vetor[count] = ldr_binario;
    count += 1;
    Serial.println(ldr_binario);
    delay(300);

    if(ldr_binario == 0){
     vetor2[0] = 0;
     vetor2[1] = 0;
     vetor2[2] = 0;
     vetor2[3] = 0;
    }
    else if(ldr_binario == 1){
     vetor2[0] = 0;
     vetor2[1] = 0;
     vetor2[2] = 0;
     vetor2[3] = 1;
    }
    else if(ldr_binario == 2){
     vetor2[0] = 0;
     vetor2[1] = 0;
     vetor2[2] = 1;
     vetor2[3] = 0;
    }
    else if(ldr_binario == 3){
     vetor2[0] = 0;
     vetor2[1] = 0;
     vetor2[2] = 1;
     vetor2[3] = 1;
    }
    else if(ldr_binario == 4){
     vetor2[0] = 0;
     vetor2[1] = 1;
     vetor2[2] = 0;
     vetor2[3] = 0;
    }
    else if(ldr_binario == 5){
     vetor2[0] = 0;
     vetor2[1] = 1;
     vetor2[2] = 0;
     vetor2[3] = 1;
    }
    else if(ldr_binario == 6){
     vetor2[0] = 0;
     vetor2[1] = 1;
     vetor2[2] = 1;
     vetor2[3] = 0;
    }
    else if(ldr_binario == 7){
     vetor2[0] = 0;
     vetor2[1] = 1;
     vetor2[2] = 1;
     vetor2[3] = 1;
    }
    else if(ldr_binario == 8){
     vetor2[0] = 1;
     vetor2[1] = 0;
     vetor2[2] = 0;
     vetor2[3] = 0;
    }
    else if(ldr_binario == 9){
     vetor2[0] = 1;
     vetor2[1] = 0;
     vetor2[2] = 0;
     vetor2[3] = 1;
    } 
    else if(ldr_binario == 10){
     vetor2[0] = 1;
     vetor2[1] = 0;
     vetor2[2] = 1;
     vetor2[3] = 0;
    }
    else if(ldr_binario == 11){
     vetor2[0] = 1;
     vetor2[1] = 0;
     vetor2[2] = 1;
     vetor2[3] = 1;
    }
    else if(ldr_binario == 12){
     vetor2[0] = 1;
     vetor2[1] = 1;
     vetor2[2] = 0;
     vetor2[3] = 0;
    }
    else if(ldr_binario == 13){
     vetor2[0] = 1;
     vetor2[1] = 0;
     vetor2[2] = 1;
     vetor2[3] = 1;
    }
    else if(ldr_binario == 14){
     vetor2[0] = 1;
     vetor2[1] = 1;
     vetor2[2] = 1;
     vetor2[3] = 0;
    }
    else if(ldr_binario == 15){
     vetor2[0] = 1;
     vetor2[1] = 1;
     vetor2[2] = 1;
     vetor2[3] = 1;
    }

    delay(300);
    for(int i=0; i<4; i++){
      digitalWrite(leds[i], vetor2[i]);
    }  
    tone(buzzer,ldr_binario*500,400);
  }

  if(b2_pressed == LOW){
   for(int i=0; i<=count-1;i++){
     Serial.println(vetor[i]);

      if(vetor[i] == 0){
      vetor2[0] = 0;
      vetor2[1] = 0;
      vetor2[2] = 0;
      vetor2[3] = 0;
      }
      else if(vetor[i] == 1){
      vetor2[0] = 0;
      vetor2[1] = 0;
      vetor2[2] = 0;
      vetor2[3] = 1;
      }
      else if(vetor[i] == 2){
      vetor2[0] = 0;
      vetor2[1] = 0;
      vetor2[2] = 1;
      vetor2[3] = 0;
      }
      else if(vetor[i] == 3){
      vetor2[0] = 0;
      vetor2[1] = 0;
      vetor2[2] = 1;
      vetor2[3] = 1;
      }
      else if(vetor[i] == 4){
      vetor2[0] = 0;
      vetor2[1] = 1;
      vetor2[2] = 0;
      vetor2[3] = 0;
      }
      else if(vetor[i] == 5){
      vetor2[0] = 0;
      vetor2[1] = 1;
      vetor2[2] = 0;
      vetor2[3] = 1;
      }
      else if(vetor[i] == 6){
      vetor2[0] = 0;
      vetor2[1] = 1;
      vetor2[2] = 1;
      vetor2[3] = 0;
      }
      else if(vetor[i] == 7){
      vetor2[0] = 0;
      vetor2[1] = 1;
      vetor2[2] = 1;
      vetor2[3] = 1;
      }
      else if(vetor[i] == 8){
      vetor2[0] = 1;
      vetor2[1] = 0;
      vetor2[2] = 0;
      vetor2[3] = 0;
      }
      else if(vetor[i] == 9){
      vetor2[0] = 1;
      vetor2[1] = 0;
      vetor2[2] = 0;
      vetor2[3] = 1;
      } 
      else if(vetor[i] == 10){
      vetor2[0] = 1;
      vetor2[1] = 0;
      vetor2[2] = 1;
      vetor2[3] = 0;
      }
      else if(ldr_binario == 11){
      vetor2[0] = 1;
      vetor2[1] = 0;
      vetor2[2] = 1;
      vetor2[3] = 1;
      }
      else if(vetor[i] == 12){
      vetor2[0] = 1;
      vetor2[1] = 1;
      vetor2[2] = 0;
      vetor2[3] = 0;
      }
      else if(vetor[i] == 13){
      vetor2[0] = 1;
      vetor2[1] = 0;
      vetor2[2] = 1;
      vetor2[3] = 1;
      }
      else if(vetor[i] == 14){
      vetor2[0] = 1;
      vetor2[1] = 1;
      vetor2[2] = 1;
      vetor2[3] = 0;
      }
      else if(vetor[i] == 15){
      vetor2[0] = 1;
      vetor2[1] = 1;
      vetor2[2] = 1;
      vetor2[3] = 1;
      }

      for(int i=0; i<4; i++){
        digitalWrite(leds[i], vetor2[i]);
      }  
      tone(buzzer,vetor[i]*500,400);
      vetor[i] = 0;
      delay(1000);
   }
    count = 0;
  }
}