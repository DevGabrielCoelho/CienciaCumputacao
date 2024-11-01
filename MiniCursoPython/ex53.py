E = ["a", "b", "c", "d"];

for x in E:
  print(x, end="; ");

for x in "ABCDEFGHIJK":
  if x in "AEIOU":
    print(x, " é uma vogal!");
  else:
    print(x, " é uma consoante!");