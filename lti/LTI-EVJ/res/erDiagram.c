erDiagram
    CANDIDATO {
        int ID_Candidato "ID del Candidato"
        string Nombre "Nombre del Candidato"
        string Email "Correo Electrónico"
        string Telefono "Teléfono"
        string CV "Curriculum Vitae"
        string Estado "Estado en el proceso"
    }

    RECLUTADOR {
        int ID_Reclutador "ID del Reclutador"
        string Nombre "Nombre del Reclutador"
        string Email "Correo Electrónico"
    }

    VACANTE {
        int ID_Vacante "ID de la Vacante"
        string Titulo "Título del Puesto"
        string Descripcion "Descripción del Puesto"
        string Requisitos "Requisitos Necesarios"
    }

    APLICACION {
        int ID_Aplicacion "ID de la Aplicación"
        date Fecha_Aplicacion "Fecha de Aplicación"
        string Estado_Aplicacion "Estado de la Aplicación"
    }

    ENTREVISTA {
        int ID_Entrevista "ID de la Entrevista"
        datetime Fecha_Entrevista "Fecha y Hora de la Entrevista"
        string Notas "Notas/Comentarios"
    }

    REPORTE {
        int ID_Reporte "ID del Reporte"
        date Fecha_Reporte "Fecha del Reporte"
        string Contenido "Contenido del Reporte"
    }

    CANDIDATO ||--o{ APLICACION : "aplica"
    VACANTE ||--o{ APLICACION : "tiene"
    APLICACION ||--o{ ENTREVISTA : "resulta en"
    RECLUTADOR ||--o{ APLICACION : "gestiona"
    RECLUTADOR ||--o{ REPORTE : "genera"
    RECLUTADOR ||--o{ ENTREVISTA : "realiza"