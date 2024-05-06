# Documentación LTI-DV

En el desarrollo y la implementación del sistema ATS (Applicant Tracking System), varios stakeholders están  involucrados, ya que el proceso de reclutamiento y contratación afecta a múltiples partes interesadas dentro y fuera de la organización. Los requerimientos funcionales del sistema ATS son:

1. **Creación de la vacante**:
    - RF1: El Reclutador LTI debe poder crear nuevas vacantes ingresando detalles como título del puesto, descripción del trabajo, ubicación, requisitos de habilidades y experiencia requerida.
    - RF2: Debe haber un campo para establecer la fecha límite de solicitud.
    - RF3: El Recrutador LTI debe poder asignar responsabilidades a otros reclutadores o equipos para cada vacante creada.
2. **Publicación de vacante en la plataforma y redes sociales**:
    - RF4: El sistema debe permitir al Recrutador LTI publicar automáticamente las vacantes en la plataforma LTI y en las redes sociales asociadas.
    - RF5: Debe haber opciones para personalizar el contenido y el formato de las publicaciones en diferentes plataformas.
3. **Aceptación de vacantes por parte del candidato**:
    - RF6: Los candidatos deben poder buscar y aplicar a las vacantes publicadas en la plataforma LTI.
    - RF7: El sistema debe permitir a los candidatos aceptar las vacantes que se ajusten a su perfil mediante un proceso de solicitud en línea.
4. **Revisión de la vacante (filtro inicial)**:
    - RF8: El sistema debe permitir al Reclutador LTI revisar las aplicaciones recibidas y filtrar automáticamente los candidatos que cumplen con los requisitos básicos del perfil.
    - RF9: Debe haber herramientas de búsqueda y filtrado avanzadas para facilitar la revisión de las aplicaciones.
5. **Examen de conocimientos online para los candidatos que pasen el filtro inicial**:
    - RF10: El sistema debe permitir al Reclutador LTI enviar exámenes de conocimientos online a los candidatos que pasen el filtro inicial.
    - RF11: Debe haber opciones para programar y gestionar los exámenes de manera eficiente.
6. **Envío preliminar a la empresa de candidatos que cumplen el perfil**:
    - RF12: El sistema debe permitir al Reclutador LTI enviar una lista preliminar de candidatos seleccionados a la empresa para su revisión y aprobación.
    - RF13: Debe haber un proceso de revisión por parte de la empresa para validar los candidatos seleccionados antes de proceder con el siguiente paso.
7. **Agendamiento de entrevistas para candidatos con las empresas**:
    - RF14: El sistema debe facilitar el agendamiento de entrevistas entre los candidatos seleccionados y los representantes de la empresa.
    - RF15: Debe haber herramientas de calendarización integradas y opciones para gestionar las disponibilidades de los candidatos y los representantes de la empresa.
8. **Selección de candidatos seleccionados y cierre del proceso**:
    - RF16: Una vez completadas las entrevistas, el Reclutador LTI debe poder seleccionar a los candidatos finalistas y cerrar el proceso de contratación.
    - RF17: El sistema debe generar automáticamente documentos relevantes, como ofertas de trabajo, contratos y otras comunicaciones para finalizar el proceso de contratación.

![Captura de pantalla 2024-05-02 a la(s) 7.51.28 p.m..png](Documentacio%CC%81n%20LTI-DV%20058e624ea51e49ab982378aa4fbdea1d/Captura_de_pantalla_2024-05-02_a_la(s)_7.51.28_p.m..png)

• Descripción de los 3 casos de uso principales, con el diagrama asociado a cada uno

**Caso de uso candidatos**

![Captura de pantalla 2024-05-02 a la(s) 7.56.33 p.m..png](Documentacio%CC%81n%20LTI-DV%20058e624ea51e49ab982378aa4fbdea1d/Captura_de_pantalla_2024-05-02_a_la(s)_7.56.33_p.m..png)

**Código PLANTUML**

@startuml

left to right direction

actor "Candidato" as Candidato

rectangle "Sistema de Reclutamiento - Rol Candidato" {
usecase (Iniciar Sesión) as UC1
usecase (Buscar Vacantes) as UC2
usecase (Aplicar a Vacante) as UC3
usecase (Guardar Favoritos) as UC4
usecase (Participar en Evaluaciones) as UC5
usecase (Ver Resultados) as UC6
usecase (Ver Estado) as UC7
usecase (Recibir Notificaciones) as UC8
}

Candidato -- UC1
Candidato -- UC2
Candidato -- UC5
Candidato -- UC7

