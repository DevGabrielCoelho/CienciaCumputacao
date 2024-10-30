namespace Atividade{

  class Program{

    static void Main(string[] args){
      Animal animal = new Animal("animal", 0, "animal");
      Leao leao = new Leao("Simba", 3, "Felino");
      Elefante elefante = new Elefante("Dumbo", 2, "Mamifero");
      Papagaio papagaio = new Papagaio("Loro", 20, "Ave");
      Zoologico zoologico = new Zoologico();
      zoologico.AddAnimal(animal);
      zoologico.AddAnimal(leao);
      zoologico.AddAnimal(elefante);
      zoologico.AddAnimal(papagaio);
      zoologico.ExibirSomDosAnimais();
    }
  }
}