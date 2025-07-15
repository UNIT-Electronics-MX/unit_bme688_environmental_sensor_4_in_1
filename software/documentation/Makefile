# Makefile para generación de hojas de datos
# Múltiples métodos disponibles: LaTeX, HTML, WeasyPrint

.PHONY: all fast latex weasy compare clean help install

# Variables
README = README.md
BUILD_DIR = build

# Comando por defecto - versión profesional para distribución
all: professional

# Método PROFESIONAL optimizado para DISTRIBUCIÓN (con imágenes de hardware/)
professional:
	@echo "🏆 Generando hoja de datos PROFESIONAL..."
	@mkdir -p $(BUILD_DIR)
	@python generate_professional_pdf.py
	@echo "✅ Listo! Calidad profesional con imágenes de hardware/resources/"

# Método optimizado para DISTRIBUCIÓN (Pinout + Dimensiones)
distribution:
	@echo "📋 Generando hoja de DISTRIBUCIÓN TÉCNICA..."
	@mkdir -p $(BUILD_DIR)
	@python generate_distribution_pdf.py
	@echo "✅ Listo! Optimizada para pinout y dimensiones"

# Método súper rápido (HTML + CSS, sin dependencias)
fast:
	@echo "🚀 Generando hoja de datos SÚPER RÁPIDA..."
	@mkdir -p $(BUILD_DIR)
	@python generate_pdf_super_fast.py
	@echo "✅ Listo! Abre build/datasheet_super_fast.html en tu navegador"

# Método con WeasyPrint (HTML -> PDF directo)
weasy:
	@echo "🔧 Generando con WeasyPrint..."
	@mkdir -p $(BUILD_DIR)
	@python generate_pdf_weasy.py

# Método original LaTeX (más lento pero muy profesional)
latex:
	@echo "📝 Generando con LaTeX..."
	@mkdir -p $(BUILD_DIR)
	@python generate_pdf.py

# Comparar rendimiento de todos los métodos
compare:
	@echo "⚖️ Comparando rendimiento de todos los métodos..."
	@python benchmark.py

# Instalar dependencias opcionales
install:
	@echo "📦 Instalando dependencias opcionales..."
	@pip install weasyprint reportlab
	@echo "✅ Dependencias instaladas"

# Instalar solo dependencias mínimas
install-minimal:
	@echo "📦 Instalando dependencias mínimas..."
	@pip install weasyprint
	@echo "✅ WeasyPrint instalado"

# Limpiar archivos generados
clean:
	@echo "🧹 Limpiando archivos generados..."
	@rm -rf $(BUILD_DIR)
	@echo "✅ Limpieza completada"

# Generar PDF directo profesional con wkhtmltopdf
pdf-professional:
	@echo "📄 Generando PDF profesional directo..."
	@mkdir -p $(BUILD_DIR)
	@python generate_professional_pdf.py
	@if command -v wkhtmltopdf >/dev/null 2>&1; then \
		echo "🔧 Convirtiendo HTML profesional a PDF..."; \
		wkhtmltopdf --page-size A4 --margin-top 20mm --margin-bottom 20mm \
		--margin-left 15mm --margin-right 15mm --enable-local-file-access \
		--print-media-type --disable-smart-shrinking \
		$(BUILD_DIR)/datasheet_professional.html $(BUILD_DIR)/datasheet_professional.pdf; \
		echo "✅ PDF profesional generado: $(BUILD_DIR)/datasheet_professional.pdf"; \
	else \
		echo "⚠️ wkhtmltopdf no instalado. Usa: make install-pdf-tools"; \
		echo "📄 HTML disponible: $(BUILD_DIR)/datasheet_professional.html"; \
	fi

# Generar y abrir automáticamente (método rápido)
fast-open: fast
	@echo "🌐 Abriendo en navegador..."
	@python -c "import webbrowser, os; webbrowser.open('file://' + os.path.abspath('build/datasheet_super_fast.html'))"

# Generar y abrir automáticamente (versión profesional)
professional-open: professional
	@echo "🌐 Abriendo hoja de datos profesional..."
	@python -c "import webbrowser, os; webbrowser.open('file://' + os.path.abspath('build/datasheet_professional.html'))"

