SRC_DIR := ./src
INC_DIR := ./include
OBJ_DIR := ./obj
SGDF_DIR := ./engine
SGDF_OBJ_FILENAME := sgdf.o
SGDF_INC_DIR := ./engine/include
SRC_FILES := $(wildcard $(SRC_DIR)/*.cc)
SRC_FILES += ./main.cc
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cc,$(OBJ_DIR)/%.o,$(SRC_FILES))
OBJ_FILES += $(SGDF_DIR)/sgdf.o
LDFLAGS := -I$(INC_DIR) -I$(SGDF_INC_DIR) -l SDL2 -l SDL2_image -l SDL2_ttf -l SDL2_mixer
CPPFLAGS := -std=c++11 -I$(INC_DIR) -I$(SGDF_INC_DIR)
CXXFLAGS := -MMD

build: sgdf $(OBJ_DIR) game.out

game.out: $(OBJ_FILES)
	g++ -o $@ $^ $(LDFLAGS)

clean: 
	rm -fr $(OBJ_DIR)/*.o $(OBJ_DIR)/*/*.o

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cc $(INC_DIR)/%.hh
	g++ $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<

sgdf:
	make -C $(SGDF_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
