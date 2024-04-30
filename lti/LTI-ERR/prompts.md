![Link a la conversación con ChatGPT](https://chat.openai.com/share/8d57dddf-1ba8-4b57-9ca4-87a1386bc119)

## Contexto
1. Estoy creando una aplicación de tipo ATS (Applicant Tracking System). Se llamará LTI.
Cuál es tu conocimiento en este tipo de aplicaciones?

2. Cuáles son las funcionalidades que pueden marcar la diferencia respecto a aplicaciones ya existentes en el mercado?

## Diseño de funcionalidades de producto
3. Basandote en estas ideas, propón una breve descripción de la aplicación LTI, cuál sería su valor añadido y sus ventajas competitivas. Escribe todos estos elementos en formato markdown.
Asimismo, crea un diagrama Lean Canvas que ayude a entender cuál sería el modelo de negocio de esta aplicación

4. Actualiza los artefactos generados con la última respuesta, teniendo en cuenta lo siguiente:
* Elimina la parte "Gamificación del Proceso de Contratación" ya que no me gusta la idea.
* Añade a la aplicación la capacidad de crear ofertas de trabajo, empezando éstas un ciclo de vida dentro de la aplicación, en la que será posible:
    * exportarlas y/o publicarlas a distintas plataformas de reclutamiento
    * permitir que candidatos apliquen a las ofertas, que los técnicos de RRHH puedan revisar estos candidatos 
    * conectar la aplicación con plataformas de tests online, para que los candidatos puedan hacer tests online de desarrollo software, preguntas técnicas de todo tipo de área, tests psicotécnicos, etc. Las plataformas enviarán estos resultados a LTI y ésta los integrará en el perfil del candidato
    * los técnicos de RRHH podrán enviar mensajes a los candidatos, las invitaciónes se generarán desde LTI, incluyendo las invitaciones a videollamada, para las entrevistas realizadas de manera remota
    * generar una oferta de trabajo basada en diferentes modelos, así como el contrato de trabajo a firmar digitalmente. Esto necesitará una integración de LTI con Docusign o aplicaciones equivalente

5. Adicionalmente a lo anterior, creame un listado de las principales funcionalidades

6. Dame una descripción de cada uno de los 3 casos de uso principales, con el diagrama asociado a cada uno (en formato Mermaid)

## Diseño técnico de la aplicación
7. En base a todo lo que se ha hablado anteriormente y basado, en la respuesta en la que enumeran las 10 funcionalidades, escríbeme el modelo de datos para el que la aplicación LTI estaría basado. Principalmente, debe de contener las siguientes entidades: empresa, usuario de RRHH, oferta de trabajo, candidato, entrevista. Establece las relaciones entre relaciones y los distintos campos dentro de cada entidad

8. Escribe el modelo de datos en código formato UML para que lo pueda importar en https://www.planttext.com/

9. Gracias. Escribeme el diseño de la aplicación así como un diagrama de alto nivel en formato Mermaid, teniendo en cuenta que:
La aplicación se hará con una aplicación monolítica por razones de "time to market" pero pensando en una fácil refactorización a una arquitectura de microservicios. Por ello, utiliza una arquitectura hexagonal para su diseño e introduce patrones que den como resultado un código limpio.
El stack técnico de la aplicación será en ReactJS para el frontend así como SpringBoot et hibernate para el backend. La base de datos será relacional, PostegreSQL

10. El diagrama de alto nivel quiero presente las distintas areas de la aplicación así como las comunicaciones con aplicaciones externas 

11. Refactoriza la descripción anterior, así como el diagrama para que:
- las aplicaciones externas se llamen desde el backend
- añade como aplicación externa el servidor de email que será usado para la planificación de las entrevistas

12. Falta el     [Servicio de Firma Digital (p. ej. Docusign)] 
el sentido de la flecha es al revés (LTI llama a las interfaces externas)

13. Ahora, escríbeme un diagrama C4 acerca del componente backend de la aplicación

14. can you give me the same diagram but in Mermaid format?