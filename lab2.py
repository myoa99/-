from math import *
x = float(input('Введите значение x: '))
if -7 <= x < -3:
    y = 3
elif -3 <= x < 3:
    y = 3 + sqrt(9 - x**2)
elif 3 <= x < 6:
    y = -2 * x + 9
elif 6 <= x < 11:
    y = x - 9
print(f"X={x:.2f} Y={y:.2f}")
