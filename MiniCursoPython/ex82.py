import random

for i in range(0, 9):
  x = random.randint(1, 6);
  y = random.choice(["a", "b", "c", "d", "e", "f"]);
  print (x, y);