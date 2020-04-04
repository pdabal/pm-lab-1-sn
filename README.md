# Parametry projektu
Nazwa:  pm-lab-1-sn  
Autor:  Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis:   Projekt bazowy repozytorium na pierwsze spotkanie laboratoryjne z przedmiotu *Programowanie mikrokontrolerów*.  
Wersja: v1.0  
Data:   03.04.2020 r.  

# Informacje o studencie
Imię i nazwisko studenta:   Michał Matuszewski 
Numer albumu:               72709  
Grupa studencka:            WELE18X1N1

# Pytania do zadań z instrukcji
## Zadanie 2-2-1a:
Pytanie:    *Jaki jest efekt działania programu?*  
Odpowiedź:  Wdług instrukcji podanej przez prowadzących (i kodu programu) dioda powinna migać (Zmieniamy stan podawanego sygnału z HIGH na LOW), jednak świeci cały czas. Dlaczego?
            ponieważ program wykonywany jest w nieskończonej pętli bez przerw pomiędzy wykonywanymi funkcjami - ludzkie oko nie jest w stanie zauważyć tak szybkiej zmiany (mikrokontroler arduino uno pracuje z czestotliwością 16Mhz).

## Zadanie 2-2-2:
Pytanie:    *Czy zamienienie kolejności podłączenia diody LED i rezystora ma znaczenie?*  
Odpowiedź:  Kolejność połączenia diody i rezystora nie ma znaczenia. W przypadku tego zdania są elementami połączonymi szeregowo - z Teorii obwodów oraz prawa Ohma wiemy,
            że przez elementy połączone szeregowo przepływa ten sam prąd (odkłada się rózne napięcie zależne w tym przypadku od rezystancji elementu). Przy elementach wrażliwych
            używamy rezystora jako element na którym odłoży się część napięcia (ograniczy nam napięcie) - dzięki temu nie "przepalimy diody".

## Zadanie 2-2-3:
Pytanie:    *Czy każdy rodzaj pętli jest wymienny (zawsze można zastąpić jedną konstrukcję drugą)?*  
Odpowiedź:  Generalnie funkcjonalność pętli w programowaniu jest wymienna. Ich użycie zależne jest od kontekstu (sposobu w jaki ma zostać wykorzystana) oraz od własnych upodobań
            programisty. Pętla ma za zadanie znacznie skrócić objętość napisanego kodu - tak żeby praca stała się szybsza i efektywniejsza. Przykładem może być program, który będzie mieć za zadanie wyświetlić liczby całkowite od 0 do 10 000. Oczywiście można za pomocą funckji wyświetlania tekstu wypisać wszystkie liczby kolejno. Można też utworzyć pętlę, która co krok będzie do początkowego "0" dodawać liczb a następnie ją wyświetlać. W powyższym zadaniu moglibyśmy użyć pętli "For" - ponieważ wiemy, że zakodowany sygnał "S O S" chcemy wyemitować 3 razy.

## Zadanie 2-2-4:
Pytanie:    *Jak wpływa na działanie układu zwiększenie wartości stałej LED_T (np. do 100 ms)?*  
Odpowiedź:  ...

## Zadanie 2-3-1:
Pytanie:    *Jakie niedogodności z punktu widzenia kierowców są obecne w programie sterującym światłami?*  
Odpowiedź:  Przyciśniecie przycisku przez pieszego powoduje zatrzymanie ruchu. W przypadku gdy dla samochdów zmienia się światło z Czerwonego na Zielone pieszy możne przełączyć
            światła znowu na czerwone - przy dużym natężeniu ruchu pieszych ruch samochodów byłby zablokowany.

## Zadanie 2-3-2:
Pytanie:    *Czy możliwe jest sterowanie stanem niskim (LOW) diod LED?*  
Odpowiedź:  ...

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
