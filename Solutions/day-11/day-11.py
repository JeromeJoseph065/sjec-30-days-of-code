p = int(input())
q = int(input())
r = int(input())
s, t = map(int, input().split())

values = [
    (3.14159 * p * p, "Circle"),
    (q * q, "Square"),
    (3**0.5 * r * r / 4, "Triangle"),
    (s * t, "Rectangle")
]

values.sort(reverse=True)

for i in values:
    print(i[1])
