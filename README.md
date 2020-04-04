# Parametry projektu
Nazwa:  pm-lab-1-sn  
Autor:  Łukasz Drozd (lukasz.drozd1@student.wat.edu.pl)  
Opis:   Projekt bazowy repozytorium na pierwsze spotkanie laboratoryjne z przedmiotu *Programowanie mikrokontrolerów*.  
Wersja: v1.0  
Data:   04.04.2020 r.  

# Informacje o studencie
Imię i nazwisko studenta:   Łukasz Drozd
Numer albumu:               53371 
Grupa studencka:            WELE18X1N1

# Pytania do zadań z instrukcji
## Zadanie 2-2-1a:
Pytanie:    *Jaki jest efekt działania programu?*  
Odpowiedź:  Bardzo szybkie wyłączanie i włączanie wbudowanej diody led. Ze względu na taktowanie procesora Atmega328p 16Mhz (16 milionów cykli zegara, drgań na sekundę) wykonywane operacje w funkcji loop() takie jak digitalWrite(LED_BUILTIN, HIGH) są wykonane przez procesor bardzo szybko w porównaniu do reakcja oka ludzkiego, które nie zauwazy momentu wygaśniecie diody realizowane przez funkcje digitalWrite(LED_BUILTIN, LOW).

## Zadanie 2-2-2:
Pytanie:    *Czy zamienienie kolejności podłączenia diody LED i rezystora ma znaczenie?*  
Odpowiedź:  Nie ma znaczenia z uwagi na 1 prawo Kirchhoffa. Ważne aby elementy takie jak np dioda LED o miały zachowane odpowiednie biegunowości przy podłączeniu.

## Zadanie 2-2-3:
Pytanie:    *Czy każdy rodzaj pętli jest wymienny (zawsze można zastąpić jedną konstrukcję drugą)?*  
Odpowiedź:  Tak każda pętla jest wymienna. Ich implementacja bedzie różna i w zależności o przypadku logiki zastosowanie danego typ pętli może być łatwiejsze i szybsze do zrozumienia.

## Zadanie 2-2-4:
Pytanie:    *Jak wpływa na działanie układu zwiększenie wartości stałej LED_T (np. do 100 ms)?*  
Odpowiedź:  brak zadanie w instrukcji

## Zadanie 2-3-1:
Pytanie:    *Jakie niedogodności z punktu widzenia kierowców są obecne w programie sterującym światłami?*  
Odpowiedź:  Dla kierowców niedogodnością moze być sytuacja że po wciśnięciu przycisku dla pieszych w momecie gdy dla kierowcow zapala się czerwone odrazu dla piszych zapala się zielone (może doprowadzić do niebezpiecznej sytuacji). Zmiany ww kierowaniu ruchem za pomocą przycisku dla pieszych odbywa się natychmiastowo i można również doprowadzić do ciągłego zatrzymania ruchu jeśli bedziemy przyciskać przycisk dla pieszych caly czas (potocznie mówiąc spamując). 

## Zadanie 2-3-2:
Pytanie:    *Czy możliwe jest sterowanie stanem niskim (LOW) diod LED?*  
Odpowiedź:  Tak. Musimy zmienić podłaczenie diod do płytki. Anody do +5V , katody do wyjść IO ustawiając stan niski.

# Zadania rozszerzajace
## Zadanie 3-1:
Pytanie:    *Określić wady i zalety operowania na rejestrach mikrokontrolera.*  
Odpowiedź:  ...

## Zadanie 3-2:
Pytanie:    *Jaka jest treść nadawnaego tekstu? Proszę zapisać postać jawną i zakodowaną.*  
Odpowiedź:  ...

## Zadanie 3-3:
Pytanie:    *Kiedy programowe generowanie sygnału PWM ma zastosowanie i jakie pociąga to za sobą konsekwencje.*  
Odpowiedź:  ...
