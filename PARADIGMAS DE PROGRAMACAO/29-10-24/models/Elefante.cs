namespace models{
  class Elefante : Animal{

    public Elefante(string nome, int idade, string especie) :  base(nome, idade, especie){

    }

    override void EmitirSom(){
      Console.WriteLine("Barrito!");
    }
  }
}