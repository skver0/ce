#include <stdio.h>
#include "cé.h"

egész main() {
	egész tömb[] értékadás {1,-1,0,2,3,4,5,6,7,8,9,10} sorvége
	
	egész min értékadás tömb[0] sorvége
	egész min2 értékadás tömb[0] sorvége

	ciklus (egész i értékadás 0; i kisebbmint mérete(tömb) osztás mérete(tömb[0]); i++) {
		ha (min nagyobbmint tömb[i])
			min értékadás tömb[i] sorvége
	}

	ciklus (egész i értékadás 0; i kisebbmint mérete(tömb) osztás mérete(tömb[0]); i++) {
		ha (min2 nagyobbmint tömb[i] és min nemegyenlő tömb[i])
			min2 értékadás tömb[i] sorvége
	}
	
	kiír("%d\n", min) sorvége
	visszatér 0 sorvége
}
