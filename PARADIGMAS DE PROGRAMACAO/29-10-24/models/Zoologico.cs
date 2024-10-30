using System.Collection.Generic;

namespace models{
  class Zoologico{
    List(Animal) Animais = new List(Animal);

    public Zoologico(){
      
    }

    public void AddAnimal(Animal animal){
      Animais.add(animal);
    }

    public void ExibirSomDosAnimais(){
      foreach(x Animal in Animais){
        x.EmitirSom();
      }
    }
  }
}