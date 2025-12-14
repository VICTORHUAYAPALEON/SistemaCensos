# Census Management System (Sistema de Censos)

C++ project implementing a census management system inspired by the workflows of Peru’s National Institute of Statistics and Informatics (INEI).
The system manages entities such as people, universities, schools, companies, questions, and census forms using a Model–View–Controller (MVC) architecture developed in C++/CLI with Windows Forms.

The goal was to build a complete desktop application capable of handling multiple census types, supporting CRUD operations, text-file persistence, and multiple graphical user interfaces.

---

## Main Features

- Entity management (create, update, delete) for:
  - Personas  
  - Universidades  
  - Escuelas / Colegios  
  - Empresas  
  - Censadores  
  - Preguntas  
  - Formularios de censo
- Login screen based on `Usuarios.txt`.
- Basic input validation and structured navigation between forms.

---

## Data Persistence

- Read/write operations using `.txt` files stored in the `Data/` directory.
- Automatic data loading at application startup.
- Immediate file updates when entities are created or modified.

---

## Graphic User Interface

- Aplicación de escritorio en **Windows Forms**.
- Desktop application built with Windows Forms.
- Ventanas específicas para cada tipo de entidad (registro, edición, eliminación).
- Dedicated windows for each entity type (registration, editing, deletion).
- Form-based organization by functional area (Personas, Universidades, Empresas, etc.).

---

## MVC Architecture

- **Model**  
  Data entities and structures representing census information (personas, universidades, preguntas, etc.).

- **Controller**  
  Business logic and text-file management (lectura/escritura, búsqueda, actualización de registros).

- **View**  
  Windows Forms interfaces that interact with users and invoke controller logic.

---

## Repository Structure

- `SistemaCensosModel/` – Data models and entity classes.
- `SistemaCensosController/` – Business logic and file handling.
- `SistemaCensosView/` – Windows Forms interfaces (UI).
- `Data/` – Sample `.txt` datasets.
- `Docs/` – Class diagram and project documentation.

---

## Applications

- Census and survey data management systems
- Desktop CRUD applications with structured persistence
- Educational reference for MVC architecture in C++/CLI

---

## Team

- **Victor Javier Huayapa Leon**  
- **Javier Rodrigo Mendoza Huamán**  
- **Eric Octavio Palomino Cáceres**  
- **Diego Samir Hancco Rodríguez**

Final project developed for the Object-Oriented Programming Language course (LPOO) – PUCP.
