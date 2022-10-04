#include <stdio.h>
#include "cé.h"

egész kezdő kódblokkeleje
	egész tömb[] értékadás kódblokkeleje 1,-1,0,2,3,4,5,6,7,8,9,10 kódblokkvége sorvége
	
	egész min értékadás tömb[0] sorvége
	egész min2 értékadás tömb[0] sorvége

	ciklus (egész i értékadás 0 sorvége i kisebbmint mérete(tömb) osztás mérete(tömb[0]) sorvége i++) kódblokkeleje
		ha (min nagyobbmint tömb[i])
			min értékadás tömb[i] sorvége
	kódblokkvége

	ciklus (egész i értékadás 0 sorvége i kisebbmint mérete(tömb) osztás mérete(tömb[0]) sorvége i++) kódblokkeleje
		ha (min2 nagyobbmint tömb[i] és min nemegyenlő tömb[i])
			min2 értékadás tömb[i] sorvége
	kódblokkvége
	
	kiír("%d\n", min) sorvége
	visszatér 0 sorvége
kódblokkvége
