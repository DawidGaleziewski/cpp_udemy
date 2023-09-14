##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=2_constructors_and_deconstructors
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/Users/dawidgaleziewski/Desktop/cpp_udemy/workspaces/10_objects_and_classes
ProjectPath            :=/Users/dawidgaleziewski/Desktop/cpp_udemy/workspaces/10_objects_and_classes/2_constructors_and_deconstructors
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/2_constructors_and_deconstructors
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Dawid Gałęziewski
Date                   :=15/09/2023
CodeLitePath           :=/Users/dawidgaleziewski/.codelite
MakeDirCommand         :=mkdir -p
LinkerName             :=g++
SharedObjectLinkerName :=g++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=/Users/dawidgaleziewski/Desktop/cpp_udemy/workspaces/10_objects_and_classes/build-$(WorkspaceConfiguration)/bin
OutputFile             :=../build-$(WorkspaceConfiguration)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -gdwarf-2 -O0 -Wall -std=c++17 $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Shallow.cpp$(ObjectSuffix) $(IntermediateDirectory)/DeepCopy.cpp$(ObjectSuffix) $(IntermediateDirectory)/Player.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@$(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/dawidgaleziewski/Desktop/cpp_udemy/workspaces/10_objects_and_classes/2_constructors_and_deconstructors/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Shallow.cpp$(ObjectSuffix): Shallow.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/dawidgaleziewski/Desktop/cpp_udemy/workspaces/10_objects_and_classes/2_constructors_and_deconstructors/Shallow.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Shallow.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Shallow.cpp$(PreprocessSuffix): Shallow.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Shallow.cpp$(PreprocessSuffix) Shallow.cpp

$(IntermediateDirectory)/DeepCopy.cpp$(ObjectSuffix): DeepCopy.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/dawidgaleziewski/Desktop/cpp_udemy/workspaces/10_objects_and_classes/2_constructors_and_deconstructors/DeepCopy.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DeepCopy.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DeepCopy.cpp$(PreprocessSuffix): DeepCopy.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DeepCopy.cpp$(PreprocessSuffix) DeepCopy.cpp

$(IntermediateDirectory)/Player.cpp$(ObjectSuffix): Player.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/dawidgaleziewski/Desktop/cpp_udemy/workspaces/10_objects_and_classes/2_constructors_and_deconstructors/Player.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Player.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Player.cpp$(PreprocessSuffix): Player.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Player.cpp$(PreprocessSuffix) Player.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


