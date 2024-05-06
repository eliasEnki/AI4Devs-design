# UserStories-ODG - Backlog del producto ATS

## Generado con:
* Microsoft Copilot con GPT-4

## Detalle de prompts
Como paso inicial, se procede a actualizar y corregir el modelo de datos con base en el feedback de la clase pasada. Solo se detalla el proceso de actualización incluyendo las funcionalidades de Inteligencia Artificial.

No se agrega el detalle de las respuestas dadas por Copilot y se omiten algunos prompts para efectos de brevedad.

Para ver el detalle de la conversación completa se puede dar click en el siguiente enlace:
> Ver conversación completa: [click aquí](https://sl.bing.net/dBe8rjTx6Cy)

### Prompt 1
Perfecto, ahora, teniendo en cuenta las siguientes funcionalidades principales, qué entidades faltarían y cómo se podría integrar la inteligencia artificial? . Dame el detalle de tu análisis a manera de texto, no me des el código hasta que no te apruebe el resultado y explícitamente te lo indique

### Prompt 2
Estoy de acuerdo, procede  a modificar el modelo de datos. Dame un diagrama visualmente claro a pesar del nivel de complejidad que estamos manejando

### Resultado

<details>
  <summary>Modelo de datos actualizado</summary>

  ```
erDiagram
    USUARIO ||--o{ CANDIDATO : "es opcionalmente"
    USUARIO ||--o{ RECLUTADOR : "es opcionalmente"
    USUARIO ||--o{ MANAGER_DE_CONTRATACION : "es opcionalmente"
    USUARIO ||--o{ ADMINISTRADOR_DEL_SISTEMA : "es opcionalmente"
    USUARIO {
        string id PK "Identificador único"
        string nombre "Nombre completo"
        string contacto "Información de contacto"
        string rol "Rol del usuario (Candidato, Reclutador, Manager de Contratación, Administrador del Sistema)"
        string permisos "Permisos asignados"
        string nombre_usuario "Nombre de usuario para acceso al sistema"
        string contrasena "Contraseña para acceso al sistema"
    }
    CANDIDATO ||--o{ APLICACION : "realiza"
    CANDIDATO ||--o{ VACANTE : "aplica a"
    CANDIDATO ||--o{ ENTREVISTA : "participa en"
    CANDIDATO ||--o{ OFERTA_DE_TRABAJO : "recibe"
    CANDIDATO ||--o{ ANALISIS_CV : "es evaluado por"
    CANDIDATO {
        string id FK "Identificador único del candidato"
        string historial_laboral "Historial de trabajos anteriores"
        string educacion "Educación y certificaciones"
        string habilidades "Habilidades relevantes"
    }
    RECLUTADOR ||--o{ APLICACION : "filtra y organiza"
    RECLUTADOR ||--o{ VACANTE : "crea"
    RECLUTADOR ||--o{ ENTREVISTA : "organiza"
    RECLUTADOR ||--o{ EVALUACION : "realiza"
    RECLUTADOR ||--o{ INFORME : "genera"
    RECLUTADOR ||--o{ INTEGRACIONES : "inicia y usa"
    RECLUTADOR ||--o{ MATCHING : "utiliza"
    RECLUTADOR {
        string id FK "Identificador único del reclutador"
        string departamento "Departamento al que pertenece"
    }
    MANAGER_DE_CONTRATACION ||--o{ VACANTE : "aprueba"
    MANAGER_DE_CONTRATACION ||--o{ OFERTA_DE_TRABAJO : "aprueba"
    MANAGER_DE_CONTRATACION ||--o{ INFORME : "genera"
    MANAGER_DE_CONTRATACION ||--o{ ANALISIS_PREDICTIVO : "consulta"
    MANAGER_DE_CONTRATACION {
        string id FK "Identificador único del manager de contratación"
        string departamento "Departamento al que pertenece"
    }
    ADMINISTRADOR_DEL_SISTEMA ||--o{ CONFIGURACION_DEL_SISTEMA : "configura"
    ADMINISTRADOR_DEL_SISTEMA ||--o{ CHATBOT : "implementa"
    ADMINISTRADOR_DEL_SISTEMA {
        string id FK "Identificador único del administrador del sistema"
    }
    APLICACION ||--o{ EVALUACION : "tiene asociada"
    APLICACION ||--o{ MATCHING : "es evaluada por"
    APLICACION {
        string id PK "Identificador único de la aplicación"
        string id_candidato FK "ID del candidato"
        string id_vacante FK "ID de la vacante"
        date fecha_aplicacion "Fecha en que se aplicó"
        string estado "Estado actual de la aplicación"
    }
    VACANTE ||--o{ OFERTA_DE_TRABAJO : "genera"
    VACANTE ||--o{ ENTREVISTA : "requiere"
    VACANTE ||--o{ MATCHING : "es evaluada por"
    VACANTE {
        string id PK "Identificador único de la vacante"
        string titulo "Título de la vacante"
        string descripcion "Descripción detallada"
        string requisitos "Requisitos necesarios"
        string ubicacion "Ubicación geográfica"
        string tipo_contrato "Tipo de contrato ofrecido"
        float salario "Rango salarial ofrecido"
    }
    ENTREVISTA ||--o{ OFERTA_DE_TRABAJO : "requiere"
    ENTREVISTA ||--o{ CHATBOT : "es realizada por"
    ENTREVISTA {
        string id PK "Identificador único de la entrevista"
        string id_candidato FK "ID del candidato"
        string id_reclutador FK "ID del reclutador"
        datetime fecha_hora "Fecha y hora programada"
        string modalidad "Modalidad de la entrevista"
    }
    OFERTA_DE_TRABAJO ||--o{ ANALISIS_PREDICTIVO : "es evaluada por"
    OFERTA_DE_TRABAJO {
        string id PK "Identificador único de la oferta de trabajo"
        string id_candidato FK "ID del candidato"
        string detalles "Detalles de la oferta"
        date fecha_envio "Fecha de envío de la oferta"
        string estado "Estado de la oferta"
    }
    INFORME ||--o{ ANALISIS_PREDICTIVO : "incluye"
    INFORME {
        string id PK "Identificador único del informe"
        string tipo "Tipo de informe"
        string datos "Datos contenidos en el informe"
        date fecha_generacion "Fecha de generación del informe"
    }
    CONFIGURACION_DEL_SISTEMA ||--o{ INTEGRACIONES : "configura"
    CONFIGURACION_DEL_SISTEMA ||--o{ CHATBOT : "configura"
    CONFIGURACION_DEL_SISTEMA {
        string id PK "Identificador único de la configuración del sistema"
        string configuraciones "Configuraciones del sistema"
        string opciones_notificacion "Opciones de notificación"
        string integraciones "Integraciones con otros sistemas"
    }
    INTEGRACIONES ||--|| CONFIGURACION_DEL_SISTEMA : "pertenece a"
    INTEGRACIONES {
        string id PK "Identificador único de la integración"
        string nombre "Nombre de la integración"
        string descripcion "Descripción de la integración"
        string tipo "Tipo de integración (API, Servicio Web, etc.)"
        string estado "Estado actual de la integración"
    }
    EVALUACION ||--o{ RECLUTADOR : "realizada por"
    EVALUACION ||--o{ ANALISIS_SENTIMIENTO : "incluye"
    EVALUACION {
        string id PK "Identificador único de la evaluación"
        string tipo "Tipo de evaluación realizada"
        string resultados "Resultados obtenidos"
        string comentarios "Comentarios adicionales"
    }
    ANALISIS_CV {
        string id PK "Identificador único del análisis de CV"
        string id_candidato FK "ID del candidato"
        string resultados "Resultados del análisis"
        string recomendaciones "Recomendaciones basadas en el análisis"
    }
    MATCHING {
        string id PK "Identificador único del matching"
        string id_candidato FK "ID del candidato"
        string id_vacante FK "ID de la vacante"
        string puntuacion "Puntuación del matching"
        string recomendaciones "Recomendaciones de matching"
    }
    CHATBOT {
        string id PK "Identificador único del chatbot"
        string configuraciones "Configuraciones del chatbot"
        string preguntas "Preguntas predefinidas"
        string respuestas "Respuestas generadas"
    }
    ANALISIS_PREDICTIVO {
        string id PK "Identificador único del análisis predictivo"
        string id_candidato FK "ID del candidato"
        string id_vacante FK "ID de la vacante"
        string probabilidad_exito "Probabilidad de éxito del candidato"
        string recomendaciones "Recomendaciones basadas en el análisis predictivo"
    }
    ANALISIS_SENTIMIENTO {
        string id PK "Identificador único del análisis de sentimiento"
        string id_entrevista FK "ID de la entrevista"
        string resultados "Resultados del análisis de sentimiento"
        string interpretaciones "Interpretaciones del análisis"
    }
```
</details>
<br>

### Prompt 3
Bien, ahora vamos a crear el backlog del producto con base en esta última versión del modelo de datos y la información que te voy a pasar en seguida. Confírmame si sabes que es un backlog de producto

### Prompt 4
Bien, vamos a usar como contexto **las funcionalidades principales** y la **última versión del modelo de datos**  para crear este documento. Confírmame si tienes la información mencionada para proceder?

### Prompt 5
El documento que vamos a crear debe estar en formato markdown. Debes ajustar todas tus respuestas a este formato indicado. Como primera sección del documento, necesito que redactes un párrafo introductorio justificando los cambios hechos en el modelo de datos. Se breve y conciso.

### Prompt 6
Como segunda sección del documento, debes redactar las historias de usuario que cubran las funcionalidades principales del sistema ATS. Ten en cuenta la siguiente estructura de una historia de usuario y los ejemplos proporcionados:

**Estructura basica de una User Story**

1. **Formato estándar:** "Como [tipo de usuario], quiero [realizar una acción] para [obtener un beneficio]".
2. **Descripción:** Una descripción concisa y en lenguaje natural de la funcionalidad que el usuario desea.
3. **Criterios de Aceptación**: Condiciones específicas que deben cumplirse para considerar la User Story como "terminada", éstos deberian de seguir un formato similar a “Dado que” [contexto inicial], "cuando” [acción realizada], “entonces” [resultado esperado].
4. **Notas adicionales:** Notas que puedan ayudar al desarrollo de la historia
5. **Tareas:** Lista de tareas y subtareas para que esta historia pueda ser completada

**Ejemplos de User Story**

1. **Desarrollo de Productos:** "Como gerente de producto, quiero una manera en que los miembros del equipo puedan entender cómo las tareas individuales contribuyen a los objetivos, para que puedan priorizar mejor su trabajo."
2. **Experiencia del Cliente:** "Como cliente recurrente, espero que mi información quede guardada para crear una experiencia de pago más fluida, para que pueda completar mis compras de manera rápida y sencilla."
3. **Aplicación Móvil:** "Como usuario frecuente de la aplicación, quiero una forma de simplificar la información relevante de la manera más rápida posible, para poder acceder a la información que necesito de manera eficiente."

Dame el resultado en una lista numerada

### Prompt 7
Dame mínimo 5 historias de usuario. El resultado del formato estándar, es decir, del "Como", "quiero" y "para" debe estar escrito en una sola frase. El resto de información mantenla igual a manera de lista. Dame nuevamente todo el resultado de las historias de usuario, no te limites a darme solo las nuevas

### Prompt 8
Vamos a generar la priorización del Backlog con base en las 5 historias de usuario anteriores. Para esto, necesito que estimes para cada una:

1. El impacto en el usuario y valor del negocio
2. La urgencia basada en tendencias del mercado y feedback de usuarios
3. La complejidad y el esfuerzo estimado de implementación
4. Los riesgos y dependencias entre tareas

Dame los resultados a manera de tabla comparativa en formato Markdown: Al final de la tabla, dame una explicación detallada del por qué esas estimaciones

### Prompt 9
Considera la tabla donde se detallan las historias de usuario del backlog y sus prioridades en función de varios factores. Genera una tabla con todos los tickets de trabajo necesarios para completar el backlog, y añade tu sugerencia de estimación de puntos. La tabla debe tener tres columnas: "Ticket ID", "descripción del ticket" y "estimación de puntos". Dame la tabla en formato markdown para copiar y pegar. Al final, dame una descripción detallada del procedimiento para la estimación de puntos que sugeriste

### Prompt 10
Como siguiente paso, genérame el detalle de cada ticket de trabajo teniendo en cuenta la siguiente plantilla de ejemplo. Haz uso de toda la información sobre las historias de usuario y la estimación de puntos de cada ticket que acabaste de calcular:

**Título:** Implementación de Autenticación de Dos Factores (2FA)

**Descripción:** Añadir autenticación de dos factores para mejorar la seguridad del login de usuarios. Debe soportar aplicaciones de autenticación como Authenticator y mensajes SMS.

**Criterios de Aceptación:**

- Los usuarios pueden seleccionar 2FA desde su perfil.
- Soporte para Google Authenticator y SMS.
- Los usuarios deben confirmar el dispositivo 2FA durante la configuración.

**Prioridad:** Alta

**Estimación:** 8 puntos de historia

**Asignado a:** Equipo de Backend

**Etiquetas:** Seguridad, Backend, Sprint 10

**Comentarios:** Verificar la compatibilidad con la base de usuarios internacionales para el envío de SMS.

**Enlaces:** Documento de Especificación de Requerimientos de Seguridad

**Historial de Cambios:**

- 01/10/2023: Creado por [nombre]

### Prompt 11
Como paso final, debes estimar el esfuerzo para completar el backlog teniendo en cuenta que cada sprint tiene un tiempo de dos semanas de duración (10 días laborales). Por esfuerzo me refiero al número promedio de sprints necesarios para completar el backlog. Qué información necesitas para hacer esta estimación y/o cuales supuestos me recomiendas manejar?. Lista tus recomendaciones primero, no me des el detalle de la estimación hasta que no te confirme que estoy de acuerdo con tus supuestos y recomendaciones