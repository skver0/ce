#ifdef CÉ_H
#define CÉ_H

// LOGIKAI OPERÁTOROK
#define és &&
#define vagy ||
#define nemegyenlő !=
#define egyenlő ==
#define nagyobbmint >
#define kisebbmint <
#define nagyobbvagyegyenlő >=
#define kisebbvagyegyenlő <=

// KETTES SZÁMRENDSZERŰ OPERÁTOROK
#define logikaiés &
#define logikaivagy |
#define kizáróvagy ^
#define negálás ~
#define balramozgat <<
#define jobbramozgat >>

// MŰVELETEK
#define megmeg ++
#define bölböl --
#define megegyenlő +=
#define bölegyenlő -=
#define szoregyenlő *=
#define maradékegyenlő %=
#define osztásegyenlő /=
#define osztás /
#define összeadás +
#define kivonás -
#define maradék %
#define értékadás =

// TÍPUSOK
#define űr void
#define előjeles signed
#define előjelnélküli unsigned
#define egész int
#define floá float
#define dupla double
#define hosszú long
#define nagyonhosszú long long
#define rövid short
#define karakter char
#define szöveg char *
#define konstans const
#define kocsi auto
#define fájl FILE

// POINTEREK
#define egészmutató int *
#define floámutató float *
#define karaktermutató char *
#define űrmutató void *
#define duplamutató double *
#define rövidmutató short *
#define hosszúmutató long *
#define nagyonhosszúmutató long long *
#define fájlmutató FILE *

// LOGIKAI + hozzá tartozó
#define ha if
#define különben else
#define kapcsoló switch
#define eset case
#define igaz 1
#define hamis 0
#define törés break
#define folytat continue

// CIKLUSOK
#define ciklus for
#define amíg while
#define csináld do

// IN&OUTPUT + egyéb stringek
#define beolvas scanf
#define kiír printf
#define sortörés "\n"
#define egészÚjSor "%d\n"

// SZERKEZET
#define sorvége ;
#define kezdő main
#define kódblokkeleje {
#define kódblokkvége }
#define nyitózárójel (
#define zárózárójel )
#define szögletesnyitózárójel [
#define szögleteszárózárójel ]
#define vessző ,
#define nyíl ->
#define pont .
#define visszatér return

// SZÖVEG LITERÁL
#define nyitóidézőjel idézőjelben nyitózárójel
#define záróidézőjel )
#define idézőjelben(...) #__VA_ARGS__

// SZABVÁNYOS SZÖVEG FÜGGVÉNYEK
#define szövegmásolás strcpy
#define szövegösszehasonlítás strcmp
#define szövegösszefűzés strcat
#define szövegszöveg strstr
#define begyűjt gets
#define lerak puts
#define begyűjtkarakter getc
#define lerakkarakter putc
#define karakterszerez getchar
#define karakterlerak putchar
#define futf sprintf

// FÁJLMŰVELETEK
#define fájlnyitás fopen
#define fájlbezárás fclose
#define fájlkiolvasás fprintf
#define fájlbeolvasás fscanf
#define fájlolvas fread
#define fájlír fwrite
#define fbegyűjtkarakter fgetc
#define flerakkarakter fputc
#define fbegyűjtszöveg fgets
#define flerakszöveg fputs
#define fájlnéz fseek
#define visszateker rewind

// EGYÉB
#define ugrás goto
#define mérete sizeof
#define semmi NULL
#define nevező typedef
#define építő asm
#define argumentumszámláló argc
#define argumentumok argv

// SZÖVEG LITERÁLOK HASZNÁLATÁHOZ SZÜKSÉGES
#define cékód(...) __VA_ARGS__

// DINAMIKUS MEMÓRIA KEZELÉS
#define memóriaelosztás malloc
#define újraelosztás realloc
#define nullaelosztás calloc
#define ingyen free

// TÍPUS MEGHATÁROZÁS
#define típusmeghatározás typedef
#define szerkezet struct
#define számbavételezés enum
#define szakszervezet union

#endif
