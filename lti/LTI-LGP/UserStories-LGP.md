## Índice

1. [Historias de usuario](#historias-de-usuario)
2. [Justificación de Prioridad de Historias de Usuario](#justificación-de-prioridad-de-historias-de-usuario)
3. [Historias de usuario detalladas](#historias-de-usuario-detalladas)
4. [Tickets](#tickets)

## Historias de usuario

Algunas de las historias de usuario que podríamos considerar interesantes para empezar a implementar nuestro sistema ATS son:

1. Como reclutador, quiero poder crear y publicar fácilmente nuevas ofertas de empleo en el sistema ATS, para así poder comenzar a recibir candidaturas de manera rápida y efectiva.

2. Como manager de contratación, quiero recibir notificaciones automáticas cuando se haya preseleccionado a candidatos para una vacante específica, para poder revisar sus perfiles y tomar decisiones rápidamente.

3. Como candidato, quiero poder registrarme en el sistema ATS y completar mi perfil con información relevante, para poder aplicar a las ofertas de empleo de manera sencilla y rápida.

4. Como reclutador, quiero tener la capacidad de filtrar automáticamente los CVs recibidos según criterios predefinidos, para poder identificar rápidamente a los candidatos más adecuados para una determinada posición.

5. Como manager de contratación, quiero poder colaborar de manera efectiva con el equipo de reclutamiento mediante herramientas de comunicación integradas en el sistema ATS, para poder revisar y discutir los perfiles de los candidatos y tomar decisiones informadas.

6. Como candidato, quiero recibir actualizaciones automáticas sobre el estado de mi aplicación, para poder estar al tanto de cualquier cambio o avance en el proceso de selección.

7. Como reclutador, quiero contar con herramientas de análisis predictivo que me ayuden a identificar a los candidatos con mayor potencial, para poder enfocar mis esfuerzos en aquellos que mejor se ajusten a las necesidades del puesto.

8. Como manager de contratación, quiero poder programar entrevistas con los candidatos seleccionados de manera rápida y sencilla a través del sistema ATS, para poder avanzar en el proceso de selección de manera eficiente.


Teniendo en cuenta que operaremos bajo metodologías ágiles, hemos optado por utilizar la técnica de Priorización de Backlog Basada en Valor (Value-Based Backlog Prioritization) debido a su capacidad para enfocarse en la entrega de valor máximo al usuario. Esta técnica nos permite identificar y priorizar las historias de usuario que generan el mayor beneficio para nuestros usuarios y para el éxito del producto en general. Esto nos ayuda a optimizar el tiempo y los recursos, asegurando que entreguemos continuamente características que realmente importan y que generen un impacto significativo en nuestros usuarios y en el crecimiento de la empresa.

Después de analizar estas historias de usuario, mostramos en la siguiente tabla el orden de prioridad que seguiremos a la hora de implentar las historias de usuario.

| Historia de Usuario | Valor de Negocio | Prioridad |
|----------------------|------------------|-----------|
| Crear y Publicar Ofertas de Empleo | Alta | Alta |
| Registrarse y Completar Perfil por parte del Candidato | Alta | Alta |
| Recibir Notificaciones Automáticas de Candidatos Preseleccionados | Media | Alta |
| Filtrar Automáticamente CVs según Criterios Predefinidos | Alta | Media |
| Colaborar Efectivamente con el Equipo de Reclutamiento | Media | Media |
| Recibir Actualizaciones Automáticas sobre el Estado de la Aplicación | Media | Baja |
| Contar con Herramientas de Análisis Predictivo para Identificar Candidatos | Alta | Baja |
| Programar Entrevistas con Candidatos Seleccionados | Media | Baja |


## Justificación de Prioridad de Historias de Usuario

Profundizaremos en estas tres historias de usuario que consideramos que son prioritarias debido a su alto valor percibido por los usuarios y su impacto directo en la experiencia general del usuario y en los objetivos del negocio.

1. **Creación y Publicación de Ofertas de Empleo**: Esta historia permite a los reclutadores comenzar a utilizar el sistema ATS de manera efectiva al crear y publicar nuevas ofertas de empleo de manera rápida y sencilla. Esto es fundamental para iniciar el proceso de contratación y atraer candidatos cualificados, lo que contribuye directamente a la misión del negocio de cubrir vacantes y construir equipos sólidos.

2. **Registro y Completado de Perfil por parte del Candidato**: La capacidad de los candidatos para registrarse y completar sus perfiles en el sistema ATS es esencial para su participación activa en el proceso de selección. Al facilitar este paso, se mejora la experiencia del usuario y se aumenta la probabilidad de recibir candidaturas de calidad, lo que respalda los objetivos de contratación del negocio.

3. **Recepción de actualizaciones automáticas sobre el estado de la aplicación**: Esta historia garantiza que los candidatos estén informados en todo momento sobre el progreso de su aplicación. Proporcionar actualizaciones automáticas sobre el estado de la aplicación mejora la transparencia y la comunicación entre el reclutador y el candidato, lo que puede aumentar la satisfacción del usuario y mantener su compromiso con el proceso de selección.

En resumen, estas historias de usuario se consideran prioritarias porque abordan necesidades críticas de los usuarios y contribuyen significativamente al logro de los objetivos comerciales relacionados con la contratación de personal. Su implementación temprana garantiza un impacto rápido y positivo en la experiencia general del usuario y en la eficiencia del proceso de reclutamiento.


## Historias de usuario detalladas

- **Título**: Creación y Publicación de Ofertas de Empleo
- **Como**: reclutador
- **Quiero**: poder crear y publicar fácilmente nuevas ofertas de empleo en el sistema ATS
- **Para que**: pueda comenzar a recibir candidaturas de manera rápida y efectiva y avanzar en el proceso de reclutamiento de manera eficiente.

- **Criterios de aceptación**: 
  - El reclutador puede acceder a una interfaz de usuario clara y fácil de usar para crear una nueva oferta de empleo.

  - Los campos necesarios para completar la oferta incluyen: título del puesto, descripción del trabajo, requisitos, ubicación, fecha límite de publicación y salario.
  - El reclutador puede revisar y editar la oferta de empleo antes de publicarla.
  - Una vez creada, la oferta de empleo se publica automáticamente y está disponible para que los candidatos la vean en el sistema ATS.
  - El reclutador tiene la capacidad de eliminar una oferta de empleo si ya no es relevante o si ha llegado su fecha límite de publicación.

- **Valor de negocio**: Alto
- **Prioridad**: Alta
- **Estimación de esfuerzo**: 10 días
- **Dependencias**: No tiene
- **Notas adicionales**: Esta funcionalidad es crucial para iniciar el proceso de reclutamiento y atraer candidatos al sistema ATS. La facilidad de uso y la rapidez en la publicación de ofertas de empleo son aspectos clave para garantizar que el sistema sea efectivo y eficiente para los reclutadores.


____


- **Título**: Registro y Gestión de Perfiles por parte del Candidato
- **Como**: candidato
- **Quiero**: poder registrarme en el sistema ATS y gestionar múltiples perfiles con información relevante para diferentes tipos de puestos.
- **Para que**: pueda aplicar a diversas ofertas de empleo de manera más específica y aumentar mis posibilidades de ser seleccionado para diferentes roles.

- **Criterios de aceptación**: 
  - El candidato puede acceder a un formulario de registro en el sistema ATS.

  - El formulario de registro solicita información básica, como nombre, dirección de correo electrónico y contraseña.
  - El candidato puede crear y gestionar múltiples perfiles dentro del sistema, cada uno con información específica para diferentes tipos de puestos.
  - Cada perfil puede incluir detalles como experiencia laboral, educación, habilidades y certificaciones relevantes para el tipo de puesto.
  - El candidato puede seleccionar el perfil adecuado al aplicar a ofertas de empleo dentro del sistema ATS.
  - El candidato puede editar o eliminar perfiles existentes en cualquier momento.

- **Valor de negocio**: Alto
- **Prioridad**: Alta
- **Estimación de esfuerzo**: 6 días
- **Dependencias**: No tiene
- **Notas adicionales**: Esta funcionalidad proporciona flexibilidad al candidato al permitirle adaptar sus perfiles a diferentes oportunidades laborales. Facilita la aplicación a diversos tipos de puestos y mejora la relevancia de las aplicaciones enviadas, aumentando las posibilidades de éxito en el proceso de selección.

____


- **Título**: Recepción de actualizaciones automáticas sobre el estado de la aplicación
- **Como**: Candidato
- **Quiero**: Recibir actualizaciones automáticas sobre el estado de mi aplicación
- **Para que**: Pueda estar al tanto de cualquier cambio o avance en el proceso de selección y tomar decisiones informadas sobre mi candidatura.

- **Criterios de aceptación**: 
  - Recibir notificaciones automáticas por correo electrónico o dentro del sistema cada vez que haya un cambio en el estado de mi aplicación.
  - Las notificaciones deben incluir información clara y detallada sobre el cambio o avance en el proceso de selección.

  - Tener la opción de configurar las preferencias de notificación, como la frecuencia y el tipo de actualizaciones que deseo recibir.
  - Acceder fácilmente a un registro o historial de todas las actualizaciones anteriores sobre el estado de mi aplicación.
  
- **Valor de negocio**: Proporciona una experiencia mejorada para los candidatos al mantenerlos informados y comprometidos durante todo el proceso de selección, lo que puede aumentar la satisfacción del usuario y la retención de talento.
- **Prioridad**: Alta
- **Estimación de esfuerzo**: Moderada
- **Dependencias**: 
  - Disponibilidad de un sistema de seguimiento de candidatos (ATS) que admita la generación y envío de notificaciones automáticas.

  - Integración con el flujo de trabajo interno de reclutamiento para garantizar la precisión de las actualizaciones.
  
- **Notas adicionales**: La implementación de esta funcionalidad requerirá una cuidadosa planificación para garantizar una comunicación efectiva con los candidatos sin abrumarlos con notificaciones innecesarias.



## Tickets

Inicialmente nos vamos a centrar en la historia de usuario "Creación y Publicación de Ofertas de Empleo", a continuación mostramos un listado de tickets agrupados por equipo de trabajo.

### Equipo de Front-End:

#### Desarrollo

1. **Diseñar interfaz de usuario para crear nuevas ofertas de empleo**:
   - Diseñar una interfaz de usuario intuitiva y fácil de usar que permita a los reclutadores crear nuevas ofertas de empleo.

   - Incluir campos para título del puesto, descripción del trabajo, requisitos, ubicación, fecha límite de publicación y salario.

2. **Implementar validaciones en la interfaz de usuario**:
   - Agregar validaciones en la interfaz de usuario para garantizar que se ingresen datos válidos al crear una nueva oferta de empleo.

   - Validar campos obligatorios y formatos de datos como fechas y salarios.

3. **Desarrollar funcionalidad para eliminar ofertas de empleo**:
   - Implementar la lógica en el front-end para permitir que los reclutadores eliminen ofertas de empleo que ya no sean relevantes o que hayan llegado a su fecha límite de publicación.

   - Integrar la funcionalidad con la interfaz de usuario existente para proporcionar una opción de eliminación de ofertas de empleo.
   - Confirmar la eliminación de forma segura para evitar acciones accidentales.

4. **Implementar funcionalidad de previsualización de oferta de empleo**:
   - Desarrollar una función que permita al reclutador previsualizar cómo quedaría la oferta de empleo antes de publicarla.

   - Integrar esta función en la interfaz de usuario de creación de ofertas de empleo.
   - Asegurarse de que la previsualización muestre correctamente todos los detalles de la oferta, incluyendo el título, descripción del trabajo, requisitos, ubicación, fecha límite de publicación y salario.
   - Permitir al reclutador realizar ediciones adicionales en la oferta de empleo durante la previsualización si es necesario.
   - Asegurar una experiencia de usuario fluida y receptiva durante la previsualización.

#### Testing:

1. **Configuración de Cypress para Pruebas de Interfaz de Usuario:**
   - Instalar y configurar Cypress como framework de pruebas para el frontend.

   - Integrar Cypress con el proyecto de frontend.
   - Establecer la estructura inicial de los archivos de pruebas.

2. **Desarrollo de Pruebas de Usabilidad con Cypress:**
   - Escribir pruebas de usabilidad utilizando Cypress para verificar la funcionalidad y la experiencia del usuario en la interfaz de usuario de creación y publicación de ofertas de empleo.

3. **Desarrollo de Pruebas de Aceptación con Cypress:**
   - Escribir pruebas de aceptación utilizando Cypress para verificar que la interfaz de usuario cumpla con los requisitos y expectativas del usuario final.


### Equipo de Back-End:

#### Desarrollo

1. **Desarrollar API para la creación de nuevas ofertas de empleo**:
   - Crear endpoints en la API para permitir que el front-end envíe solicitudes de creación de nuevas ofertas de empleo.

   - Implementar la lógica necesaria para procesar y almacenar la información de las ofertas de empleo en la base de datos.

2. **Agregar validación a la API de creación de ofertas de empleo**:
   - Validar los datos recibidos a través de la API para garantizar que cumplan con los requisitos de formato y que sean coherentes.

   - Manejar errores de validación y devolver mensajes claros al front-end en caso de datos incorrectos.

3. **Desarrollar API para eliminar ofertas de empleo**:
   - Crear endpoints en la API para permitir que el front-end envíe solicitudes de eliminación de ofertas de empleo.

   - Implementar la lógica necesaria para procesar y eliminar las ofertas de empleo seleccionadas de la base de datos.
   - Establecer la autenticación y autorización adecuadas para garantizar que solo los reclutadores autorizados puedan eliminar ofertas de empleo.


#### Testing:

1. **Configuración del Entorno de Pruebas para PHP:**
   - Configurar un entorno de pruebas para el desarrollo en PHP.

   - Instalar y configurar las herramientas necesarias para ejecutar pruebas automatizadas en PHP.

2. **Desarrollo de Pruebas de Integración para la API de Creación de Ofertas de Empleo:**
   - Escribir pruebas de integración utilizando un framework de pruebas para PHP (PHPUnit) para verificar la integración y el funcionamiento de la API de creación de ofertas de empleo.

3. **Desarrollo de Pruebas de Funcionalidad para la API de Creación de Ofertas de Empleo:**
   - Escribir pruebas de funcionalidad utilizando un framework de pruebas para PHP (PHPUnit) para verificar el comportamiento y la lógica de la API de creación de ofertas de empleo.


Hemos generado en Trello los tickets necesarios para empezar con su implementación.

https://trello.com/b/QWY6fD2K