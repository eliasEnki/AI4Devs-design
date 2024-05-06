# Prompts

He mantenido dos conversaciones, ambas con Chat GPT 3.5. En una de ellas he ido ampliando conocimientos sobre historias de usuarios, backlog, técnicas para priorizar, le he pedido que me genere una plantilla para describir con detalle las historias de usuario y le he pedido que me genere un script para poder generar los tickets de forma automática en Trello. En otra he ido generando las historias de usuario, el backlog y los tickets.

## Generación de plantilla para las historias de usuario y tickets de Trello

Conversacion completa: https://chat.openai.com/share/a375432d-c237-45a4-98f4-a18ca67dead9

**Generación plantilla para historias de usuario**

- **Prompt:** Quiero que actues como un product manager experimentado que trabaja  en una startup que desarrolla aplicaciones innovadoras. Una de tus funciones es la de definir historias de usuario, muestrame los campos que serían necesarios en la plantilla que usaremos para definir las historias de usuario.

```md
## Historia de Usuario

- **ID de la historia de usuario**: 
- **Título**: 
- **Como**:
- **Quiero**:
- **Para que**:
- **Criterios de aceptación**: 
  - 
  - 
  - 
- **Valor de negocio**: 
- **Prioridad**: 
- **Estimación de esfuerzo**: 
- **Dependencias**: 
- **Notas adicionales**: 
```

**Prompts para saber qué técnica de priorización usar:** 

- **Prompt:** qué tecnica crees que sería la más adecuada para una priorización inicial en base al valor? ten en cuenta que se trata de un proyecto de un sistema innovador para una startup, y que estamos usando metodologias agiles

- **Prompt:** qué tecnica de priorizacion crees que podria ser util para este contexto pero teniendo en cuenta tambien que seria interesante tener en cuenta la relacion de dependecia entre historias de usuario?

- **Prompt:** qué tecnica me recomendarias para priorizar teniendo en cuenta las dependencias entre historias de usuario, el valor de impacto y el esfuerzo

*Finalmente me decanté por usar la técnica de Priorización de Backlog Basada en Valor (Value-Based Backlog Prioritization) con un enfoque en la gestión de dependencias, porque creo que tiene en cuenta tanto el valor de impacto como el esfuerzo y las dependencias entre historias de usuario.*

**Prompt para generar plantilla tickets de Trello**

- **Prompt:** Teniendo en cuenta el contexto anterior y que queremos trabajar con Trello para gestionar los tickets de trabajo del equipo, qué plantilla me recomiendas para generar los tickets, qué informacion seria necesaria en cada ticket

```md
### Nombre de la Tarea:
(Descriptivo y conciso)

#### Descripción:
(Breve descripción de la tarea, incluyendo contexto y objetivos)

#### Detalles:
- **Historia de Usuario Asociada:** 
- **Valor de Impacto:** 
- **Esfuerzo Estimado:** 
- **Dependencias:** 
- **Notas Adicionales:** 

#### Checklist (si es aplicable):
- [ ] Paso 1
- [ ] Paso 2
- [ ] Paso 3
- [ ] ...

#### Asignado a:
(Especificar quién está a cargo de la tarea)

#### Etiquetas:
(Aplicar etiquetas relevantes, como prioridad, tipo de tarea, etc.)

#### Fecha de Entrega:
(Fecha límite para completar la tarea)

#### Comentarios:
(Espacio para comentarios, actualizaciones o preguntas relacionadas con la tarea)
```

**Generación de tickets de Trello**

- **Prompt:** Teniendo en cuenta el contexto anterior y que queremos trabajar con Trello para gestionar los tickets de trabajo del equipo, qué plantilla me recomiendas para generar los tickets, qué informacion seria necesaria en cada ticket

- **Prompt:** ayudame a organizar estos tickets en trello, cómo puedo organizarlos en un nuevo tablero? ten en cuenta que seguiremos un metodo agile

- **Prompt:** teniendo en cuenta todo el contexto anterior, quiero que tengas en cuenta que quiero crear todos los tickets de mi proyecto en trello. Hay alguna forma de poder automatizar este proceso si tengo detallada ya toda la informacion de los tickets?

