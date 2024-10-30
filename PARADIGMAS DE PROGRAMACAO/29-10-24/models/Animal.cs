namespace models{
  class Animal{
    
    public string Nome;
    public int Idade;
    public string Especie;
    
    public Animal(string nome, int idade, string especie){
      Nome = nome;
      Idade = idade;
      Especie = especie;
    }

    virtual void EmitirSom(){
      console.WriteLine("Emitindo som!!");
    }
  }
}