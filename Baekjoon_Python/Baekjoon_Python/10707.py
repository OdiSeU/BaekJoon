A = int(input())
B, C, D = int(input()), int(input()), int(input())
P = int(input())
print(min(A * P, B if C > P else (P - C) * D + B))
