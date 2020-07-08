CXX :=g++ -std=c++11 -std=c++14 -std=c++17 -pthread
CPT :=src/capacity.cpp
EMP :=src/emplace.cpp
LOP :=src/loop.cpp
RES :=src/reserve.cpp
STR :=src/string.cpp
TMP :=src/template.cpp
DAM :=src/damDesign.cpp
STS :=src/suffictreestr.cpp
INI :=src/initilization.cpp
STA :=src/staticassert.cpp
IHT :=src/inheretance.cpp
MV1 :=src/move1.cpp
OBJ :=build
all:
	rm -rf $(OBJ)
	mkdir build
	$(CXX) $(CPT) -o $(OBJ)/capacity
	$(CXX) $(EMP) -o $(OBJ)/emplace
	$(CXX) $(LOP) -o $(OBJ)/loop
	$(CXX) $(RES) -o $(OBJ)/reserve
	$(CXX) $(STR) -o $(OBJ)/string
	$(CXX) $(TMP) -o $(OBJ)/template
	$(CXX) $(DAM) -o $(OBJ)/damdesign
	$(CXX) $(STS) -o $(OBJ)/suffictreestr
	$(CXX) $(INI) -o $(OBJ)/initilization
	$(CXX) $(STA) -o $(OBJ)/staticassert
	$(CXX) $(IHT) -o $(OBJ)/inheretance
	$(CXX) $(MV1) -o $(OBJ)/move1

clean:
	rm -rf $(OBJ)

