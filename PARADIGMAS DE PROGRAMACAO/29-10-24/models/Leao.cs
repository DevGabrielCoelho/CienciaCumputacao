namespace models{
  class Leao : Animal{

    public Leao(string nome, int idade, string especie) :  base(nome, idade, especie){

    }

    override void EmitirSom(){
      Console.WriteLine("Rugido!");
    }
  }
}