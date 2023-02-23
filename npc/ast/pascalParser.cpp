
// Generated from /home/user/projects/naive-pascal-compiler/grammar/pascal.g4 by ANTLR 4.12.0


#include "pascalListener.hpp"
#include "pascalVisitor.hpp"

#include "pascalParser.hpp"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct PascalParserStaticData final {
  PascalParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PascalParserStaticData(const PascalParserStaticData&) = delete;
  PascalParserStaticData(PascalParserStaticData&&) = delete;
  PascalParserStaticData& operator=(const PascalParserStaticData&) = delete;
  PascalParserStaticData& operator=(PascalParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pascalParserOnceFlag;
PascalParserStaticData *pascalParserStaticData = nullptr;

void pascalParserInitialize() {
  assert(pascalParserStaticData == nullptr);
  auto staticData = std::make_unique<PascalParserStaticData>(
    std::vector<std::string>{
      "program", "programHeading", "identifier", "block", "usesUnitsPart", 
      "labelDeclarationPart", "label", "constantDefinitionPart", "constantDefinition", 
      "constantChr", "constant", "unsignedNumber", "unsignedInteger", "unsignedReal", 
      "sign", "bool_", "string", "typeDefinitionPart", "typeDefinition", 
      "functionType", "procedureType", "type_", "simpleType", "scalarType", 
      "subrangeType", "typeIdentifier", "structuredType", "unpackedStructuredType", 
      "stringtype", "arrayType", "typeList", "indexType", "componentType", 
      "recordType", "fieldList", "fixedPart", "recordSection", "variantPart", 
      "tag", "variant", "setType", "baseType", "fileType", "pointerType", 
      "variableDeclarationPart", "variableDeclaration", "procedureAndFunctionDeclarationPart", 
      "procedureOrFunctionDeclaration", "procedureDeclaration", "formalParameterList", 
      "formalParameterSection", "parameterGroup", "identifierList", "constList", 
      "functionDeclaration", "resultType", "statement", "unlabelledStatement", 
      "simpleStatement", "assignmentStatement", "variable", "expression", 
      "relationaloperator", "simpleExpression", "additiveoperator", "term", 
      "multiplicativeoperator", "signedFactor", "factor", "unsignedConstant", 
      "functionDesignator", "parameterList", "set_", "elementList", "element", 
      "procedureStatement", "actualParameter", "parameterwidth", "gotoStatement", 
      "emptyStatement_", "empty_", "structuredStatement", "compoundStatement", 
      "statements", "conditionalStatement", "ifStatement", "caseStatement", 
      "caseListElement", "repetetiveStatement", "whileStatement", "repeatStatement", 
      "forStatement", "forList", "initialValue", "finalValue", "withStatement", 
      "recordVariableList"
    },
    std::vector<std::string>{
      "", "'AND'", "'ARRAY'", "'BEGIN'", "'BOOLEAN'", "'CASE'", "'CHAR'", 
      "'CHR'", "'CONST'", "'DIV'", "'DO'", "'DOWNTO'", "'ELSE'", "'END'", 
      "'FILE'", "'FOR'", "'FUNCTION'", "'GOTO'", "'IF'", "'IN'", "'INTEGER'", 
      "'LABEL'", "'MOD'", "'NIL'", "'NOT'", "'OF'", "'OR'", "'PACKED'", 
      "'PROCEDURE'", "'PROGRAM'", "'REAL'", "'RECORD'", "'REPEAT'", "'SET'", 
      "'THEN'", "'TO'", "'TYPE'", "'UNTIL'", "'VAR'", "'WHILE'", "'WITH'", 
      "'+'", "'-'", "'*'", "'/'", "':='", "','", "';'", "':'", "'='", "'<>'", 
      "'<'", "'<='", "'>='", "'>'", "'('", "')'", "'['", "'(.'", "']'", 
      "'.)'", "'^'", "'@'", "'.'", "'..'", "'{'", "'}'", "'UNIT'", "'INTERFACE'", 
      "'USES'", "'STRING'", "'IMPLEMENTATION'", "'TRUE'", "'FALSE'"
    },
    std::vector<std::string>{
      "", "AND", "ARRAY", "BEGIN", "BOOLEAN", "CASE", "CHAR", "CHR", "CONST", 
      "DIV", "DO", "DOWNTO", "ELSE", "END", "FILE", "FOR", "FUNCTION", "GOTO", 
      "IF", "IN", "INTEGER", "LABEL", "MOD", "NIL", "NOT", "OF", "OR", "PACKED", 
      "PROCEDURE", "PROGRAM", "REAL", "RECORD", "REPEAT", "SET", "THEN", 
      "TO", "TYPE", "UNTIL", "VAR", "WHILE", "WITH", "PLUS", "MINUS", "STAR", 
      "SLASH", "ASSIGN", "COMMA", "SEMI", "COLON", "EQUAL", "NOT_EQUAL", 
      "LT", "LE", "GE", "GT", "LPAREN", "RPAREN", "LBRACK", "LBRACK2", "RBRACK", 
      "RBRACK2", "POINTER", "AT", "DOT", "DOTDOT", "LCURLY", "RCURLY", "UNIT", 
      "INTERFACE", "USES", "STRING", "IMPLEMENTATION", "TRUE", "FALSE", 
      "WS", "COMMENT_1", "COMMENT_2", "IDENT", "STRING_LITERAL", "NUM_INT", 
      "NUM_REAL"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,80,800,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,7,
  	49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,7,
  	56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,63,7,
  	63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,70,7,
  	70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,77,7,
  	77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,84,7,
  	84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,91,7,
  	91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,1,0,1,0,3,0,197,
  	8,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,3,1,209,8,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,3,1,217,8,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,228,8,3,
  	10,3,12,3,231,9,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,243,8,5,
  	10,5,12,5,246,9,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,4,7,256,8,7,11,7,12,
  	7,257,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,3,10,279,8,10,1,11,1,11,3,11,283,8,11,1,12,1,12,
  	1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,17,1,17,4,17,299,
  	8,17,11,17,12,17,300,1,18,1,18,1,18,1,18,1,18,3,18,308,8,18,1,19,1,19,
  	3,19,312,8,19,1,19,1,19,1,19,1,20,1,20,3,20,319,8,20,1,21,1,21,1,21,3,
  	21,324,8,21,1,22,1,22,1,22,1,22,3,22,330,8,22,1,23,1,23,1,23,1,23,1,24,
  	1,24,1,24,1,24,1,25,1,25,3,25,342,8,25,1,26,1,26,1,26,3,26,347,8,26,1,
  	27,1,27,1,27,1,27,3,27,353,8,27,1,28,1,28,1,28,1,28,3,28,359,8,28,1,28,
  	1,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,29,3,29,377,8,29,1,30,1,30,1,30,5,30,382,8,30,10,30,12,30,385,9,30,
  	1,31,1,31,1,32,1,32,1,33,1,33,3,33,393,8,33,1,33,1,33,1,34,1,34,1,34,
  	3,34,400,8,34,1,34,3,34,403,8,34,1,35,1,35,1,35,5,35,408,8,35,10,35,12,
  	35,411,9,35,1,36,1,36,1,36,1,36,1,37,1,37,1,37,1,37,1,37,1,37,5,37,423,
  	8,37,10,37,12,37,426,9,37,1,38,1,38,1,38,1,38,1,38,3,38,433,8,38,1,39,
  	1,39,1,39,1,39,1,39,1,39,1,40,1,40,1,40,1,40,1,41,1,41,1,42,1,42,1,42,
  	1,42,3,42,451,8,42,1,43,1,43,1,43,1,44,1,44,1,44,1,44,5,44,460,8,44,10,
  	44,12,44,463,9,44,1,44,1,44,1,45,1,45,1,45,1,45,1,46,1,46,1,46,1,47,1,
  	47,3,47,476,8,47,1,48,1,48,1,48,3,48,481,8,48,1,48,1,48,1,48,1,49,1,49,
  	1,49,1,49,5,49,490,8,49,10,49,12,49,493,9,49,1,49,1,49,1,50,1,50,1,50,
  	1,50,1,50,1,50,1,50,3,50,504,8,50,1,51,1,51,1,51,1,51,1,52,1,52,1,52,
  	5,52,513,8,52,10,52,12,52,516,9,52,1,53,1,53,1,53,5,53,521,8,53,10,53,
  	12,53,524,9,53,1,54,1,54,1,54,3,54,529,8,54,1,54,1,54,1,54,1,54,1,54,
  	1,55,1,55,1,56,1,56,1,56,1,56,1,56,3,56,543,8,56,1,57,1,57,3,57,547,8,
  	57,1,58,1,58,1,58,1,58,3,58,553,8,58,1,59,1,59,1,59,1,59,1,60,1,60,1,
  	60,3,60,562,8,60,1,60,1,60,1,60,1,60,5,60,568,8,60,10,60,12,60,571,9,
  	60,1,60,1,60,1,60,1,60,1,60,1,60,5,60,579,8,60,10,60,12,60,582,9,60,1,
  	60,1,60,1,60,1,60,1,60,5,60,589,8,60,10,60,12,60,592,9,60,1,61,1,61,1,
  	61,1,61,3,61,598,8,61,1,62,1,62,1,63,1,63,1,63,1,63,3,63,606,8,63,1,64,
  	1,64,1,65,1,65,1,65,1,65,3,65,614,8,65,1,66,1,66,1,67,3,67,619,8,67,1,
  	67,1,67,1,68,1,68,1,68,1,68,1,68,1,68,1,68,1,68,1,68,1,68,1,68,3,68,634,
  	8,68,1,69,1,69,1,69,1,69,3,69,640,8,69,1,70,1,70,1,70,1,70,1,70,1,71,
  	1,71,1,71,5,71,650,8,71,10,71,12,71,653,9,71,1,72,1,72,1,72,1,72,1,72,
  	1,72,1,72,1,72,3,72,663,8,72,1,73,1,73,1,73,5,73,668,8,73,10,73,12,73,
  	671,9,73,1,73,3,73,674,8,73,1,74,1,74,1,74,3,74,679,8,74,1,75,1,75,1,
  	75,1,75,1,75,3,75,686,8,75,1,76,1,76,5,76,690,8,76,10,76,12,76,693,9,
  	76,1,77,1,77,1,77,1,78,1,78,1,78,1,79,1,79,1,80,1,80,1,81,1,81,1,81,1,
  	81,3,81,709,8,81,1,82,1,82,1,82,1,82,1,83,1,83,1,83,5,83,718,8,83,10,
  	83,12,83,721,9,83,1,84,1,84,3,84,725,8,84,1,85,1,85,1,85,1,85,1,85,1,
  	85,3,85,733,8,85,1,86,1,86,1,86,1,86,1,86,1,86,5,86,741,8,86,10,86,12,
  	86,744,9,86,1,86,1,86,1,86,3,86,749,8,86,1,86,1,86,1,87,1,87,1,87,1,87,
  	1,88,1,88,1,88,3,88,760,8,88,1,89,1,89,1,89,1,89,1,89,1,90,1,90,1,90,
  	1,90,1,90,1,91,1,91,1,91,1,91,1,91,1,91,1,91,1,92,1,92,1,92,1,92,1,93,
  	1,93,1,94,1,94,1,95,1,95,1,95,1,95,1,95,1,96,1,96,1,96,5,96,795,8,96,
  	10,96,12,96,798,9,96,1,96,0,0,97,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,
  	74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,110,112,114,
  	116,118,120,122,124,126,128,130,132,134,136,138,140,142,144,146,148,150,
  	152,154,156,158,160,162,164,166,168,170,172,174,176,178,180,182,184,186,
  	188,190,192,0,7,1,0,41,42,1,0,72,73,5,0,4,4,6,6,20,20,30,30,70,70,2,0,
  	19,19,49,54,2,0,26,26,41,42,4,0,1,1,9,9,22,22,43,44,2,0,11,11,35,35,798,
  	0,194,1,0,0,0,2,216,1,0,0,0,4,218,1,0,0,0,6,229,1,0,0,0,8,234,1,0,0,0,
  	10,238,1,0,0,0,12,249,1,0,0,0,14,251,1,0,0,0,16,259,1,0,0,0,18,263,1,
  	0,0,0,20,278,1,0,0,0,22,282,1,0,0,0,24,284,1,0,0,0,26,286,1,0,0,0,28,
  	288,1,0,0,0,30,290,1,0,0,0,32,292,1,0,0,0,34,294,1,0,0,0,36,302,1,0,0,
  	0,38,309,1,0,0,0,40,316,1,0,0,0,42,323,1,0,0,0,44,329,1,0,0,0,46,331,
  	1,0,0,0,48,335,1,0,0,0,50,341,1,0,0,0,52,346,1,0,0,0,54,352,1,0,0,0,56,
  	354,1,0,0,0,58,376,1,0,0,0,60,378,1,0,0,0,62,386,1,0,0,0,64,388,1,0,0,
  	0,66,390,1,0,0,0,68,402,1,0,0,0,70,404,1,0,0,0,72,412,1,0,0,0,74,416,
  	1,0,0,0,76,432,1,0,0,0,78,434,1,0,0,0,80,440,1,0,0,0,82,444,1,0,0,0,84,
  	450,1,0,0,0,86,452,1,0,0,0,88,455,1,0,0,0,90,466,1,0,0,0,92,470,1,0,0,
  	0,94,475,1,0,0,0,96,477,1,0,0,0,98,485,1,0,0,0,100,503,1,0,0,0,102,505,
  	1,0,0,0,104,509,1,0,0,0,106,517,1,0,0,0,108,525,1,0,0,0,110,535,1,0,0,
  	0,112,542,1,0,0,0,114,546,1,0,0,0,116,552,1,0,0,0,118,554,1,0,0,0,120,
  	561,1,0,0,0,122,593,1,0,0,0,124,599,1,0,0,0,126,601,1,0,0,0,128,607,1,
  	0,0,0,130,609,1,0,0,0,132,615,1,0,0,0,134,618,1,0,0,0,136,633,1,0,0,0,
  	138,639,1,0,0,0,140,641,1,0,0,0,142,646,1,0,0,0,144,662,1,0,0,0,146,673,
  	1,0,0,0,148,675,1,0,0,0,150,680,1,0,0,0,152,687,1,0,0,0,154,694,1,0,0,
  	0,156,697,1,0,0,0,158,700,1,0,0,0,160,702,1,0,0,0,162,708,1,0,0,0,164,
  	710,1,0,0,0,166,714,1,0,0,0,168,724,1,0,0,0,170,726,1,0,0,0,172,734,1,
  	0,0,0,174,752,1,0,0,0,176,759,1,0,0,0,178,761,1,0,0,0,180,766,1,0,0,0,
  	182,771,1,0,0,0,184,778,1,0,0,0,186,782,1,0,0,0,188,784,1,0,0,0,190,786,
  	1,0,0,0,192,791,1,0,0,0,194,196,3,2,1,0,195,197,5,68,0,0,196,195,1,0,
  	0,0,196,197,1,0,0,0,197,198,1,0,0,0,198,199,3,6,3,0,199,200,5,63,0,0,
  	200,201,5,0,0,1,201,1,1,0,0,0,202,203,5,29,0,0,203,208,3,4,2,0,204,205,
  	5,55,0,0,205,206,3,104,52,0,206,207,5,56,0,0,207,209,1,0,0,0,208,204,
  	1,0,0,0,208,209,1,0,0,0,209,210,1,0,0,0,210,211,5,47,0,0,211,217,1,0,
  	0,0,212,213,5,67,0,0,213,214,3,4,2,0,214,215,5,47,0,0,215,217,1,0,0,0,
  	216,202,1,0,0,0,216,212,1,0,0,0,217,3,1,0,0,0,218,219,5,77,0,0,219,5,
  	1,0,0,0,220,228,3,10,5,0,221,228,3,14,7,0,222,228,3,34,17,0,223,228,3,
  	88,44,0,224,228,3,92,46,0,225,228,3,8,4,0,226,228,5,71,0,0,227,220,1,
  	0,0,0,227,221,1,0,0,0,227,222,1,0,0,0,227,223,1,0,0,0,227,224,1,0,0,0,
  	227,225,1,0,0,0,227,226,1,0,0,0,228,231,1,0,0,0,229,227,1,0,0,0,229,230,
  	1,0,0,0,230,232,1,0,0,0,231,229,1,0,0,0,232,233,3,164,82,0,233,7,1,0,
  	0,0,234,235,5,69,0,0,235,236,3,104,52,0,236,237,5,47,0,0,237,9,1,0,0,
  	0,238,239,5,21,0,0,239,244,3,12,6,0,240,241,5,46,0,0,241,243,3,12,6,0,
  	242,240,1,0,0,0,243,246,1,0,0,0,244,242,1,0,0,0,244,245,1,0,0,0,245,247,
  	1,0,0,0,246,244,1,0,0,0,247,248,5,47,0,0,248,11,1,0,0,0,249,250,3,24,
  	12,0,250,13,1,0,0,0,251,255,5,8,0,0,252,253,3,16,8,0,253,254,5,47,0,0,
  	254,256,1,0,0,0,255,252,1,0,0,0,256,257,1,0,0,0,257,255,1,0,0,0,257,258,
  	1,0,0,0,258,15,1,0,0,0,259,260,3,4,2,0,260,261,5,49,0,0,261,262,3,20,
  	10,0,262,17,1,0,0,0,263,264,5,7,0,0,264,265,5,55,0,0,265,266,3,24,12,
  	0,266,267,5,56,0,0,267,19,1,0,0,0,268,279,3,22,11,0,269,270,3,28,14,0,
  	270,271,3,22,11,0,271,279,1,0,0,0,272,279,3,4,2,0,273,274,3,28,14,0,274,
  	275,3,4,2,0,275,279,1,0,0,0,276,279,3,32,16,0,277,279,3,18,9,0,278,268,
  	1,0,0,0,278,269,1,0,0,0,278,272,1,0,0,0,278,273,1,0,0,0,278,276,1,0,0,
  	0,278,277,1,0,0,0,279,21,1,0,0,0,280,283,3,24,12,0,281,283,3,26,13,0,
  	282,280,1,0,0,0,282,281,1,0,0,0,283,23,1,0,0,0,284,285,5,79,0,0,285,25,
  	1,0,0,0,286,287,5,80,0,0,287,27,1,0,0,0,288,289,7,0,0,0,289,29,1,0,0,
  	0,290,291,7,1,0,0,291,31,1,0,0,0,292,293,5,78,0,0,293,33,1,0,0,0,294,
  	298,5,36,0,0,295,296,3,36,18,0,296,297,5,47,0,0,297,299,1,0,0,0,298,295,
  	1,0,0,0,299,300,1,0,0,0,300,298,1,0,0,0,300,301,1,0,0,0,301,35,1,0,0,
  	0,302,303,3,4,2,0,303,307,5,49,0,0,304,308,3,42,21,0,305,308,3,38,19,
  	0,306,308,3,40,20,0,307,304,1,0,0,0,307,305,1,0,0,0,307,306,1,0,0,0,308,
  	37,1,0,0,0,309,311,5,16,0,0,310,312,3,98,49,0,311,310,1,0,0,0,311,312,
  	1,0,0,0,312,313,1,0,0,0,313,314,5,48,0,0,314,315,3,110,55,0,315,39,1,
  	0,0,0,316,318,5,28,0,0,317,319,3,98,49,0,318,317,1,0,0,0,318,319,1,0,
  	0,0,319,41,1,0,0,0,320,324,3,44,22,0,321,324,3,52,26,0,322,324,3,86,43,
  	0,323,320,1,0,0,0,323,321,1,0,0,0,323,322,1,0,0,0,324,43,1,0,0,0,325,
  	330,3,46,23,0,326,330,3,48,24,0,327,330,3,50,25,0,328,330,3,56,28,0,329,
  	325,1,0,0,0,329,326,1,0,0,0,329,327,1,0,0,0,329,328,1,0,0,0,330,45,1,
  	0,0,0,331,332,5,55,0,0,332,333,3,104,52,0,333,334,5,56,0,0,334,47,1,0,
  	0,0,335,336,3,20,10,0,336,337,5,64,0,0,337,338,3,20,10,0,338,49,1,0,0,
  	0,339,342,3,4,2,0,340,342,7,2,0,0,341,339,1,0,0,0,341,340,1,0,0,0,342,
  	51,1,0,0,0,343,344,5,27,0,0,344,347,3,54,27,0,345,347,3,54,27,0,346,343,
  	1,0,0,0,346,345,1,0,0,0,347,53,1,0,0,0,348,353,3,58,29,0,349,353,3,66,
  	33,0,350,353,3,80,40,0,351,353,3,84,42,0,352,348,1,0,0,0,352,349,1,0,
  	0,0,352,350,1,0,0,0,352,351,1,0,0,0,353,55,1,0,0,0,354,355,5,70,0,0,355,
  	358,5,57,0,0,356,359,3,4,2,0,357,359,3,22,11,0,358,356,1,0,0,0,358,357,
  	1,0,0,0,359,360,1,0,0,0,360,361,5,59,0,0,361,57,1,0,0,0,362,363,5,2,0,
  	0,363,364,5,57,0,0,364,365,3,60,30,0,365,366,5,59,0,0,366,367,5,25,0,
  	0,367,368,3,64,32,0,368,377,1,0,0,0,369,370,5,2,0,0,370,371,5,58,0,0,
  	371,372,3,60,30,0,372,373,5,60,0,0,373,374,5,25,0,0,374,375,3,64,32,0,
  	375,377,1,0,0,0,376,362,1,0,0,0,376,369,1,0,0,0,377,59,1,0,0,0,378,383,
  	3,62,31,0,379,380,5,46,0,0,380,382,3,62,31,0,381,379,1,0,0,0,382,385,
  	1,0,0,0,383,381,1,0,0,0,383,384,1,0,0,0,384,61,1,0,0,0,385,383,1,0,0,
  	0,386,387,3,44,22,0,387,63,1,0,0,0,388,389,3,42,21,0,389,65,1,0,0,0,390,
  	392,5,31,0,0,391,393,3,68,34,0,392,391,1,0,0,0,392,393,1,0,0,0,393,394,
  	1,0,0,0,394,395,5,13,0,0,395,67,1,0,0,0,396,399,3,70,35,0,397,398,5,47,
  	0,0,398,400,3,74,37,0,399,397,1,0,0,0,399,400,1,0,0,0,400,403,1,0,0,0,
  	401,403,3,74,37,0,402,396,1,0,0,0,402,401,1,0,0,0,403,69,1,0,0,0,404,
  	409,3,72,36,0,405,406,5,47,0,0,406,408,3,72,36,0,407,405,1,0,0,0,408,
  	411,1,0,0,0,409,407,1,0,0,0,409,410,1,0,0,0,410,71,1,0,0,0,411,409,1,
  	0,0,0,412,413,3,104,52,0,413,414,5,48,0,0,414,415,3,42,21,0,415,73,1,
  	0,0,0,416,417,5,5,0,0,417,418,3,76,38,0,418,419,5,25,0,0,419,424,3,78,
  	39,0,420,421,5,47,0,0,421,423,3,78,39,0,422,420,1,0,0,0,423,426,1,0,0,
  	0,424,422,1,0,0,0,424,425,1,0,0,0,425,75,1,0,0,0,426,424,1,0,0,0,427,
  	428,3,4,2,0,428,429,5,48,0,0,429,430,3,50,25,0,430,433,1,0,0,0,431,433,
  	3,50,25,0,432,427,1,0,0,0,432,431,1,0,0,0,433,77,1,0,0,0,434,435,3,106,
  	53,0,435,436,5,48,0,0,436,437,5,55,0,0,437,438,3,68,34,0,438,439,5,56,
  	0,0,439,79,1,0,0,0,440,441,5,33,0,0,441,442,5,25,0,0,442,443,3,82,41,
  	0,443,81,1,0,0,0,444,445,3,44,22,0,445,83,1,0,0,0,446,447,5,14,0,0,447,
  	448,5,25,0,0,448,451,3,42,21,0,449,451,5,14,0,0,450,446,1,0,0,0,450,449,
  	1,0,0,0,451,85,1,0,0,0,452,453,5,61,0,0,453,454,3,50,25,0,454,87,1,0,
  	0,0,455,456,5,38,0,0,456,461,3,90,45,0,457,458,5,47,0,0,458,460,3,90,
  	45,0,459,457,1,0,0,0,460,463,1,0,0,0,461,459,1,0,0,0,461,462,1,0,0,0,
  	462,464,1,0,0,0,463,461,1,0,0,0,464,465,5,47,0,0,465,89,1,0,0,0,466,467,
  	3,104,52,0,467,468,5,48,0,0,468,469,3,42,21,0,469,91,1,0,0,0,470,471,
  	3,94,47,0,471,472,5,47,0,0,472,93,1,0,0,0,473,476,3,96,48,0,474,476,3,
  	108,54,0,475,473,1,0,0,0,475,474,1,0,0,0,476,95,1,0,0,0,477,478,5,28,
  	0,0,478,480,3,4,2,0,479,481,3,98,49,0,480,479,1,0,0,0,480,481,1,0,0,0,
  	481,482,1,0,0,0,482,483,5,47,0,0,483,484,3,6,3,0,484,97,1,0,0,0,485,486,
  	5,55,0,0,486,491,3,100,50,0,487,488,5,47,0,0,488,490,3,100,50,0,489,487,
  	1,0,0,0,490,493,1,0,0,0,491,489,1,0,0,0,491,492,1,0,0,0,492,494,1,0,0,
  	0,493,491,1,0,0,0,494,495,5,56,0,0,495,99,1,0,0,0,496,504,3,102,51,0,
  	497,498,5,38,0,0,498,504,3,102,51,0,499,500,5,16,0,0,500,504,3,102,51,
  	0,501,502,5,28,0,0,502,504,3,102,51,0,503,496,1,0,0,0,503,497,1,0,0,0,
  	503,499,1,0,0,0,503,501,1,0,0,0,504,101,1,0,0,0,505,506,3,104,52,0,506,
  	507,5,48,0,0,507,508,3,50,25,0,508,103,1,0,0,0,509,514,3,4,2,0,510,511,
  	5,46,0,0,511,513,3,4,2,0,512,510,1,0,0,0,513,516,1,0,0,0,514,512,1,0,
  	0,0,514,515,1,0,0,0,515,105,1,0,0,0,516,514,1,0,0,0,517,522,3,20,10,0,
  	518,519,5,46,0,0,519,521,3,20,10,0,520,518,1,0,0,0,521,524,1,0,0,0,522,
  	520,1,0,0,0,522,523,1,0,0,0,523,107,1,0,0,0,524,522,1,0,0,0,525,526,5,
  	16,0,0,526,528,3,4,2,0,527,529,3,98,49,0,528,527,1,0,0,0,528,529,1,0,
  	0,0,529,530,1,0,0,0,530,531,5,48,0,0,531,532,3,110,55,0,532,533,5,47,
  	0,0,533,534,3,6,3,0,534,109,1,0,0,0,535,536,3,50,25,0,536,111,1,0,0,0,
  	537,538,3,12,6,0,538,539,5,48,0,0,539,540,3,114,57,0,540,543,1,0,0,0,
  	541,543,3,114,57,0,542,537,1,0,0,0,542,541,1,0,0,0,543,113,1,0,0,0,544,
  	547,3,116,58,0,545,547,3,162,81,0,546,544,1,0,0,0,546,545,1,0,0,0,547,
  	115,1,0,0,0,548,553,3,118,59,0,549,553,3,150,75,0,550,553,3,156,78,0,
  	551,553,3,158,79,0,552,548,1,0,0,0,552,549,1,0,0,0,552,550,1,0,0,0,552,
  	551,1,0,0,0,553,117,1,0,0,0,554,555,3,120,60,0,555,556,5,45,0,0,556,557,
  	3,122,61,0,557,119,1,0,0,0,558,559,5,62,0,0,559,562,3,4,2,0,560,562,3,
  	4,2,0,561,558,1,0,0,0,561,560,1,0,0,0,562,590,1,0,0,0,563,564,5,57,0,
  	0,564,569,3,122,61,0,565,566,5,46,0,0,566,568,3,122,61,0,567,565,1,0,
  	0,0,568,571,1,0,0,0,569,567,1,0,0,0,569,570,1,0,0,0,570,572,1,0,0,0,571,
  	569,1,0,0,0,572,573,5,59,0,0,573,589,1,0,0,0,574,575,5,58,0,0,575,580,
  	3,122,61,0,576,577,5,46,0,0,577,579,3,122,61,0,578,576,1,0,0,0,579,582,
  	1,0,0,0,580,578,1,0,0,0,580,581,1,0,0,0,581,583,1,0,0,0,582,580,1,0,0,
  	0,583,584,5,60,0,0,584,589,1,0,0,0,585,586,5,63,0,0,586,589,3,4,2,0,587,
  	589,5,61,0,0,588,563,1,0,0,0,588,574,1,0,0,0,588,585,1,0,0,0,588,587,
  	1,0,0,0,589,592,1,0,0,0,590,588,1,0,0,0,590,591,1,0,0,0,591,121,1,0,0,
  	0,592,590,1,0,0,0,593,597,3,126,63,0,594,595,3,124,62,0,595,596,3,122,
  	61,0,596,598,1,0,0,0,597,594,1,0,0,0,597,598,1,0,0,0,598,123,1,0,0,0,
  	599,600,7,3,0,0,600,125,1,0,0,0,601,605,3,130,65,0,602,603,3,128,64,0,
  	603,604,3,126,63,0,604,606,1,0,0,0,605,602,1,0,0,0,605,606,1,0,0,0,606,
  	127,1,0,0,0,607,608,7,4,0,0,608,129,1,0,0,0,609,613,3,134,67,0,610,611,
  	3,132,66,0,611,612,3,130,65,0,612,614,1,0,0,0,613,610,1,0,0,0,613,614,
  	1,0,0,0,614,131,1,0,0,0,615,616,7,5,0,0,616,133,1,0,0,0,617,619,7,0,0,
  	0,618,617,1,0,0,0,618,619,1,0,0,0,619,620,1,0,0,0,620,621,3,136,68,0,
  	621,135,1,0,0,0,622,634,3,120,60,0,623,624,5,55,0,0,624,625,3,122,61,
  	0,625,626,5,56,0,0,626,634,1,0,0,0,627,634,3,140,70,0,628,634,3,138,69,
  	0,629,634,3,144,72,0,630,631,5,24,0,0,631,634,3,136,68,0,632,634,3,30,
  	15,0,633,622,1,0,0,0,633,623,1,0,0,0,633,627,1,0,0,0,633,628,1,0,0,0,
  	633,629,1,0,0,0,633,630,1,0,0,0,633,632,1,0,0,0,634,137,1,0,0,0,635,640,
  	3,22,11,0,636,640,3,18,9,0,637,640,3,32,16,0,638,640,5,23,0,0,639,635,
  	1,0,0,0,639,636,1,0,0,0,639,637,1,0,0,0,639,638,1,0,0,0,640,139,1,0,0,
  	0,641,642,3,4,2,0,642,643,5,55,0,0,643,644,3,142,71,0,644,645,5,56,0,
  	0,645,141,1,0,0,0,646,651,3,152,76,0,647,648,5,46,0,0,648,650,3,152,76,
  	0,649,647,1,0,0,0,650,653,1,0,0,0,651,649,1,0,0,0,651,652,1,0,0,0,652,
  	143,1,0,0,0,653,651,1,0,0,0,654,655,5,57,0,0,655,656,3,146,73,0,656,657,
  	5,59,0,0,657,663,1,0,0,0,658,659,5,58,0,0,659,660,3,146,73,0,660,661,
  	5,60,0,0,661,663,1,0,0,0,662,654,1,0,0,0,662,658,1,0,0,0,663,145,1,0,
  	0,0,664,669,3,148,74,0,665,666,5,46,0,0,666,668,3,148,74,0,667,665,1,
  	0,0,0,668,671,1,0,0,0,669,667,1,0,0,0,669,670,1,0,0,0,670,674,1,0,0,0,
  	671,669,1,0,0,0,672,674,1,0,0,0,673,664,1,0,0,0,673,672,1,0,0,0,674,147,
  	1,0,0,0,675,678,3,122,61,0,676,677,5,64,0,0,677,679,3,122,61,0,678,676,
  	1,0,0,0,678,679,1,0,0,0,679,149,1,0,0,0,680,685,3,4,2,0,681,682,5,55,
  	0,0,682,683,3,142,71,0,683,684,5,56,0,0,684,686,1,0,0,0,685,681,1,0,0,
  	0,685,686,1,0,0,0,686,151,1,0,0,0,687,691,3,122,61,0,688,690,3,154,77,
  	0,689,688,1,0,0,0,690,693,1,0,0,0,691,689,1,0,0,0,691,692,1,0,0,0,692,
  	153,1,0,0,0,693,691,1,0,0,0,694,695,5,48,0,0,695,696,3,122,61,0,696,155,
  	1,0,0,0,697,698,5,17,0,0,698,699,3,12,6,0,699,157,1,0,0,0,700,701,1,0,
  	0,0,701,159,1,0,0,0,702,703,1,0,0,0,703,161,1,0,0,0,704,709,3,164,82,
  	0,705,709,3,168,84,0,706,709,3,176,88,0,707,709,3,190,95,0,708,704,1,
  	0,0,0,708,705,1,0,0,0,708,706,1,0,0,0,708,707,1,0,0,0,709,163,1,0,0,0,
  	710,711,5,3,0,0,711,712,3,166,83,0,712,713,5,13,0,0,713,165,1,0,0,0,714,
  	719,3,112,56,0,715,716,5,47,0,0,716,718,3,112,56,0,717,715,1,0,0,0,718,
  	721,1,0,0,0,719,717,1,0,0,0,719,720,1,0,0,0,720,167,1,0,0,0,721,719,1,
  	0,0,0,722,725,3,170,85,0,723,725,3,172,86,0,724,722,1,0,0,0,724,723,1,
  	0,0,0,725,169,1,0,0,0,726,727,5,18,0,0,727,728,3,122,61,0,728,729,5,34,
  	0,0,729,732,3,112,56,0,730,731,5,12,0,0,731,733,3,112,56,0,732,730,1,
  	0,0,0,732,733,1,0,0,0,733,171,1,0,0,0,734,735,5,5,0,0,735,736,3,122,61,
  	0,736,737,5,25,0,0,737,742,3,174,87,0,738,739,5,47,0,0,739,741,3,174,
  	87,0,740,738,1,0,0,0,741,744,1,0,0,0,742,740,1,0,0,0,742,743,1,0,0,0,
  	743,748,1,0,0,0,744,742,1,0,0,0,745,746,5,47,0,0,746,747,5,12,0,0,747,
  	749,3,166,83,0,748,745,1,0,0,0,748,749,1,0,0,0,749,750,1,0,0,0,750,751,
  	5,13,0,0,751,173,1,0,0,0,752,753,3,106,53,0,753,754,5,48,0,0,754,755,
  	3,112,56,0,755,175,1,0,0,0,756,760,3,178,89,0,757,760,3,180,90,0,758,
  	760,3,182,91,0,759,756,1,0,0,0,759,757,1,0,0,0,759,758,1,0,0,0,760,177,
  	1,0,0,0,761,762,5,39,0,0,762,763,3,122,61,0,763,764,5,10,0,0,764,765,
  	3,112,56,0,765,179,1,0,0,0,766,767,5,32,0,0,767,768,3,166,83,0,768,769,
  	5,37,0,0,769,770,3,122,61,0,770,181,1,0,0,0,771,772,5,15,0,0,772,773,
  	3,4,2,0,773,774,5,45,0,0,774,775,3,184,92,0,775,776,5,10,0,0,776,777,
  	3,112,56,0,777,183,1,0,0,0,778,779,3,186,93,0,779,780,7,6,0,0,780,781,
  	3,188,94,0,781,185,1,0,0,0,782,783,3,122,61,0,783,187,1,0,0,0,784,785,
  	3,122,61,0,785,189,1,0,0,0,786,787,5,40,0,0,787,788,3,192,96,0,788,789,
  	5,10,0,0,789,790,3,112,56,0,790,191,1,0,0,0,791,796,3,120,60,0,792,793,
  	5,46,0,0,793,795,3,120,60,0,794,792,1,0,0,0,795,798,1,0,0,0,796,794,1,
  	0,0,0,796,797,1,0,0,0,797,193,1,0,0,0,798,796,1,0,0,0,65,196,208,216,
  	227,229,244,257,278,282,300,307,311,318,323,329,341,346,352,358,376,383,
  	392,399,402,409,424,432,450,461,475,480,491,503,514,522,528,542,546,552,
  	561,569,580,588,590,597,605,613,618,633,639,651,662,669,673,678,685,691,
  	708,719,724,732,742,748,759,796
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pascalParserStaticData = staticData.release();
}

}

pascalParser::pascalParser(TokenStream *input) : pascalParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

pascalParser::pascalParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  pascalParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *pascalParserStaticData->atn, pascalParserStaticData->decisionToDFA, pascalParserStaticData->sharedContextCache, options);
}

