namespace models{
  class Papagaio : Animal{

    public Papagaio(string nome, int idade, string especie) :  base(nome, idade, especie){

    }

    override void EmitirSom(){
      Console.WriteLine("Olá!");
    }
  }
}