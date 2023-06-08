# ASD-Project
Project made during Algorithms and Data Structures course

Mamy n sejfów. Każdy z nich można otworzyć odpowiednim kluczem lub zniszczyć, żeby dostać się do zawartości. Klucze do tych sejfów znajdują się w tych samych sejfach - w każdym sejfie może być 1 klucz, więcej, lub może ich nie być w ogóle. Do każdego sejfu pasuje tylko jeden klucz i wiemy, w którym sejfie znajduje się on znajduje.

Zadaniem jest napisanie programu, który zwróci informację jaka jest najmniejsza liczba sejfów, które trzeba zniszczyć żeby dostać się do zawartości wszystkich z nich.

Przykładowe wejście do programu może składać się z jeden liczby n oznaczającej liczbę sejfów, oraz listy n liczb, w której i-ta liczba to indeks sejfu w którym znajduje się klucz do i-tego sejfu. Przykład:

4  
2 1 2 4

Oznacza to, że są 4 sejfy. Klucz do pierwszego sejfu znajduje się w sejfie 2 (2 na pozycji pierwszej), do drugiego w sejfie 1 (1 na pozycji drugiej), do 3 w sejfie 2 itd. Dla takiego wejścia, prawidłowa odpowiedź to 2 (trzeba zniszczyć sejfy 1 i 4).