pascalParser::~pascalParser() {
  delete _interpreter;
}

const atn::ATN& pascalParser::getATN() const {
  return *pascalParserStaticData->atn;
}

std::string pascalParser::getGrammarFileName() const {
  return "pascal.g4";
}

const std::vector<std::string>& pascalParser::getRuleNames() const {
  return pascalParserStaticData->ruleNames;
}

const dfa::Vocabulary& pascalParser::getVocabulary() const {
  return pascalParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView pascalParser::getSerializedATN() const {
  return pascalParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

pascalParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ProgramHeadingContext* pascalParser::ProgramContext::programHeading() {
  return getRuleContext<pascalParser::ProgramHeadingContext>(0);
}

pascalParser::BlockContext* pascalParser::ProgramContext::block() {
  return getRuleContext<pascalParser::BlockContext>(0);
}

tree::TerminalNode* pascalParser::ProgramContext::DOT() {
  return getToken(pascalParser::DOT, 0);
}

tree::TerminalNode* pascalParser::ProgramContext::EOF() {
  return getToken(pascalParser::EOF, 0);
}

tree::TerminalNode* pascalParser::ProgramContext::INTERFACE() {
  return getToken(pascalParser::INTERFACE, 0);
}


size_t pascalParser::ProgramContext::getRuleIndex() const {
  return pascalParser::RuleProgram;
}

void pascalParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void pascalParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any pascalParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ProgramContext* pascalParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, pascalParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    programHeading();
    setState(196);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pascalParser::INTERFACE) {
      setState(195);
      match(pascalParser::INTERFACE);
    }
    setState(198);
    block();
    setState(199);
    match(pascalParser::DOT);
    setState(200);
    match(pascalParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramHeadingContext ------------------------------------------------------------------

pascalParser::ProgramHeadingContext::ProgramHeadingContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::ProgramHeadingContext::PROGRAM() {
  return getToken(pascalParser::PROGRAM, 0);
}

pascalParser::IdentifierContext* pascalParser::ProgramHeadingContext::identifier() {
  return getRuleContext<pascalParser::IdentifierContext>(0);
}

tree::TerminalNode* pascalParser::ProgramHeadingContext::SEMI() {
  return getToken(pascalParser::SEMI, 0);
}

tree::TerminalNode* pascalParser::ProgramHeadingContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

pascalParser::IdentifierListContext* pascalParser::ProgramHeadingContext::identifierList() {
  return getRuleContext<pascalParser::IdentifierListContext>(0);
}

tree::TerminalNode* pascalParser::ProgramHeadingContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}

tree::TerminalNode* pascalParser::ProgramHeadingContext::UNIT() {
  return getToken(pascalParser::UNIT, 0);
}


size_t pascalParser::ProgramHeadingContext::getRuleIndex() const {
  return pascalParser::RuleProgramHeading;
}

void pascalParser::ProgramHeadingContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgramHeading(this);
}

void pascalParser::ProgramHeadingContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgramHeading(this);
}


