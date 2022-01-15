reverse = $(if $(wordlist 2,2,$(1)),$(call reverse,$(wordlist 2,$(words $(1)),$(1))) $(firstword $(1)),$(1))
col2 = $(if $(wordlist 1,2,$(1)),\\n     $(wordlist 1,2,$(1)) $(call col2,$(wordlist 3,$(words $(1)),$(1))),$(1))
col1 = $(if $(wordlist 1,1,$(1)),\\n     $(firstword $(1))$(call col1,$(wordlist 2,$(words $(1)),$(1))),$(1))

# Name of the binary to create
TARGET   := gnbt

# Compiling options and settings
CXX      := gcc
CXXSTD   := c++20
CXXFLAGS := -W -Wall -Wextra -pedantic -std=$(CXXSTD)
LDFLAGS  := -L@/usr/lib -lstdc++ -lm -lfmt -lGL -lglfw

# Directories and source files
BINDIR   := ./bin
BUILDDIR := ./build
INCLUDES := -Iinclude/ -Iinclude/imgui/
SRCFILES :=  $(call reverse,$(subst src/,, $(shell find $(root_folder) -name *.cpp)))
OBJECTS  := $(SRCFILES:%.cpp=$(BUILDDIR)/%.o)
DEPENDENCIES := $(OBJECTS:.o=.d)

# First rule will get called if only "make" is used
default: debug

all: clean build $(BINDIR)/$(TARGET)

$(BUILDDIR)/%.o: src/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -MMD -o $@

$(BINDIR)/$(TARGET): $(OBJECTS)
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -o $(BINDIR)/$(TARGET) $^ $(LDFLAGS)

-include $(DEPENDENCIES)

build:
	@mkdir -p $(BINDIR)
	@mkdir -p $(BUILDDIR)

debug: CXXFLAGS += -DDEBUG -g
debug: all

release: CXXFLAGS += -O3
release: all

clear: clean
clean:
	@echo "Cleaning built files"
	-@rm -vrf $(BUILDDIR)/*
	-@rm -vrf $(BINDIR)/*

info:
	@echo -e "[*] Output binary:   ${BINDIR}/${TARGET}"
	@echo -e "[*] Object dir:      ${BUILDDIR}        "
	@echo -e "[*] Sources:         ${call col1,$(SRCFILES)}        "
	@echo -e "[*] Objects:         ${call col1,$(OBJECTS)}         "
	@echo -e "[*] Dependencies:    ${call col1,$(DEPENDENCIES)}    "

.PHONY: all build clean clear debug release info
