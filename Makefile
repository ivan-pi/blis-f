




FYPP_IN=templates
FYPP_OUT=src/interface

FYPP_OPTIONS=


FC=gfortran
CC=gcc

all: src/blis_kinds.o

src/blis_kinds.o src/blis_kinds.mod: src/blis_kinds.f90
	$(FC) -J$(@D) -c -o $(@D)/$(*F).o $< 



inc: src/interface/blis-typed-1v.inc \
	 src/interface/blis-typed-1d.inc \
	 src/interface/blis-typed-1m.inc \
	 src/interface/blis-typed-1f.inc \
	 src/interface/blis-typed-l2.inc \
	 src/interface/blis-typed-l3.inc 

$(FYPP_OUT)/blis-typed-1v.inc: $(FYPP_IN)/blis-typed-1v.inc.fypp $(FYPP_IN)/blis-macros.fypp
	fypp $(FYPP_OPTIONS) $< $@
$(FYPP_OUT)/blis-typed-1d.inc: $(FYPP_IN)/blis-typed-1d.inc.fypp $(FYPP_IN)/blis-macros.fypp
	fypp $(FYPP_OPTIONS) $< $@
$(FYPP_OUT)/blis-typed-1m.inc: $(FYPP_IN)/blis-typed-1m.inc.fypp $(FYPP_IN)/blis-macros.fypp
	fypp $(FYPP_OPTIONS) $< $@
$(FYPP_OUT)/blis-typed-1f.inc: $(FYPP_IN)/blis-typed-1f.inc.fypp $(FYPP_IN)/blis-macros.fypp
	fypp $(FYPP_OPTIONS) $< $@
$(FYPP_OUT)/blis-typed-l2.inc: $(FYPP_IN)/blis-typed-l2.inc.fypp $(FYPP_IN)/blis-macros.fypp
	fypp $(FYPP_OPTIONS) $< $@
$(FYPP_OUT)/blis-typed-l3.inc: $(FYPP_IN)/blis-typed-l3.inc.fypp $(FYPP_IN)/blis-macros.fypp
	fypp $(FYPP_OPTIONS) $< $@
		
.phony: clean

clean:
	rm -fv $(FYPP_OUT)/*.inc
	rm -f src/*.o
	rm -f src/*.mod