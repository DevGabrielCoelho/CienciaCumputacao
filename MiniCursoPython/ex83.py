def Soma(N):
  if N==1:
    return (1);

  else:
    return (N + Soma(N-1));

print(Soma(100));        