- **Prompt:** quiero que me generes una plantilla para tickets.json partiendo de esta plantilla creada previamente en formato markdown

```json
[
  {
    "nombre_tarea": "Nombre de la Tarea 1",
    "descripcion": "Breve descripción de la tarea 1, incluyendo contexto y objetivos",
    "detalles": {
      "historia_usuario": "",
      "valor_impacto": "",
      "esfuerzo_estimado": "",
      "dependencias": "",
      "notas_adicionales": ""
    },
    "checklist": [
      {"paso": "Paso 1", "completado": false},
      {"paso": "Paso 2", "completado": false},
      {"paso": "Paso 3", "completado": false}
    ],
    "asignado_a": "Nombre de la persona asignada",
    "etiquetas": ["prioridad-alta", "desarrollo"],
    "fecha_entrega": "YYYY-MM-DD",
    "comentarios": ""
  },
  {
    "nombre_tarea": "Nombre de la Tarea 2",
    "descripcion": "Breve descripción de la tarea 2, incluyendo contexto y objetivos",
    "detalles": {
      "historia_usuario": "",
      "valor_impacto": "",
      "esfuerzo_estimado": "",
      "dependencias": "",
      "notas_adicionales": ""
    },
    "checklist": [
      {"paso": "Paso 1", "completado": false},
      {"paso": "Paso 2", "completado": false},
      {"paso": "Paso 3", "completado": false}
    ],
    "asignado_a": "Nombre de la persona asignada",
    "etiquetas": ["prioridad-media", "diseño"],
    "fecha_entrega": "YYYY-MM-DD",
    "comentarios": ""
  }
]
```

*Tras lanzarle varios prompts finalmente consigo un script en python para poder generar todos los tickets pasándole la información en formato JSON*


## Generación de historias de usuarios, backlog y creación de tickets

- Conversación completa: https://chat.openai.com/share/46966c90-644c-4fc3-b3f5-2d1453ba5d3b

**Listado de historias de usuario**

- **Prompt:** Quiero que actúes como un equipo de producto de una startup, compuesto por un Product Manager y un Business Analyst y el resto de personas del equipo ágil (desarrolladores, testers). La empresa quiere desarrollar un sistema ATS innovador y ya tienen definidos la descripción y algunos casos de uso. Vas a tener en cuenta esa documentación proporcionada para ayudarme con los siguientes pasos, te iré guiando en el proceso y lo iremos haciendo de forma iterativa, primero confirmame que has entendido bien el documento ya existente que te facilito.
 *(en esta parte le facilito parte del documento con la descripción del sistema ATS, Lean Canvas y los casos de uso)*

- **Prompt:** Quiero que me indiques algunos ejemplos de historias de usuarios que podriamos generar para empezar a implementar este sistema

**Backlog**

- **Prompt:** vamos a usar ahora la técnica de Priorización de Backlog Basada en Valor (Value-Based Backlog Prioritization). Muestrame una tabla aplicando esta tecnica de priorizacion para este listado de historias de usuario

**Detalle de historia de usuario**

- **Prompt:** Vamos a ir profundizando en cada una de ellas, quiero que detalles la primera historia de usuario siguiendo esta plantilla

```md
## Historia de Usuario

- **Título**: 
- **Como**:
- **Quiero**:
- **Para que**:
- **Criterios de aceptación**: 
  - 
  - 
  - 
- **Valor de negocio**: 
- **Prioridad**: 
- **Estimación de esfuerzo**: 
- **Dependencias**: 
- **Notas adicionales**: 
```

**Generación de tickets en formato JSON para crear en Trello**

- **Prompt:** quiero que utilices este formato para generar el JSON de los tickets. Generame el JSON para los tickets del equipo de front end. Para calcular la fecha de entrega quiero que tengas en cuenta que solo tenemos un desarrollador front que empezará el 2024-05-06, trabaja de lunes a viernes y solo podrá comenzar un ticket cuando haya terminado el anterior

*Usando este prompt le pido que me genere el JSON para todos los tickets que posteriomente usaremos en el script Python para crear los tickets automaticamente en Trello*