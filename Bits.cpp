#define isOn(S, j) (S & (1<<j))   
// Verifica si el bit en la posición j de S está encendido (1).

#define setBit(S, j) (S |= (1<<j))   
// Enciende el bit en la posición j de S.

#define clearBit(S, j) (S &= ~(1<<j))   
// Apaga el bit en la posición j de S.

#define toggleBit(S, j) (S ^= (1<<j))   
// Cambia el estado del bit en la posición j de S (si es 1 lo convierte en 0 y viceversa).

#define lowBit(S) (S & (-S))   
// Obtiene el bit más bajo encendido en S.

#define setAll(S, n) (S = (1<<n)-1)   
// Enciende los primeros n bits de S.

#define modulo(S, N) ((S) & (N-1))   
// Calcula S % N, donde N es una potencia de 2 (más eficiente que la división).

#define isPowerOfTwo(S) (!(S & (S-1)))   
// Verifica si S es una potencia de 2.

#define nearestPowerOfTwo(S) (1<<lround(log2(S)))   
// Encuentra la potencia de 2 más cercana a S.

#define turnOffLastBit(S) ((S) & (S-1))   
// Apaga el último bit encendido en S.

#define turnOnLastZero(S) ((S) | (S+1))   
// Enciende el último bit apagado (0) en S.

#define turnOffLastConsecutiveBits(S) ((S) & (S+1))   
// Apaga la secuencia de bits encendidos consecutivamente a partir del último bit encendido en S.

#define turnOnLastConsecutiveZeroes(S) ((S) | (S-1))   
// Enciende la secuencia de ceros consecutivos a partir del último bit apagado en S.
