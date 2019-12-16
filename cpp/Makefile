COMPILER = g++
CFLAGS   = -g -Wall -O2 -std=c++14
LDFLAGS  =
LIBS     = -L./lib -llua
INCLUDE  = -I./include
TARGET   = ./bin/chronica
OBJDIR   = ./src/obj
SOURCES  = $(wildcard src/*.cc)
OBJECTS  = $(subst ./src/obj/src, ./src/obj, $(addprefix $(OBJDIR)/, $(SOURCES:.cc=.o)))

$(TARGET): $(OBJECTS)
	$(COMPILER) -o $@ $^ $(LDFLAGS) $(LIBS)

$(OBJDIR)/%.o: src/%.cc
	@[ -d $(OBJDIR) ]
	$(COMPILER) $(CFLAGS) $(INCLUDE) -o $@ -c $<

all: clean $(TARGET)

exec:
	@bin/chronica

clean:
	rm -f $(OBJECTS) $(TARGET)
