#include <iostream>

using namespace std;

typedef char TipoChave;

class Diamante{
  private:
    TipoChave chave;
  
  public:
    Diamante (){this->chave = 'x';};
    Diamante (TipoChave chave){this->chave = chave;};
    void setChave(TipoChave chave){this->chave = chave;};
    TipoChave getChave(){return this->chave;};
  
};

class TipoDiamante{
    private:
      Diamante item;
      TipoDiamante* prox;
    
    public:
      TipoDiamante (){item.setChave('x');this->prox = NULL;};
      
    friend class Pilha;
};

class Pilha{
  private:
    int tamanho;
    TipoDiamante* topo;
  
  public:
    Pilha (){this->tamanho = 0; this->topo = NULL;};
    ~ Pilha (){Limpa();};
    bool Vazia(){return tamanho == 0;};
    int getTamanho(){return tamanho;};
    void addTamanho(){this->tamanho = tamanho++;};
    void empilha (Diamante item){
        TipoDiamante* novo;
        novo = new TipoDiamante();
        novo->item = item;
        novo->prox = topo;
        topo = novo;
        tamanho++;
    };
    Diamante desempilha (){
        Diamante aux; TipoDiamante *p;
        
        if (this->tamanho == 0){
            throw "A pilha está vazia!";
        }
        
        aux = topo->item;
        p = topo;
        topo = topo->prox;
        delete p;
        tamanho --;
        
        return aux;
    };
    void Limpa(){
        while (this->tamanho > 0){
            desempilha();
        }
    };
};

void findDiamonds(string busca){
    int diamond = 0;
    Pilha pilha = Pilha();
    Diamante item;
    
    for (int i = 0; i < busca.length(); i++){
        if (busca[i] == '<'){
            item.setChave(busca[i]);
            pilha.empilha(item);
        }
        if (busca[i] == '>' && !(pilha.Vazia())){
            diamond++;
            pilha.desempilha();
        }
    }    
    pilha.Limpa();
    cout << diamond << endl;
}

int main(){
    int testes = 0;
    
    cin >> testes;
    
    while (testes != 0){
        
        string busca;
        getline(cin>>ws, busca);
        
        findDiamonds(busca);
        
        testes --;
    }

    return 0;
}
