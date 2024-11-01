while(True):
  try:
    x = input("Digite um numero inteiro");
    i = int(x);
    print("Digitado inteiro")
  except ValueError as erro:
    print(erro);
    break;