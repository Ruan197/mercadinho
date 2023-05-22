#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Compra {
public:
    Compra() {
        // Construtor vazio
    }

    ~Compra() {
        // Destrutor vazio
    }
};
class Cliente {
public:
    Cliente() {
        // Construtor vazio
    }

    ~Cliente() {
        // Destrutor vazio
    }
};
class Produto {
public:
    Produto() {
        // Construtor vazio
    }

    ~Produto() {
        // Destrutor vazio
    }
};

class Funcionario {
public:
    Funcionario() {
        // Construtor vazio
    }

    ~Funcionario() {
        // Destrutor vazio
    }
};

class InterfaceUsuario {
public:
    // Construtor padrão
    InterfaceUsuario() {
        // Nenhum atributo para inicializar
    }
    
    Funcionario CadastraFuncionario(){
        // Lógica para cadastrar funcionário
        std::cout << "Funcionário cadastrado!" << std::endl;
        return Funcionario();
    }
    
    Produto CadastraProduto(){
        // Lógica para cadastrar produto
        std::cout << "Produto cadastrado!" << std::endl;
        return Produto();
    }
    Cliente CadastraCliente(){
        std::cout << "Cliente cadastrado!" << std::endl;
        return Cliente();
    }
    Compra FazerCompra(Cliente cliente){
        return Compra;
    }

    // Destrutor
    ~InterfaceUsuario() {
        // Nada para liberar
    }
};
class BancoDeDados {
    vector<Funcionario>funcionarios;
    vector<Cliente>clientes;
    vector<Produto>produtos;
    public:

    BancoDeDados() {
        // Construtor vazio
    }

    ~BancoDeDados() {
        // Destrutor vazio
    }

    void inserirFuncionario(Funcionario f1) {
        // Lógica para inserir um funcionário no banco de dados
        this->funcionarios.push_back(f1);
    }

    void inserirProduto(Produto p1) {
        // Lógica para inserir um produto no banco de dados
        this->produtos.push_back(p1);
    }
     void inserirCliente(Cliente c1) {
        // Lógica para inserir um cliente no banco de dados
        this->clientes.push_back(c1);
    }
};


void main()
{
    InterfaceUsuario interface;
    Funcionario funcionario = interface.CadastraFuncionario();
    Produto produto = interface.CadastraProduto();
    Cliente clinte = interface.CadastraCliente();
    
   
}
