DOC_DIR=inst/doc/
DOCS=stemming.pdf
DOC_FILES=$(DOCS:%=$(DOC_DIR)/%)

VERSION=$(shell perl -e 'while(<>) { if(m/Version: (.*)/) {print $$1,"\n";}}' DESCRIPTION)
PKGNAME=$(shell perl -e 'while(<>) { if(m/Package: (.*)/) {print $$1,"\n";}}' DESCRIPTION)

build: $(DOC_FILES)
	(cd ..  ; R CMD build $(PKGNAME) )


doc: $(DOC_FILES)

ship: build 
	scp ../$(PKGNAME)_$(VERSION).tar.gz $(DOC_FILES) www.omegahat.org:/home3/WebSites/Omega/$(PKGNAME)/

version:
	@echo "$(VERSION)"

check: 
	R CMD check .

install: 
	R CMD INSTALL .

$(DOC_DIR)/stemming.pdf: $(DOC_DIR)/stemming.tex

%.pdf: %.tex
	$(MAKE) -C $(@D) $(@F)