UC2 -- UC3 : <<include>>
UC2 -- UC4 : <<include>>
UC5 -- UC6 : <<include>>
UC7 -- UC8 : <<extend>>

@enduml

**Caso de uso reclutador**

![Captura de pantalla 2024-05-02 a la(s) 3.43.49 p.m..png](Documentacio%CC%81n%20LTI-DV%20058e624ea51e49ab982378aa4fbdea1d/Captura_de_pantalla_2024-05-02_a_la(s)_3.43.49_p.m..png)

**Código PLANTUML**

@startuml

left to right direction

actor "Recrutador LTI" as Recrutador

rectangle "Sistema de Reclutamiento - Rol Recrutador" {
usecase (Iniciar Sesión) as UC1
usecase (Crear Vacante) as UC2
usecase (Gestionar Vacante) as UC3
usecase (Guardar Borrador de Vacante) as UC4
usecase (Revisar Aplicaciones) as UC5
usecase (Filtrar Candidatos) as UC6
usecase (Mostrar Candidatos Aceptados/No Aceptados) as UC11
usecase (Consultar ID vacante) as UC7
usecase (Asignar Etiquetas y Notas) as UC8
usecase (Enviar Evaluaciones y Reportes) as UC9
usecase (Gestionar Reunión con Empresas) as UC10
usecase (Cerrar Vacante y Enviar Reporte) as UC12
usecase (Cerrar Sesión) as UC13
}

Recrutador -- UC1
Recrutador -- UC2
Recrutador -- UC3
Recrutador -- UC13

UC2 -- UC4 : <<extend>>
UC3 -- UC5 : <<include>>
UC5 -- UC6 : <<include>>
UC5 -- UC7 : <<include>>
UC5 -- UC8 : <<include>>

UC5 -- UC11 : <<include>>
UC6 -- UC11 : <<include>>

UC5 -- UC10 : <<include>>
UC7 -- UC9 : <<include>>
UC10 -- UC11 : <<extend>>
UC11 -- UC12 : <<extend>>

@enduml

**Caso de uso Empresario**

![Captura de pantalla 2024-05-02 a la(s) 4.24.00 p.m..png](Documentacio%CC%81n%20LTI-DV%20058e624ea51e49ab982378aa4fbdea1d/Captura_de_pantalla_2024-05-02_a_la(s)_4.24.00_p.m..png)

**Código  PlantUML**

@startuml

left to right direction

actor "Empresa" as Empresa

rectangle "Sistema de Reclutamiento - Rol Empresa" {
usecase (Iniciar Sesión) as UC14
usecase (Revisar Candidatos y Reportes) as UC15
usecase (Agendar Entrevistas) as UC16
usecase (Comunicarse con Reclutadores) as UC17
usecase (Ver reporte global candidatos) as UC20
usecase (Cerrar Sesión) as UC18
usecase (Notificar Candidato Seleccionado) as UC19
}

Empresa -- UC14
Empresa -- UC15
Empresa -- UC20

Empresa -- UC18

UC15 -- UC16 : <<include>>
UC16 -- UC19 : <<include>>

UC16 -- UC17 : <<include>>

@enduml

**Modelo de datos**

![Captura de pantalla 2024-05-02 a la(s) 5.22.05 p.m..png](Documentacio%CC%81n%20LTI-DV%20058e624ea51e49ab982378aa4fbdea1d/Captura_de_pantalla_2024-05-02_a_la(s)_5.22.05_p.m..png)

**Código  PlantUML**

@startuml

entity Candidato {
{field} id: integer <<PK>>
nombre: string
correo: string
contraseña: string
}

entity Vacante {
{field} id: integer <<PK>>
titulo: string
descripcion: string
ubicacion: string
habilidades_requeridas: string
experiencia_requerida: string
}

entity Aplicacion {
{field} id: integer <<PK>>
candidato_id: integer <<FK>>
vacante_id: integer <<FK>>
estado: string
}

entity Entrevista {
{field} id: integer <<PK>>
vacante_id: integer <<FK>>
candidato_id: integer <<FK>>
fecha: date
hora: time
estado: string
}

entity Reclutador {
{field} id: integer <<PK>>
nombre: string
correo: string
contraseña: string
}

entity Empresa {
{field} id: integer <<PK>>
nombre: string
correo: string
contraseña: string
}

entity ReporteCandidato {
{field} id: integer <<PK>>
candidato_id: integer <<FK>>
reclutador_id: integer <<FK>>
vacante_id: integer <<FK>>
comentarios: string
resultado: string
}

