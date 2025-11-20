# Sistema de Censos

Proyecto en C++ que implementa un sistema de gestión de censos inspirado en los procesos del INEI.  
Permite administrar entidades como personas, universidades, escuelas/colegios, empresas, preguntas y formularios censales, utilizando una arquitectura **Model–View–Controller (MVC)** desarrollada en **C++/CLI con Windows Forms**.

El objetivo fue construir un software completo que gestione información de diferentes tipos de censos, con operaciones CRUD, persistencia en archivos de texto y múltiples interfaces gráficas.

---

## Funcionalidades principales

- Gestión de entidades (altas, bajas, modificaciones) de:
  - Personas  
  - Universidades  
  - Escuelas / Colegios  
  - Empresas  
  - Censadores  
  - Preguntas  
  - Formularios de censo
- Pantalla de **login** basada en `Usuarios.txt`.
- Validaciones básicas de entrada y navegación entre formularios.

---

## Persistencia de datos

- Lectura y escritura en archivos `.txt` ubicados en la carpeta `Data/`.
- Carga automática de datos al iniciar la aplicación.
- Actualización inmediata de los archivos al registrar o modificar entidades.

---

## Interfaz gráfica

- Aplicación de escritorio en **Windows Forms**.
- Ventanas específicas para cada tipo de entidad (registro, edición, eliminación).
- Organización por formularios según mantenimiento (Personas, Universidades, Empresas, etc.).

---

## Arquitectura MVC

- **Model**  
  Entidades y estructuras de datos del sistema de censos (personas, universidades, preguntas, etc.).

- **Controller**  
  Lógica de negocio y gestión de archivos de texto (lectura/escritura, búsqueda, actualización de registros).

- **View**  
  Interfaces gráficas en Windows Forms que interactúan con el usuario y llaman a los controladores.

---

## Estructura del repositorio

- `SistemaCensosModel/` – Clases de modelo y entidades.
- `SistemaCensosController/` – Lógica de negocio y manejo de archivos.
- `SistemaCensosView/` – Formularios de Windows Forms (UI).
- `Data/` – Archivos `.txt` con la información de ejemplo.
- `Docs/` – Diagrama de clases y documentación del proyecto.

---

## Equipo

- **Victor Javier Huayapa Leon**  
- **Javier Rodrigo Mendoza Huamán**  
- **Eric Octavio Palomino Cáceres**  
- **Diego Samir Hancco Rodríguez**

Proyecto desarrollado como trabajo final del curso de Lenguaje de Programación Orientado a Objetos (LPOO) – PUCP.
