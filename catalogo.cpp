#include <iostream>
#include <vector>
#include <string>

// Definir una estructura para representar artículos de ropa
struct Ropa {
    std::string nombre;
    std::string descripcion;
    float precio;
    std::string talla;
};

int main() {
    // Crear un vector de artículos de ropa
    std::vector<Ropa> catalogo;

    // Agregar algunos elementos al catálogo de ropa
    catalogo.push_back({"Camisa", "Camisa de algodón", 29.99, "M"});
    catalogo.push_back({"Pantalón", "Pantalón vaquero", 39.99, "L"});
    catalogo.push_back({"Vestido", "Vestido elegante", 49.99, "S"});

    // Mostrar el catálogo de ropa
    std::cout << "=== Catálogo de Ropa ===" << std::endl;
    for (const auto& ropa : catalogo) {
        std::cout << "Nombre: " << ropa.nombre << std::endl;
        std::cout << "Descripción: " << ropa.descripcion << std::endl;
        std::cout << "Precio: $" << ropa.precio << std::endl;
        std::cout << "Talla: " << ropa.talla << std::endl;
        std::cout << "------------------------" << std::endl;
    }

    return 0;
}
