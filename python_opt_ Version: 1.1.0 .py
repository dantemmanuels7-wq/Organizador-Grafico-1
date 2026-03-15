# Versión: 1.1.0
# Código optimizado usando diccionarios y funciones de Python

numeros = [3, -1, 0, 5, -7, 0, 2, 3, 3, -1, 5, 5, 5]

# Calcular frecuencias
frecuencias = {}

for n in numeros:
    frecuencias[n] = frecuencias.get(n, 0) + 1

# Encontrar el modo
modo = max(frecuencias, key=frecuencias.get)
max_cuenta = frecuencias[modo]

# Suma de dígitos del modo
suma_digitos = sum(int(d) for d in str(abs(modo)))

print("Frecuencias:", frecuencias)
print("Modo:", modo, "con cuenta:", max_cuenta)
print("Suma de dígitos del modo:", suma_digitos)