# Generar y abrir automáticamente (distribución)
distribution-open: distribution
	@echo "🌐 Abriendo hoja de distribución..."
	@python -c "import webbrowser, os; webbrowser.open('file://' + os.path.abspath('build/datasheet_distribution.html'))"

# Instalar herramientas para PDF directo
install-pdf-tools:
	@echo "🔧 Instalando herramientas para PDF..."
	@if command -v apt >/dev/null 2>&1; then \
		sudo apt update && sudo apt install -y wkhtmltopdf; \
	elif command -v brew >/dev/null 2>&1; then \
		brew install wkhtmltopdf; \
	else \
		echo "⚠️ Instala manualmente wkhtmltopdf para tu sistema"; \
	fi
	@echo "✅ Herramientas instaladas"

# Método rápido con conversión automática a PDF (requiere navegador)
fast-pdf: fast
	@echo "🖨️ Para convertir a PDF:"
	@echo "   1. Se abrirá en tu navegador"
	@echo "   2. Presiona Ctrl+P (o Cmd+P en Mac)"
	@echo "   3. Selecciona 'Guardar como PDF'"
	@python -c "import webbrowser, os; webbrowser.open('file://' + os.path.abspath('build/datasheet_super_fast.html'))"

# Verificar que README.md existe
check:
	@if [ ! -f $(README) ]; then \
		echo "❌ Error: $(README) no encontrado"; \
		exit 1; \
	fi
	@echo "✅ $(README) encontrado"

# Mostrar información de ayuda
help:
	@echo "🛠️ GENERADOR DE HOJAS DE DATOS - AYUDA"
	@echo "======================================"
	@echo ""
	@echo "Comandos disponibles:"
	@echo "  make professional    - Genera hoja PROFESIONAL con imágenes (RECOMENDADO) �"
	@echo "  make professional-open - Genera y abre hoja profesional"
	@echo "  make pdf-professional  - Genera PDF profesional directo"
	@echo "  make distribution    - Genera hoja para distribución (pinout+dimensiones)"
	@echo "  make distribution-open - Genera y abre hoja de distribución"
	@echo "  make fast            - Genera HTML súper rápido (genérico)"
	@echo "  make fast-open       - Genera y abre en navegador"
	@echo "  make fast-pdf        - Genera e instrucciones para PDF"
	@echo "  make weasy           - Genera PDF con WeasyPrint"
	@echo "  make latex           - Genera PDF con LaTeX (método original)"
	@echo "  make compare         - Compara rendimiento de todos los métodos"
	@echo "  make install         - Instala todas las dependencias"
	@echo "  make install-pdf-tools - Instala wkhtmltopdf para PDF directo"
	@echo "  make clean           - Limpia archivos generados"
	@echo "  make check           - Verifica que README.md exists"
	@echo "  make help            - Muestra esta ayuda"
	@echo ""
	@echo "� RECOMENDADO PARA DISTRIBUCIÓN PROFESIONAL:"
	@echo "  make professional-open   (calidad comercial con imágenes)"
	@echo ""
	@echo "⚡ Velocidad estimada:"
	@echo "  - Professional:  < 0.1 segundos ⭐⭐⭐"
	@echo "  - Distribution:  < 0.1 segundos ⭐"
	@echo "  - HTML (fast):   < 0.1 segundos"
	@echo "  - WeasyPrint:    ~ 1-2 segundos"
	@echo "  - LaTeX:         ~ 5-15 segundos"

# Crear ejemplo de README si no existe
example:
	@if [ ! -f $(README) ]; then \
		echo "📝 Creando README.md de ejemplo..."; \
		cp README_example.md $(README); \
		echo "✅ $(README) creado. Edítalo y ejecuta 'make fast'"; \
	else \
		echo "⚠️ $(README) ya existe"; \
	fi

# Desarrollo: regenerar automáticamente cuando README cambie
watch:
	@echo "👁️ Monitoreando cambios en $(README)..."
	@echo "Presiona Ctrl+C para detener"
	@while inotifywait -e modify $(README) 2>/dev/null; do \
		echo "🔄 README modificado, regenerando..."; \
		make fast; \
		echo "✅ Regenerado a las $$(date '+%H:%M:%S')"; \
	done

# Analizar contenido y obtener recomendaciones
analyze:
	@echo "🔍 Analizando contenido y generando recomendaciones..."
	@python analyze_and_recommend.py