entity Evaluacion {
{field} id: integer <<PK>>
nombre: string
descripcion: string
}

entity Puntuacion {
{field} id: integer <<PK>>
candidato_id: integer <<FK>>
evaluacion_id: integer <<FK>>
puntuacion: integer
}

entity Ganador {
{field} id: integer <<PK>>
candidato_id: integer <<FK>>
vacante_id: integer <<FK>>
}

Candidato --{ Aplicacion : "Aplica a"
Vacante --{ Aplicacion : "Recibe aplicaciones para"
Aplicacion }-- Entrevista : "Seleccionado para entrevista"
Reclutador --{ Vacante : "Publica"
Reclutador --{ ReporteCandidato : "Elabora reporte para"
Reclutador --{ Aplicacion : "Filtra candidatos para entrevista"
Empresa --{ Entrevista : "Realiza entrevista a"
Empresa --{ Puntuacion : "Asigna puntuación a"
Empresa --{ ReporteCandidato : "Selecciona candidatos y envía reporte a"
Evaluacion --{ Puntuacion : "Asignada en"
Ganador -- Candidato : "Ganador de"
Empresa -- Ganador : "Reporta ganador a"
Reclutador -- Ganador : "Reporta ganador a"

@enduml

**Diseño del sistema a alto nivel**

El diagrama de alto nivel describe la arquitectura general del sistema de gestión de reclutamiento. Aquí tienes una breve descripción de cada componente:

- **Frontend**: Contiene la interfaz de usuario (UI) del sistema, que incluye páginas como la página de inicio y los perfiles para candidatos, reclutadores y empresas.
- **Backend**: Incluye los servicios de backend y la API que gestiona la lógica de negocio del sistema y maneja las solicitudes del frontend. También accede a la base de datos para recuperar y almacenar datos.
- **Integraciones**: Maneja la comunicación entre usuarios y otras integraciones externas.
- **Seguridad**: Gestiona la autenticación de usuarios y la seguridad del sistema.
- **Almacenamiento**: Contiene la base de datos del sistema, que almacena información sobre usuarios, vacantes, aplicaciones, entrevistas, evaluaciones y reportes.
- **Gestión de Vacantes**: Proporciona funcionalidades relacionadas con la gestión de vacantes, como publicar, editar y buscar vacantes, así como aplicar a ellas.
- **Proceso de Selección**: Gestiona el proceso de selección de candidatos, incluyendo la revisión de aplicaciones, programación y realización de entrevistas, y evaluación de candidatos.
- **Notificaciones y Comunicación**: Se encarga de enviar notificaciones a los usuarios sobre eventos importantes en el sistema y facilita la comunicación entre ellos.
- **Reportes y Análisis**: Proporciona funcionalidades para generar reportes basados en los datos del sistema y realizar análisis de datos para obtener información útil sobre el proceso de reclutamiento.

![alto nivel.png](Documentacio%CC%81n%20LTI-DV%20058e624ea51e49ab982378aa4fbdea1d/alto_nivel.png)

**Código  PlanUML**

@startuml

skinparam package {
BackgroundColor White
BorderColor Black
}

package "Frontend" {
[Interfaz de Usuario (UI)]
[Página de Inicio]
[Perfil de Candidato]
[Perfil de Reclutador]
[Perfil de Empresa]
}

package "Backend" {
[Servicios de Backend]
[API]
}

package "Integraciones" {
[Comunicación entre Usuarios]
}

package "Seguridad" {
[Gestión de Usuarios y Autenticación]
}

package "Almacenamiento" {
[Base de Datos]
}

package "Gestión de Vacantes" {
[Publicar Vacante]
[Editar Vacante]
[Cerrar Vacante]
[Buscar Vacantes]
[Aplicar a Vacante]
}

package "Proceso de Selección" {
[Revisión de Aplicaciones]
[Programación de Entrevistas]
[Realización de Entrevistas]
[Evaluación de Candidatos]
}

package "Notificaciones y Comunicación" {
[Enviar Notificaciones]
}

package "Reportes y Análisis" {
[Generación de Reportes]
[Análisis de Datos]
}

database "Base de Datos" {
folder "Usuarios"
folder "Vacantes"
folder "Aplicaciones"
folder "Entrevistas"
folder "Evaluaciones"
folder "Reportes"
}

[Interfaz de Usuario (UI)] --> [API] : "Envía solicitudes"
[API] --> [Servicios de Backend] : "Procesa solicitudes"
[API] --> [Comunicación entre Usuarios] : "Integración"
[API] --> [Gestión de Usuarios y Autenticación] : "Seguridad"
[API] --> [Base de Datos] : "Acceso"

[Perfil de Candidato] -down- [Buscar Vacantes] : "Realiza"
[Perfil de Candidato] -down- [Aplicar a Vacante] : "Aplica a"

[Perfil de Reclutador] -down- [Publicar Vacante] : "Publica"
[Perfil de Reclutador] -down- [Revisión de Aplicaciones] : "Revisa"

[Perfil de Empresa] -down- [Programación de Entrevistas] : "Programa"
[Perfil de Empresa] -down- [Realización de Entrevistas] : "Realiza"
[Perfil de Empresa] -down- [Evaluación de Candidatos] : "Evalúa"

[Revisión de Aplicaciones] -right- [Programación de Entrevistas] : "Selecciona"
[Programación de Entrevistas] -right- [Realización de Entrevistas] : "Selecciona"
[Realización de Entrevistas] -right- [Evaluación de Candidatos] : "Selecciona"

[Generación de Reportes] -right- [Análisis de Datos] : "Utiliza"

@enduml

## **Diagrama C4**

### **Nivel 1: Contexto**

Este nivel proporciona una visión general del sistema y su contexto externo. Incluye:

- **Sistema:** El sistema central que se está describiendo, en este caso, el "Sistema de Gestión de Reclutamiento".
- **Actores:** Las entidades externas que interactúan con el sistema. En este caso, los actores son Candidato, Reclutador y Empresa.

![Captura de pantalla 2024-05-02 a la(s) 6.33.57 p.m..png](Documentacio%CC%81n%20LTI-DV%20058e624ea51e49ab982378aa4fbdea1d/Captura_de_pantalla_2024-05-02_a_la(s)_6.33.57_p.m..png)

**Nivel 2: Contenedores**

Este nivel describe los contenedores de software que componen el sistema y cómo se relacionan entre sí. Incluye:

- **Candidato:** Representa la interfaz de usuario para los candidatos que utilizan el sistema.
- **Reclutador:** Representa la interfaz de usuario para los reclutadores que utilizan el sistema.
- **Empresa:** Representa la interfaz de usuario para las empresas que utilizan el sistema.
- **Backend:** El componente que maneja la lógica empresarial y la persistencia de datos.
- **Frontend:** El componente que proporciona la interfaz de usuario para los usuarios finales.
- **Base de datos:** Almacena los datos del sistema.
- **Integraciones:** Componentes externos integrados con el sistema, como servicios de terceros o sistemas legados.
- **Seguridad:** Componentes relacionados con la autenticación, autorización y protección de datos.
- **Almacenamiento:** Componentes relacionados con el almacenamiento de datos, como sistemas de archivos o bases de datos.

![Captura de pantalla 2024-05-02 a la(s) 6.48.34 p.m..png](Documentacio%CC%81n%20LTI-DV%20058e624ea51e49ab982378aa4fbdea1d/Captura_de_pantalla_2024-05-02_a_la(s)_6.48.34_p.m..png)

### **Nivel 3: Componentes**

Este nivel detalla los componentes internos de cada contenedor y cómo se relacionan entre sí. En este caso, se puede agregar mayor especificidad al componente Backend para incluir:

- **Controladores:** Componentes que manejan las solicitudes HTTP entrantes y coordinan las acciones del sistema.
- **Servicios:** Componentes que encapsulan la lógica empresarial y realizan operaciones específicas.
- **Repositorios:** Componentes que interactúan con la base de datos para almacenar y recuperar datos.
- **API:** Punto de acceso para que el frontend interactúe con el backend.
- **Autenticación y Autorización:** Componentes relacionados con la gestión de usuarios y permisos.

![Captura de pantalla 2024-05-02 a la(s) 6.59.05 p.m..png](Documentacio%CC%81n%20LTI-DV%20058e624ea51e49ab982378aa4fbdea1d/Captura_de_pantalla_2024-05-02_a_la(s)_6.59.05_p.m..png)

### **Nivel 4: Detalle**

En este nivel, se proporcionan detalles adicionales sobre la implementación interna de cada componente. Esto podría incluir clases, módulos, paquetes o incluso funciones específicas dentro de cada componente.

Con esta estructura, se puede comprender el sistema desde una perspectiva general hasta los detalles más específicos de su implementación interna.

![Untitled](Documentacio%CC%81n%20LTI-DV%20058e624ea51e49ab982378aa4fbdea1d/Untitled.png)