std::any pascalParser::ProgramHeadingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitProgramHeading(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ProgramHeadingContext* pascalParser::programHeading() {
  ProgramHeadingContext *_localctx = _tracker.createInstance<ProgramHeadingContext>(_ctx, getState());
  enterRule(_localctx, 2, pascalParser::RuleProgramHeading);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(216);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::PROGRAM: {
        enterOuterAlt(_localctx, 1);
        setState(202);
        match(pascalParser::PROGRAM);
        setState(203);
        identifier();
        setState(208);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == pascalParser::LPAREN) {
          setState(204);
          match(pascalParser::LPAREN);
          setState(205);
          identifierList();
          setState(206);
          match(pascalParser::RPAREN);
        }
        setState(210);
        match(pascalParser::SEMI);
        break;
      }

      case pascalParser::UNIT: {
        enterOuterAlt(_localctx, 2);
        setState(212);
        match(pascalParser::UNIT);
        setState(213);
        identifier();
        setState(214);
        match(pascalParser::SEMI);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

pascalParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::IdentifierContext::IDENT() {
  return getToken(pascalParser::IDENT, 0);
}


size_t pascalParser::IdentifierContext::getRuleIndex() const {
  return pascalParser::RuleIdentifier;
}

void pascalParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void pascalParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


std::any pascalParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::IdentifierContext* pascalParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 4, pascalParser::RuleIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(pascalParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

pascalParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::CompoundStatementContext* pascalParser::BlockContext::compoundStatement() {
  return getRuleContext<pascalParser::CompoundStatementContext>(0);
}

std::vector<pascalParser::LabelDeclarationPartContext *> pascalParser::BlockContext::labelDeclarationPart() {
  return getRuleContexts<pascalParser::LabelDeclarationPartContext>();
}

pascalParser::LabelDeclarationPartContext* pascalParser::BlockContext::labelDeclarationPart(size_t i) {
  return getRuleContext<pascalParser::LabelDeclarationPartContext>(i);
}

std::vector<pascalParser::ConstantDefinitionPartContext *> pascalParser::BlockContext::constantDefinitionPart() {
  return getRuleContexts<pascalParser::ConstantDefinitionPartContext>();
}

pascalParser::ConstantDefinitionPartContext* pascalParser::BlockContext::constantDefinitionPart(size_t i) {
  return getRuleContext<pascalParser::ConstantDefinitionPartContext>(i);
}

std::vector<pascalParser::TypeDefinitionPartContext *> pascalParser::BlockContext::typeDefinitionPart() {
  return getRuleContexts<pascalParser::TypeDefinitionPartContext>();
}

pascalParser::TypeDefinitionPartContext* pascalParser::BlockContext::typeDefinitionPart(size_t i) {
  return getRuleContext<pascalParser::TypeDefinitionPartContext>(i);
}

std::vector<pascalParser::VariableDeclarationPartContext *> pascalParser::BlockContext::variableDeclarationPart() {
  return getRuleContexts<pascalParser::VariableDeclarationPartContext>();
}

pascalParser::VariableDeclarationPartContext* pascalParser::BlockContext::variableDeclarationPart(size_t i) {
  return getRuleContext<pascalParser::VariableDeclarationPartContext>(i);
}

std::vector<pascalParser::ProcedureAndFunctionDeclarationPartContext *> pascalParser::BlockContext::procedureAndFunctionDeclarationPart() {
  return getRuleContexts<pascalParser::ProcedureAndFunctionDeclarationPartContext>();
}

pascalParser::ProcedureAndFunctionDeclarationPartContext* pascalParser::BlockContext::procedureAndFunctionDeclarationPart(size_t i) {
  return getRuleContext<pascalParser::ProcedureAndFunctionDeclarationPartContext>(i);
}

std::vector<pascalParser::UsesUnitsPartContext *> pascalParser::BlockContext::usesUnitsPart() {
  return getRuleContexts<pascalParser::UsesUnitsPartContext>();
}

pascalParser::UsesUnitsPartContext* pascalParser::BlockContext::usesUnitsPart(size_t i) {
  return getRuleContext<pascalParser::UsesUnitsPartContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::BlockContext::IMPLEMENTATION() {
  return getTokens(pascalParser::IMPLEMENTATION);
}

tree::TerminalNode* pascalParser::BlockContext::IMPLEMENTATION(size_t i) {
  return getToken(pascalParser::IMPLEMENTATION, i);
}


size_t pascalParser::BlockContext::getRuleIndex() const {
  return pascalParser::RuleBlock;
}

void pascalParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void pascalParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any pascalParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::BlockContext* pascalParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, pascalParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 8) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 8)) & -6917529026297847551) != 0)) {
      setState(227);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case pascalParser::LABEL: {
          setState(220);
          labelDeclarationPart();
          break;
        }

        case pascalParser::CONST: {
          setState(221);
          constantDefinitionPart();
          break;
        }

        case pascalParser::TYPE: {
          setState(222);
          typeDefinitionPart();
          break;
        }

        case pascalParser::VAR: {
          setState(223);
          variableDeclarationPart();
          break;
        }

        case pascalParser::FUNCTION:
        case pascalParser::PROCEDURE: {
          setState(224);
          procedureAndFunctionDeclarationPart();
          break;
        }

        case pascalParser::USES: {
          setState(225);
          usesUnitsPart();
          break;
        }

        case pascalParser::IMPLEMENTATION: {
          setState(226);
          match(pascalParser::IMPLEMENTATION);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(231);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(232);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsesUnitsPartContext ------------------------------------------------------------------

pascalParser::UsesUnitsPartContext::UsesUnitsPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::UsesUnitsPartContext::USES() {
  return getToken(pascalParser::USES, 0);
}

pascalParser::IdentifierListContext* pascalParser::UsesUnitsPartContext::identifierList() {
  return getRuleContext<pascalParser::IdentifierListContext>(0);
}

tree::TerminalNode* pascalParser::UsesUnitsPartContext::SEMI() {
  return getToken(pascalParser::SEMI, 0);
}


size_t pascalParser::UsesUnitsPartContext::getRuleIndex() const {
  return pascalParser::RuleUsesUnitsPart;
}

void pascalParser::UsesUnitsPartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsesUnitsPart(this);
}

void pascalParser::UsesUnitsPartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsesUnitsPart(this);
}


