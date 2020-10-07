SRC_DIR := ./src
INC_DIR := ./include
OBJ_DIR := ./obj
SRC_FILES := $(wildcard $(SRC_DIR)/*.cc)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cc,$(OBJ_DIR)/%.o,$(SRC_FILES))
LDFLAGS := -r
CPPFLAGS := -std=c++17 -I$(INC_DIR)
CXXFLAGS := -MMD

build: $(OBJ_DIR) sgdf.o

sgdf.o: $(OBJ_FILES)
	ld -o $@ $^ $(LDFLAGS)

clean: 
	rm -fr $(OBJ_DIR)/*.o $(OBJ_DIR)/*/*.o

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cc $(INC_DIR)/%.hh
	g++ $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