std::any pascalParser::UsesUnitsPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitUsesUnitsPart(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::UsesUnitsPartContext* pascalParser::usesUnitsPart() {
  UsesUnitsPartContext *_localctx = _tracker.createInstance<UsesUnitsPartContext>(_ctx, getState());
  enterRule(_localctx, 8, pascalParser::RuleUsesUnitsPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    match(pascalParser::USES);
    setState(235);
    identifierList();
    setState(236);
    match(pascalParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelDeclarationPartContext ------------------------------------------------------------------

pascalParser::LabelDeclarationPartContext::LabelDeclarationPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::LabelDeclarationPartContext::LABEL() {
  return getToken(pascalParser::LABEL, 0);
}

std::vector<pascalParser::LabelContext *> pascalParser::LabelDeclarationPartContext::label() {
  return getRuleContexts<pascalParser::LabelContext>();
}

pascalParser::LabelContext* pascalParser::LabelDeclarationPartContext::label(size_t i) {
  return getRuleContext<pascalParser::LabelContext>(i);
}

tree::TerminalNode* pascalParser::LabelDeclarationPartContext::SEMI() {
  return getToken(pascalParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> pascalParser::LabelDeclarationPartContext::COMMA() {
  return getTokens(pascalParser::COMMA);
}

tree::TerminalNode* pascalParser::LabelDeclarationPartContext::COMMA(size_t i) {
  return getToken(pascalParser::COMMA, i);
}


size_t pascalParser::LabelDeclarationPartContext::getRuleIndex() const {
  return pascalParser::RuleLabelDeclarationPart;
}

void pascalParser::LabelDeclarationPartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabelDeclarationPart(this);
}

void pascalParser::LabelDeclarationPartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabelDeclarationPart(this);
}


std::any pascalParser::LabelDeclarationPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitLabelDeclarationPart(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::LabelDeclarationPartContext* pascalParser::labelDeclarationPart() {
  LabelDeclarationPartContext *_localctx = _tracker.createInstance<LabelDeclarationPartContext>(_ctx, getState());
  enterRule(_localctx, 10, pascalParser::RuleLabelDeclarationPart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(pascalParser::LABEL);
    setState(239);
    label();
    setState(244);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pascalParser::COMMA) {
      setState(240);
      match(pascalParser::COMMA);
      setState(241);
      label();
      setState(246);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(247);
    match(pascalParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

pascalParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::UnsignedIntegerContext* pascalParser::LabelContext::unsignedInteger() {
  return getRuleContext<pascalParser::UnsignedIntegerContext>(0);
}


size_t pascalParser::LabelContext::getRuleIndex() const {
  return pascalParser::RuleLabel;
}

void pascalParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void pascalParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}


std::any pascalParser::LabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitLabel(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::LabelContext* pascalParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 12, pascalParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    unsignedInteger();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDefinitionPartContext ------------------------------------------------------------------

pascalParser::ConstantDefinitionPartContext::ConstantDefinitionPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::ConstantDefinitionPartContext::CONST() {
  return getToken(pascalParser::CONST, 0);
}

std::vector<pascalParser::ConstantDefinitionContext *> pascalParser::ConstantDefinitionPartContext::constantDefinition() {
  return getRuleContexts<pascalParser::ConstantDefinitionContext>();
}

pascalParser::ConstantDefinitionContext* pascalParser::ConstantDefinitionPartContext::constantDefinition(size_t i) {
  return getRuleContext<pascalParser::ConstantDefinitionContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::ConstantDefinitionPartContext::SEMI() {
  return getTokens(pascalParser::SEMI);
}

tree::TerminalNode* pascalParser::ConstantDefinitionPartContext::SEMI(size_t i) {
  return getToken(pascalParser::SEMI, i);
}


size_t pascalParser::ConstantDefinitionPartContext::getRuleIndex() const {
  return pascalParser::RuleConstantDefinitionPart;
}

void pascalParser::ConstantDefinitionPartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantDefinitionPart(this);
}

void pascalParser::ConstantDefinitionPartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantDefinitionPart(this);
}


std::any pascalParser::ConstantDefinitionPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitConstantDefinitionPart(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ConstantDefinitionPartContext* pascalParser::constantDefinitionPart() {
  ConstantDefinitionPartContext *_localctx = _tracker.createInstance<ConstantDefinitionPartContext>(_ctx, getState());
  enterRule(_localctx, 14, pascalParser::RuleConstantDefinitionPart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    match(pascalParser::CONST);
    setState(255); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(252);
      constantDefinition();
      setState(253);
      match(pascalParser::SEMI);
      setState(257); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == pascalParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantDefinitionContext ------------------------------------------------------------------

pascalParser::ConstantDefinitionContext::ConstantDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::IdentifierContext* pascalParser::ConstantDefinitionContext::identifier() {
  return getRuleContext<pascalParser::IdentifierContext>(0);
}

tree::TerminalNode* pascalParser::ConstantDefinitionContext::EQUAL() {
  return getToken(pascalParser::EQUAL, 0);
}

pascalParser::ConstantContext* pascalParser::ConstantDefinitionContext::constant() {
  return getRuleContext<pascalParser::ConstantContext>(0);
}


size_t pascalParser::ConstantDefinitionContext::getRuleIndex() const {
  return pascalParser::RuleConstantDefinition;
}

void pascalParser::ConstantDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantDefinition(this);
}

void pascalParser::ConstantDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantDefinition(this);
}


std::any pascalParser::ConstantDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitConstantDefinition(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ConstantDefinitionContext* pascalParser::constantDefinition() {
  ConstantDefinitionContext *_localctx = _tracker.createInstance<ConstantDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 16, pascalParser::RuleConstantDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    identifier();
    setState(260);
    match(pascalParser::EQUAL);
    setState(261);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantChrContext ------------------------------------------------------------------

pascalParser::ConstantChrContext::ConstantChrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::ConstantChrContext::CHR() {
  return getToken(pascalParser::CHR, 0);
}

tree::TerminalNode* pascalParser::ConstantChrContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

pascalParser::UnsignedIntegerContext* pascalParser::ConstantChrContext::unsignedInteger() {
  return getRuleContext<pascalParser::UnsignedIntegerContext>(0);
}

tree::TerminalNode* pascalParser::ConstantChrContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}


size_t pascalParser::ConstantChrContext::getRuleIndex() const {
  return pascalParser::RuleConstantChr;
}

void pascalParser::ConstantChrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantChr(this);
}

void pascalParser::ConstantChrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantChr(this);
}


std::any pascalParser::ConstantChrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitConstantChr(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ConstantChrContext* pascalParser::constantChr() {
  ConstantChrContext *_localctx = _tracker.createInstance<ConstantChrContext>(_ctx, getState());
  enterRule(_localctx, 18, pascalParser::RuleConstantChr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    match(pascalParser::CHR);
    setState(264);
    match(pascalParser::LPAREN);
    setState(265);
    unsignedInteger();
    setState(266);
    match(pascalParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

pascalParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::UnsignedNumberContext* pascalParser::ConstantContext::unsignedNumber() {
  return getRuleContext<pascalParser::UnsignedNumberContext>(0);
}

pascalParser::SignContext* pascalParser::ConstantContext::sign() {
  return getRuleContext<pascalParser::SignContext>(0);
}

pascalParser::IdentifierContext* pascalParser::ConstantContext::identifier() {
  return getRuleContext<pascalParser::IdentifierContext>(0);
}

pascalParser::StringContext* pascalParser::ConstantContext::string() {
  return getRuleContext<pascalParser::StringContext>(0);
}

pascalParser::ConstantChrContext* pascalParser::ConstantContext::constantChr() {
  return getRuleContext<pascalParser::ConstantChrContext>(0);
}


size_t pascalParser::ConstantContext::getRuleIndex() const {
  return pascalParser::RuleConstant;
}

void pascalParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void pascalParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}


std::any pascalParser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ConstantContext* pascalParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 20, pascalParser::RuleConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(278);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(268);
      unsignedNumber();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(269);
      sign();
      setState(270);
      unsignedNumber();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(272);
      identifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(273);
      sign();
      setState(274);
      identifier();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(276);
      string();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(277);
      constantChr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedNumberContext ------------------------------------------------------------------

pascalParser::UnsignedNumberContext::UnsignedNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::UnsignedIntegerContext* pascalParser::UnsignedNumberContext::unsignedInteger() {
  return getRuleContext<pascalParser::UnsignedIntegerContext>(0);
}

pascalParser::UnsignedRealContext* pascalParser::UnsignedNumberContext::unsignedReal() {
  return getRuleContext<pascalParser::UnsignedRealContext>(0);
}


size_t pascalParser::UnsignedNumberContext::getRuleIndex() const {
  return pascalParser::RuleUnsignedNumber;
}

void pascalParser::UnsignedNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnsignedNumber(this);
}

void pascalParser::UnsignedNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnsignedNumber(this);
}


std::any pascalParser::UnsignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitUnsignedNumber(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::UnsignedNumberContext* pascalParser::unsignedNumber() {
  UnsignedNumberContext *_localctx = _tracker.createInstance<UnsignedNumberContext>(_ctx, getState());
  enterRule(_localctx, 22, pascalParser::RuleUnsignedNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(282);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::NUM_INT: {
        enterOuterAlt(_localctx, 1);
        setState(280);
        unsignedInteger();
        break;
      }

      case pascalParser::NUM_REAL: {
        enterOuterAlt(_localctx, 2);
        setState(281);
        unsignedReal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedIntegerContext ------------------------------------------------------------------

pascalParser::UnsignedIntegerContext::UnsignedIntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::UnsignedIntegerContext::NUM_INT() {
  return getToken(pascalParser::NUM_INT, 0);
}


size_t pascalParser::UnsignedIntegerContext::getRuleIndex() const {
  return pascalParser::RuleUnsignedInteger;
}

void pascalParser::UnsignedIntegerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnsignedInteger(this);
}

void pascalParser::UnsignedIntegerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnsignedInteger(this);
}


std::any pascalParser::UnsignedIntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitUnsignedInteger(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::UnsignedIntegerContext* pascalParser::unsignedInteger() {
  UnsignedIntegerContext *_localctx = _tracker.createInstance<UnsignedIntegerContext>(_ctx, getState());
  enterRule(_localctx, 24, pascalParser::RuleUnsignedInteger);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(pascalParser::NUM_INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedRealContext ------------------------------------------------------------------

pascalParser::UnsignedRealContext::UnsignedRealContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::UnsignedRealContext::NUM_REAL() {
  return getToken(pascalParser::NUM_REAL, 0);
}


size_t pascalParser::UnsignedRealContext::getRuleIndex() const {
  return pascalParser::RuleUnsignedReal;
}

void pascalParser::UnsignedRealContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnsignedReal(this);
}

void pascalParser::UnsignedRealContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnsignedReal(this);
}


std::any pascalParser::UnsignedRealContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitUnsignedReal(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::UnsignedRealContext* pascalParser::unsignedReal() {
  UnsignedRealContext *_localctx = _tracker.createInstance<UnsignedRealContext>(_ctx, getState());
  enterRule(_localctx, 26, pascalParser::RuleUnsignedReal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    match(pascalParser::NUM_REAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

pascalParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::SignContext::PLUS() {
  return getToken(pascalParser::PLUS, 0);
}

tree::TerminalNode* pascalParser::SignContext::MINUS() {
  return getToken(pascalParser::MINUS, 0);
}


size_t pascalParser::SignContext::getRuleIndex() const {
  return pascalParser::RuleSign;
}

void pascalParser::SignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSign(this);
}

void pascalParser::SignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSign(this);
}


std::any pascalParser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::SignContext* pascalParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 28, pascalParser::RuleSign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    _la = _input->LA(1);
    if (!(_la == pascalParser::PLUS

    || _la == pascalParser::MINUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bool_Context ------------------------------------------------------------------

pascalParser::Bool_Context::Bool_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::Bool_Context::TRUE() {
  return getToken(pascalParser::TRUE, 0);
}

tree::TerminalNode* pascalParser::Bool_Context::FALSE() {
  return getToken(pascalParser::FALSE, 0);
}


size_t pascalParser::Bool_Context::getRuleIndex() const {
  return pascalParser::RuleBool_;
}

void pascalParser::Bool_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBool_(this);
}

void pascalParser::Bool_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBool_(this);
}


std::any pascalParser::Bool_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitBool_(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Bool_Context* pascalParser::bool_() {
  Bool_Context *_localctx = _tracker.createInstance<Bool_Context>(_ctx, getState());
  enterRule(_localctx, 30, pascalParser::RuleBool_);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    _la = _input->LA(1);
    if (!(_la == pascalParser::TRUE

    || _la == pascalParser::FALSE)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

pascalParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::StringContext::STRING_LITERAL() {
  return getToken(pascalParser::STRING_LITERAL, 0);
}


size_t pascalParser::StringContext::getRuleIndex() const {
  return pascalParser::RuleString;
}

void pascalParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void pascalParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


std::any pascalParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::StringContext* pascalParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 32, pascalParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    match(pascalParser::STRING_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefinitionPartContext ------------------------------------------------------------------

pascalParser::TypeDefinitionPartContext::TypeDefinitionPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::TypeDefinitionPartContext::TYPE() {
  return getToken(pascalParser::TYPE, 0);
}

std::vector<pascalParser::TypeDefinitionContext *> pascalParser::TypeDefinitionPartContext::typeDefinition() {
  return getRuleContexts<pascalParser::TypeDefinitionContext>();
}

pascalParser::TypeDefinitionContext* pascalParser::TypeDefinitionPartContext::typeDefinition(size_t i) {
  return getRuleContext<pascalParser::TypeDefinitionContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::TypeDefinitionPartContext::SEMI() {
  return getTokens(pascalParser::SEMI);
}

tree::TerminalNode* pascalParser::TypeDefinitionPartContext::SEMI(size_t i) {
  return getToken(pascalParser::SEMI, i);
}


size_t pascalParser::TypeDefinitionPartContext::getRuleIndex() const {
  return pascalParser::RuleTypeDefinitionPart;
}

void pascalParser::TypeDefinitionPartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDefinitionPart(this);
}

void pascalParser::TypeDefinitionPartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDefinitionPart(this);
}


std::any pascalParser::TypeDefinitionPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitTypeDefinitionPart(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::TypeDefinitionPartContext* pascalParser::typeDefinitionPart() {
  TypeDefinitionPartContext *_localctx = _tracker.createInstance<TypeDefinitionPartContext>(_ctx, getState());
  enterRule(_localctx, 34, pascalParser::RuleTypeDefinitionPart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    match(pascalParser::TYPE);
    setState(298); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(295);
      typeDefinition();
      setState(296);
      match(pascalParser::SEMI);
      setState(300); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == pascalParser::IDENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDefinitionContext ------------------------------------------------------------------

pascalParser::TypeDefinitionContext::TypeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::IdentifierContext* pascalParser::TypeDefinitionContext::identifier() {
  return getRuleContext<pascalParser::IdentifierContext>(0);
}

tree::TerminalNode* pascalParser::TypeDefinitionContext::EQUAL() {
  return getToken(pascalParser::EQUAL, 0);
}

pascalParser::Type_Context* pascalParser::TypeDefinitionContext::type_() {
  return getRuleContext<pascalParser::Type_Context>(0);
}

pascalParser::FunctionTypeContext* pascalParser::TypeDefinitionContext::functionType() {
  return getRuleContext<pascalParser::FunctionTypeContext>(0);
}

pascalParser::ProcedureTypeContext* pascalParser::TypeDefinitionContext::procedureType() {
  return getRuleContext<pascalParser::ProcedureTypeContext>(0);
}


size_t pascalParser::TypeDefinitionContext::getRuleIndex() const {
  return pascalParser::RuleTypeDefinition;
}

void pascalParser::TypeDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDefinition(this);
}

void pascalParser::TypeDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDefinition(this);
}


std::any pascalParser::TypeDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitTypeDefinition(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::TypeDefinitionContext* pascalParser::typeDefinition() {
  TypeDefinitionContext *_localctx = _tracker.createInstance<TypeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 36, pascalParser::RuleTypeDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    identifier();
    setState(303);
    match(pascalParser::EQUAL);
    setState(307);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::ARRAY:
      case pascalParser::BOOLEAN:
      case pascalParser::CHAR:
      case pascalParser::CHR:
      case pascalParser::FILE:
      case pascalParser::INTEGER:
      case pascalParser::PACKED:
      case pascalParser::REAL:
      case pascalParser::RECORD:
      case pascalParser::SET:
      case pascalParser::PLUS:
      case pascalParser::MINUS:
      case pascalParser::LPAREN:
      case pascalParser::POINTER:
      case pascalParser::STRING:
      case pascalParser::IDENT:
      case pascalParser::STRING_LITERAL:
      case pascalParser::NUM_INT:
      case pascalParser::NUM_REAL: {
        setState(304);
        type_();
        break;
      }

      case pascalParser::FUNCTION: {
        setState(305);
        functionType();
        break;
      }

      case pascalParser::PROCEDURE: {
        setState(306);
        procedureType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTypeContext ------------------------------------------------------------------

pascalParser::FunctionTypeContext::FunctionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::FunctionTypeContext::FUNCTION() {
  return getToken(pascalParser::FUNCTION, 0);
}

tree::TerminalNode* pascalParser::FunctionTypeContext::COLON() {
  return getToken(pascalParser::COLON, 0);
}

pascalParser::ResultTypeContext* pascalParser::FunctionTypeContext::resultType() {
  return getRuleContext<pascalParser::ResultTypeContext>(0);
}

pascalParser::FormalParameterListContext* pascalParser::FunctionTypeContext::formalParameterList() {
  return getRuleContext<pascalParser::FormalParameterListContext>(0);
}


size_t pascalParser::FunctionTypeContext::getRuleIndex() const {
  return pascalParser::RuleFunctionType;
}

void pascalParser::FunctionTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionType(this);
}

void pascalParser::FunctionTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionType(this);
}


std::any pascalParser::FunctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitFunctionType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::FunctionTypeContext* pascalParser::functionType() {
  FunctionTypeContext *_localctx = _tracker.createInstance<FunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 38, pascalParser::RuleFunctionType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(pascalParser::FUNCTION);
    setState(311);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pascalParser::LPAREN) {
      setState(310);
      formalParameterList();
    }
    setState(313);
    match(pascalParser::COLON);
    setState(314);
    resultType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureTypeContext ------------------------------------------------------------------

pascalParser::ProcedureTypeContext::ProcedureTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::ProcedureTypeContext::PROCEDURE() {
  return getToken(pascalParser::PROCEDURE, 0);
}

pascalParser::FormalParameterListContext* pascalParser::ProcedureTypeContext::formalParameterList() {
  return getRuleContext<pascalParser::FormalParameterListContext>(0);
}


size_t pascalParser::ProcedureTypeContext::getRuleIndex() const {
  return pascalParser::RuleProcedureType;
}

void pascalParser::ProcedureTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedureType(this);
}

void pascalParser::ProcedureTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedureType(this);
}


std::any pascalParser::ProcedureTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitProcedureType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ProcedureTypeContext* pascalParser::procedureType() {
  ProcedureTypeContext *_localctx = _tracker.createInstance<ProcedureTypeContext>(_ctx, getState());
  enterRule(_localctx, 40, pascalParser::RuleProcedureType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(pascalParser::PROCEDURE);
    setState(318);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pascalParser::LPAREN) {
      setState(317);
      formalParameterList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_Context ------------------------------------------------------------------

pascalParser::Type_Context::Type_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::SimpleTypeContext* pascalParser::Type_Context::simpleType() {
  return getRuleContext<pascalParser::SimpleTypeContext>(0);
}

pascalParser::StructuredTypeContext* pascalParser::Type_Context::structuredType() {
  return getRuleContext<pascalParser::StructuredTypeContext>(0);
}

pascalParser::PointerTypeContext* pascalParser::Type_Context::pointerType() {
  return getRuleContext<pascalParser::PointerTypeContext>(0);
}


size_t pascalParser::Type_Context::getRuleIndex() const {
  return pascalParser::RuleType_;
}

void pascalParser::Type_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_(this);
}

void pascalParser::Type_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_(this);
}


std::any pascalParser::Type_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitType_(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Type_Context* pascalParser::type_() {
  Type_Context *_localctx = _tracker.createInstance<Type_Context>(_ctx, getState());
  enterRule(_localctx, 42, pascalParser::RuleType_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(323);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::BOOLEAN:
      case pascalParser::CHAR:
      case pascalParser::CHR:
      case pascalParser::INTEGER:
      case pascalParser::REAL:
      case pascalParser::PLUS:
      case pascalParser::MINUS:
      case pascalParser::LPAREN:
      case pascalParser::STRING:
      case pascalParser::IDENT:
      case pascalParser::STRING_LITERAL:
      case pascalParser::NUM_INT:
      case pascalParser::NUM_REAL: {
        enterOuterAlt(_localctx, 1);
        setState(320);
        simpleType();
        break;
      }

      case pascalParser::ARRAY:
      case pascalParser::FILE:
      case pascalParser::PACKED:
      case pascalParser::RECORD:
      case pascalParser::SET: {
        enterOuterAlt(_localctx, 2);
        setState(321);
        structuredType();
        break;
      }

      case pascalParser::POINTER: {
        enterOuterAlt(_localctx, 3);
        setState(322);
        pointerType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleTypeContext ------------------------------------------------------------------

pascalParser::SimpleTypeContext::SimpleTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ScalarTypeContext* pascalParser::SimpleTypeContext::scalarType() {
  return getRuleContext<pascalParser::ScalarTypeContext>(0);
}

pascalParser::SubrangeTypeContext* pascalParser::SimpleTypeContext::subrangeType() {
  return getRuleContext<pascalParser::SubrangeTypeContext>(0);
}

pascalParser::TypeIdentifierContext* pascalParser::SimpleTypeContext::typeIdentifier() {
  return getRuleContext<pascalParser::TypeIdentifierContext>(0);
}

pascalParser::StringtypeContext* pascalParser::SimpleTypeContext::stringtype() {
  return getRuleContext<pascalParser::StringtypeContext>(0);
}


size_t pascalParser::SimpleTypeContext::getRuleIndex() const {
  return pascalParser::RuleSimpleType;
}

void pascalParser::SimpleTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleType(this);
}

void pascalParser::SimpleTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleType(this);
}


std::any pascalParser::SimpleTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitSimpleType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::SimpleTypeContext* pascalParser::simpleType() {
  SimpleTypeContext *_localctx = _tracker.createInstance<SimpleTypeContext>(_ctx, getState());
  enterRule(_localctx, 44, pascalParser::RuleSimpleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(329);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(325);
      scalarType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(326);
      subrangeType();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(327);
      typeIdentifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(328);
      stringtype();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScalarTypeContext ------------------------------------------------------------------

pascalParser::ScalarTypeContext::ScalarTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::ScalarTypeContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

pascalParser::IdentifierListContext* pascalParser::ScalarTypeContext::identifierList() {
  return getRuleContext<pascalParser::IdentifierListContext>(0);
}

tree::TerminalNode* pascalParser::ScalarTypeContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}


size_t pascalParser::ScalarTypeContext::getRuleIndex() const {
  return pascalParser::RuleScalarType;
}

void pascalParser::ScalarTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScalarType(this);
}

void pascalParser::ScalarTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScalarType(this);
}


std::any pascalParser::ScalarTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitScalarType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ScalarTypeContext* pascalParser::scalarType() {
  ScalarTypeContext *_localctx = _tracker.createInstance<ScalarTypeContext>(_ctx, getState());
  enterRule(_localctx, 46, pascalParser::RuleScalarType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    match(pascalParser::LPAREN);
    setState(332);
    identifierList();
    setState(333);
    match(pascalParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubrangeTypeContext ------------------------------------------------------------------

pascalParser::SubrangeTypeContext::SubrangeTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::ConstantContext *> pascalParser::SubrangeTypeContext::constant() {
  return getRuleContexts<pascalParser::ConstantContext>();
}

pascalParser::ConstantContext* pascalParser::SubrangeTypeContext::constant(size_t i) {
  return getRuleContext<pascalParser::ConstantContext>(i);
}

tree::TerminalNode* pascalParser::SubrangeTypeContext::DOTDOT() {
  return getToken(pascalParser::DOTDOT, 0);
}


size_t pascalParser::SubrangeTypeContext::getRuleIndex() const {
  return pascalParser::RuleSubrangeType;
}

void pascalParser::SubrangeTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubrangeType(this);
}

void pascalParser::SubrangeTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubrangeType(this);
}


std::any pascalParser::SubrangeTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitSubrangeType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::SubrangeTypeContext* pascalParser::subrangeType() {
  SubrangeTypeContext *_localctx = _tracker.createInstance<SubrangeTypeContext>(_ctx, getState());
  enterRule(_localctx, 48, pascalParser::RuleSubrangeType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    constant();
    setState(336);
    match(pascalParser::DOTDOT);
    setState(337);
    constant();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdentifierContext ------------------------------------------------------------------

pascalParser::TypeIdentifierContext::TypeIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::IdentifierContext* pascalParser::TypeIdentifierContext::identifier() {
  return getRuleContext<pascalParser::IdentifierContext>(0);
}

tree::TerminalNode* pascalParser::TypeIdentifierContext::CHAR() {
  return getToken(pascalParser::CHAR, 0);
}

tree::TerminalNode* pascalParser::TypeIdentifierContext::BOOLEAN() {
  return getToken(pascalParser::BOOLEAN, 0);
}

tree::TerminalNode* pascalParser::TypeIdentifierContext::INTEGER() {
  return getToken(pascalParser::INTEGER, 0);
}

tree::TerminalNode* pascalParser::TypeIdentifierContext::REAL() {
  return getToken(pascalParser::REAL, 0);
}

tree::TerminalNode* pascalParser::TypeIdentifierContext::STRING() {
  return getToken(pascalParser::STRING, 0);
}


size_t pascalParser::TypeIdentifierContext::getRuleIndex() const {
  return pascalParser::RuleTypeIdentifier;
}

void pascalParser::TypeIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeIdentifier(this);
}

void pascalParser::TypeIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeIdentifier(this);
}


std::any pascalParser::TypeIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitTypeIdentifier(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::TypeIdentifierContext* pascalParser::typeIdentifier() {
  TypeIdentifierContext *_localctx = _tracker.createInstance<TypeIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 50, pascalParser::RuleTypeIdentifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(341);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::IDENT: {
        enterOuterAlt(_localctx, 1);
        setState(339);
        identifier();
        break;
      }

      case pascalParser::BOOLEAN:
      case pascalParser::CHAR:
      case pascalParser::INTEGER:
      case pascalParser::REAL:
      case pascalParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(340);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1074790480) != 0) || _la == pascalParser::STRING)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructuredTypeContext ------------------------------------------------------------------

pascalParser::StructuredTypeContext::StructuredTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::StructuredTypeContext::PACKED() {
  return getToken(pascalParser::PACKED, 0);
}

pascalParser::UnpackedStructuredTypeContext* pascalParser::StructuredTypeContext::unpackedStructuredType() {
  return getRuleContext<pascalParser::UnpackedStructuredTypeContext>(0);
}


size_t pascalParser::StructuredTypeContext::getRuleIndex() const {
  return pascalParser::RuleStructuredType;
}

void pascalParser::StructuredTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructuredType(this);
}

void pascalParser::StructuredTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructuredType(this);
}


std::any pascalParser::StructuredTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitStructuredType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::StructuredTypeContext* pascalParser::structuredType() {
  StructuredTypeContext *_localctx = _tracker.createInstance<StructuredTypeContext>(_ctx, getState());
  enterRule(_localctx, 52, pascalParser::RuleStructuredType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(346);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::PACKED: {
        enterOuterAlt(_localctx, 1);
        setState(343);
        match(pascalParser::PACKED);
        setState(344);
        unpackedStructuredType();
        break;
      }

      case pascalParser::ARRAY:
      case pascalParser::FILE:
      case pascalParser::RECORD:
      case pascalParser::SET: {
        enterOuterAlt(_localctx, 2);
        setState(345);
        unpackedStructuredType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnpackedStructuredTypeContext ------------------------------------------------------------------

pascalParser::UnpackedStructuredTypeContext::UnpackedStructuredTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ArrayTypeContext* pascalParser::UnpackedStructuredTypeContext::arrayType() {
  return getRuleContext<pascalParser::ArrayTypeContext>(0);
}

pascalParser::RecordTypeContext* pascalParser::UnpackedStructuredTypeContext::recordType() {
  return getRuleContext<pascalParser::RecordTypeContext>(0);
}

pascalParser::SetTypeContext* pascalParser::UnpackedStructuredTypeContext::setType() {
  return getRuleContext<pascalParser::SetTypeContext>(0);
}

pascalParser::FileTypeContext* pascalParser::UnpackedStructuredTypeContext::fileType() {
  return getRuleContext<pascalParser::FileTypeContext>(0);
}


size_t pascalParser::UnpackedStructuredTypeContext::getRuleIndex() const {
  return pascalParser::RuleUnpackedStructuredType;
}

void pascalParser::UnpackedStructuredTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnpackedStructuredType(this);
}

void pascalParser::UnpackedStructuredTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnpackedStructuredType(this);
}


std::any pascalParser::UnpackedStructuredTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitUnpackedStructuredType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::UnpackedStructuredTypeContext* pascalParser::unpackedStructuredType() {
  UnpackedStructuredTypeContext *_localctx = _tracker.createInstance<UnpackedStructuredTypeContext>(_ctx, getState());
  enterRule(_localctx, 54, pascalParser::RuleUnpackedStructuredType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(352);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::ARRAY: {
        enterOuterAlt(_localctx, 1);
        setState(348);
        arrayType();
        break;
      }

      case pascalParser::RECORD: {
        enterOuterAlt(_localctx, 2);
        setState(349);
        recordType();
        break;
      }

      case pascalParser::SET: {
        enterOuterAlt(_localctx, 3);
        setState(350);
        setType();
        break;
      }

      case pascalParser::FILE: {
        enterOuterAlt(_localctx, 4);
        setState(351);
        fileType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringtypeContext ------------------------------------------------------------------

pascalParser::StringtypeContext::StringtypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::StringtypeContext::STRING() {
  return getToken(pascalParser::STRING, 0);
}

tree::TerminalNode* pascalParser::StringtypeContext::LBRACK() {
  return getToken(pascalParser::LBRACK, 0);
}

tree::TerminalNode* pascalParser::StringtypeContext::RBRACK() {
  return getToken(pascalParser::RBRACK, 0);
}

pascalParser::IdentifierContext* pascalParser::StringtypeContext::identifier() {
  return getRuleContext<pascalParser::IdentifierContext>(0);
}

pascalParser::UnsignedNumberContext* pascalParser::StringtypeContext::unsignedNumber() {
  return getRuleContext<pascalParser::UnsignedNumberContext>(0);
}


size_t pascalParser::StringtypeContext::getRuleIndex() const {
  return pascalParser::RuleStringtype;
}

void pascalParser::StringtypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringtype(this);
}

void pascalParser::StringtypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringtype(this);
}


std::any pascalParser::StringtypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitStringtype(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::StringtypeContext* pascalParser::stringtype() {
  StringtypeContext *_localctx = _tracker.createInstance<StringtypeContext>(_ctx, getState());
  enterRule(_localctx, 56, pascalParser::RuleStringtype);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(354);
    match(pascalParser::STRING);
    setState(355);
    match(pascalParser::LBRACK);
    setState(358);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::IDENT: {
        setState(356);
        identifier();
        break;
      }

      case pascalParser::NUM_INT:
      case pascalParser::NUM_REAL: {
        setState(357);
        unsignedNumber();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(360);
    match(pascalParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayTypeContext ------------------------------------------------------------------

pascalParser::ArrayTypeContext::ArrayTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::ArrayTypeContext::ARRAY() {
  return getToken(pascalParser::ARRAY, 0);
}

tree::TerminalNode* pascalParser::ArrayTypeContext::LBRACK() {
  return getToken(pascalParser::LBRACK, 0);
}

pascalParser::TypeListContext* pascalParser::ArrayTypeContext::typeList() {
  return getRuleContext<pascalParser::TypeListContext>(0);
}

tree::TerminalNode* pascalParser::ArrayTypeContext::RBRACK() {
  return getToken(pascalParser::RBRACK, 0);
}

tree::TerminalNode* pascalParser::ArrayTypeContext::OF() {
  return getToken(pascalParser::OF, 0);
}

pascalParser::ComponentTypeContext* pascalParser::ArrayTypeContext::componentType() {
  return getRuleContext<pascalParser::ComponentTypeContext>(0);
}

tree::TerminalNode* pascalParser::ArrayTypeContext::LBRACK2() {
  return getToken(pascalParser::LBRACK2, 0);
}

tree::TerminalNode* pascalParser::ArrayTypeContext::RBRACK2() {
  return getToken(pascalParser::RBRACK2, 0);
}


size_t pascalParser::ArrayTypeContext::getRuleIndex() const {
  return pascalParser::RuleArrayType;
}

void pascalParser::ArrayTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayType(this);
}

void pascalParser::ArrayTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayType(this);
}


std::any pascalParser::ArrayTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitArrayType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ArrayTypeContext* pascalParser::arrayType() {
  ArrayTypeContext *_localctx = _tracker.createInstance<ArrayTypeContext>(_ctx, getState());
  enterRule(_localctx, 58, pascalParser::RuleArrayType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(376);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(362);
      match(pascalParser::ARRAY);
      setState(363);
      match(pascalParser::LBRACK);
      setState(364);
      typeList();
      setState(365);
      match(pascalParser::RBRACK);
      setState(366);
      match(pascalParser::OF);
      setState(367);
      componentType();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(369);
      match(pascalParser::ARRAY);
      setState(370);
      match(pascalParser::LBRACK2);
      setState(371);
      typeList();
      setState(372);
      match(pascalParser::RBRACK2);
      setState(373);
      match(pascalParser::OF);
      setState(374);
      componentType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeListContext ------------------------------------------------------------------

pascalParser::TypeListContext::TypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::IndexTypeContext *> pascalParser::TypeListContext::indexType() {
  return getRuleContexts<pascalParser::IndexTypeContext>();
}

pascalParser::IndexTypeContext* pascalParser::TypeListContext::indexType(size_t i) {
  return getRuleContext<pascalParser::IndexTypeContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::TypeListContext::COMMA() {
  return getTokens(pascalParser::COMMA);
}

tree::TerminalNode* pascalParser::TypeListContext::COMMA(size_t i) {
  return getToken(pascalParser::COMMA, i);
}


size_t pascalParser::TypeListContext::getRuleIndex() const {
  return pascalParser::RuleTypeList;
}

void pascalParser::TypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeList(this);
}

void pascalParser::TypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeList(this);
}


std::any pascalParser::TypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitTypeList(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::TypeListContext* pascalParser::typeList() {
  TypeListContext *_localctx = _tracker.createInstance<TypeListContext>(_ctx, getState());
  enterRule(_localctx, 60, pascalParser::RuleTypeList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(378);
    indexType();
    setState(383);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pascalParser::COMMA) {
      setState(379);
      match(pascalParser::COMMA);
      setState(380);
      indexType();
      setState(385);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexTypeContext ------------------------------------------------------------------

pascalParser::IndexTypeContext::IndexTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::SimpleTypeContext* pascalParser::IndexTypeContext::simpleType() {
  return getRuleContext<pascalParser::SimpleTypeContext>(0);
}


size_t pascalParser::IndexTypeContext::getRuleIndex() const {
  return pascalParser::RuleIndexType;
}

void pascalParser::IndexTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexType(this);
}

void pascalParser::IndexTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexType(this);
}


std::any pascalParser::IndexTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitIndexType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::IndexTypeContext* pascalParser::indexType() {
  IndexTypeContext *_localctx = _tracker.createInstance<IndexTypeContext>(_ctx, getState());
  enterRule(_localctx, 62, pascalParser::RuleIndexType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
    simpleType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentTypeContext ------------------------------------------------------------------

pascalParser::ComponentTypeContext::ComponentTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::Type_Context* pascalParser::ComponentTypeContext::type_() {
  return getRuleContext<pascalParser::Type_Context>(0);
}


size_t pascalParser::ComponentTypeContext::getRuleIndex() const {
  return pascalParser::RuleComponentType;
}

void pascalParser::ComponentTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponentType(this);
}

void pascalParser::ComponentTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponentType(this);
}


std::any pascalParser::ComponentTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitComponentType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ComponentTypeContext* pascalParser::componentType() {
  ComponentTypeContext *_localctx = _tracker.createInstance<ComponentTypeContext>(_ctx, getState());
  enterRule(_localctx, 64, pascalParser::RuleComponentType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordTypeContext ------------------------------------------------------------------

pascalParser::RecordTypeContext::RecordTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::RecordTypeContext::RECORD() {
  return getToken(pascalParser::RECORD, 0);
}

tree::TerminalNode* pascalParser::RecordTypeContext::END() {
  return getToken(pascalParser::END, 0);
}

pascalParser::FieldListContext* pascalParser::RecordTypeContext::fieldList() {
  return getRuleContext<pascalParser::FieldListContext>(0);
}


size_t pascalParser::RecordTypeContext::getRuleIndex() const {
  return pascalParser::RuleRecordType;
}

void pascalParser::RecordTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRecordType(this);
}

void pascalParser::RecordTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRecordType(this);
}


std::any pascalParser::RecordTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitRecordType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::RecordTypeContext* pascalParser::recordType() {
  RecordTypeContext *_localctx = _tracker.createInstance<RecordTypeContext>(_ctx, getState());
  enterRule(_localctx, 66, pascalParser::RuleRecordType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    match(pascalParser::RECORD);
    setState(392);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pascalParser::CASE || _la == pascalParser::IDENT) {
      setState(391);
      fieldList();
    }
    setState(394);
    match(pascalParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldListContext ------------------------------------------------------------------

pascalParser::FieldListContext::FieldListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::FixedPartContext* pascalParser::FieldListContext::fixedPart() {
  return getRuleContext<pascalParser::FixedPartContext>(0);
}

tree::TerminalNode* pascalParser::FieldListContext::SEMI() {
  return getToken(pascalParser::SEMI, 0);
}

pascalParser::VariantPartContext* pascalParser::FieldListContext::variantPart() {
  return getRuleContext<pascalParser::VariantPartContext>(0);
}


size_t pascalParser::FieldListContext::getRuleIndex() const {
  return pascalParser::RuleFieldList;
}

void pascalParser::FieldListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldList(this);
}

void pascalParser::FieldListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldList(this);
}


std::any pascalParser::FieldListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitFieldList(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::FieldListContext* pascalParser::fieldList() {
  FieldListContext *_localctx = _tracker.createInstance<FieldListContext>(_ctx, getState());
  enterRule(_localctx, 68, pascalParser::RuleFieldList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(402);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::IDENT: {
        enterOuterAlt(_localctx, 1);
        setState(396);
        fixedPart();
        setState(399);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == pascalParser::SEMI) {
          setState(397);
          match(pascalParser::SEMI);
          setState(398);
          variantPart();
        }
        break;
      }

      case pascalParser::CASE: {
        enterOuterAlt(_localctx, 2);
        setState(401);
        variantPart();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FixedPartContext ------------------------------------------------------------------

pascalParser::FixedPartContext::FixedPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::RecordSectionContext *> pascalParser::FixedPartContext::recordSection() {
  return getRuleContexts<pascalParser::RecordSectionContext>();
}

pascalParser::RecordSectionContext* pascalParser::FixedPartContext::recordSection(size_t i) {
  return getRuleContext<pascalParser::RecordSectionContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::FixedPartContext::SEMI() {
  return getTokens(pascalParser::SEMI);
}

tree::TerminalNode* pascalParser::FixedPartContext::SEMI(size_t i) {
  return getToken(pascalParser::SEMI, i);
}


size_t pascalParser::FixedPartContext::getRuleIndex() const {
  return pascalParser::RuleFixedPart;
}

void pascalParser::FixedPartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFixedPart(this);
}

void pascalParser::FixedPartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFixedPart(this);
}


std::any pascalParser::FixedPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitFixedPart(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::FixedPartContext* pascalParser::fixedPart() {
  FixedPartContext *_localctx = _tracker.createInstance<FixedPartContext>(_ctx, getState());
  enterRule(_localctx, 70, pascalParser::RuleFixedPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(404);
    recordSection();
    setState(409);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(405);
        match(pascalParser::SEMI);
        setState(406);
        recordSection(); 
      }
      setState(411);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordSectionContext ------------------------------------------------------------------

pascalParser::RecordSectionContext::RecordSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::IdentifierListContext* pascalParser::RecordSectionContext::identifierList() {
  return getRuleContext<pascalParser::IdentifierListContext>(0);
}

tree::TerminalNode* pascalParser::RecordSectionContext::COLON() {
  return getToken(pascalParser::COLON, 0);
}

pascalParser::Type_Context* pascalParser::RecordSectionContext::type_() {
  return getRuleContext<pascalParser::Type_Context>(0);
}


size_t pascalParser::RecordSectionContext::getRuleIndex() const {
  return pascalParser::RuleRecordSection;
}

void pascalParser::RecordSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRecordSection(this);
}

void pascalParser::RecordSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRecordSection(this);
}


std::any pascalParser::RecordSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitRecordSection(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::RecordSectionContext* pascalParser::recordSection() {
  RecordSectionContext *_localctx = _tracker.createInstance<RecordSectionContext>(_ctx, getState());
  enterRule(_localctx, 72, pascalParser::RuleRecordSection);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412);
    identifierList();
    setState(413);
    match(pascalParser::COLON);
    setState(414);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariantPartContext ------------------------------------------------------------------

pascalParser::VariantPartContext::VariantPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::VariantPartContext::CASE() {
  return getToken(pascalParser::CASE, 0);
}

pascalParser::TagContext* pascalParser::VariantPartContext::tag() {
  return getRuleContext<pascalParser::TagContext>(0);
}

tree::TerminalNode* pascalParser::VariantPartContext::OF() {
  return getToken(pascalParser::OF, 0);
}

std::vector<pascalParser::VariantContext *> pascalParser::VariantPartContext::variant() {
  return getRuleContexts<pascalParser::VariantContext>();
}

pascalParser::VariantContext* pascalParser::VariantPartContext::variant(size_t i) {
  return getRuleContext<pascalParser::VariantContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::VariantPartContext::SEMI() {
  return getTokens(pascalParser::SEMI);
}

tree::TerminalNode* pascalParser::VariantPartContext::SEMI(size_t i) {
  return getToken(pascalParser::SEMI, i);
}


size_t pascalParser::VariantPartContext::getRuleIndex() const {
  return pascalParser::RuleVariantPart;
}

void pascalParser::VariantPartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariantPart(this);
}

void pascalParser::VariantPartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariantPart(this);
}


std::any pascalParser::VariantPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitVariantPart(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::VariantPartContext* pascalParser::variantPart() {
  VariantPartContext *_localctx = _tracker.createInstance<VariantPartContext>(_ctx, getState());
  enterRule(_localctx, 74, pascalParser::RuleVariantPart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    match(pascalParser::CASE);
    setState(417);
    tag();
    setState(418);
    match(pascalParser::OF);
    setState(419);
    variant();
    setState(424);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pascalParser::SEMI) {
      setState(420);
      match(pascalParser::SEMI);
      setState(421);
      variant();
      setState(426);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TagContext ------------------------------------------------------------------

pascalParser::TagContext::TagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::IdentifierContext* pascalParser::TagContext::identifier() {
  return getRuleContext<pascalParser::IdentifierContext>(0);
}

tree::TerminalNode* pascalParser::TagContext::COLON() {
  return getToken(pascalParser::COLON, 0);
}

pascalParser::TypeIdentifierContext* pascalParser::TagContext::typeIdentifier() {
  return getRuleContext<pascalParser::TypeIdentifierContext>(0);
}


size_t pascalParser::TagContext::getRuleIndex() const {
  return pascalParser::RuleTag;
}

void pascalParser::TagContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTag(this);
}

void pascalParser::TagContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTag(this);
}


std::any pascalParser::TagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitTag(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::TagContext* pascalParser::tag() {
  TagContext *_localctx = _tracker.createInstance<TagContext>(_ctx, getState());
  enterRule(_localctx, 76, pascalParser::RuleTag);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(432);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(427);
      identifier();
      setState(428);
      match(pascalParser::COLON);
      setState(429);
      typeIdentifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(431);
      typeIdentifier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariantContext ------------------------------------------------------------------

pascalParser::VariantContext::VariantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ConstListContext* pascalParser::VariantContext::constList() {
  return getRuleContext<pascalParser::ConstListContext>(0);
}

tree::TerminalNode* pascalParser::VariantContext::COLON() {
  return getToken(pascalParser::COLON, 0);
}

tree::TerminalNode* pascalParser::VariantContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

pascalParser::FieldListContext* pascalParser::VariantContext::fieldList() {
  return getRuleContext<pascalParser::FieldListContext>(0);
}

tree::TerminalNode* pascalParser::VariantContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}


size_t pascalParser::VariantContext::getRuleIndex() const {
  return pascalParser::RuleVariant;
}

void pascalParser::VariantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariant(this);
}

void pascalParser::VariantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariant(this);
}


std::any pascalParser::VariantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitVariant(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::VariantContext* pascalParser::variant() {
  VariantContext *_localctx = _tracker.createInstance<VariantContext>(_ctx, getState());
  enterRule(_localctx, 78, pascalParser::RuleVariant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    constList();
    setState(435);
    match(pascalParser::COLON);
    setState(436);
    match(pascalParser::LPAREN);
    setState(437);
    fieldList();
    setState(438);
    match(pascalParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetTypeContext ------------------------------------------------------------------

pascalParser::SetTypeContext::SetTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::SetTypeContext::SET() {
  return getToken(pascalParser::SET, 0);
}

tree::TerminalNode* pascalParser::SetTypeContext::OF() {
  return getToken(pascalParser::OF, 0);
}

pascalParser::BaseTypeContext* pascalParser::SetTypeContext::baseType() {
  return getRuleContext<pascalParser::BaseTypeContext>(0);
}


size_t pascalParser::SetTypeContext::getRuleIndex() const {
  return pascalParser::RuleSetType;
}

void pascalParser::SetTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetType(this);
}

void pascalParser::SetTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetType(this);
}


std::any pascalParser::SetTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitSetType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::SetTypeContext* pascalParser::setType() {
  SetTypeContext *_localctx = _tracker.createInstance<SetTypeContext>(_ctx, getState());
  enterRule(_localctx, 80, pascalParser::RuleSetType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    match(pascalParser::SET);
    setState(441);
    match(pascalParser::OF);
    setState(442);
    baseType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseTypeContext ------------------------------------------------------------------

pascalParser::BaseTypeContext::BaseTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::SimpleTypeContext* pascalParser::BaseTypeContext::simpleType() {
  return getRuleContext<pascalParser::SimpleTypeContext>(0);
}


size_t pascalParser::BaseTypeContext::getRuleIndex() const {
  return pascalParser::RuleBaseType;
}

void pascalParser::BaseTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseType(this);
}

void pascalParser::BaseTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseType(this);
}


std::any pascalParser::BaseTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitBaseType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::BaseTypeContext* pascalParser::baseType() {
  BaseTypeContext *_localctx = _tracker.createInstance<BaseTypeContext>(_ctx, getState());
  enterRule(_localctx, 82, pascalParser::RuleBaseType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(444);
    simpleType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileTypeContext ------------------------------------------------------------------

pascalParser::FileTypeContext::FileTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::FileTypeContext::FILE() {
  return getToken(pascalParser::FILE, 0);
}

tree::TerminalNode* pascalParser::FileTypeContext::OF() {
  return getToken(pascalParser::OF, 0);
}

pascalParser::Type_Context* pascalParser::FileTypeContext::type_() {
  return getRuleContext<pascalParser::Type_Context>(0);
}


size_t pascalParser::FileTypeContext::getRuleIndex() const {
  return pascalParser::RuleFileType;
}

void pascalParser::FileTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFileType(this);
}

void pascalParser::FileTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFileType(this);
}


std::any pascalParser::FileTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitFileType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::FileTypeContext* pascalParser::fileType() {
  FileTypeContext *_localctx = _tracker.createInstance<FileTypeContext>(_ctx, getState());
  enterRule(_localctx, 84, pascalParser::RuleFileType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(450);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(446);
      match(pascalParser::FILE);
      setState(447);
      match(pascalParser::OF);
      setState(448);
      type_();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(449);
      match(pascalParser::FILE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerTypeContext ------------------------------------------------------------------

pascalParser::PointerTypeContext::PointerTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::PointerTypeContext::POINTER() {
  return getToken(pascalParser::POINTER, 0);
}

pascalParser::TypeIdentifierContext* pascalParser::PointerTypeContext::typeIdentifier() {
  return getRuleContext<pascalParser::TypeIdentifierContext>(0);
}


size_t pascalParser::PointerTypeContext::getRuleIndex() const {
  return pascalParser::RulePointerType;
}

void pascalParser::PointerTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerType(this);
}

void pascalParser::PointerTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerType(this);
}


std::any pascalParser::PointerTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitPointerType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::PointerTypeContext* pascalParser::pointerType() {
  PointerTypeContext *_localctx = _tracker.createInstance<PointerTypeContext>(_ctx, getState());
  enterRule(_localctx, 86, pascalParser::RulePointerType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
    match(pascalParser::POINTER);
    setState(453);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationPartContext ------------------------------------------------------------------

pascalParser::VariableDeclarationPartContext::VariableDeclarationPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::VariableDeclarationPartContext::VAR() {
  return getToken(pascalParser::VAR, 0);
}

std::vector<pascalParser::VariableDeclarationContext *> pascalParser::VariableDeclarationPartContext::variableDeclaration() {
  return getRuleContexts<pascalParser::VariableDeclarationContext>();
}

pascalParser::VariableDeclarationContext* pascalParser::VariableDeclarationPartContext::variableDeclaration(size_t i) {
  return getRuleContext<pascalParser::VariableDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::VariableDeclarationPartContext::SEMI() {
  return getTokens(pascalParser::SEMI);
}

tree::TerminalNode* pascalParser::VariableDeclarationPartContext::SEMI(size_t i) {
  return getToken(pascalParser::SEMI, i);
}


size_t pascalParser::VariableDeclarationPartContext::getRuleIndex() const {
  return pascalParser::RuleVariableDeclarationPart;
}

void pascalParser::VariableDeclarationPartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclarationPart(this);
}

void pascalParser::VariableDeclarationPartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclarationPart(this);
}


std::any pascalParser::VariableDeclarationPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitVariableDeclarationPart(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::VariableDeclarationPartContext* pascalParser::variableDeclarationPart() {
  VariableDeclarationPartContext *_localctx = _tracker.createInstance<VariableDeclarationPartContext>(_ctx, getState());
  enterRule(_localctx, 88, pascalParser::RuleVariableDeclarationPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(pascalParser::VAR);
    setState(456);
    variableDeclaration();
    setState(461);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(457);
        match(pascalParser::SEMI);
        setState(458);
        variableDeclaration(); 
      }
      setState(463);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
    setState(464);
    match(pascalParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

pascalParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::IdentifierListContext* pascalParser::VariableDeclarationContext::identifierList() {
  return getRuleContext<pascalParser::IdentifierListContext>(0);
}

tree::TerminalNode* pascalParser::VariableDeclarationContext::COLON() {
  return getToken(pascalParser::COLON, 0);
}

pascalParser::Type_Context* pascalParser::VariableDeclarationContext::type_() {
  return getRuleContext<pascalParser::Type_Context>(0);
}


size_t pascalParser::VariableDeclarationContext::getRuleIndex() const {
  return pascalParser::RuleVariableDeclaration;
}

void pascalParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void pascalParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


std::any pascalParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::VariableDeclarationContext* pascalParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 90, pascalParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(466);
    identifierList();
    setState(467);
    match(pascalParser::COLON);
    setState(468);
    type_();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureAndFunctionDeclarationPartContext ------------------------------------------------------------------

pascalParser::ProcedureAndFunctionDeclarationPartContext::ProcedureAndFunctionDeclarationPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ProcedureOrFunctionDeclarationContext* pascalParser::ProcedureAndFunctionDeclarationPartContext::procedureOrFunctionDeclaration() {
  return getRuleContext<pascalParser::ProcedureOrFunctionDeclarationContext>(0);
}

tree::TerminalNode* pascalParser::ProcedureAndFunctionDeclarationPartContext::SEMI() {
  return getToken(pascalParser::SEMI, 0);
}


size_t pascalParser::ProcedureAndFunctionDeclarationPartContext::getRuleIndex() const {
  return pascalParser::RuleProcedureAndFunctionDeclarationPart;
}

void pascalParser::ProcedureAndFunctionDeclarationPartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedureAndFunctionDeclarationPart(this);
}

void pascalParser::ProcedureAndFunctionDeclarationPartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedureAndFunctionDeclarationPart(this);
}


std::any pascalParser::ProcedureAndFunctionDeclarationPartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitProcedureAndFunctionDeclarationPart(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ProcedureAndFunctionDeclarationPartContext* pascalParser::procedureAndFunctionDeclarationPart() {
  ProcedureAndFunctionDeclarationPartContext *_localctx = _tracker.createInstance<ProcedureAndFunctionDeclarationPartContext>(_ctx, getState());
  enterRule(_localctx, 92, pascalParser::RuleProcedureAndFunctionDeclarationPart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(470);
    procedureOrFunctionDeclaration();
    setState(471);
    match(pascalParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureOrFunctionDeclarationContext ------------------------------------------------------------------

pascalParser::ProcedureOrFunctionDeclarationContext::ProcedureOrFunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ProcedureDeclarationContext* pascalParser::ProcedureOrFunctionDeclarationContext::procedureDeclaration() {
  return getRuleContext<pascalParser::ProcedureDeclarationContext>(0);
}

pascalParser::FunctionDeclarationContext* pascalParser::ProcedureOrFunctionDeclarationContext::functionDeclaration() {
  return getRuleContext<pascalParser::FunctionDeclarationContext>(0);
}


size_t pascalParser::ProcedureOrFunctionDeclarationContext::getRuleIndex() const {
  return pascalParser::RuleProcedureOrFunctionDeclaration;
}

void pascalParser::ProcedureOrFunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedureOrFunctionDeclaration(this);
}

void pascalParser::ProcedureOrFunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedureOrFunctionDeclaration(this);
}


std::any pascalParser::ProcedureOrFunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitProcedureOrFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ProcedureOrFunctionDeclarationContext* pascalParser::procedureOrFunctionDeclaration() {
  ProcedureOrFunctionDeclarationContext *_localctx = _tracker.createInstance<ProcedureOrFunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 94, pascalParser::RuleProcedureOrFunctionDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(475);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::PROCEDURE: {
        enterOuterAlt(_localctx, 1);
        setState(473);
        procedureDeclaration();
        break;
      }

      case pascalParser::FUNCTION: {
        enterOuterAlt(_localctx, 2);
        setState(474);
        functionDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureDeclarationContext ------------------------------------------------------------------

pascalParser::ProcedureDeclarationContext::ProcedureDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::ProcedureDeclarationContext::PROCEDURE() {
  return getToken(pascalParser::PROCEDURE, 0);
}

pascalParser::IdentifierContext* pascalParser::ProcedureDeclarationContext::identifier() {
  return getRuleContext<pascalParser::IdentifierContext>(0);
}

tree::TerminalNode* pascalParser::ProcedureDeclarationContext::SEMI() {
  return getToken(pascalParser::SEMI, 0);
}

pascalParser::BlockContext* pascalParser::ProcedureDeclarationContext::block() {
  return getRuleContext<pascalParser::BlockContext>(0);
}

pascalParser::FormalParameterListContext* pascalParser::ProcedureDeclarationContext::formalParameterList() {
  return getRuleContext<pascalParser::FormalParameterListContext>(0);
}


size_t pascalParser::ProcedureDeclarationContext::getRuleIndex() const {
  return pascalParser::RuleProcedureDeclaration;
}

void pascalParser::ProcedureDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedureDeclaration(this);
}

void pascalParser::ProcedureDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedureDeclaration(this);
}


std::any pascalParser::ProcedureDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitProcedureDeclaration(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ProcedureDeclarationContext* pascalParser::procedureDeclaration() {
  ProcedureDeclarationContext *_localctx = _tracker.createInstance<ProcedureDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 96, pascalParser::RuleProcedureDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(477);
    match(pascalParser::PROCEDURE);
    setState(478);
    identifier();
    setState(480);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pascalParser::LPAREN) {
      setState(479);
      formalParameterList();
    }
    setState(482);
    match(pascalParser::SEMI);
    setState(483);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterListContext ------------------------------------------------------------------

pascalParser::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::FormalParameterListContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

std::vector<pascalParser::FormalParameterSectionContext *> pascalParser::FormalParameterListContext::formalParameterSection() {
  return getRuleContexts<pascalParser::FormalParameterSectionContext>();
}

pascalParser::FormalParameterSectionContext* pascalParser::FormalParameterListContext::formalParameterSection(size_t i) {
  return getRuleContext<pascalParser::FormalParameterSectionContext>(i);
}

tree::TerminalNode* pascalParser::FormalParameterListContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> pascalParser::FormalParameterListContext::SEMI() {
  return getTokens(pascalParser::SEMI);
}

tree::TerminalNode* pascalParser::FormalParameterListContext::SEMI(size_t i) {
  return getToken(pascalParser::SEMI, i);
}


size_t pascalParser::FormalParameterListContext::getRuleIndex() const {
  return pascalParser::RuleFormalParameterList;
}

void pascalParser::FormalParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterList(this);
}

void pascalParser::FormalParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterList(this);
}


std::any pascalParser::FormalParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitFormalParameterList(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::FormalParameterListContext* pascalParser::formalParameterList() {
  FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 98, pascalParser::RuleFormalParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(485);
    match(pascalParser::LPAREN);
    setState(486);
    formalParameterSection();
    setState(491);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pascalParser::SEMI) {
      setState(487);
      match(pascalParser::SEMI);
      setState(488);
      formalParameterSection();
      setState(493);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(494);
    match(pascalParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterSectionContext ------------------------------------------------------------------

pascalParser::FormalParameterSectionContext::FormalParameterSectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ParameterGroupContext* pascalParser::FormalParameterSectionContext::parameterGroup() {
  return getRuleContext<pascalParser::ParameterGroupContext>(0);
}

tree::TerminalNode* pascalParser::FormalParameterSectionContext::VAR() {
  return getToken(pascalParser::VAR, 0);
}

tree::TerminalNode* pascalParser::FormalParameterSectionContext::FUNCTION() {
  return getToken(pascalParser::FUNCTION, 0);
}

tree::TerminalNode* pascalParser::FormalParameterSectionContext::PROCEDURE() {
  return getToken(pascalParser::PROCEDURE, 0);
}


size_t pascalParser::FormalParameterSectionContext::getRuleIndex() const {
  return pascalParser::RuleFormalParameterSection;
}

void pascalParser::FormalParameterSectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterSection(this);
}

void pascalParser::FormalParameterSectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterSection(this);
}


std::any pascalParser::FormalParameterSectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitFormalParameterSection(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::FormalParameterSectionContext* pascalParser::formalParameterSection() {
  FormalParameterSectionContext *_localctx = _tracker.createInstance<FormalParameterSectionContext>(_ctx, getState());
  enterRule(_localctx, 100, pascalParser::RuleFormalParameterSection);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(503);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::IDENT: {
        enterOuterAlt(_localctx, 1);
        setState(496);
        parameterGroup();
        break;
      }

      case pascalParser::VAR: {
        enterOuterAlt(_localctx, 2);
        setState(497);
        match(pascalParser::VAR);
        setState(498);
        parameterGroup();
        break;
      }

      case pascalParser::FUNCTION: {
        enterOuterAlt(_localctx, 3);
        setState(499);
        match(pascalParser::FUNCTION);
        setState(500);
        parameterGroup();
        break;
      }

      case pascalParser::PROCEDURE: {
        enterOuterAlt(_localctx, 4);
        setState(501);
        match(pascalParser::PROCEDURE);
        setState(502);
        parameterGroup();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterGroupContext ------------------------------------------------------------------

pascalParser::ParameterGroupContext::ParameterGroupContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::IdentifierListContext* pascalParser::ParameterGroupContext::identifierList() {
  return getRuleContext<pascalParser::IdentifierListContext>(0);
}

tree::TerminalNode* pascalParser::ParameterGroupContext::COLON() {
  return getToken(pascalParser::COLON, 0);
}

pascalParser::TypeIdentifierContext* pascalParser::ParameterGroupContext::typeIdentifier() {
  return getRuleContext<pascalParser::TypeIdentifierContext>(0);
}


size_t pascalParser::ParameterGroupContext::getRuleIndex() const {
  return pascalParser::RuleParameterGroup;
}

void pascalParser::ParameterGroupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterGroup(this);
}

void pascalParser::ParameterGroupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterGroup(this);
}


std::any pascalParser::ParameterGroupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitParameterGroup(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ParameterGroupContext* pascalParser::parameterGroup() {
  ParameterGroupContext *_localctx = _tracker.createInstance<ParameterGroupContext>(_ctx, getState());
  enterRule(_localctx, 102, pascalParser::RuleParameterGroup);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(505);
    identifierList();
    setState(506);
    match(pascalParser::COLON);
    setState(507);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

pascalParser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::IdentifierContext *> pascalParser::IdentifierListContext::identifier() {
  return getRuleContexts<pascalParser::IdentifierContext>();
}

pascalParser::IdentifierContext* pascalParser::IdentifierListContext::identifier(size_t i) {
  return getRuleContext<pascalParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::IdentifierListContext::COMMA() {
  return getTokens(pascalParser::COMMA);
}

tree::TerminalNode* pascalParser::IdentifierListContext::COMMA(size_t i) {
  return getToken(pascalParser::COMMA, i);
}


size_t pascalParser::IdentifierListContext::getRuleIndex() const {
  return pascalParser::RuleIdentifierList;
}

void pascalParser::IdentifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierList(this);
}

void pascalParser::IdentifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierList(this);
}


std::any pascalParser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::IdentifierListContext* pascalParser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 104, pascalParser::RuleIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    identifier();
    setState(514);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pascalParser::COMMA) {
      setState(510);
      match(pascalParser::COMMA);
      setState(511);
      identifier();
      setState(516);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstListContext ------------------------------------------------------------------

pascalParser::ConstListContext::ConstListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::ConstantContext *> pascalParser::ConstListContext::constant() {
  return getRuleContexts<pascalParser::ConstantContext>();
}

pascalParser::ConstantContext* pascalParser::ConstListContext::constant(size_t i) {
  return getRuleContext<pascalParser::ConstantContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::ConstListContext::COMMA() {
  return getTokens(pascalParser::COMMA);
}

tree::TerminalNode* pascalParser::ConstListContext::COMMA(size_t i) {
  return getToken(pascalParser::COMMA, i);
}


size_t pascalParser::ConstListContext::getRuleIndex() const {
  return pascalParser::RuleConstList;
}

void pascalParser::ConstListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstList(this);
}

void pascalParser::ConstListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstList(this);
}


std::any pascalParser::ConstListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitConstList(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ConstListContext* pascalParser::constList() {
  ConstListContext *_localctx = _tracker.createInstance<ConstListContext>(_ctx, getState());
  enterRule(_localctx, 106, pascalParser::RuleConstList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(517);
    constant();
    setState(522);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pascalParser::COMMA) {
      setState(518);
      match(pascalParser::COMMA);
      setState(519);
      constant();
      setState(524);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

pascalParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::FunctionDeclarationContext::FUNCTION() {
  return getToken(pascalParser::FUNCTION, 0);
}

pascalParser::IdentifierContext* pascalParser::FunctionDeclarationContext::identifier() {
  return getRuleContext<pascalParser::IdentifierContext>(0);
}

tree::TerminalNode* pascalParser::FunctionDeclarationContext::COLON() {
  return getToken(pascalParser::COLON, 0);
}

pascalParser::ResultTypeContext* pascalParser::FunctionDeclarationContext::resultType() {
  return getRuleContext<pascalParser::ResultTypeContext>(0);
}

tree::TerminalNode* pascalParser::FunctionDeclarationContext::SEMI() {
  return getToken(pascalParser::SEMI, 0);
}

pascalParser::BlockContext* pascalParser::FunctionDeclarationContext::block() {
  return getRuleContext<pascalParser::BlockContext>(0);
}

pascalParser::FormalParameterListContext* pascalParser::FunctionDeclarationContext::formalParameterList() {
  return getRuleContext<pascalParser::FormalParameterListContext>(0);
}


size_t pascalParser::FunctionDeclarationContext::getRuleIndex() const {
  return pascalParser::RuleFunctionDeclaration;
}

void pascalParser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void pascalParser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


std::any pascalParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::FunctionDeclarationContext* pascalParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 108, pascalParser::RuleFunctionDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    match(pascalParser::FUNCTION);
    setState(526);
    identifier();
    setState(528);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pascalParser::LPAREN) {
      setState(527);
      formalParameterList();
    }
    setState(530);
    match(pascalParser::COLON);
    setState(531);
    resultType();
    setState(532);
    match(pascalParser::SEMI);
    setState(533);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResultTypeContext ------------------------------------------------------------------

pascalParser::ResultTypeContext::ResultTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::TypeIdentifierContext* pascalParser::ResultTypeContext::typeIdentifier() {
  return getRuleContext<pascalParser::TypeIdentifierContext>(0);
}


size_t pascalParser::ResultTypeContext::getRuleIndex() const {
  return pascalParser::RuleResultType;
}

void pascalParser::ResultTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResultType(this);
}

void pascalParser::ResultTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResultType(this);
}


std::any pascalParser::ResultTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitResultType(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ResultTypeContext* pascalParser::resultType() {
  ResultTypeContext *_localctx = _tracker.createInstance<ResultTypeContext>(_ctx, getState());
  enterRule(_localctx, 110, pascalParser::RuleResultType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(535);
    typeIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

pascalParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::LabelContext* pascalParser::StatementContext::label() {
  return getRuleContext<pascalParser::LabelContext>(0);
}

tree::TerminalNode* pascalParser::StatementContext::COLON() {
  return getToken(pascalParser::COLON, 0);
}

pascalParser::UnlabelledStatementContext* pascalParser::StatementContext::unlabelledStatement() {
  return getRuleContext<pascalParser::UnlabelledStatementContext>(0);
}


size_t pascalParser::StatementContext::getRuleIndex() const {
  return pascalParser::RuleStatement;
}

void pascalParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void pascalParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any pascalParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::StatementContext* pascalParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 112, pascalParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(542);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::NUM_INT: {
        enterOuterAlt(_localctx, 1);
        setState(537);
        label();
        setState(538);
        match(pascalParser::COLON);
        setState(539);
        unlabelledStatement();
        break;
      }

      case pascalParser::BEGIN:
      case pascalParser::CASE:
      case pascalParser::ELSE:
      case pascalParser::END:
      case pascalParser::FOR:
      case pascalParser::GOTO:
      case pascalParser::IF:
      case pascalParser::REPEAT:
      case pascalParser::UNTIL:
      case pascalParser::WHILE:
      case pascalParser::WITH:
      case pascalParser::SEMI:
      case pascalParser::AT:
      case pascalParser::IDENT: {
        enterOuterAlt(_localctx, 2);
        setState(541);
        unlabelledStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnlabelledStatementContext ------------------------------------------------------------------

pascalParser::UnlabelledStatementContext::UnlabelledStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::SimpleStatementContext* pascalParser::UnlabelledStatementContext::simpleStatement() {
  return getRuleContext<pascalParser::SimpleStatementContext>(0);
}

pascalParser::StructuredStatementContext* pascalParser::UnlabelledStatementContext::structuredStatement() {
  return getRuleContext<pascalParser::StructuredStatementContext>(0);
}


size_t pascalParser::UnlabelledStatementContext::getRuleIndex() const {
  return pascalParser::RuleUnlabelledStatement;
}

void pascalParser::UnlabelledStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnlabelledStatement(this);
}

void pascalParser::UnlabelledStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnlabelledStatement(this);
}


std::any pascalParser::UnlabelledStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitUnlabelledStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::UnlabelledStatementContext* pascalParser::unlabelledStatement() {
  UnlabelledStatementContext *_localctx = _tracker.createInstance<UnlabelledStatementContext>(_ctx, getState());
  enterRule(_localctx, 114, pascalParser::RuleUnlabelledStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(546);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::ELSE:
      case pascalParser::END:
      case pascalParser::GOTO:
      case pascalParser::UNTIL:
      case pascalParser::SEMI:
      case pascalParser::AT:
      case pascalParser::IDENT: {
        enterOuterAlt(_localctx, 1);
        setState(544);
        simpleStatement();
        break;
      }

      case pascalParser::BEGIN:
      case pascalParser::CASE:
      case pascalParser::FOR:
      case pascalParser::IF:
      case pascalParser::REPEAT:
      case pascalParser::WHILE:
      case pascalParser::WITH: {
        enterOuterAlt(_localctx, 2);
        setState(545);
        structuredStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleStatementContext ------------------------------------------------------------------

pascalParser::SimpleStatementContext::SimpleStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::AssignmentStatementContext* pascalParser::SimpleStatementContext::assignmentStatement() {
  return getRuleContext<pascalParser::AssignmentStatementContext>(0);
}

pascalParser::ProcedureStatementContext* pascalParser::SimpleStatementContext::procedureStatement() {
  return getRuleContext<pascalParser::ProcedureStatementContext>(0);
}

pascalParser::GotoStatementContext* pascalParser::SimpleStatementContext::gotoStatement() {
  return getRuleContext<pascalParser::GotoStatementContext>(0);
}

pascalParser::EmptyStatement_Context* pascalParser::SimpleStatementContext::emptyStatement_() {
  return getRuleContext<pascalParser::EmptyStatement_Context>(0);
}


size_t pascalParser::SimpleStatementContext::getRuleIndex() const {
  return pascalParser::RuleSimpleStatement;
}

void pascalParser::SimpleStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleStatement(this);
}

void pascalParser::SimpleStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleStatement(this);
}


std::any pascalParser::SimpleStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitSimpleStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::SimpleStatementContext* pascalParser::simpleStatement() {
  SimpleStatementContext *_localctx = _tracker.createInstance<SimpleStatementContext>(_ctx, getState());
  enterRule(_localctx, 116, pascalParser::RuleSimpleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(552);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(548);
      assignmentStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(549);
      procedureStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(550);
      gotoStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(551);
      emptyStatement_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

pascalParser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::VariableContext* pascalParser::AssignmentStatementContext::variable() {
  return getRuleContext<pascalParser::VariableContext>(0);
}

tree::TerminalNode* pascalParser::AssignmentStatementContext::ASSIGN() {
  return getToken(pascalParser::ASSIGN, 0);
}

pascalParser::ExpressionContext* pascalParser::AssignmentStatementContext::expression() {
  return getRuleContext<pascalParser::ExpressionContext>(0);
}


size_t pascalParser::AssignmentStatementContext::getRuleIndex() const {
  return pascalParser::RuleAssignmentStatement;
}

void pascalParser::AssignmentStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStatement(this);
}

void pascalParser::AssignmentStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStatement(this);
}


std::any pascalParser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::AssignmentStatementContext* pascalParser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 118, pascalParser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(554);
    variable();
    setState(555);
    match(pascalParser::ASSIGN);
    setState(556);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

pascalParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::VariableContext::AT() {
  return getToken(pascalParser::AT, 0);
}

std::vector<pascalParser::IdentifierContext *> pascalParser::VariableContext::identifier() {
  return getRuleContexts<pascalParser::IdentifierContext>();
}

pascalParser::IdentifierContext* pascalParser::VariableContext::identifier(size_t i) {
  return getRuleContext<pascalParser::IdentifierContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::VariableContext::LBRACK() {
  return getTokens(pascalParser::LBRACK);
}

tree::TerminalNode* pascalParser::VariableContext::LBRACK(size_t i) {
  return getToken(pascalParser::LBRACK, i);
}

std::vector<pascalParser::ExpressionContext *> pascalParser::VariableContext::expression() {
  return getRuleContexts<pascalParser::ExpressionContext>();
}

pascalParser::ExpressionContext* pascalParser::VariableContext::expression(size_t i) {
  return getRuleContext<pascalParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::VariableContext::RBRACK() {
  return getTokens(pascalParser::RBRACK);
}

tree::TerminalNode* pascalParser::VariableContext::RBRACK(size_t i) {
  return getToken(pascalParser::RBRACK, i);
}

std::vector<tree::TerminalNode *> pascalParser::VariableContext::LBRACK2() {
  return getTokens(pascalParser::LBRACK2);
}

tree::TerminalNode* pascalParser::VariableContext::LBRACK2(size_t i) {
  return getToken(pascalParser::LBRACK2, i);
}

std::vector<tree::TerminalNode *> pascalParser::VariableContext::RBRACK2() {
  return getTokens(pascalParser::RBRACK2);
}

tree::TerminalNode* pascalParser::VariableContext::RBRACK2(size_t i) {
  return getToken(pascalParser::RBRACK2, i);
}

std::vector<tree::TerminalNode *> pascalParser::VariableContext::DOT() {
  return getTokens(pascalParser::DOT);
}

tree::TerminalNode* pascalParser::VariableContext::DOT(size_t i) {
  return getToken(pascalParser::DOT, i);
}

std::vector<tree::TerminalNode *> pascalParser::VariableContext::POINTER() {
  return getTokens(pascalParser::POINTER);
}

tree::TerminalNode* pascalParser::VariableContext::POINTER(size_t i) {
  return getToken(pascalParser::POINTER, i);
}

std::vector<tree::TerminalNode *> pascalParser::VariableContext::COMMA() {
  return getTokens(pascalParser::COMMA);
}

tree::TerminalNode* pascalParser::VariableContext::COMMA(size_t i) {
  return getToken(pascalParser::COMMA, i);
}


size_t pascalParser::VariableContext::getRuleIndex() const {
  return pascalParser::RuleVariable;
}

void pascalParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void pascalParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}


std::any pascalParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::VariableContext* pascalParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 120, pascalParser::RuleVariable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(561);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::AT: {
        setState(558);
        match(pascalParser::AT);
        setState(559);
        identifier();
        break;
      }

      case pascalParser::IDENT: {
        setState(560);
        identifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(590);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & -6485183463413514240) != 0)) {
      setState(588);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case pascalParser::LBRACK: {
          setState(563);
          match(pascalParser::LBRACK);
          setState(564);
          expression();
          setState(569);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == pascalParser::COMMA) {
            setState(565);
            match(pascalParser::COMMA);
            setState(566);
            expression();
            setState(571);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(572);
          match(pascalParser::RBRACK);
          break;
        }

        case pascalParser::LBRACK2: {
          setState(574);
          match(pascalParser::LBRACK2);
          setState(575);
          expression();
          setState(580);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == pascalParser::COMMA) {
            setState(576);
            match(pascalParser::COMMA);
            setState(577);
            expression();
            setState(582);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(583);
          match(pascalParser::RBRACK2);
          break;
        }

        case pascalParser::DOT: {
          setState(585);
          match(pascalParser::DOT);
          setState(586);
          identifier();
          break;
        }

        case pascalParser::POINTER: {
          setState(587);
          match(pascalParser::POINTER);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(592);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

pascalParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::SimpleExpressionContext* pascalParser::ExpressionContext::simpleExpression() {
  return getRuleContext<pascalParser::SimpleExpressionContext>(0);
}

pascalParser::RelationaloperatorContext* pascalParser::ExpressionContext::relationaloperator() {
  return getRuleContext<pascalParser::RelationaloperatorContext>(0);
}

pascalParser::ExpressionContext* pascalParser::ExpressionContext::expression() {
  return getRuleContext<pascalParser::ExpressionContext>(0);
}


size_t pascalParser::ExpressionContext::getRuleIndex() const {
  return pascalParser::RuleExpression;
}

void pascalParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void pascalParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any pascalParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ExpressionContext* pascalParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 122, pascalParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(593);
    simpleExpression();
    setState(597);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35465847066066944) != 0)) {
      setState(594);
      relationaloperator();
      setState(595);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationaloperatorContext ------------------------------------------------------------------

pascalParser::RelationaloperatorContext::RelationaloperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::RelationaloperatorContext::EQUAL() {
  return getToken(pascalParser::EQUAL, 0);
}

tree::TerminalNode* pascalParser::RelationaloperatorContext::NOT_EQUAL() {
  return getToken(pascalParser::NOT_EQUAL, 0);
}

tree::TerminalNode* pascalParser::RelationaloperatorContext::LT() {
  return getToken(pascalParser::LT, 0);
}

tree::TerminalNode* pascalParser::RelationaloperatorContext::LE() {
  return getToken(pascalParser::LE, 0);
}

tree::TerminalNode* pascalParser::RelationaloperatorContext::GE() {
  return getToken(pascalParser::GE, 0);
}

tree::TerminalNode* pascalParser::RelationaloperatorContext::GT() {
  return getToken(pascalParser::GT, 0);
}

tree::TerminalNode* pascalParser::RelationaloperatorContext::IN() {
  return getToken(pascalParser::IN, 0);
}


size_t pascalParser::RelationaloperatorContext::getRuleIndex() const {
  return pascalParser::RuleRelationaloperator;
}

void pascalParser::RelationaloperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationaloperator(this);
}

void pascalParser::RelationaloperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationaloperator(this);
}


std::any pascalParser::RelationaloperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitRelationaloperator(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::RelationaloperatorContext* pascalParser::relationaloperator() {
  RelationaloperatorContext *_localctx = _tracker.createInstance<RelationaloperatorContext>(_ctx, getState());
  enterRule(_localctx, 124, pascalParser::RuleRelationaloperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(599);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 35465847066066944) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleExpressionContext ------------------------------------------------------------------

pascalParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::TermContext* pascalParser::SimpleExpressionContext::term() {
  return getRuleContext<pascalParser::TermContext>(0);
}

pascalParser::AdditiveoperatorContext* pascalParser::SimpleExpressionContext::additiveoperator() {
  return getRuleContext<pascalParser::AdditiveoperatorContext>(0);
}

pascalParser::SimpleExpressionContext* pascalParser::SimpleExpressionContext::simpleExpression() {
  return getRuleContext<pascalParser::SimpleExpressionContext>(0);
}


size_t pascalParser::SimpleExpressionContext::getRuleIndex() const {
  return pascalParser::RuleSimpleExpression;
}

void pascalParser::SimpleExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleExpression(this);
}

void pascalParser::SimpleExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleExpression(this);
}


std::any pascalParser::SimpleExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitSimpleExpression(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::SimpleExpressionContext* pascalParser::simpleExpression() {
  SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 126, pascalParser::RuleSimpleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(601);
    term();
    setState(605);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6597136875520) != 0)) {
      setState(602);
      additiveoperator();
      setState(603);
      simpleExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveoperatorContext ------------------------------------------------------------------

pascalParser::AdditiveoperatorContext::AdditiveoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::AdditiveoperatorContext::PLUS() {
  return getToken(pascalParser::PLUS, 0);
}

tree::TerminalNode* pascalParser::AdditiveoperatorContext::MINUS() {
  return getToken(pascalParser::MINUS, 0);
}

tree::TerminalNode* pascalParser::AdditiveoperatorContext::OR() {
  return getToken(pascalParser::OR, 0);
}


size_t pascalParser::AdditiveoperatorContext::getRuleIndex() const {
  return pascalParser::RuleAdditiveoperator;
}

void pascalParser::AdditiveoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveoperator(this);
}

void pascalParser::AdditiveoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveoperator(this);
}


std::any pascalParser::AdditiveoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitAdditiveoperator(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::AdditiveoperatorContext* pascalParser::additiveoperator() {
  AdditiveoperatorContext *_localctx = _tracker.createInstance<AdditiveoperatorContext>(_ctx, getState());
  enterRule(_localctx, 128, pascalParser::RuleAdditiveoperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(607);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6597136875520) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

pascalParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::SignedFactorContext* pascalParser::TermContext::signedFactor() {
  return getRuleContext<pascalParser::SignedFactorContext>(0);
}

pascalParser::MultiplicativeoperatorContext* pascalParser::TermContext::multiplicativeoperator() {
  return getRuleContext<pascalParser::MultiplicativeoperatorContext>(0);
}

pascalParser::TermContext* pascalParser::TermContext::term() {
  return getRuleContext<pascalParser::TermContext>(0);
}


size_t pascalParser::TermContext::getRuleIndex() const {
  return pascalParser::RuleTerm;
}

void pascalParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void pascalParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}


std::any pascalParser::TermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitTerm(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::TermContext* pascalParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 130, pascalParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(609);
    signedFactor();
    setState(613);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 26388283261442) != 0)) {
      setState(610);
      multiplicativeoperator();
      setState(611);
      term();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeoperatorContext ------------------------------------------------------------------

pascalParser::MultiplicativeoperatorContext::MultiplicativeoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::MultiplicativeoperatorContext::STAR() {
  return getToken(pascalParser::STAR, 0);
}

tree::TerminalNode* pascalParser::MultiplicativeoperatorContext::SLASH() {
  return getToken(pascalParser::SLASH, 0);
}

tree::TerminalNode* pascalParser::MultiplicativeoperatorContext::DIV() {
  return getToken(pascalParser::DIV, 0);
}

tree::TerminalNode* pascalParser::MultiplicativeoperatorContext::MOD() {
  return getToken(pascalParser::MOD, 0);
}

tree::TerminalNode* pascalParser::MultiplicativeoperatorContext::AND() {
  return getToken(pascalParser::AND, 0);
}


size_t pascalParser::MultiplicativeoperatorContext::getRuleIndex() const {
  return pascalParser::RuleMultiplicativeoperator;
}

void pascalParser::MultiplicativeoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeoperator(this);
}

void pascalParser::MultiplicativeoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeoperator(this);
}


std::any pascalParser::MultiplicativeoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeoperator(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::MultiplicativeoperatorContext* pascalParser::multiplicativeoperator() {
  MultiplicativeoperatorContext *_localctx = _tracker.createInstance<MultiplicativeoperatorContext>(_ctx, getState());
  enterRule(_localctx, 132, pascalParser::RuleMultiplicativeoperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(615);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 26388283261442) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignedFactorContext ------------------------------------------------------------------

pascalParser::SignedFactorContext::SignedFactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::FactorContext* pascalParser::SignedFactorContext::factor() {
  return getRuleContext<pascalParser::FactorContext>(0);
}

tree::TerminalNode* pascalParser::SignedFactorContext::PLUS() {
  return getToken(pascalParser::PLUS, 0);
}

tree::TerminalNode* pascalParser::SignedFactorContext::MINUS() {
  return getToken(pascalParser::MINUS, 0);
}


size_t pascalParser::SignedFactorContext::getRuleIndex() const {
  return pascalParser::RuleSignedFactor;
}

void pascalParser::SignedFactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignedFactor(this);
}

void pascalParser::SignedFactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignedFactor(this);
}


std::any pascalParser::SignedFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitSignedFactor(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::SignedFactorContext* pascalParser::signedFactor() {
  SignedFactorContext *_localctx = _tracker.createInstance<SignedFactorContext>(_ctx, getState());
  enterRule(_localctx, 134, pascalParser::RuleSignedFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(618);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pascalParser::PLUS

    || _la == pascalParser::MINUS) {
      setState(617);
      _la = _input->LA(1);
      if (!(_la == pascalParser::PLUS

      || _la == pascalParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(620);
    factor();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

pascalParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::VariableContext* pascalParser::FactorContext::variable() {
  return getRuleContext<pascalParser::VariableContext>(0);
}

tree::TerminalNode* pascalParser::FactorContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

pascalParser::ExpressionContext* pascalParser::FactorContext::expression() {
  return getRuleContext<pascalParser::ExpressionContext>(0);
}

tree::TerminalNode* pascalParser::FactorContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}

pascalParser::FunctionDesignatorContext* pascalParser::FactorContext::functionDesignator() {
  return getRuleContext<pascalParser::FunctionDesignatorContext>(0);
}

pascalParser::UnsignedConstantContext* pascalParser::FactorContext::unsignedConstant() {
  return getRuleContext<pascalParser::UnsignedConstantContext>(0);
}

pascalParser::Set_Context* pascalParser::FactorContext::set_() {
  return getRuleContext<pascalParser::Set_Context>(0);
}

tree::TerminalNode* pascalParser::FactorContext::NOT() {
  return getToken(pascalParser::NOT, 0);
}

pascalParser::FactorContext* pascalParser::FactorContext::factor() {
  return getRuleContext<pascalParser::FactorContext>(0);
}

pascalParser::Bool_Context* pascalParser::FactorContext::bool_() {
  return getRuleContext<pascalParser::Bool_Context>(0);
}


size_t pascalParser::FactorContext::getRuleIndex() const {
  return pascalParser::RuleFactor;
}

void pascalParser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void pascalParser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}


std::any pascalParser::FactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitFactor(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::FactorContext* pascalParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 136, pascalParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(633);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(622);
      variable();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(623);
      match(pascalParser::LPAREN);
      setState(624);
      expression();
      setState(625);
      match(pascalParser::RPAREN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(627);
      functionDesignator();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(628);
      unsignedConstant();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(629);
      set_();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(630);
      match(pascalParser::NOT);
      setState(631);
      factor();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(632);
      bool_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnsignedConstantContext ------------------------------------------------------------------

pascalParser::UnsignedConstantContext::UnsignedConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::UnsignedNumberContext* pascalParser::UnsignedConstantContext::unsignedNumber() {
  return getRuleContext<pascalParser::UnsignedNumberContext>(0);
}

pascalParser::ConstantChrContext* pascalParser::UnsignedConstantContext::constantChr() {
  return getRuleContext<pascalParser::ConstantChrContext>(0);
}

pascalParser::StringContext* pascalParser::UnsignedConstantContext::string() {
  return getRuleContext<pascalParser::StringContext>(0);
}

tree::TerminalNode* pascalParser::UnsignedConstantContext::NIL() {
  return getToken(pascalParser::NIL, 0);
}


size_t pascalParser::UnsignedConstantContext::getRuleIndex() const {
  return pascalParser::RuleUnsignedConstant;
}

void pascalParser::UnsignedConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnsignedConstant(this);
}

void pascalParser::UnsignedConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnsignedConstant(this);
}


std::any pascalParser::UnsignedConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitUnsignedConstant(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::UnsignedConstantContext* pascalParser::unsignedConstant() {
  UnsignedConstantContext *_localctx = _tracker.createInstance<UnsignedConstantContext>(_ctx, getState());
  enterRule(_localctx, 138, pascalParser::RuleUnsignedConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(639);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::NUM_INT:
      case pascalParser::NUM_REAL: {
        enterOuterAlt(_localctx, 1);
        setState(635);
        unsignedNumber();
        break;
      }

      case pascalParser::CHR: {
        enterOuterAlt(_localctx, 2);
        setState(636);
        constantChr();
        break;
      }

      case pascalParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 3);
        setState(637);
        string();
        break;
      }

      case pascalParser::NIL: {
        enterOuterAlt(_localctx, 4);
        setState(638);
        match(pascalParser::NIL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDesignatorContext ------------------------------------------------------------------

pascalParser::FunctionDesignatorContext::FunctionDesignatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::IdentifierContext* pascalParser::FunctionDesignatorContext::identifier() {
  return getRuleContext<pascalParser::IdentifierContext>(0);
}

tree::TerminalNode* pascalParser::FunctionDesignatorContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

pascalParser::ParameterListContext* pascalParser::FunctionDesignatorContext::parameterList() {
  return getRuleContext<pascalParser::ParameterListContext>(0);
}

tree::TerminalNode* pascalParser::FunctionDesignatorContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}


size_t pascalParser::FunctionDesignatorContext::getRuleIndex() const {
  return pascalParser::RuleFunctionDesignator;
}

void pascalParser::FunctionDesignatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDesignator(this);
}

void pascalParser::FunctionDesignatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDesignator(this);
}


std::any pascalParser::FunctionDesignatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitFunctionDesignator(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::FunctionDesignatorContext* pascalParser::functionDesignator() {
  FunctionDesignatorContext *_localctx = _tracker.createInstance<FunctionDesignatorContext>(_ctx, getState());
  enterRule(_localctx, 140, pascalParser::RuleFunctionDesignator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(641);
    identifier();
    setState(642);
    match(pascalParser::LPAREN);
    setState(643);
    parameterList();
    setState(644);
    match(pascalParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

pascalParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::ActualParameterContext *> pascalParser::ParameterListContext::actualParameter() {
  return getRuleContexts<pascalParser::ActualParameterContext>();
}

pascalParser::ActualParameterContext* pascalParser::ParameterListContext::actualParameter(size_t i) {
  return getRuleContext<pascalParser::ActualParameterContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::ParameterListContext::COMMA() {
  return getTokens(pascalParser::COMMA);
}

tree::TerminalNode* pascalParser::ParameterListContext::COMMA(size_t i) {
  return getToken(pascalParser::COMMA, i);
}


size_t pascalParser::ParameterListContext::getRuleIndex() const {
  return pascalParser::RuleParameterList;
}

void pascalParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void pascalParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}


std::any pascalParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ParameterListContext* pascalParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 142, pascalParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(646);
    actualParameter();
    setState(651);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pascalParser::COMMA) {
      setState(647);
      match(pascalParser::COMMA);
      setState(648);
      actualParameter();
      setState(653);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_Context ------------------------------------------------------------------

pascalParser::Set_Context::Set_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::Set_Context::LBRACK() {
  return getToken(pascalParser::LBRACK, 0);
}

pascalParser::ElementListContext* pascalParser::Set_Context::elementList() {
  return getRuleContext<pascalParser::ElementListContext>(0);
}

tree::TerminalNode* pascalParser::Set_Context::RBRACK() {
  return getToken(pascalParser::RBRACK, 0);
}

tree::TerminalNode* pascalParser::Set_Context::LBRACK2() {
  return getToken(pascalParser::LBRACK2, 0);
}

tree::TerminalNode* pascalParser::Set_Context::RBRACK2() {
  return getToken(pascalParser::RBRACK2, 0);
}


size_t pascalParser::Set_Context::getRuleIndex() const {
  return pascalParser::RuleSet_;
}

void pascalParser::Set_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet_(this);
}

void pascalParser::Set_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet_(this);
}


std::any pascalParser::Set_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitSet_(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Set_Context* pascalParser::set_() {
  Set_Context *_localctx = _tracker.createInstance<Set_Context>(_ctx, getState());
  enterRule(_localctx, 144, pascalParser::RuleSet_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(662);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::LBRACK: {
        enterOuterAlt(_localctx, 1);
        setState(654);
        match(pascalParser::LBRACK);
        setState(655);
        elementList();
        setState(656);
        match(pascalParser::RBRACK);
        break;
      }

      case pascalParser::LBRACK2: {
        enterOuterAlt(_localctx, 2);
        setState(658);
        match(pascalParser::LBRACK2);
        setState(659);
        elementList();
        setState(660);
        match(pascalParser::RBRACK2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementListContext ------------------------------------------------------------------

pascalParser::ElementListContext::ElementListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::ElementContext *> pascalParser::ElementListContext::element() {
  return getRuleContexts<pascalParser::ElementContext>();
}

pascalParser::ElementContext* pascalParser::ElementListContext::element(size_t i) {
  return getRuleContext<pascalParser::ElementContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::ElementListContext::COMMA() {
  return getTokens(pascalParser::COMMA);
}

tree::TerminalNode* pascalParser::ElementListContext::COMMA(size_t i) {
  return getToken(pascalParser::COMMA, i);
}


size_t pascalParser::ElementListContext::getRuleIndex() const {
  return pascalParser::RuleElementList;
}

void pascalParser::ElementListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElementList(this);
}

void pascalParser::ElementListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElementList(this);
}


std::any pascalParser::ElementListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitElementList(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ElementListContext* pascalParser::elementList() {
  ElementListContext *_localctx = _tracker.createInstance<ElementListContext>(_ctx, getState());
  enterRule(_localctx, 146, pascalParser::RuleElementList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(673);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::CHR:
      case pascalParser::NIL:
      case pascalParser::NOT:
      case pascalParser::PLUS:
      case pascalParser::MINUS:
      case pascalParser::LPAREN:
      case pascalParser::LBRACK:
      case pascalParser::LBRACK2:
      case pascalParser::AT:
      case pascalParser::TRUE:
      case pascalParser::FALSE:
      case pascalParser::IDENT:
      case pascalParser::STRING_LITERAL:
      case pascalParser::NUM_INT:
      case pascalParser::NUM_REAL: {
        enterOuterAlt(_localctx, 1);
        setState(664);
        element();
        setState(669);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == pascalParser::COMMA) {
          setState(665);
          match(pascalParser::COMMA);
          setState(666);
          element();
          setState(671);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case pascalParser::RBRACK:
      case pascalParser::RBRACK2: {
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElementContext ------------------------------------------------------------------

pascalParser::ElementContext::ElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::ExpressionContext *> pascalParser::ElementContext::expression() {
  return getRuleContexts<pascalParser::ExpressionContext>();
}

pascalParser::ExpressionContext* pascalParser::ElementContext::expression(size_t i) {
  return getRuleContext<pascalParser::ExpressionContext>(i);
}

tree::TerminalNode* pascalParser::ElementContext::DOTDOT() {
  return getToken(pascalParser::DOTDOT, 0);
}


size_t pascalParser::ElementContext::getRuleIndex() const {
  return pascalParser::RuleElement;
}

void pascalParser::ElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElement(this);
}

void pascalParser::ElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElement(this);
}


std::any pascalParser::ElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitElement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ElementContext* pascalParser::element() {
  ElementContext *_localctx = _tracker.createInstance<ElementContext>(_ctx, getState());
  enterRule(_localctx, 148, pascalParser::RuleElement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(675);
    expression();
    setState(678);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pascalParser::DOTDOT) {
      setState(676);
      match(pascalParser::DOTDOT);
      setState(677);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureStatementContext ------------------------------------------------------------------

pascalParser::ProcedureStatementContext::ProcedureStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::IdentifierContext* pascalParser::ProcedureStatementContext::identifier() {
  return getRuleContext<pascalParser::IdentifierContext>(0);
}

tree::TerminalNode* pascalParser::ProcedureStatementContext::LPAREN() {
  return getToken(pascalParser::LPAREN, 0);
}

pascalParser::ParameterListContext* pascalParser::ProcedureStatementContext::parameterList() {
  return getRuleContext<pascalParser::ParameterListContext>(0);
}

tree::TerminalNode* pascalParser::ProcedureStatementContext::RPAREN() {
  return getToken(pascalParser::RPAREN, 0);
}


size_t pascalParser::ProcedureStatementContext::getRuleIndex() const {
  return pascalParser::RuleProcedureStatement;
}

void pascalParser::ProcedureStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedureStatement(this);
}

void pascalParser::ProcedureStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedureStatement(this);
}


std::any pascalParser::ProcedureStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitProcedureStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ProcedureStatementContext* pascalParser::procedureStatement() {
  ProcedureStatementContext *_localctx = _tracker.createInstance<ProcedureStatementContext>(_ctx, getState());
  enterRule(_localctx, 150, pascalParser::RuleProcedureStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(680);
    identifier();
    setState(685);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pascalParser::LPAREN) {
      setState(681);
      match(pascalParser::LPAREN);
      setState(682);
      parameterList();
      setState(683);
      match(pascalParser::RPAREN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActualParameterContext ------------------------------------------------------------------

pascalParser::ActualParameterContext::ActualParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ExpressionContext* pascalParser::ActualParameterContext::expression() {
  return getRuleContext<pascalParser::ExpressionContext>(0);
}

std::vector<pascalParser::ParameterwidthContext *> pascalParser::ActualParameterContext::parameterwidth() {
  return getRuleContexts<pascalParser::ParameterwidthContext>();
}

pascalParser::ParameterwidthContext* pascalParser::ActualParameterContext::parameterwidth(size_t i) {
  return getRuleContext<pascalParser::ParameterwidthContext>(i);
}


size_t pascalParser::ActualParameterContext::getRuleIndex() const {
  return pascalParser::RuleActualParameter;
}

void pascalParser::ActualParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterActualParameter(this);
}

void pascalParser::ActualParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitActualParameter(this);
}


std::any pascalParser::ActualParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitActualParameter(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ActualParameterContext* pascalParser::actualParameter() {
  ActualParameterContext *_localctx = _tracker.createInstance<ActualParameterContext>(_ctx, getState());
  enterRule(_localctx, 152, pascalParser::RuleActualParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(687);
    expression();
    setState(691);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pascalParser::COLON) {
      setState(688);
      parameterwidth();
      setState(693);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterwidthContext ------------------------------------------------------------------

pascalParser::ParameterwidthContext::ParameterwidthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::ParameterwidthContext::COLON() {
  return getToken(pascalParser::COLON, 0);
}

pascalParser::ExpressionContext* pascalParser::ParameterwidthContext::expression() {
  return getRuleContext<pascalParser::ExpressionContext>(0);
}


size_t pascalParser::ParameterwidthContext::getRuleIndex() const {
  return pascalParser::RuleParameterwidth;
}

void pascalParser::ParameterwidthContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterwidth(this);
}

void pascalParser::ParameterwidthContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterwidth(this);
}


std::any pascalParser::ParameterwidthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitParameterwidth(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ParameterwidthContext* pascalParser::parameterwidth() {
  ParameterwidthContext *_localctx = _tracker.createInstance<ParameterwidthContext>(_ctx, getState());
  enterRule(_localctx, 154, pascalParser::RuleParameterwidth);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(694);
    match(pascalParser::COLON);
    setState(695);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStatementContext ------------------------------------------------------------------

pascalParser::GotoStatementContext::GotoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::GotoStatementContext::GOTO() {
  return getToken(pascalParser::GOTO, 0);
}

pascalParser::LabelContext* pascalParser::GotoStatementContext::label() {
  return getRuleContext<pascalParser::LabelContext>(0);
}


size_t pascalParser::GotoStatementContext::getRuleIndex() const {
  return pascalParser::RuleGotoStatement;
}

void pascalParser::GotoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGotoStatement(this);
}

void pascalParser::GotoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGotoStatement(this);
}


std::any pascalParser::GotoStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitGotoStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::GotoStatementContext* pascalParser::gotoStatement() {
  GotoStatementContext *_localctx = _tracker.createInstance<GotoStatementContext>(_ctx, getState());
  enterRule(_localctx, 156, pascalParser::RuleGotoStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(697);
    match(pascalParser::GOTO);
    setState(698);
    label();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EmptyStatement_Context ------------------------------------------------------------------

pascalParser::EmptyStatement_Context::EmptyStatement_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t pascalParser::EmptyStatement_Context::getRuleIndex() const {
  return pascalParser::RuleEmptyStatement_;
}

void pascalParser::EmptyStatement_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmptyStatement_(this);
}

void pascalParser::EmptyStatement_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmptyStatement_(this);
}


std::any pascalParser::EmptyStatement_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitEmptyStatement_(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::EmptyStatement_Context* pascalParser::emptyStatement_() {
  EmptyStatement_Context *_localctx = _tracker.createInstance<EmptyStatement_Context>(_ctx, getState());
  enterRule(_localctx, 158, pascalParser::RuleEmptyStatement_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Empty_Context ------------------------------------------------------------------

pascalParser::Empty_Context::Empty_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t pascalParser::Empty_Context::getRuleIndex() const {
  return pascalParser::RuleEmpty_;
}

void pascalParser::Empty_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEmpty_(this);
}

void pascalParser::Empty_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEmpty_(this);
}


std::any pascalParser::Empty_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitEmpty_(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Empty_Context* pascalParser::empty_() {
  Empty_Context *_localctx = _tracker.createInstance<Empty_Context>(_ctx, getState());
  enterRule(_localctx, 160, pascalParser::RuleEmpty_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructuredStatementContext ------------------------------------------------------------------

pascalParser::StructuredStatementContext::StructuredStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::CompoundStatementContext* pascalParser::StructuredStatementContext::compoundStatement() {
  return getRuleContext<pascalParser::CompoundStatementContext>(0);
}

pascalParser::ConditionalStatementContext* pascalParser::StructuredStatementContext::conditionalStatement() {
  return getRuleContext<pascalParser::ConditionalStatementContext>(0);
}

pascalParser::RepetetiveStatementContext* pascalParser::StructuredStatementContext::repetetiveStatement() {
  return getRuleContext<pascalParser::RepetetiveStatementContext>(0);
}

pascalParser::WithStatementContext* pascalParser::StructuredStatementContext::withStatement() {
  return getRuleContext<pascalParser::WithStatementContext>(0);
}


size_t pascalParser::StructuredStatementContext::getRuleIndex() const {
  return pascalParser::RuleStructuredStatement;
}

void pascalParser::StructuredStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructuredStatement(this);
}

void pascalParser::StructuredStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructuredStatement(this);
}


std::any pascalParser::StructuredStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitStructuredStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::StructuredStatementContext* pascalParser::structuredStatement() {
  StructuredStatementContext *_localctx = _tracker.createInstance<StructuredStatementContext>(_ctx, getState());
  enterRule(_localctx, 162, pascalParser::RuleStructuredStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(708);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::BEGIN: {
        enterOuterAlt(_localctx, 1);
        setState(704);
        compoundStatement();
        break;
      }

      case pascalParser::CASE:
      case pascalParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(705);
        conditionalStatement();
        break;
      }

      case pascalParser::FOR:
      case pascalParser::REPEAT:
      case pascalParser::WHILE: {
        enterOuterAlt(_localctx, 3);
        setState(706);
        repetetiveStatement();
        break;
      }

      case pascalParser::WITH: {
        enterOuterAlt(_localctx, 4);
        setState(707);
        withStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

pascalParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::CompoundStatementContext::BEGIN() {
  return getToken(pascalParser::BEGIN, 0);
}

pascalParser::StatementsContext* pascalParser::CompoundStatementContext::statements() {
  return getRuleContext<pascalParser::StatementsContext>(0);
}

tree::TerminalNode* pascalParser::CompoundStatementContext::END() {
  return getToken(pascalParser::END, 0);
}


size_t pascalParser::CompoundStatementContext::getRuleIndex() const {
  return pascalParser::RuleCompoundStatement;
}

void pascalParser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void pascalParser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}


std::any pascalParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::CompoundStatementContext* pascalParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 164, pascalParser::RuleCompoundStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(710);
    match(pascalParser::BEGIN);
    setState(711);
    statements();
    setState(712);
    match(pascalParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

pascalParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::StatementContext *> pascalParser::StatementsContext::statement() {
  return getRuleContexts<pascalParser::StatementContext>();
}

pascalParser::StatementContext* pascalParser::StatementsContext::statement(size_t i) {
  return getRuleContext<pascalParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::StatementsContext::SEMI() {
  return getTokens(pascalParser::SEMI);
}

tree::TerminalNode* pascalParser::StatementsContext::SEMI(size_t i) {
  return getToken(pascalParser::SEMI, i);
}


size_t pascalParser::StatementsContext::getRuleIndex() const {
  return pascalParser::RuleStatements;
}

void pascalParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void pascalParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}


std::any pascalParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::StatementsContext* pascalParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 166, pascalParser::RuleStatements);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(714);
    statement();
    setState(719);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pascalParser::SEMI) {
      setState(715);
      match(pascalParser::SEMI);
      setState(716);
      statement();
      setState(721);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalStatementContext ------------------------------------------------------------------

pascalParser::ConditionalStatementContext::ConditionalStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::IfStatementContext* pascalParser::ConditionalStatementContext::ifStatement() {
  return getRuleContext<pascalParser::IfStatementContext>(0);
}

pascalParser::CaseStatementContext* pascalParser::ConditionalStatementContext::caseStatement() {
  return getRuleContext<pascalParser::CaseStatementContext>(0);
}


size_t pascalParser::ConditionalStatementContext::getRuleIndex() const {
  return pascalParser::RuleConditionalStatement;
}

void pascalParser::ConditionalStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalStatement(this);
}

void pascalParser::ConditionalStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalStatement(this);
}


std::any pascalParser::ConditionalStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitConditionalStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ConditionalStatementContext* pascalParser::conditionalStatement() {
  ConditionalStatementContext *_localctx = _tracker.createInstance<ConditionalStatementContext>(_ctx, getState());
  enterRule(_localctx, 168, pascalParser::RuleConditionalStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(724);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::IF: {
        enterOuterAlt(_localctx, 1);
        setState(722);
        ifStatement();
        break;
      }

      case pascalParser::CASE: {
        enterOuterAlt(_localctx, 2);
        setState(723);
        caseStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

pascalParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::IfStatementContext::IF() {
  return getToken(pascalParser::IF, 0);
}

pascalParser::ExpressionContext* pascalParser::IfStatementContext::expression() {
  return getRuleContext<pascalParser::ExpressionContext>(0);
}

tree::TerminalNode* pascalParser::IfStatementContext::THEN() {
  return getToken(pascalParser::THEN, 0);
}

std::vector<pascalParser::StatementContext *> pascalParser::IfStatementContext::statement() {
  return getRuleContexts<pascalParser::StatementContext>();
}

pascalParser::StatementContext* pascalParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<pascalParser::StatementContext>(i);
}

tree::TerminalNode* pascalParser::IfStatementContext::ELSE() {
  return getToken(pascalParser::ELSE, 0);
}


size_t pascalParser::IfStatementContext::getRuleIndex() const {
  return pascalParser::RuleIfStatement;
}

void pascalParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void pascalParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


std::any pascalParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::IfStatementContext* pascalParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 170, pascalParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(726);
    match(pascalParser::IF);
    setState(727);
    expression();
    setState(728);
    match(pascalParser::THEN);
    setState(729);
    statement();
    setState(732);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      setState(730);
      match(pascalParser::ELSE);
      setState(731);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseStatementContext ------------------------------------------------------------------

pascalParser::CaseStatementContext::CaseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::CaseStatementContext::CASE() {
  return getToken(pascalParser::CASE, 0);
}

pascalParser::ExpressionContext* pascalParser::CaseStatementContext::expression() {
  return getRuleContext<pascalParser::ExpressionContext>(0);
}

tree::TerminalNode* pascalParser::CaseStatementContext::OF() {
  return getToken(pascalParser::OF, 0);
}

std::vector<pascalParser::CaseListElementContext *> pascalParser::CaseStatementContext::caseListElement() {
  return getRuleContexts<pascalParser::CaseListElementContext>();
}

pascalParser::CaseListElementContext* pascalParser::CaseStatementContext::caseListElement(size_t i) {
  return getRuleContext<pascalParser::CaseListElementContext>(i);
}

tree::TerminalNode* pascalParser::CaseStatementContext::END() {
  return getToken(pascalParser::END, 0);
}

std::vector<tree::TerminalNode *> pascalParser::CaseStatementContext::SEMI() {
  return getTokens(pascalParser::SEMI);
}

tree::TerminalNode* pascalParser::CaseStatementContext::SEMI(size_t i) {
  return getToken(pascalParser::SEMI, i);
}

tree::TerminalNode* pascalParser::CaseStatementContext::ELSE() {
  return getToken(pascalParser::ELSE, 0);
}

pascalParser::StatementsContext* pascalParser::CaseStatementContext::statements() {
  return getRuleContext<pascalParser::StatementsContext>(0);
}


size_t pascalParser::CaseStatementContext::getRuleIndex() const {
  return pascalParser::RuleCaseStatement;
}

void pascalParser::CaseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseStatement(this);
}

void pascalParser::CaseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseStatement(this);
}


std::any pascalParser::CaseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitCaseStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::CaseStatementContext* pascalParser::caseStatement() {
  CaseStatementContext *_localctx = _tracker.createInstance<CaseStatementContext>(_ctx, getState());
  enterRule(_localctx, 172, pascalParser::RuleCaseStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(734);
    match(pascalParser::CASE);
    setState(735);
    expression();
    setState(736);
    match(pascalParser::OF);
    setState(737);
    caseListElement();
    setState(742);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(738);
        match(pascalParser::SEMI);
        setState(739);
        caseListElement(); 
      }
      setState(744);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    }
    setState(748);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pascalParser::SEMI) {
      setState(745);
      match(pascalParser::SEMI);
      setState(746);
      match(pascalParser::ELSE);
      setState(747);
      statements();
    }
    setState(750);
    match(pascalParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseListElementContext ------------------------------------------------------------------

pascalParser::CaseListElementContext::CaseListElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ConstListContext* pascalParser::CaseListElementContext::constList() {
  return getRuleContext<pascalParser::ConstListContext>(0);
}

tree::TerminalNode* pascalParser::CaseListElementContext::COLON() {
  return getToken(pascalParser::COLON, 0);
}

pascalParser::StatementContext* pascalParser::CaseListElementContext::statement() {
  return getRuleContext<pascalParser::StatementContext>(0);
}


size_t pascalParser::CaseListElementContext::getRuleIndex() const {
  return pascalParser::RuleCaseListElement;
}

void pascalParser::CaseListElementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCaseListElement(this);
}

void pascalParser::CaseListElementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCaseListElement(this);
}


std::any pascalParser::CaseListElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitCaseListElement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::CaseListElementContext* pascalParser::caseListElement() {
  CaseListElementContext *_localctx = _tracker.createInstance<CaseListElementContext>(_ctx, getState());
  enterRule(_localctx, 174, pascalParser::RuleCaseListElement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(752);
    constList();
    setState(753);
    match(pascalParser::COLON);
    setState(754);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepetetiveStatementContext ------------------------------------------------------------------

pascalParser::RepetetiveStatementContext::RepetetiveStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::WhileStatementContext* pascalParser::RepetetiveStatementContext::whileStatement() {
  return getRuleContext<pascalParser::WhileStatementContext>(0);
}

pascalParser::RepeatStatementContext* pascalParser::RepetetiveStatementContext::repeatStatement() {
  return getRuleContext<pascalParser::RepeatStatementContext>(0);
}

pascalParser::ForStatementContext* pascalParser::RepetetiveStatementContext::forStatement() {
  return getRuleContext<pascalParser::ForStatementContext>(0);
}


size_t pascalParser::RepetetiveStatementContext::getRuleIndex() const {
  return pascalParser::RuleRepetetiveStatement;
}

void pascalParser::RepetetiveStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepetetiveStatement(this);
}

void pascalParser::RepetetiveStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepetetiveStatement(this);
}


std::any pascalParser::RepetetiveStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitRepetetiveStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::RepetetiveStatementContext* pascalParser::repetetiveStatement() {
  RepetetiveStatementContext *_localctx = _tracker.createInstance<RepetetiveStatementContext>(_ctx, getState());
  enterRule(_localctx, 176, pascalParser::RuleRepetetiveStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(759);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::WHILE: {
        enterOuterAlt(_localctx, 1);
        setState(756);
        whileStatement();
        break;
      }

      case pascalParser::REPEAT: {
        enterOuterAlt(_localctx, 2);
        setState(757);
        repeatStatement();
        break;
      }

      case pascalParser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(758);
        forStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

pascalParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::WhileStatementContext::WHILE() {
  return getToken(pascalParser::WHILE, 0);
}

pascalParser::ExpressionContext* pascalParser::WhileStatementContext::expression() {
  return getRuleContext<pascalParser::ExpressionContext>(0);
}

tree::TerminalNode* pascalParser::WhileStatementContext::DO() {
  return getToken(pascalParser::DO, 0);
}

pascalParser::StatementContext* pascalParser::WhileStatementContext::statement() {
  return getRuleContext<pascalParser::StatementContext>(0);
}


size_t pascalParser::WhileStatementContext::getRuleIndex() const {
  return pascalParser::RuleWhileStatement;
}

void pascalParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void pascalParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


std::any pascalParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::WhileStatementContext* pascalParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 178, pascalParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(761);
    match(pascalParser::WHILE);
    setState(762);
    expression();
    setState(763);
    match(pascalParser::DO);
    setState(764);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepeatStatementContext ------------------------------------------------------------------

pascalParser::RepeatStatementContext::RepeatStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::RepeatStatementContext::REPEAT() {
  return getToken(pascalParser::REPEAT, 0);
}

pascalParser::StatementsContext* pascalParser::RepeatStatementContext::statements() {
  return getRuleContext<pascalParser::StatementsContext>(0);
}

tree::TerminalNode* pascalParser::RepeatStatementContext::UNTIL() {
  return getToken(pascalParser::UNTIL, 0);
}

pascalParser::ExpressionContext* pascalParser::RepeatStatementContext::expression() {
  return getRuleContext<pascalParser::ExpressionContext>(0);
}


size_t pascalParser::RepeatStatementContext::getRuleIndex() const {
  return pascalParser::RuleRepeatStatement;
}

void pascalParser::RepeatStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeatStatement(this);
}

void pascalParser::RepeatStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeatStatement(this);
}


std::any pascalParser::RepeatStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitRepeatStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::RepeatStatementContext* pascalParser::repeatStatement() {
  RepeatStatementContext *_localctx = _tracker.createInstance<RepeatStatementContext>(_ctx, getState());
  enterRule(_localctx, 180, pascalParser::RuleRepeatStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(766);
    match(pascalParser::REPEAT);
    setState(767);
    statements();
    setState(768);
    match(pascalParser::UNTIL);
    setState(769);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

pascalParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::ForStatementContext::FOR() {
  return getToken(pascalParser::FOR, 0);
}

pascalParser::IdentifierContext* pascalParser::ForStatementContext::identifier() {
  return getRuleContext<pascalParser::IdentifierContext>(0);
}

tree::TerminalNode* pascalParser::ForStatementContext::ASSIGN() {
  return getToken(pascalParser::ASSIGN, 0);
}

pascalParser::ForListContext* pascalParser::ForStatementContext::forList() {
  return getRuleContext<pascalParser::ForListContext>(0);
}

tree::TerminalNode* pascalParser::ForStatementContext::DO() {
  return getToken(pascalParser::DO, 0);
}

pascalParser::StatementContext* pascalParser::ForStatementContext::statement() {
  return getRuleContext<pascalParser::StatementContext>(0);
}


size_t pascalParser::ForStatementContext::getRuleIndex() const {
  return pascalParser::RuleForStatement;
}

void pascalParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void pascalParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


std::any pascalParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ForStatementContext* pascalParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 182, pascalParser::RuleForStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(771);
    match(pascalParser::FOR);
    setState(772);
    identifier();
    setState(773);
    match(pascalParser::ASSIGN);
    setState(774);
    forList();
    setState(775);
    match(pascalParser::DO);
    setState(776);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForListContext ------------------------------------------------------------------

pascalParser::ForListContext::ForListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::InitialValueContext* pascalParser::ForListContext::initialValue() {
  return getRuleContext<pascalParser::InitialValueContext>(0);
}

pascalParser::FinalValueContext* pascalParser::ForListContext::finalValue() {
  return getRuleContext<pascalParser::FinalValueContext>(0);
}

tree::TerminalNode* pascalParser::ForListContext::TO() {
  return getToken(pascalParser::TO, 0);
}

tree::TerminalNode* pascalParser::ForListContext::DOWNTO() {
  return getToken(pascalParser::DOWNTO, 0);
}


size_t pascalParser::ForListContext::getRuleIndex() const {
  return pascalParser::RuleForList;
}

void pascalParser::ForListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForList(this);
}

void pascalParser::ForListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForList(this);
}


std::any pascalParser::ForListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitForList(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ForListContext* pascalParser::forList() {
  ForListContext *_localctx = _tracker.createInstance<ForListContext>(_ctx, getState());
  enterRule(_localctx, 184, pascalParser::RuleForList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(778);
    initialValue();
    setState(779);
    _la = _input->LA(1);
    if (!(_la == pascalParser::DOWNTO

    || _la == pascalParser::TO)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(780);
    finalValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitialValueContext ------------------------------------------------------------------

pascalParser::InitialValueContext::InitialValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ExpressionContext* pascalParser::InitialValueContext::expression() {
  return getRuleContext<pascalParser::ExpressionContext>(0);
}


size_t pascalParser::InitialValueContext::getRuleIndex() const {
  return pascalParser::RuleInitialValue;
}

void pascalParser::InitialValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitialValue(this);
}

void pascalParser::InitialValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitialValue(this);
}


std::any pascalParser::InitialValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitInitialValue(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::InitialValueContext* pascalParser::initialValue() {
  InitialValueContext *_localctx = _tracker.createInstance<InitialValueContext>(_ctx, getState());
  enterRule(_localctx, 186, pascalParser::RuleInitialValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(782);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FinalValueContext ------------------------------------------------------------------

pascalParser::FinalValueContext::FinalValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::ExpressionContext* pascalParser::FinalValueContext::expression() {
  return getRuleContext<pascalParser::ExpressionContext>(0);
}


size_t pascalParser::FinalValueContext::getRuleIndex() const {
  return pascalParser::RuleFinalValue;
}

void pascalParser::FinalValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFinalValue(this);
}

void pascalParser::FinalValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFinalValue(this);
}


std::any pascalParser::FinalValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitFinalValue(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::FinalValueContext* pascalParser::finalValue() {
  FinalValueContext *_localctx = _tracker.createInstance<FinalValueContext>(_ctx, getState());
  enterRule(_localctx, 188, pascalParser::RuleFinalValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(784);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WithStatementContext ------------------------------------------------------------------

pascalParser::WithStatementContext::WithStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::WithStatementContext::WITH() {
  return getToken(pascalParser::WITH, 0);
}

pascalParser::RecordVariableListContext* pascalParser::WithStatementContext::recordVariableList() {
  return getRuleContext<pascalParser::RecordVariableListContext>(0);
}

tree::TerminalNode* pascalParser::WithStatementContext::DO() {
  return getToken(pascalParser::DO, 0);
}

pascalParser::StatementContext* pascalParser::WithStatementContext::statement() {
  return getRuleContext<pascalParser::StatementContext>(0);
}


size_t pascalParser::WithStatementContext::getRuleIndex() const {
  return pascalParser::RuleWithStatement;
}

void pascalParser::WithStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWithStatement(this);
}

void pascalParser::WithStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWithStatement(this);
}


std::any pascalParser::WithStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitWithStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::WithStatementContext* pascalParser::withStatement() {
  WithStatementContext *_localctx = _tracker.createInstance<WithStatementContext>(_ctx, getState());
  enterRule(_localctx, 190, pascalParser::RuleWithStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(786);
    match(pascalParser::WITH);
    setState(787);
    recordVariableList();
    setState(788);
    match(pascalParser::DO);
    setState(789);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecordVariableListContext ------------------------------------------------------------------

pascalParser::RecordVariableListContext::RecordVariableListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::VariableContext *> pascalParser::RecordVariableListContext::variable() {
  return getRuleContexts<pascalParser::VariableContext>();
}

pascalParser::VariableContext* pascalParser::RecordVariableListContext::variable(size_t i) {
  return getRuleContext<pascalParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> pascalParser::RecordVariableListContext::COMMA() {
  return getTokens(pascalParser::COMMA);
}

tree::TerminalNode* pascalParser::RecordVariableListContext::COMMA(size_t i) {
  return getToken(pascalParser::COMMA, i);
}


size_t pascalParser::RecordVariableListContext::getRuleIndex() const {
  return pascalParser::RuleRecordVariableList;
}

void pascalParser::RecordVariableListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRecordVariableList(this);
}

void pascalParser::RecordVariableListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<pascalListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRecordVariableList(this);
}


std::any pascalParser::RecordVariableListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitRecordVariableList(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::RecordVariableListContext* pascalParser::recordVariableList() {
  RecordVariableListContext *_localctx = _tracker.createInstance<RecordVariableListContext>(_ctx, getState());
  enterRule(_localctx, 192, pascalParser::RuleRecordVariableList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(791);
    variable();
    setState(796);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pascalParser::COMMA) {
      setState(792);
      match(pascalParser::COMMA);
      setState(793);
      variable();
      setState(798);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void pascalParser::initialize() {
  ::antlr4::internal::call_once(pascalParserOnceFlag, pascalParserInitialize);
}
