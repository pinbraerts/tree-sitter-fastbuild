#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 62
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 1
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym__separator = 2,
  sym__whitespace = 3,
  sym_comment = 4,
  sym__newline = 5,
  sym_decimal = 6,
  sym_filename = 7,
  sym_single_quoted = 8,
  sym_double_quoted = 9,
  sym_escape_sequence = 10,
  anon_sym_SQUOTE = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_DOLLAR = 13,
  anon_sym_DOLLAR2 = 14,
  anon_sym_PERCENT = 15,
  anon_sym_AT = 16,
  anon_sym_STAR = 17,
  anon_sym_POUND = 18,
  anon_sym_define = 19,
  anon_sym_undef = 20,
  anon_sym_import = 21,
  anon_sym_include = 22,
  anon_sym_if = 23,
  sym_preprocessor_else = 24,
  sym_preprocessor_endif = 25,
  sym_preprocessor_once = 26,
  anon_sym_PIPE_PIPE = 27,
  anon_sym_AMP_AMP = 28,
  anon_sym_BANG = 29,
  anon_sym_DOT = 30,
  anon_sym_CARET = 31,
  anon_sym_LBRACE = 32,
  anon_sym_RBRACE = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  anon_sym_function = 38,
  anon_sym_not = 39,
  anon_sym_and = 40,
  anon_sym_or = 41,
  anon_sym_PLUS = 42,
  anon_sym_DASH = 43,
  anon_sym_EQ_EQ = 44,
  anon_sym_BANG_EQ = 45,
  anon_sym_GT = 46,
  anon_sym_LT = 47,
  anon_sym_GT_EQ = 48,
  anon_sym_LT_EQ = 49,
  anon_sym_in = 50,
  anon_sym_EQ = 51,
  anon_sym_If = 52,
  anon_sym_true = 53,
  anon_sym_false = 54,
  anon_sym_Alias = 55,
  anon_sym_Compiler = 56,
  anon_sym_Copy = 57,
  anon_sym_CopyDir = 58,
  anon_sym_CSAssembly = 59,
  anon_sym_DLL = 60,
  anon_sym_Error = 61,
  anon_sym_Exec = 62,
  anon_sym_Executable = 63,
  anon_sym_ForEach = 64,
  anon_sym_Library = 65,
  anon_sym_ListDependencies = 66,
  anon_sym_ObjectList = 67,
  anon_sym_Print = 68,
  anon_sym_RemoveDir = 69,
  anon_sym_Settings = 70,
  anon_sym_Test = 71,
  anon_sym_TextFile = 72,
  anon_sym_Unity = 73,
  anon_sym_Using = 74,
  anon_sym_VCXProject = 75,
  anon_sym_VSProjectExternal = 76,
  anon_sym_VSSolution = 77,
  anon_sym_XCodeProject = 78,
  anon_sym__CURRENT_BFF_DIR_ = 79,
  anon_sym__FASTBUILD_VERSION_STRING_ = 80,
  anon_sym__FASTBUILD_VERSION_ = 81,
  anon_sym__FASTBUILD_EXE_PATH_ = 82,
  anon_sym__WORKING_DIR_ = 83,
  anon_sym___LINUX__ = 84,
  anon_sym___OSX__ = 85,
  anon_sym___WINDOWS__ = 86,
  anon_sym_exists = 87,
  anon_sym_file_exists = 88,
  sym__preprocessor_end = 89,
  sym_source_file = 90,
  sym_string = 91,
  sym__single_inner = 92,
  sym__double_inner = 93,
  sym_interpolation = 94,
  sym_placeholder = 95,
  sym__preprocessor = 96,
  sym_preprocessor_define = 97,
  sym_preprocessor_undef = 98,
  sym_preprocessor_import = 99,
  sym_preprocessor_include = 100,
  sym_preprocessor_if = 101,
  sym_preprocessor_expression = 102,
  sym_preprocessor_or = 103,
  sym_preprocessor_and = 104,
  sym_preprocessor_not = 105,
  sym_environment_variable = 106,
  sym_variable = 107,
  sym_function = 108,
  sym_usage = 109,
  sym_promotion = 110,
  sym_array = 111,
  sym_struct = 112,
  sym_arguments = 113,
  sym_parenthesis = 114,
  sym_function_call = 115,
  sym_function_definition = 116,
  sym_expression = 117,
  sym_not = 118,
  sym_and = 119,
  sym_or = 120,
  sym_add = 121,
  sym_sub = 122,
  sym_compare = 123,
  sym_in = 124,
  sym_not_in = 125,
  sym_assign = 126,
  sym_literal = 127,
  sym_if = 128,
  sym_number = 129,
  sym_boolean = 130,
  sym_builtin_function = 131,
  sym_builtin_variable = 132,
  sym_builtin_macros = 133,
  sym_exists = 134,
  sym_file_exists = 135,
  aux_sym_source_file_repeat1 = 136,
  aux_sym_string_repeat1 = 137,
  aux_sym_string_repeat2 = 138,
  anon_alias_sym_notin = 139,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym__separator] = "_separator",
  [sym__whitespace] = "_whitespace",
  [sym_comment] = "comment",
  [sym__newline] = "_newline",
  [sym_decimal] = "decimal",
  [sym_filename] = "filename",
  [sym_single_quoted] = "single_quoted",
  [sym_double_quoted] = "double_quoted",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AT] = "@",
  [anon_sym_STAR] = "*",
  [anon_sym_POUND] = "#",
  [anon_sym_define] = "define",
  [anon_sym_undef] = "undef",
  [anon_sym_import] = "import",
  [anon_sym_include] = "include",
  [anon_sym_if] = "if",
  [sym_preprocessor_else] = "preprocessor_else",
  [sym_preprocessor_endif] = "preprocessor_endif",
  [sym_preprocessor_once] = "preprocessor_once",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [anon_sym_CARET] = "^",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_function] = "function",
  [anon_sym_not] = "not",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_in] = "in",
  [anon_sym_EQ] = "=",
  [anon_sym_If] = "If",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_Alias] = "Alias",
  [anon_sym_Compiler] = "Compiler",
  [anon_sym_Copy] = "Copy",
  [anon_sym_CopyDir] = "CopyDir",
  [anon_sym_CSAssembly] = "CSAssembly",
  [anon_sym_DLL] = "DLL",
  [anon_sym_Error] = "Error",
  [anon_sym_Exec] = "Exec",
  [anon_sym_Executable] = "Executable",
  [anon_sym_ForEach] = "ForEach",
  [anon_sym_Library] = "Library",
  [anon_sym_ListDependencies] = "ListDependencies",
  [anon_sym_ObjectList] = "ObjectList",
  [anon_sym_Print] = "Print",
  [anon_sym_RemoveDir] = "RemoveDir",
  [anon_sym_Settings] = "Settings",
  [anon_sym_Test] = "Test",
  [anon_sym_TextFile] = "TextFile",
  [anon_sym_Unity] = "Unity",
  [anon_sym_Using] = "Using",
  [anon_sym_VCXProject] = "VCXProject",
  [anon_sym_VSProjectExternal] = "VSProjectExternal",
  [anon_sym_VSSolution] = "VSSolution",
  [anon_sym_XCodeProject] = "XCodeProject",
  [anon_sym__CURRENT_BFF_DIR_] = "_CURRENT_BFF_DIR_",
  [anon_sym__FASTBUILD_VERSION_STRING_] = "_FASTBUILD_VERSION_STRING_",
  [anon_sym__FASTBUILD_VERSION_] = "_FASTBUILD_VERSION_",
  [anon_sym__FASTBUILD_EXE_PATH_] = "_FASTBUILD_EXE_PATH_",
  [anon_sym__WORKING_DIR_] = "_WORKING_DIR_",
  [anon_sym___LINUX__] = "__LINUX__",
  [anon_sym___OSX__] = "__OSX__",
  [anon_sym___WINDOWS__] = "__WINDOWS__",
  [anon_sym_exists] = "exists",
  [anon_sym_file_exists] = "file_exists",
  [sym__preprocessor_end] = "_preprocessor_end",
  [sym_source_file] = "source_file",
  [sym_string] = "string",
  [sym__single_inner] = "_single_inner",
  [sym__double_inner] = "_double_inner",
  [sym_interpolation] = "interpolation",
  [sym_placeholder] = "placeholder",
  [sym__preprocessor] = "_preprocessor",
  [sym_preprocessor_define] = "preprocessor_define",
  [sym_preprocessor_undef] = "preprocessor_undef",
  [sym_preprocessor_import] = "preprocessor_import",
  [sym_preprocessor_include] = "preprocessor_include",
  [sym_preprocessor_if] = "preprocessor_if",
  [sym_preprocessor_expression] = "preprocessor_expression",
  [sym_preprocessor_or] = "or",
  [sym_preprocessor_and] = "and",
  [sym_preprocessor_not] = "not",
  [sym_environment_variable] = "environment_variable",
  [sym_variable] = "variable",
  [sym_function] = "function",
  [sym_usage] = "usage",
  [sym_promotion] = "promotion",
  [sym_array] = "array",
  [sym_struct] = "struct",
  [sym_arguments] = "arguments",
  [sym_parenthesis] = "parenthesis",
  [sym_function_call] = "function_call",
  [sym_function_definition] = "function_definition",
  [sym_expression] = "expression",
  [sym_not] = "not",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_add] = "add",
  [sym_sub] = "sub",
  [sym_compare] = "compare",
  [sym_in] = "in",
  [sym_not_in] = "not_in",
  [sym_assign] = "assign",
  [sym_literal] = "literal",
  [sym_if] = "if",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_builtin_function] = "builtin_function",
  [sym_builtin_variable] = "builtin_variable",
  [sym_builtin_macros] = "builtin_macros",
  [sym_exists] = "exists",
  [sym_file_exists] = "file_exists",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [anon_alias_sym_notin] = "not in",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym__separator] = sym__separator,
  [sym__whitespace] = sym__whitespace,
  [sym_comment] = sym_comment,
  [sym__newline] = sym__newline,
  [sym_decimal] = sym_decimal,
  [sym_filename] = sym_filename,
  [sym_single_quoted] = sym_single_quoted,
  [sym_double_quoted] = sym_double_quoted,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_undef] = anon_sym_undef,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_if] = anon_sym_if,
  [sym_preprocessor_else] = sym_preprocessor_else,
  [sym_preprocessor_endif] = sym_preprocessor_endif,
  [sym_preprocessor_once] = sym_preprocessor_once,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_If] = anon_sym_If,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_Alias] = anon_sym_Alias,
  [anon_sym_Compiler] = anon_sym_Compiler,
  [anon_sym_Copy] = anon_sym_Copy,
  [anon_sym_CopyDir] = anon_sym_CopyDir,
  [anon_sym_CSAssembly] = anon_sym_CSAssembly,
  [anon_sym_DLL] = anon_sym_DLL,
  [anon_sym_Error] = anon_sym_Error,
  [anon_sym_Exec] = anon_sym_Exec,
  [anon_sym_Executable] = anon_sym_Executable,
  [anon_sym_ForEach] = anon_sym_ForEach,
  [anon_sym_Library] = anon_sym_Library,
  [anon_sym_ListDependencies] = anon_sym_ListDependencies,
  [anon_sym_ObjectList] = anon_sym_ObjectList,
  [anon_sym_Print] = anon_sym_Print,
  [anon_sym_RemoveDir] = anon_sym_RemoveDir,
  [anon_sym_Settings] = anon_sym_Settings,
  [anon_sym_Test] = anon_sym_Test,
  [anon_sym_TextFile] = anon_sym_TextFile,
  [anon_sym_Unity] = anon_sym_Unity,
  [anon_sym_Using] = anon_sym_Using,
  [anon_sym_VCXProject] = anon_sym_VCXProject,
  [anon_sym_VSProjectExternal] = anon_sym_VSProjectExternal,
  [anon_sym_VSSolution] = anon_sym_VSSolution,
  [anon_sym_XCodeProject] = anon_sym_XCodeProject,
  [anon_sym__CURRENT_BFF_DIR_] = anon_sym__CURRENT_BFF_DIR_,
  [anon_sym__FASTBUILD_VERSION_STRING_] = anon_sym__FASTBUILD_VERSION_STRING_,
  [anon_sym__FASTBUILD_VERSION_] = anon_sym__FASTBUILD_VERSION_,
  [anon_sym__FASTBUILD_EXE_PATH_] = anon_sym__FASTBUILD_EXE_PATH_,
  [anon_sym__WORKING_DIR_] = anon_sym__WORKING_DIR_,
  [anon_sym___LINUX__] = anon_sym___LINUX__,
  [anon_sym___OSX__] = anon_sym___OSX__,
  [anon_sym___WINDOWS__] = anon_sym___WINDOWS__,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_file_exists] = anon_sym_file_exists,
  [sym__preprocessor_end] = sym__preprocessor_end,
  [sym_source_file] = sym_source_file,
  [sym_string] = sym_string,
  [sym__single_inner] = sym__single_inner,
  [sym__double_inner] = sym__double_inner,
  [sym_interpolation] = sym_interpolation,
  [sym_placeholder] = sym_placeholder,
  [sym__preprocessor] = sym__preprocessor,
  [sym_preprocessor_define] = sym_preprocessor_define,
  [sym_preprocessor_undef] = sym_preprocessor_undef,
  [sym_preprocessor_import] = sym_preprocessor_import,
  [sym_preprocessor_include] = sym_preprocessor_include,
  [sym_preprocessor_if] = sym_preprocessor_if,
  [sym_preprocessor_expression] = sym_preprocessor_expression,
  [sym_preprocessor_or] = sym_or,
  [sym_preprocessor_and] = sym_and,
  [sym_preprocessor_not] = sym_not,
  [sym_environment_variable] = sym_environment_variable,
  [sym_variable] = sym_variable,
  [sym_function] = sym_function,
  [sym_usage] = sym_usage,
  [sym_promotion] = sym_promotion,
  [sym_array] = sym_array,
  [sym_struct] = sym_struct,
  [sym_arguments] = sym_arguments,
  [sym_parenthesis] = sym_parenthesis,
  [sym_function_call] = sym_function_call,
  [sym_function_definition] = sym_function_definition,
  [sym_expression] = sym_expression,
  [sym_not] = sym_not,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [sym_add] = sym_add,
  [sym_sub] = sym_sub,
  [sym_compare] = sym_compare,
  [sym_in] = sym_in,
  [sym_not_in] = sym_not_in,
  [sym_assign] = sym_assign,
  [sym_literal] = sym_literal,
  [sym_if] = sym_if,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_builtin_function] = sym_builtin_function,
  [sym_builtin_variable] = sym_builtin_variable,
  [sym_builtin_macros] = sym_builtin_macros,
  [sym_exists] = sym_exists,
  [sym_file_exists] = sym_file_exists,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [anon_alias_sym_notin] = anon_alias_sym_notin,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_preprocessor_else] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor_endif] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor_once] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_If] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Compiler] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Copy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CopyDir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CSAssembly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DLL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Executable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ForEach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Library] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ListDependencies] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ObjectList] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RemoveDir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Settings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TextFile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VCXProject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VSProjectExternal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VSSolution] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XCodeProject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__CURRENT_BFF_DIR_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__FASTBUILD_VERSION_STRING_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__FASTBUILD_VERSION_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__FASTBUILD_EXE_PATH_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__WORKING_DIR_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___LINUX__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___OSX__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___WINDOWS__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_exists] = {
    .visible = true,
    .named = false,
  },
  [sym__preprocessor_end] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__single_inner] = {
    .visible = false,
    .named = true,
  },
  [sym__double_inner] = {
    .visible = false,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym__preprocessor] = {
    .visible = false,
    .named = true,
  },
  [sym_preprocessor_define] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor_undef] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor_import] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor_include] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor_if] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_preprocessor_or] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor_and] = {
    .visible = true,
    .named = true,
  },
  [sym_preprocessor_not] = {
    .visible = true,
    .named = true,
  },
  [sym_environment_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_function] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_usage] = {
    .visible = true,
    .named = true,
  },
  [sym_promotion] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesis] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_compare] = {
    .visible = true,
    .named = true,
  },
  [sym_in] = {
    .visible = true,
    .named = true,
  },
  [sym_not_in] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_function] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_macros] = {
    .visible = true,
    .named = true,
  },
  [sym_exists] = {
    .visible = true,
    .named = true,
  },
  [sym_file_exists] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_notin] = {
    .visible = true,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_body = 2,
  field_condition = 3,
  field_consequence = 4,
  field_left = 5,
  field_name = 6,
  field_number = 7,
  field_operator = 8,
  field_right = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_left] = "left",
  [field_name] = "name",
  [field_number] = "number",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 4},
  [13] = {.index = 25, .length = 2},
  [14] = {.index = 27, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_body, 1},
    {field_name, 0},
  [4] =
    {field_arguments, 1},
    {field_name, 0},
  [6] =
    {field_condition, 1},
  [7] =
    {field_number, 1},
  [8] =
    {field_body, 2},
    {field_name, 1},
  [10] =
    {field_arguments, 2},
    {field_name, 1},
  [12] =
    {field_arguments, 1},
    {field_body, 2},
    {field_name, 0},
  [15] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [18] =
    {field_arguments, 2},
    {field_body, 3},
    {field_name, 1},
  [21] =
    {field_left, 0},
    {field_operator, 1},
    {field_operator, 2},
    {field_right, 3},
  [25] =
    {field_left, 0},
    {field_right, 2},
  [27] =
    {field_condition, 2},
    {field_consequence, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [12] = {
    [1] = anon_alias_sym_notin,
    [2] = anon_alias_sym_notin,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 73,
  [77] = 74,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 75,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 83,
  [87] = 85,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 88,
  [92] = 92,
  [93] = 32,
  [94] = 52,
  [95] = 95,
  [96] = 31,
  [97] = 97,
  [98] = 47,
  [99] = 43,
  [100] = 42,
  [101] = 41,
  [102] = 33,
  [103] = 59,
  [104] = 104,
  [105] = 95,
  [106] = 30,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 111,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 114,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 125,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 116,
  [134] = 123,
  [135] = 122,
  [136] = 127,
  [137] = 137,
  [138] = 117,
  [139] = 131,
  [140] = 140,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == '^') ADVANCE(65);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '}') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '^') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(36);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '|') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '@') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(43);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '^') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(48);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == ' ' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == '|') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == ' ' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '!') ADVANCE(63);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead == ']') ADVANCE(69);
      if (lookahead == '^') ADVANCE(65);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '|') ADVANCE(11);
      if (lookahead == '}') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__separator);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(13);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_filename);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead == '\n') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(42);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '$' || '\'' < lookahead) &&
          lookahead != '^') ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(42);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_single_quoted);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_single_quoted);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_single_quoted);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_single_quoted);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_double_quoted);
      if (lookahead == '\n') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '^') ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_double_quoted);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '^') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_double_quoted);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '^') ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_double_quoted);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '^') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_double_quoted);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '^') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_double_quoted);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '^') ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_double_quoted);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(44);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_double_quoted);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\\' &&
          lookahead != '^') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_double_quoted);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '^') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(2);
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'I') ADVANCE(6);
      if (lookahead == 'L') ADVANCE(7);
      if (lookahead == 'O') ADVANCE(8);
      if (lookahead == 'P') ADVANCE(9);
      if (lookahead == 'R') ADVANCE(10);
      if (lookahead == 'S') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == 'U') ADVANCE(13);
      if (lookahead == 'V') ADVANCE(14);
      if (lookahead == 'X') ADVANCE(15);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == 'S') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == 'L') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(44);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'F') ADVANCE(46);
      if (lookahead == 'W') ADVANCE(47);
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_If);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(73);
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 35:
      if (lookahead == 'j') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 'x') ADVANCE(80);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'X') ADVANCE(83);
      END_STATE();
    case 43:
      if (lookahead == 'P') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 45:
      if (lookahead == 'U') ADVANCE(87);
      END_STATE();
    case 46:
      if (lookahead == 'A') ADVANCE(88);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(89);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(91);
      if (lookahead == 'W') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 68:
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DLL);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(113);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == 'P') ADVANCE(124);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(128);
      END_STATE();
    case 88:
      if (lookahead == 'S') ADVANCE(129);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(130);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(131);
      END_STATE();
    case 91:
      if (lookahead == 'S') ADVANCE(132);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(133);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_Copy);
      if (lookahead == 'D') ADVANCE(149);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_Exec);
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 115:
      if (lookahead == 'D') ADVANCE(154);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 118:
      if (lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_Test);
      END_STATE();
    case 121:
      if (lookahead == 'F') ADVANCE(159);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(161);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(166);
      END_STATE();
    case 129:
      if (lookahead == 'T') ADVANCE(167);
      END_STATE();
    case 130:
      if (lookahead == 'K') ADVANCE(168);
      END_STATE();
    case 131:
      if (lookahead == 'N') ADVANCE(169);
      END_STATE();
    case 132:
      if (lookahead == 'X') ADVANCE(170);
      END_STATE();
    case 133:
      if (lookahead == 'N') ADVANCE(171);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_preprocessor_else);
      END_STATE();
    case 136:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(176);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_preprocessor_once);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 145:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_Alias);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_Error);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 152:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_Print);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_Unity);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_Using);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 163:
      if (lookahead == 'j') ADVANCE(193);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 165:
      if (lookahead == 'P') ADVANCE(195);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(196);
      END_STATE();
    case 167:
      if (lookahead == 'B') ADVANCE(197);
      END_STATE();
    case 168:
      if (lookahead == 'I') ADVANCE(198);
      END_STATE();
    case 169:
      if (lookahead == 'U') ADVANCE(199);
      END_STATE();
    case 170:
      if (lookahead == '_') ADVANCE(200);
      END_STATE();
    case 171:
      if (lookahead == 'D') ADVANCE(201);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_preprocessor_endif);
      END_STATE();
    case 174:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_undef);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(208);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 185:
      if (lookahead == 'h') ADVANCE(212);
      END_STATE();
    case 186:
      if (lookahead == 'y') ADVANCE(213);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 188:
      if (lookahead == 'L') ADVANCE(215);
      END_STATE();
    case 189:
      if (lookahead == 'D') ADVANCE(216);
      END_STATE();
    case 190:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 192:
      if (lookahead == 'j') ADVANCE(219);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 196:
      if (lookahead == 'N') ADVANCE(223);
      END_STATE();
    case 197:
      if (lookahead == 'U') ADVANCE(224);
      END_STATE();
    case 198:
      if (lookahead == 'N') ADVANCE(225);
      END_STATE();
    case 199:
      if (lookahead == 'X') ADVANCE(226);
      END_STATE();
    case 200:
      if (lookahead == '_') ADVANCE(227);
      END_STATE();
    case 201:
      if (lookahead == 'O') ADVANCE(228);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_exists);
      END_STATE();
    case 204:
      if (lookahead == 'x') ADVANCE(229);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 208:
      if (lookahead == 'b') ADVANCE(232);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_CopyDir);
      END_STATE();
    case 211:
      if (lookahead == 'b') ADVANCE(234);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_ForEach);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_Library);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 223:
      if (lookahead == 'T') ADVANCE(244);
      END_STATE();
    case 224:
      if (lookahead == 'I') ADVANCE(245);
      END_STATE();
    case 225:
      if (lookahead == 'G') ADVANCE(246);
      END_STATE();
    case 226:
      if (lookahead == '_') ADVANCE(247);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym___OSX__);
      END_STATE();
    case 228:
      if (lookahead == 'W') ADVANCE(248);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 232:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_Compiler);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 235:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_Settings);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_TextFile);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 243:
      if (lookahead == 'j') ADVANCE(259);
      END_STATE();
    case 244:
      if (lookahead == '_') ADVANCE(260);
      END_STATE();
    case 245:
      if (lookahead == 'L') ADVANCE(261);
      END_STATE();
    case 246:
      if (lookahead == '_') ADVANCE(262);
      END_STATE();
    case 247:
      if (lookahead == '_') ADVANCE(263);
      END_STATE();
    case 248:
      if (lookahead == 'S') ADVANCE(264);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 251:
      if (lookahead == 'y') ADVANCE(266);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_RemoveDir);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 257:
      if (lookahead == 'E') ADVANCE(271);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 260:
      if (lookahead == 'B') ADVANCE(274);
      END_STATE();
    case 261:
      if (lookahead == 'D') ADVANCE(275);
      END_STATE();
    case 262:
      if (lookahead == 'D') ADVANCE(276);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym___LINUX__);
      END_STATE();
    case 264:
      if (lookahead == '_') ADVANCE(277);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_CSAssembly);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_Executable);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_ObjectList);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_VCXProject);
      END_STATE();
    case 271:
      if (lookahead == 'x') ADVANCE(280);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_VSSolution);
      END_STATE();
    case 273:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 274:
      if (lookahead == 'F') ADVANCE(282);
      END_STATE();
    case 275:
      if (lookahead == '_') ADVANCE(283);
      END_STATE();
    case 276:
      if (lookahead == 'I') ADVANCE(284);
      END_STATE();
    case 277:
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 279:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 282:
      if (lookahead == 'F') ADVANCE(290);
      END_STATE();
    case 283:
      if (lookahead == 'E') ADVANCE(291);
      if (lookahead == 'V') ADVANCE(292);
      END_STATE();
    case 284:
      if (lookahead == 'R') ADVANCE(293);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym___WINDOWS__);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_file_exists);
      END_STATE();
    case 287:
      if (lookahead == 'c') ADVANCE(294);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_XCodeProject);
      END_STATE();
    case 290:
      if (lookahead == '_') ADVANCE(296);
      END_STATE();
    case 291:
      if (lookahead == 'X') ADVANCE(297);
      END_STATE();
    case 292:
      if (lookahead == 'E') ADVANCE(298);
      END_STATE();
    case 293:
      if (lookahead == '_') ADVANCE(299);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 295:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 296:
      if (lookahead == 'D') ADVANCE(302);
      END_STATE();
    case 297:
      if (lookahead == 'E') ADVANCE(303);
      END_STATE();
    case 298:
      if (lookahead == 'R') ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym__WORKING_DIR_);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 302:
      if (lookahead == 'I') ADVANCE(307);
      END_STATE();
    case 303:
      if (lookahead == '_') ADVANCE(308);
      END_STATE();
    case 304:
      if (lookahead == 'S') ADVANCE(309);
      END_STATE();
    case 305:
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 307:
      if (lookahead == 'R') ADVANCE(312);
      END_STATE();
    case 308:
      if (lookahead == 'P') ADVANCE(313);
      END_STATE();
    case 309:
      if (lookahead == 'I') ADVANCE(314);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_ListDependencies);
      END_STATE();
    case 311:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 312:
      if (lookahead == '_') ADVANCE(316);
      END_STATE();
    case 313:
      if (lookahead == 'A') ADVANCE(317);
      END_STATE();
    case 314:
      if (lookahead == 'O') ADVANCE(318);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_VSProjectExternal);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym__CURRENT_BFF_DIR_);
      END_STATE();
    case 317:
      if (lookahead == 'T') ADVANCE(319);
      END_STATE();
    case 318:
      if (lookahead == 'N') ADVANCE(320);
      END_STATE();
    case 319:
      if (lookahead == 'H') ADVANCE(321);
      END_STATE();
    case 320:
      if (lookahead == '_') ADVANCE(322);
      END_STATE();
    case 321:
      if (lookahead == '_') ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym__FASTBUILD_VERSION_);
      if (lookahead == 'S') ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym__FASTBUILD_EXE_PATH_);
      END_STATE();
    case 324:
      if (lookahead == 'T') ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'I') ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'N') ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'G') ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == '_') ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym__FASTBUILD_VERSION_STRING_);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 15, .external_lex_state = 1},
  [94] = {.lex_state = 15, .external_lex_state = 1},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 15, .external_lex_state = 1},
  [97] = {.lex_state = 15, .external_lex_state = 1},
  [98] = {.lex_state = 15, .external_lex_state = 1},
  [99] = {.lex_state = 15, .external_lex_state = 1},
  [100] = {.lex_state = 15, .external_lex_state = 1},
  [101] = {.lex_state = 15, .external_lex_state = 1},
  [102] = {.lex_state = 15, .external_lex_state = 1},
  [103] = {.lex_state = 15, .external_lex_state = 1},
  [104] = {.lex_state = 15, .external_lex_state = 1},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 15, .external_lex_state = 1},
  [107] = {.lex_state = 15, .external_lex_state = 1},
  [108] = {.lex_state = 15, .external_lex_state = 1},
  [109] = {.lex_state = 15, .external_lex_state = 1},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 15, .external_lex_state = 1},
  [115] = {.lex_state = 15, .external_lex_state = 1},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 15, .external_lex_state = 1},
  [120] = {.lex_state = 15, .external_lex_state = 1},
  [121] = {.lex_state = 15},
  [122] = {.lex_state = 15},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 15, .external_lex_state = 1},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 15},
  [129] = {.lex_state = 15},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 15},
  [132] = {.lex_state = 15},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 15},
  [135] = {.lex_state = 15},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 15, .external_lex_state = 1},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 15},
  [140] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__preprocessor] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__separator] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(1),
    [sym_single_quoted] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_undef] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_preprocessor_else] = ACTIONS(1),
    [sym_preprocessor_endif] = ACTIONS(1),
    [sym_preprocessor_once] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_If] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_Alias] = ACTIONS(1),
    [anon_sym_Compiler] = ACTIONS(1),
    [anon_sym_Copy] = ACTIONS(1),
    [anon_sym_CopyDir] = ACTIONS(1),
    [anon_sym_CSAssembly] = ACTIONS(1),
    [anon_sym_DLL] = ACTIONS(1),
    [anon_sym_Error] = ACTIONS(1),
    [anon_sym_Exec] = ACTIONS(1),
    [anon_sym_Executable] = ACTIONS(1),
    [anon_sym_ForEach] = ACTIONS(1),
    [anon_sym_Library] = ACTIONS(1),
    [anon_sym_ListDependencies] = ACTIONS(1),
    [anon_sym_ObjectList] = ACTIONS(1),
    [anon_sym_Print] = ACTIONS(1),
    [anon_sym_RemoveDir] = ACTIONS(1),
    [anon_sym_Settings] = ACTIONS(1),
    [anon_sym_Test] = ACTIONS(1),
    [anon_sym_TextFile] = ACTIONS(1),
    [anon_sym_Unity] = ACTIONS(1),
    [anon_sym_Using] = ACTIONS(1),
    [anon_sym_VCXProject] = ACTIONS(1),
    [anon_sym_VSProjectExternal] = ACTIONS(1),
    [anon_sym_VSSolution] = ACTIONS(1),
    [anon_sym_XCodeProject] = ACTIONS(1),
    [anon_sym__CURRENT_BFF_DIR_] = ACTIONS(1),
    [anon_sym__FASTBUILD_VERSION_STRING_] = ACTIONS(1),
    [anon_sym__FASTBUILD_VERSION_] = ACTIONS(1),
    [anon_sym__FASTBUILD_EXE_PATH_] = ACTIONS(1),
    [anon_sym__WORKING_DIR_] = ACTIONS(1),
    [anon_sym___LINUX__] = ACTIONS(1),
    [anon_sym___OSX__] = ACTIONS(1),
    [anon_sym___WINDOWS__] = ACTIONS(1),
    [anon_sym_exists] = ACTIONS(1),
    [anon_sym_file_exists] = ACTIONS(1),
    [sym__preprocessor_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(128),
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(1),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [2] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(2),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_function] = ACTIONS(79),
    [anon_sym_not] = ACTIONS(82),
    [anon_sym_If] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(88),
    [anon_sym_false] = ACTIONS(88),
    [anon_sym_Alias] = ACTIONS(91),
    [anon_sym_Compiler] = ACTIONS(91),
    [anon_sym_Copy] = ACTIONS(91),
    [anon_sym_CopyDir] = ACTIONS(91),
    [anon_sym_CSAssembly] = ACTIONS(91),
    [anon_sym_DLL] = ACTIONS(91),
    [anon_sym_Error] = ACTIONS(91),
    [anon_sym_Exec] = ACTIONS(91),
    [anon_sym_Executable] = ACTIONS(91),
    [anon_sym_ForEach] = ACTIONS(91),
    [anon_sym_Library] = ACTIONS(91),
    [anon_sym_ListDependencies] = ACTIONS(91),
    [anon_sym_ObjectList] = ACTIONS(91),
    [anon_sym_Print] = ACTIONS(91),
    [anon_sym_RemoveDir] = ACTIONS(91),
    [anon_sym_Settings] = ACTIONS(91),
    [anon_sym_Test] = ACTIONS(91),
    [anon_sym_TextFile] = ACTIONS(91),
    [anon_sym_Unity] = ACTIONS(91),
    [anon_sym_Using] = ACTIONS(91),
    [anon_sym_VCXProject] = ACTIONS(91),
    [anon_sym_VSProjectExternal] = ACTIONS(91),
    [anon_sym_VSSolution] = ACTIONS(91),
    [anon_sym_XCodeProject] = ACTIONS(91),
    [anon_sym_exists] = ACTIONS(94),
    [anon_sym_file_exists] = ACTIONS(97),
  },
  [3] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(3),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [4] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(4),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [5] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(5),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [6] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(6),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [7] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(7),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [8] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(8),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [9] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(9),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [10] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(10),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(66),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [11] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(11),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(26),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [12] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(12),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(60),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [13] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(13),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(61),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [14] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(14),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(55),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [15] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(15),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(54),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [16] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(16),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(67),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [17] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(17),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(40),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [18] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(18),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(53),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [19] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(19),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(38),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [20] = {
    [sym_string] = STATE(52),
    [sym__preprocessor] = STATE(20),
    [sym_function] = STATE(22),
    [sym_usage] = STATE(51),
    [sym_promotion] = STATE(51),
    [sym_array] = STATE(51),
    [sym_struct] = STATE(51),
    [sym_parenthesis] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_function_definition] = STATE(51),
    [sym_expression] = STATE(28),
    [sym_not] = STATE(51),
    [sym_and] = STATE(51),
    [sym_or] = STATE(51),
    [sym_add] = STATE(51),
    [sym_sub] = STATE(51),
    [sym_compare] = STATE(51),
    [sym_in] = STATE(51),
    [sym_not_in] = STATE(51),
    [sym_assign] = STATE(51),
    [sym_literal] = STATE(51),
    [sym_if] = STATE(51),
    [sym_number] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_builtin_function] = STATE(57),
    [sym_exists] = STATE(51),
    [sym_file_exists] = STATE(51),
    [sym_identifier] = ACTIONS(9),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_If] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_Alias] = ACTIONS(41),
    [anon_sym_Compiler] = ACTIONS(41),
    [anon_sym_Copy] = ACTIONS(41),
    [anon_sym_CopyDir] = ACTIONS(41),
    [anon_sym_CSAssembly] = ACTIONS(41),
    [anon_sym_DLL] = ACTIONS(41),
    [anon_sym_Error] = ACTIONS(41),
    [anon_sym_Exec] = ACTIONS(41),
    [anon_sym_Executable] = ACTIONS(41),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_Library] = ACTIONS(41),
    [anon_sym_ListDependencies] = ACTIONS(41),
    [anon_sym_ObjectList] = ACTIONS(41),
    [anon_sym_Print] = ACTIONS(41),
    [anon_sym_RemoveDir] = ACTIONS(41),
    [anon_sym_Settings] = ACTIONS(41),
    [anon_sym_Test] = ACTIONS(41),
    [anon_sym_TextFile] = ACTIONS(41),
    [anon_sym_Unity] = ACTIONS(41),
    [anon_sym_Using] = ACTIONS(41),
    [anon_sym_VCXProject] = ACTIONS(41),
    [anon_sym_VSProjectExternal] = ACTIONS(41),
    [anon_sym_VSSolution] = ACTIONS(41),
    [anon_sym_XCodeProject] = ACTIONS(41),
    [anon_sym_exists] = ACTIONS(43),
    [anon_sym_file_exists] = ACTIONS(45),
  },
  [21] = {
    [sym__preprocessor] = STATE(21),
    [sym_array] = STATE(35),
    [sym_arguments] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_identifier] = ACTIONS(116),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(114),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_BANG] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_RBRACK] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_function] = ACTIONS(116),
    [anon_sym_not] = ACTIONS(116),
    [anon_sym_and] = ACTIONS(116),
    [anon_sym_or] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_EQ_EQ] = ACTIONS(114),
    [anon_sym_BANG_EQ] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_GT_EQ] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(114),
    [anon_sym_in] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_If] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(116),
    [anon_sym_false] = ACTIONS(116),
    [anon_sym_Alias] = ACTIONS(116),
    [anon_sym_Compiler] = ACTIONS(116),
    [anon_sym_Copy] = ACTIONS(116),
    [anon_sym_CopyDir] = ACTIONS(116),
    [anon_sym_CSAssembly] = ACTIONS(116),
    [anon_sym_DLL] = ACTIONS(116),
    [anon_sym_Error] = ACTIONS(116),
    [anon_sym_Exec] = ACTIONS(116),
    [anon_sym_Executable] = ACTIONS(116),
    [anon_sym_ForEach] = ACTIONS(116),
    [anon_sym_Library] = ACTIONS(116),
    [anon_sym_ListDependencies] = ACTIONS(116),
    [anon_sym_ObjectList] = ACTIONS(116),
    [anon_sym_Print] = ACTIONS(116),
    [anon_sym_RemoveDir] = ACTIONS(116),
    [anon_sym_Settings] = ACTIONS(116),
    [anon_sym_Test] = ACTIONS(116),
    [anon_sym_TextFile] = ACTIONS(116),
    [anon_sym_Unity] = ACTIONS(116),
    [anon_sym_Using] = ACTIONS(116),
    [anon_sym_VCXProject] = ACTIONS(116),
    [anon_sym_VSProjectExternal] = ACTIONS(116),
    [anon_sym_VSSolution] = ACTIONS(116),
    [anon_sym_XCodeProject] = ACTIONS(116),
    [anon_sym_exists] = ACTIONS(116),
    [anon_sym_file_exists] = ACTIONS(116),
  },
  [22] = {
    [sym__preprocessor] = STATE(22),
    [sym_array] = STATE(56),
    [sym_arguments] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_identifier] = ACTIONS(122),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(120),
    [anon_sym_AMP_AMP] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_function] = ACTIONS(122),
    [anon_sym_not] = ACTIONS(122),
    [anon_sym_and] = ACTIONS(122),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_in] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_If] = ACTIONS(122),
    [anon_sym_true] = ACTIONS(122),
    [anon_sym_false] = ACTIONS(122),
    [anon_sym_Alias] = ACTIONS(122),
    [anon_sym_Compiler] = ACTIONS(122),
    [anon_sym_Copy] = ACTIONS(122),
    [anon_sym_CopyDir] = ACTIONS(122),
    [anon_sym_CSAssembly] = ACTIONS(122),
    [anon_sym_DLL] = ACTIONS(122),
    [anon_sym_Error] = ACTIONS(122),
    [anon_sym_Exec] = ACTIONS(122),
    [anon_sym_Executable] = ACTIONS(122),
    [anon_sym_ForEach] = ACTIONS(122),
    [anon_sym_Library] = ACTIONS(122),
    [anon_sym_ListDependencies] = ACTIONS(122),
    [anon_sym_ObjectList] = ACTIONS(122),
    [anon_sym_Print] = ACTIONS(122),
    [anon_sym_RemoveDir] = ACTIONS(122),
    [anon_sym_Settings] = ACTIONS(122),
    [anon_sym_Test] = ACTIONS(122),
    [anon_sym_TextFile] = ACTIONS(122),
    [anon_sym_Unity] = ACTIONS(122),
    [anon_sym_Using] = ACTIONS(122),
    [anon_sym_VCXProject] = ACTIONS(122),
    [anon_sym_VSProjectExternal] = ACTIONS(122),
    [anon_sym_VSSolution] = ACTIONS(122),
    [anon_sym_XCodeProject] = ACTIONS(122),
    [anon_sym_exists] = ACTIONS(122),
    [anon_sym_file_exists] = ACTIONS(122),
  },
  [23] = {
    [sym__preprocessor] = STATE(23),
    [sym_array] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_identifier] = ACTIONS(126),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(126),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(124),
    [anon_sym_AMP_AMP] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(126),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_function] = ACTIONS(126),
    [anon_sym_not] = ACTIONS(126),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(124),
    [anon_sym_BANG_EQ] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_GT_EQ] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(124),
    [anon_sym_in] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_If] = ACTIONS(126),
    [anon_sym_true] = ACTIONS(126),
    [anon_sym_false] = ACTIONS(126),
    [anon_sym_Alias] = ACTIONS(126),
    [anon_sym_Compiler] = ACTIONS(126),
    [anon_sym_Copy] = ACTIONS(126),
    [anon_sym_CopyDir] = ACTIONS(126),
    [anon_sym_CSAssembly] = ACTIONS(126),
    [anon_sym_DLL] = ACTIONS(126),
    [anon_sym_Error] = ACTIONS(126),
    [anon_sym_Exec] = ACTIONS(126),
    [anon_sym_Executable] = ACTIONS(126),
    [anon_sym_ForEach] = ACTIONS(126),
    [anon_sym_Library] = ACTIONS(126),
    [anon_sym_ListDependencies] = ACTIONS(126),
    [anon_sym_ObjectList] = ACTIONS(126),
    [anon_sym_Print] = ACTIONS(126),
    [anon_sym_RemoveDir] = ACTIONS(126),
    [anon_sym_Settings] = ACTIONS(126),
    [anon_sym_Test] = ACTIONS(126),
    [anon_sym_TextFile] = ACTIONS(126),
    [anon_sym_Unity] = ACTIONS(126),
    [anon_sym_Using] = ACTIONS(126),
    [anon_sym_VCXProject] = ACTIONS(126),
    [anon_sym_VSProjectExternal] = ACTIONS(126),
    [anon_sym_VSSolution] = ACTIONS(126),
    [anon_sym_XCodeProject] = ACTIONS(126),
    [anon_sym_exists] = ACTIONS(126),
    [anon_sym_file_exists] = ACTIONS(126),
  },
  [24] = {
    [sym__preprocessor] = STATE(24),
    [sym_array] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(128),
    [anon_sym_BANG] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_function] = ACTIONS(130),
    [anon_sym_not] = ACTIONS(130),
    [anon_sym_and] = ACTIONS(130),
    [anon_sym_or] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_in] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_If] = ACTIONS(130),
    [anon_sym_true] = ACTIONS(130),
    [anon_sym_false] = ACTIONS(130),
    [anon_sym_Alias] = ACTIONS(130),
    [anon_sym_Compiler] = ACTIONS(130),
    [anon_sym_Copy] = ACTIONS(130),
    [anon_sym_CopyDir] = ACTIONS(130),
    [anon_sym_CSAssembly] = ACTIONS(130),
    [anon_sym_DLL] = ACTIONS(130),
    [anon_sym_Error] = ACTIONS(130),
    [anon_sym_Exec] = ACTIONS(130),
    [anon_sym_Executable] = ACTIONS(130),
    [anon_sym_ForEach] = ACTIONS(130),
    [anon_sym_Library] = ACTIONS(130),
    [anon_sym_ListDependencies] = ACTIONS(130),
    [anon_sym_ObjectList] = ACTIONS(130),
    [anon_sym_Print] = ACTIONS(130),
    [anon_sym_RemoveDir] = ACTIONS(130),
    [anon_sym_Settings] = ACTIONS(130),
    [anon_sym_Test] = ACTIONS(130),
    [anon_sym_TextFile] = ACTIONS(130),
    [anon_sym_Unity] = ACTIONS(130),
    [anon_sym_Using] = ACTIONS(130),
    [anon_sym_VCXProject] = ACTIONS(130),
    [anon_sym_VSProjectExternal] = ACTIONS(130),
    [anon_sym_VSSolution] = ACTIONS(130),
    [anon_sym_XCodeProject] = ACTIONS(130),
    [anon_sym_exists] = ACTIONS(130),
    [anon_sym_file_exists] = ACTIONS(130),
  },
  [25] = {
    [sym__preprocessor] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_AMP_AMP] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_RBRACK] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_function] = ACTIONS(134),
    [anon_sym_not] = ACTIONS(134),
    [anon_sym_and] = ACTIONS(134),
    [anon_sym_or] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_EQ_EQ] = ACTIONS(132),
    [anon_sym_BANG_EQ] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(132),
    [anon_sym_LT_EQ] = ACTIONS(132),
    [anon_sym_in] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_If] = ACTIONS(134),
    [anon_sym_true] = ACTIONS(134),
    [anon_sym_false] = ACTIONS(134),
    [anon_sym_Alias] = ACTIONS(134),
    [anon_sym_Compiler] = ACTIONS(134),
    [anon_sym_Copy] = ACTIONS(134),
    [anon_sym_CopyDir] = ACTIONS(134),
    [anon_sym_CSAssembly] = ACTIONS(134),
    [anon_sym_DLL] = ACTIONS(134),
    [anon_sym_Error] = ACTIONS(134),
    [anon_sym_Exec] = ACTIONS(134),
    [anon_sym_Executable] = ACTIONS(134),
    [anon_sym_ForEach] = ACTIONS(134),
    [anon_sym_Library] = ACTIONS(134),
    [anon_sym_ListDependencies] = ACTIONS(134),
    [anon_sym_ObjectList] = ACTIONS(134),
    [anon_sym_Print] = ACTIONS(134),
    [anon_sym_RemoveDir] = ACTIONS(134),
    [anon_sym_Settings] = ACTIONS(134),
    [anon_sym_Test] = ACTIONS(134),
    [anon_sym_TextFile] = ACTIONS(134),
    [anon_sym_Unity] = ACTIONS(134),
    [anon_sym_Using] = ACTIONS(134),
    [anon_sym_VCXProject] = ACTIONS(134),
    [anon_sym_VSProjectExternal] = ACTIONS(134),
    [anon_sym_VSSolution] = ACTIONS(134),
    [anon_sym_XCodeProject] = ACTIONS(134),
    [anon_sym_exists] = ACTIONS(134),
    [anon_sym_file_exists] = ACTIONS(134),
  },
  [26] = {
    [sym__preprocessor] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_identifier] = ACTIONS(138),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_function] = ACTIONS(138),
    [anon_sym_not] = ACTIONS(144),
    [anon_sym_and] = ACTIONS(146),
    [anon_sym_or] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(136),
    [anon_sym_BANG_EQ] = ACTIONS(136),
    [anon_sym_GT] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [anon_sym_LT_EQ] = ACTIONS(136),
    [anon_sym_in] = ACTIONS(150),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_If] = ACTIONS(138),
    [anon_sym_true] = ACTIONS(138),
    [anon_sym_false] = ACTIONS(138),
    [anon_sym_Alias] = ACTIONS(138),
    [anon_sym_Compiler] = ACTIONS(138),
    [anon_sym_Copy] = ACTIONS(138),
    [anon_sym_CopyDir] = ACTIONS(138),
    [anon_sym_CSAssembly] = ACTIONS(138),
    [anon_sym_DLL] = ACTIONS(138),
    [anon_sym_Error] = ACTIONS(138),
    [anon_sym_Exec] = ACTIONS(138),
    [anon_sym_Executable] = ACTIONS(138),
    [anon_sym_ForEach] = ACTIONS(138),
    [anon_sym_Library] = ACTIONS(138),
    [anon_sym_ListDependencies] = ACTIONS(138),
    [anon_sym_ObjectList] = ACTIONS(138),
    [anon_sym_Print] = ACTIONS(138),
    [anon_sym_RemoveDir] = ACTIONS(138),
    [anon_sym_Settings] = ACTIONS(138),
    [anon_sym_Test] = ACTIONS(138),
    [anon_sym_TextFile] = ACTIONS(138),
    [anon_sym_Unity] = ACTIONS(138),
    [anon_sym_Using] = ACTIONS(138),
    [anon_sym_VCXProject] = ACTIONS(138),
    [anon_sym_VSProjectExternal] = ACTIONS(138),
    [anon_sym_VSSolution] = ACTIONS(138),
    [anon_sym_XCodeProject] = ACTIONS(138),
    [anon_sym_exists] = ACTIONS(138),
    [anon_sym_file_exists] = ACTIONS(138),
  },
  [27] = {
    [sym__preprocessor] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(154),
    [sym_identifier] = ACTIONS(156),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(154),
    [anon_sym_AMP_AMP] = ACTIONS(154),
    [anon_sym_BANG] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(154),
    [anon_sym_CARET] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_RBRACE] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_function] = ACTIONS(156),
    [anon_sym_not] = ACTIONS(156),
    [anon_sym_and] = ACTIONS(156),
    [anon_sym_or] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_EQ_EQ] = ACTIONS(154),
    [anon_sym_BANG_EQ] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_LT] = ACTIONS(156),
    [anon_sym_GT_EQ] = ACTIONS(154),
    [anon_sym_LT_EQ] = ACTIONS(154),
    [anon_sym_in] = ACTIONS(156),
    [anon_sym_EQ] = ACTIONS(156),
    [anon_sym_If] = ACTIONS(156),
    [anon_sym_true] = ACTIONS(156),
    [anon_sym_false] = ACTIONS(156),
    [anon_sym_Alias] = ACTIONS(156),
    [anon_sym_Compiler] = ACTIONS(156),
    [anon_sym_Copy] = ACTIONS(156),
    [anon_sym_CopyDir] = ACTIONS(156),
    [anon_sym_CSAssembly] = ACTIONS(156),
    [anon_sym_DLL] = ACTIONS(156),
    [anon_sym_Error] = ACTIONS(156),
    [anon_sym_Exec] = ACTIONS(156),
    [anon_sym_Executable] = ACTIONS(156),
    [anon_sym_ForEach] = ACTIONS(156),
    [anon_sym_Library] = ACTIONS(156),
    [anon_sym_ListDependencies] = ACTIONS(156),
    [anon_sym_ObjectList] = ACTIONS(156),
    [anon_sym_Print] = ACTIONS(156),
    [anon_sym_RemoveDir] = ACTIONS(156),
    [anon_sym_Settings] = ACTIONS(156),
    [anon_sym_Test] = ACTIONS(156),
    [anon_sym_TextFile] = ACTIONS(156),
    [anon_sym_Unity] = ACTIONS(156),
    [anon_sym_Using] = ACTIONS(156),
    [anon_sym_VCXProject] = ACTIONS(156),
    [anon_sym_VSProjectExternal] = ACTIONS(156),
    [anon_sym_VSSolution] = ACTIONS(156),
    [anon_sym_XCodeProject] = ACTIONS(156),
    [anon_sym_exists] = ACTIONS(156),
    [anon_sym_file_exists] = ACTIONS(156),
  },
  [28] = {
    [sym__preprocessor] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_identifier] = ACTIONS(160),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(158),
    [anon_sym_AMP_AMP] = ACTIONS(158),
    [anon_sym_BANG] = ACTIONS(160),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_CARET] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_RBRACE] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_function] = ACTIONS(160),
    [anon_sym_not] = ACTIONS(144),
    [anon_sym_and] = ACTIONS(160),
    [anon_sym_or] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_EQ_EQ] = ACTIONS(158),
    [anon_sym_BANG_EQ] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(160),
    [anon_sym_GT_EQ] = ACTIONS(158),
    [anon_sym_LT_EQ] = ACTIONS(158),
    [anon_sym_in] = ACTIONS(150),
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_If] = ACTIONS(160),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [anon_sym_Alias] = ACTIONS(160),
    [anon_sym_Compiler] = ACTIONS(160),
    [anon_sym_Copy] = ACTIONS(160),
    [anon_sym_CopyDir] = ACTIONS(160),
    [anon_sym_CSAssembly] = ACTIONS(160),
    [anon_sym_DLL] = ACTIONS(160),
    [anon_sym_Error] = ACTIONS(160),
    [anon_sym_Exec] = ACTIONS(160),
    [anon_sym_Executable] = ACTIONS(160),
    [anon_sym_ForEach] = ACTIONS(160),
    [anon_sym_Library] = ACTIONS(160),
    [anon_sym_ListDependencies] = ACTIONS(160),
    [anon_sym_ObjectList] = ACTIONS(160),
    [anon_sym_Print] = ACTIONS(160),
    [anon_sym_RemoveDir] = ACTIONS(160),
    [anon_sym_Settings] = ACTIONS(160),
    [anon_sym_Test] = ACTIONS(160),
    [anon_sym_TextFile] = ACTIONS(160),
    [anon_sym_Unity] = ACTIONS(160),
    [anon_sym_Using] = ACTIONS(160),
    [anon_sym_VCXProject] = ACTIONS(160),
    [anon_sym_VSProjectExternal] = ACTIONS(160),
    [anon_sym_VSSolution] = ACTIONS(160),
    [anon_sym_XCodeProject] = ACTIONS(160),
    [anon_sym_exists] = ACTIONS(160),
    [anon_sym_file_exists] = ACTIONS(160),
  },
  [29] = {
    [sym__preprocessor] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(162),
    [sym_identifier] = ACTIONS(164),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(162),
    [anon_sym_AMP_AMP] = ACTIONS(162),
    [anon_sym_BANG] = ACTIONS(164),
    [anon_sym_DOT] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_RBRACK] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_function] = ACTIONS(164),
    [anon_sym_not] = ACTIONS(164),
    [anon_sym_and] = ACTIONS(164),
    [anon_sym_or] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_EQ_EQ] = ACTIONS(162),
    [anon_sym_BANG_EQ] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(164),
    [anon_sym_GT_EQ] = ACTIONS(162),
    [anon_sym_LT_EQ] = ACTIONS(162),
    [anon_sym_in] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_If] = ACTIONS(164),
    [anon_sym_true] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(164),
    [anon_sym_Alias] = ACTIONS(164),
    [anon_sym_Compiler] = ACTIONS(164),
    [anon_sym_Copy] = ACTIONS(164),
    [anon_sym_CopyDir] = ACTIONS(164),
    [anon_sym_CSAssembly] = ACTIONS(164),
    [anon_sym_DLL] = ACTIONS(164),
    [anon_sym_Error] = ACTIONS(164),
    [anon_sym_Exec] = ACTIONS(164),
    [anon_sym_Executable] = ACTIONS(164),
    [anon_sym_ForEach] = ACTIONS(164),
    [anon_sym_Library] = ACTIONS(164),
    [anon_sym_ListDependencies] = ACTIONS(164),
    [anon_sym_ObjectList] = ACTIONS(164),
    [anon_sym_Print] = ACTIONS(164),
    [anon_sym_RemoveDir] = ACTIONS(164),
    [anon_sym_Settings] = ACTIONS(164),
    [anon_sym_Test] = ACTIONS(164),
    [anon_sym_TextFile] = ACTIONS(164),
    [anon_sym_Unity] = ACTIONS(164),
    [anon_sym_Using] = ACTIONS(164),
    [anon_sym_VCXProject] = ACTIONS(164),
    [anon_sym_VSProjectExternal] = ACTIONS(164),
    [anon_sym_VSSolution] = ACTIONS(164),
    [anon_sym_XCodeProject] = ACTIONS(164),
    [anon_sym_exists] = ACTIONS(164),
    [anon_sym_file_exists] = ACTIONS(164),
  },
  [30] = {
    [sym__preprocessor] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym_identifier] = ACTIONS(168),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(166),
    [anon_sym_AMP_AMP] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_DOT] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_function] = ACTIONS(168),
    [anon_sym_not] = ACTIONS(168),
    [anon_sym_and] = ACTIONS(168),
    [anon_sym_or] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(166),
    [anon_sym_BANG_EQ] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_GT_EQ] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(166),
    [anon_sym_in] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(168),
    [anon_sym_If] = ACTIONS(168),
    [anon_sym_true] = ACTIONS(168),
    [anon_sym_false] = ACTIONS(168),
    [anon_sym_Alias] = ACTIONS(168),
    [anon_sym_Compiler] = ACTIONS(168),
    [anon_sym_Copy] = ACTIONS(168),
    [anon_sym_CopyDir] = ACTIONS(168),
    [anon_sym_CSAssembly] = ACTIONS(168),
    [anon_sym_DLL] = ACTIONS(168),
    [anon_sym_Error] = ACTIONS(168),
    [anon_sym_Exec] = ACTIONS(168),
    [anon_sym_Executable] = ACTIONS(168),
    [anon_sym_ForEach] = ACTIONS(168),
    [anon_sym_Library] = ACTIONS(168),
    [anon_sym_ListDependencies] = ACTIONS(168),
    [anon_sym_ObjectList] = ACTIONS(168),
    [anon_sym_Print] = ACTIONS(168),
    [anon_sym_RemoveDir] = ACTIONS(168),
    [anon_sym_Settings] = ACTIONS(168),
    [anon_sym_Test] = ACTIONS(168),
    [anon_sym_TextFile] = ACTIONS(168),
    [anon_sym_Unity] = ACTIONS(168),
    [anon_sym_Using] = ACTIONS(168),
    [anon_sym_VCXProject] = ACTIONS(168),
    [anon_sym_VSProjectExternal] = ACTIONS(168),
    [anon_sym_VSSolution] = ACTIONS(168),
    [anon_sym_XCodeProject] = ACTIONS(168),
    [anon_sym_exists] = ACTIONS(168),
    [anon_sym_file_exists] = ACTIONS(168),
  },
  [31] = {
    [sym__preprocessor] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_identifier] = ACTIONS(172),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_AMP_AMP] = ACTIONS(170),
    [anon_sym_BANG] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(170),
    [anon_sym_CARET] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(170),
    [anon_sym_RBRACE] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_RBRACK] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_function] = ACTIONS(172),
    [anon_sym_not] = ACTIONS(172),
    [anon_sym_and] = ACTIONS(172),
    [anon_sym_or] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [anon_sym_in] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_If] = ACTIONS(172),
    [anon_sym_true] = ACTIONS(172),
    [anon_sym_false] = ACTIONS(172),
    [anon_sym_Alias] = ACTIONS(172),
    [anon_sym_Compiler] = ACTIONS(172),
    [anon_sym_Copy] = ACTIONS(172),
    [anon_sym_CopyDir] = ACTIONS(172),
    [anon_sym_CSAssembly] = ACTIONS(172),
    [anon_sym_DLL] = ACTIONS(172),
    [anon_sym_Error] = ACTIONS(172),
    [anon_sym_Exec] = ACTIONS(172),
    [anon_sym_Executable] = ACTIONS(172),
    [anon_sym_ForEach] = ACTIONS(172),
    [anon_sym_Library] = ACTIONS(172),
    [anon_sym_ListDependencies] = ACTIONS(172),
    [anon_sym_ObjectList] = ACTIONS(172),
    [anon_sym_Print] = ACTIONS(172),
    [anon_sym_RemoveDir] = ACTIONS(172),
    [anon_sym_Settings] = ACTIONS(172),
    [anon_sym_Test] = ACTIONS(172),
    [anon_sym_TextFile] = ACTIONS(172),
    [anon_sym_Unity] = ACTIONS(172),
    [anon_sym_Using] = ACTIONS(172),
    [anon_sym_VCXProject] = ACTIONS(172),
    [anon_sym_VSProjectExternal] = ACTIONS(172),
    [anon_sym_VSSolution] = ACTIONS(172),
    [anon_sym_XCodeProject] = ACTIONS(172),
    [anon_sym_exists] = ACTIONS(172),
    [anon_sym_file_exists] = ACTIONS(172),
  },
  [32] = {
    [sym__preprocessor] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(174),
    [sym_identifier] = ACTIONS(176),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(176),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(174),
    [anon_sym_BANG] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_CARET] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_RBRACK] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_function] = ACTIONS(176),
    [anon_sym_not] = ACTIONS(176),
    [anon_sym_and] = ACTIONS(176),
    [anon_sym_or] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(174),
    [anon_sym_BANG_EQ] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(176),
    [anon_sym_LT] = ACTIONS(176),
    [anon_sym_GT_EQ] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(174),
    [anon_sym_in] = ACTIONS(176),
    [anon_sym_EQ] = ACTIONS(176),
    [anon_sym_If] = ACTIONS(176),
    [anon_sym_true] = ACTIONS(176),
    [anon_sym_false] = ACTIONS(176),
    [anon_sym_Alias] = ACTIONS(176),
    [anon_sym_Compiler] = ACTIONS(176),
    [anon_sym_Copy] = ACTIONS(176),
    [anon_sym_CopyDir] = ACTIONS(176),
    [anon_sym_CSAssembly] = ACTIONS(176),
    [anon_sym_DLL] = ACTIONS(176),
    [anon_sym_Error] = ACTIONS(176),
    [anon_sym_Exec] = ACTIONS(176),
    [anon_sym_Executable] = ACTIONS(176),
    [anon_sym_ForEach] = ACTIONS(176),
    [anon_sym_Library] = ACTIONS(176),
    [anon_sym_ListDependencies] = ACTIONS(176),
    [anon_sym_ObjectList] = ACTIONS(176),
    [anon_sym_Print] = ACTIONS(176),
    [anon_sym_RemoveDir] = ACTIONS(176),
    [anon_sym_Settings] = ACTIONS(176),
    [anon_sym_Test] = ACTIONS(176),
    [anon_sym_TextFile] = ACTIONS(176),
    [anon_sym_Unity] = ACTIONS(176),
    [anon_sym_Using] = ACTIONS(176),
    [anon_sym_VCXProject] = ACTIONS(176),
    [anon_sym_VSProjectExternal] = ACTIONS(176),
    [anon_sym_VSSolution] = ACTIONS(176),
    [anon_sym_XCodeProject] = ACTIONS(176),
    [anon_sym_exists] = ACTIONS(176),
    [anon_sym_file_exists] = ACTIONS(176),
  },
  [33] = {
    [sym__preprocessor] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(178),
    [sym_identifier] = ACTIONS(180),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(180),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(178),
    [anon_sym_AMP_AMP] = ACTIONS(178),
    [anon_sym_BANG] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_function] = ACTIONS(180),
    [anon_sym_not] = ACTIONS(180),
    [anon_sym_and] = ACTIONS(180),
    [anon_sym_or] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(178),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [anon_sym_in] = ACTIONS(180),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_If] = ACTIONS(180),
    [anon_sym_true] = ACTIONS(180),
    [anon_sym_false] = ACTIONS(180),
    [anon_sym_Alias] = ACTIONS(180),
    [anon_sym_Compiler] = ACTIONS(180),
    [anon_sym_Copy] = ACTIONS(180),
    [anon_sym_CopyDir] = ACTIONS(180),
    [anon_sym_CSAssembly] = ACTIONS(180),
    [anon_sym_DLL] = ACTIONS(180),
    [anon_sym_Error] = ACTIONS(180),
    [anon_sym_Exec] = ACTIONS(180),
    [anon_sym_Executable] = ACTIONS(180),
    [anon_sym_ForEach] = ACTIONS(180),
    [anon_sym_Library] = ACTIONS(180),
    [anon_sym_ListDependencies] = ACTIONS(180),
    [anon_sym_ObjectList] = ACTIONS(180),
    [anon_sym_Print] = ACTIONS(180),
    [anon_sym_RemoveDir] = ACTIONS(180),
    [anon_sym_Settings] = ACTIONS(180),
    [anon_sym_Test] = ACTIONS(180),
    [anon_sym_TextFile] = ACTIONS(180),
    [anon_sym_Unity] = ACTIONS(180),
    [anon_sym_Using] = ACTIONS(180),
    [anon_sym_VCXProject] = ACTIONS(180),
    [anon_sym_VSProjectExternal] = ACTIONS(180),
    [anon_sym_VSSolution] = ACTIONS(180),
    [anon_sym_XCodeProject] = ACTIONS(180),
    [anon_sym_exists] = ACTIONS(180),
    [anon_sym_file_exists] = ACTIONS(180),
  },
  [34] = {
    [sym__preprocessor] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym_identifier] = ACTIONS(184),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(184),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(182),
    [anon_sym_AMP_AMP] = ACTIONS(182),
    [anon_sym_BANG] = ACTIONS(184),
    [anon_sym_DOT] = ACTIONS(182),
    [anon_sym_CARET] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_RBRACK] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_function] = ACTIONS(184),
    [anon_sym_not] = ACTIONS(184),
    [anon_sym_and] = ACTIONS(184),
    [anon_sym_or] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [anon_sym_EQ_EQ] = ACTIONS(182),
    [anon_sym_BANG_EQ] = ACTIONS(182),
    [anon_sym_GT] = ACTIONS(184),
    [anon_sym_LT] = ACTIONS(184),
    [anon_sym_GT_EQ] = ACTIONS(182),
    [anon_sym_LT_EQ] = ACTIONS(182),
    [anon_sym_in] = ACTIONS(184),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_If] = ACTIONS(184),
    [anon_sym_true] = ACTIONS(184),
    [anon_sym_false] = ACTIONS(184),
    [anon_sym_Alias] = ACTIONS(184),
    [anon_sym_Compiler] = ACTIONS(184),
    [anon_sym_Copy] = ACTIONS(184),
    [anon_sym_CopyDir] = ACTIONS(184),
    [anon_sym_CSAssembly] = ACTIONS(184),
    [anon_sym_DLL] = ACTIONS(184),
    [anon_sym_Error] = ACTIONS(184),
    [anon_sym_Exec] = ACTIONS(184),
    [anon_sym_Executable] = ACTIONS(184),
    [anon_sym_ForEach] = ACTIONS(184),
    [anon_sym_Library] = ACTIONS(184),
    [anon_sym_ListDependencies] = ACTIONS(184),
    [anon_sym_ObjectList] = ACTIONS(184),
    [anon_sym_Print] = ACTIONS(184),
    [anon_sym_RemoveDir] = ACTIONS(184),
    [anon_sym_Settings] = ACTIONS(184),
    [anon_sym_Test] = ACTIONS(184),
    [anon_sym_TextFile] = ACTIONS(184),
    [anon_sym_Unity] = ACTIONS(184),
    [anon_sym_Using] = ACTIONS(184),
    [anon_sym_VCXProject] = ACTIONS(184),
    [anon_sym_VSProjectExternal] = ACTIONS(184),
    [anon_sym_VSSolution] = ACTIONS(184),
    [anon_sym_XCodeProject] = ACTIONS(184),
    [anon_sym_exists] = ACTIONS(184),
    [anon_sym_file_exists] = ACTIONS(184),
  },
  [35] = {
    [sym__preprocessor] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym_identifier] = ACTIONS(188),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(186),
    [anon_sym_AMP_AMP] = ACTIONS(186),
    [anon_sym_BANG] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(186),
    [anon_sym_RBRACK] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_function] = ACTIONS(188),
    [anon_sym_not] = ACTIONS(188),
    [anon_sym_and] = ACTIONS(188),
    [anon_sym_or] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_EQ_EQ] = ACTIONS(186),
    [anon_sym_BANG_EQ] = ACTIONS(186),
    [anon_sym_GT] = ACTIONS(188),
    [anon_sym_LT] = ACTIONS(188),
    [anon_sym_GT_EQ] = ACTIONS(186),
    [anon_sym_LT_EQ] = ACTIONS(186),
    [anon_sym_in] = ACTIONS(188),
    [anon_sym_EQ] = ACTIONS(188),
    [anon_sym_If] = ACTIONS(188),
    [anon_sym_true] = ACTIONS(188),
    [anon_sym_false] = ACTIONS(188),
    [anon_sym_Alias] = ACTIONS(188),
    [anon_sym_Compiler] = ACTIONS(188),
    [anon_sym_Copy] = ACTIONS(188),
    [anon_sym_CopyDir] = ACTIONS(188),
    [anon_sym_CSAssembly] = ACTIONS(188),
    [anon_sym_DLL] = ACTIONS(188),
    [anon_sym_Error] = ACTIONS(188),
    [anon_sym_Exec] = ACTIONS(188),
    [anon_sym_Executable] = ACTIONS(188),
    [anon_sym_ForEach] = ACTIONS(188),
    [anon_sym_Library] = ACTIONS(188),
    [anon_sym_ListDependencies] = ACTIONS(188),
    [anon_sym_ObjectList] = ACTIONS(188),
    [anon_sym_Print] = ACTIONS(188),
    [anon_sym_RemoveDir] = ACTIONS(188),
    [anon_sym_Settings] = ACTIONS(188),
    [anon_sym_Test] = ACTIONS(188),
    [anon_sym_TextFile] = ACTIONS(188),
    [anon_sym_Unity] = ACTIONS(188),
    [anon_sym_Using] = ACTIONS(188),
    [anon_sym_VCXProject] = ACTIONS(188),
    [anon_sym_VSProjectExternal] = ACTIONS(188),
    [anon_sym_VSSolution] = ACTIONS(188),
    [anon_sym_XCodeProject] = ACTIONS(188),
    [anon_sym_exists] = ACTIONS(188),
    [anon_sym_file_exists] = ACTIONS(188),
  },
  [36] = {
    [sym__preprocessor] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym_identifier] = ACTIONS(192),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(192),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(190),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_AMP_AMP] = ACTIONS(190),
    [anon_sym_BANG] = ACTIONS(192),
    [anon_sym_DOT] = ACTIONS(190),
    [anon_sym_CARET] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_RBRACK] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_function] = ACTIONS(192),
    [anon_sym_not] = ACTIONS(192),
    [anon_sym_and] = ACTIONS(192),
    [anon_sym_or] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [anon_sym_BANG_EQ] = ACTIONS(190),
    [anon_sym_GT] = ACTIONS(192),
    [anon_sym_LT] = ACTIONS(192),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [anon_sym_in] = ACTIONS(192),
    [anon_sym_EQ] = ACTIONS(192),
    [anon_sym_If] = ACTIONS(192),
    [anon_sym_true] = ACTIONS(192),
    [anon_sym_false] = ACTIONS(192),
    [anon_sym_Alias] = ACTIONS(192),
    [anon_sym_Compiler] = ACTIONS(192),
    [anon_sym_Copy] = ACTIONS(192),
    [anon_sym_CopyDir] = ACTIONS(192),
    [anon_sym_CSAssembly] = ACTIONS(192),
    [anon_sym_DLL] = ACTIONS(192),
    [anon_sym_Error] = ACTIONS(192),
    [anon_sym_Exec] = ACTIONS(192),
    [anon_sym_Executable] = ACTIONS(192),
    [anon_sym_ForEach] = ACTIONS(192),
    [anon_sym_Library] = ACTIONS(192),
    [anon_sym_ListDependencies] = ACTIONS(192),
    [anon_sym_ObjectList] = ACTIONS(192),
    [anon_sym_Print] = ACTIONS(192),
    [anon_sym_RemoveDir] = ACTIONS(192),
    [anon_sym_Settings] = ACTIONS(192),
    [anon_sym_Test] = ACTIONS(192),
    [anon_sym_TextFile] = ACTIONS(192),
    [anon_sym_Unity] = ACTIONS(192),
    [anon_sym_Using] = ACTIONS(192),
    [anon_sym_VCXProject] = ACTIONS(192),
    [anon_sym_VSProjectExternal] = ACTIONS(192),
    [anon_sym_VSSolution] = ACTIONS(192),
    [anon_sym_XCodeProject] = ACTIONS(192),
    [anon_sym_exists] = ACTIONS(192),
    [anon_sym_file_exists] = ACTIONS(192),
  },
  [37] = {
    [sym__preprocessor] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym_identifier] = ACTIONS(196),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(194),
    [anon_sym_AMP_AMP] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_function] = ACTIONS(196),
    [anon_sym_not] = ACTIONS(196),
    [anon_sym_and] = ACTIONS(196),
    [anon_sym_or] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(194),
    [anon_sym_BANG_EQ] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(196),
    [anon_sym_GT_EQ] = ACTIONS(194),
    [anon_sym_LT_EQ] = ACTIONS(194),
    [anon_sym_in] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_If] = ACTIONS(196),
    [anon_sym_true] = ACTIONS(196),
    [anon_sym_false] = ACTIONS(196),
    [anon_sym_Alias] = ACTIONS(196),
    [anon_sym_Compiler] = ACTIONS(196),
    [anon_sym_Copy] = ACTIONS(196),
    [anon_sym_CopyDir] = ACTIONS(196),
    [anon_sym_CSAssembly] = ACTIONS(196),
    [anon_sym_DLL] = ACTIONS(196),
    [anon_sym_Error] = ACTIONS(196),
    [anon_sym_Exec] = ACTIONS(196),
    [anon_sym_Executable] = ACTIONS(196),
    [anon_sym_ForEach] = ACTIONS(196),
    [anon_sym_Library] = ACTIONS(196),
    [anon_sym_ListDependencies] = ACTIONS(196),
    [anon_sym_ObjectList] = ACTIONS(196),
    [anon_sym_Print] = ACTIONS(196),
    [anon_sym_RemoveDir] = ACTIONS(196),
    [anon_sym_Settings] = ACTIONS(196),
    [anon_sym_Test] = ACTIONS(196),
    [anon_sym_TextFile] = ACTIONS(196),
    [anon_sym_Unity] = ACTIONS(196),
    [anon_sym_Using] = ACTIONS(196),
    [anon_sym_VCXProject] = ACTIONS(196),
    [anon_sym_VSProjectExternal] = ACTIONS(196),
    [anon_sym_VSSolution] = ACTIONS(196),
    [anon_sym_XCodeProject] = ACTIONS(196),
    [anon_sym_exists] = ACTIONS(196),
    [anon_sym_file_exists] = ACTIONS(196),
  },
  [38] = {
    [sym__preprocessor] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(200),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(200),
    [anon_sym_DOT] = ACTIONS(198),
    [anon_sym_CARET] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_RBRACE] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_function] = ACTIONS(200),
    [anon_sym_not] = ACTIONS(144),
    [anon_sym_and] = ACTIONS(146),
    [anon_sym_or] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_EQ_EQ] = ACTIONS(198),
    [anon_sym_BANG_EQ] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(200),
    [anon_sym_LT] = ACTIONS(200),
    [anon_sym_GT_EQ] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(198),
    [anon_sym_in] = ACTIONS(150),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_If] = ACTIONS(200),
    [anon_sym_true] = ACTIONS(200),
    [anon_sym_false] = ACTIONS(200),
    [anon_sym_Alias] = ACTIONS(200),
    [anon_sym_Compiler] = ACTIONS(200),
    [anon_sym_Copy] = ACTIONS(200),
    [anon_sym_CopyDir] = ACTIONS(200),
    [anon_sym_CSAssembly] = ACTIONS(200),
    [anon_sym_DLL] = ACTIONS(200),
    [anon_sym_Error] = ACTIONS(200),
    [anon_sym_Exec] = ACTIONS(200),
    [anon_sym_Executable] = ACTIONS(200),
    [anon_sym_ForEach] = ACTIONS(200),
    [anon_sym_Library] = ACTIONS(200),
    [anon_sym_ListDependencies] = ACTIONS(200),
    [anon_sym_ObjectList] = ACTIONS(200),
    [anon_sym_Print] = ACTIONS(200),
    [anon_sym_RemoveDir] = ACTIONS(200),
    [anon_sym_Settings] = ACTIONS(200),
    [anon_sym_Test] = ACTIONS(200),
    [anon_sym_TextFile] = ACTIONS(200),
    [anon_sym_Unity] = ACTIONS(200),
    [anon_sym_Using] = ACTIONS(200),
    [anon_sym_VCXProject] = ACTIONS(200),
    [anon_sym_VSProjectExternal] = ACTIONS(200),
    [anon_sym_VSSolution] = ACTIONS(200),
    [anon_sym_XCodeProject] = ACTIONS(200),
    [anon_sym_exists] = ACTIONS(200),
    [anon_sym_file_exists] = ACTIONS(200),
  },
  [39] = {
    [sym__preprocessor] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(202),
    [sym_identifier] = ACTIONS(204),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(204),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(202),
    [anon_sym_AMP_AMP] = ACTIONS(202),
    [anon_sym_BANG] = ACTIONS(204),
    [anon_sym_DOT] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_RBRACE] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_RBRACK] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_function] = ACTIONS(204),
    [anon_sym_not] = ACTIONS(204),
    [anon_sym_and] = ACTIONS(204),
    [anon_sym_or] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(202),
    [anon_sym_BANG_EQ] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(204),
    [anon_sym_LT] = ACTIONS(204),
    [anon_sym_GT_EQ] = ACTIONS(202),
    [anon_sym_LT_EQ] = ACTIONS(202),
    [anon_sym_in] = ACTIONS(204),
    [anon_sym_EQ] = ACTIONS(204),
    [anon_sym_If] = ACTIONS(204),
    [anon_sym_true] = ACTIONS(204),
    [anon_sym_false] = ACTIONS(204),
    [anon_sym_Alias] = ACTIONS(204),
    [anon_sym_Compiler] = ACTIONS(204),
    [anon_sym_Copy] = ACTIONS(204),
    [anon_sym_CopyDir] = ACTIONS(204),
    [anon_sym_CSAssembly] = ACTIONS(204),
    [anon_sym_DLL] = ACTIONS(204),
    [anon_sym_Error] = ACTIONS(204),
    [anon_sym_Exec] = ACTIONS(204),
    [anon_sym_Executable] = ACTIONS(204),
    [anon_sym_ForEach] = ACTIONS(204),
    [anon_sym_Library] = ACTIONS(204),
    [anon_sym_ListDependencies] = ACTIONS(204),
    [anon_sym_ObjectList] = ACTIONS(204),
    [anon_sym_Print] = ACTIONS(204),
    [anon_sym_RemoveDir] = ACTIONS(204),
    [anon_sym_Settings] = ACTIONS(204),
    [anon_sym_Test] = ACTIONS(204),
    [anon_sym_TextFile] = ACTIONS(204),
    [anon_sym_Unity] = ACTIONS(204),
    [anon_sym_Using] = ACTIONS(204),
    [anon_sym_VCXProject] = ACTIONS(204),
    [anon_sym_VSProjectExternal] = ACTIONS(204),
    [anon_sym_VSSolution] = ACTIONS(204),
    [anon_sym_XCodeProject] = ACTIONS(204),
    [anon_sym_exists] = ACTIONS(204),
    [anon_sym_file_exists] = ACTIONS(204),
  },
  [40] = {
    [sym__preprocessor] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(206),
    [sym_identifier] = ACTIONS(208),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(208),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(206),
    [anon_sym_AMP_AMP] = ACTIONS(206),
    [anon_sym_BANG] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_RBRACK] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_function] = ACTIONS(208),
    [anon_sym_not] = ACTIONS(208),
    [anon_sym_and] = ACTIONS(208),
    [anon_sym_or] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_EQ_EQ] = ACTIONS(206),
    [anon_sym_BANG_EQ] = ACTIONS(206),
    [anon_sym_GT] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(208),
    [anon_sym_GT_EQ] = ACTIONS(206),
    [anon_sym_LT_EQ] = ACTIONS(206),
    [anon_sym_in] = ACTIONS(208),
    [anon_sym_EQ] = ACTIONS(208),
    [anon_sym_If] = ACTIONS(208),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_Alias] = ACTIONS(208),
    [anon_sym_Compiler] = ACTIONS(208),
    [anon_sym_Copy] = ACTIONS(208),
    [anon_sym_CopyDir] = ACTIONS(208),
    [anon_sym_CSAssembly] = ACTIONS(208),
    [anon_sym_DLL] = ACTIONS(208),
    [anon_sym_Error] = ACTIONS(208),
    [anon_sym_Exec] = ACTIONS(208),
    [anon_sym_Executable] = ACTIONS(208),
    [anon_sym_ForEach] = ACTIONS(208),
    [anon_sym_Library] = ACTIONS(208),
    [anon_sym_ListDependencies] = ACTIONS(208),
    [anon_sym_ObjectList] = ACTIONS(208),
    [anon_sym_Print] = ACTIONS(208),
    [anon_sym_RemoveDir] = ACTIONS(208),
    [anon_sym_Settings] = ACTIONS(208),
    [anon_sym_Test] = ACTIONS(208),
    [anon_sym_TextFile] = ACTIONS(208),
    [anon_sym_Unity] = ACTIONS(208),
    [anon_sym_Using] = ACTIONS(208),
    [anon_sym_VCXProject] = ACTIONS(208),
    [anon_sym_VSProjectExternal] = ACTIONS(208),
    [anon_sym_VSSolution] = ACTIONS(208),
    [anon_sym_XCodeProject] = ACTIONS(208),
    [anon_sym_exists] = ACTIONS(208),
    [anon_sym_file_exists] = ACTIONS(208),
  },
  [41] = {
    [sym__preprocessor] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_identifier] = ACTIONS(212),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(212),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_AMP_AMP] = ACTIONS(210),
    [anon_sym_BANG] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(210),
    [anon_sym_CARET] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_RBRACK] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_function] = ACTIONS(212),
    [anon_sym_not] = ACTIONS(212),
    [anon_sym_and] = ACTIONS(212),
    [anon_sym_or] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [anon_sym_BANG_EQ] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_LT] = ACTIONS(212),
    [anon_sym_GT_EQ] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(210),
    [anon_sym_in] = ACTIONS(212),
    [anon_sym_EQ] = ACTIONS(212),
    [anon_sym_If] = ACTIONS(212),
    [anon_sym_true] = ACTIONS(212),
    [anon_sym_false] = ACTIONS(212),
    [anon_sym_Alias] = ACTIONS(212),
    [anon_sym_Compiler] = ACTIONS(212),
    [anon_sym_Copy] = ACTIONS(212),
    [anon_sym_CopyDir] = ACTIONS(212),
    [anon_sym_CSAssembly] = ACTIONS(212),
    [anon_sym_DLL] = ACTIONS(212),
    [anon_sym_Error] = ACTIONS(212),
    [anon_sym_Exec] = ACTIONS(212),
    [anon_sym_Executable] = ACTIONS(212),
    [anon_sym_ForEach] = ACTIONS(212),
    [anon_sym_Library] = ACTIONS(212),
    [anon_sym_ListDependencies] = ACTIONS(212),
    [anon_sym_ObjectList] = ACTIONS(212),
    [anon_sym_Print] = ACTIONS(212),
    [anon_sym_RemoveDir] = ACTIONS(212),
    [anon_sym_Settings] = ACTIONS(212),
    [anon_sym_Test] = ACTIONS(212),
    [anon_sym_TextFile] = ACTIONS(212),
    [anon_sym_Unity] = ACTIONS(212),
    [anon_sym_Using] = ACTIONS(212),
    [anon_sym_VCXProject] = ACTIONS(212),
    [anon_sym_VSProjectExternal] = ACTIONS(212),
    [anon_sym_VSSolution] = ACTIONS(212),
    [anon_sym_XCodeProject] = ACTIONS(212),
    [anon_sym_exists] = ACTIONS(212),
    [anon_sym_file_exists] = ACTIONS(212),
  },
  [42] = {
    [sym__preprocessor] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym_identifier] = ACTIONS(216),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(216),
    [anon_sym_SQUOTE] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(214),
    [anon_sym_AMP_AMP] = ACTIONS(214),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(214),
    [anon_sym_CARET] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(214),
    [anon_sym_RBRACE] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(214),
    [anon_sym_RBRACK] = ACTIONS(214),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_function] = ACTIONS(216),
    [anon_sym_not] = ACTIONS(216),
    [anon_sym_and] = ACTIONS(216),
    [anon_sym_or] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_EQ_EQ] = ACTIONS(214),
    [anon_sym_BANG_EQ] = ACTIONS(214),
    [anon_sym_GT] = ACTIONS(216),
    [anon_sym_LT] = ACTIONS(216),
    [anon_sym_GT_EQ] = ACTIONS(214),
    [anon_sym_LT_EQ] = ACTIONS(214),
    [anon_sym_in] = ACTIONS(216),
    [anon_sym_EQ] = ACTIONS(216),
    [anon_sym_If] = ACTIONS(216),
    [anon_sym_true] = ACTIONS(216),
    [anon_sym_false] = ACTIONS(216),
    [anon_sym_Alias] = ACTIONS(216),
    [anon_sym_Compiler] = ACTIONS(216),
    [anon_sym_Copy] = ACTIONS(216),
    [anon_sym_CopyDir] = ACTIONS(216),
    [anon_sym_CSAssembly] = ACTIONS(216),
    [anon_sym_DLL] = ACTIONS(216),
    [anon_sym_Error] = ACTIONS(216),
    [anon_sym_Exec] = ACTIONS(216),
    [anon_sym_Executable] = ACTIONS(216),
    [anon_sym_ForEach] = ACTIONS(216),
    [anon_sym_Library] = ACTIONS(216),
    [anon_sym_ListDependencies] = ACTIONS(216),
    [anon_sym_ObjectList] = ACTIONS(216),
    [anon_sym_Print] = ACTIONS(216),
    [anon_sym_RemoveDir] = ACTIONS(216),
    [anon_sym_Settings] = ACTIONS(216),
    [anon_sym_Test] = ACTIONS(216),
    [anon_sym_TextFile] = ACTIONS(216),
    [anon_sym_Unity] = ACTIONS(216),
    [anon_sym_Using] = ACTIONS(216),
    [anon_sym_VCXProject] = ACTIONS(216),
    [anon_sym_VSProjectExternal] = ACTIONS(216),
    [anon_sym_VSSolution] = ACTIONS(216),
    [anon_sym_XCodeProject] = ACTIONS(216),
    [anon_sym_exists] = ACTIONS(216),
    [anon_sym_file_exists] = ACTIONS(216),
  },
  [43] = {
    [sym__preprocessor] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(218),
    [sym_identifier] = ACTIONS(220),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(218),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(218),
    [anon_sym_AMP_AMP] = ACTIONS(218),
    [anon_sym_BANG] = ACTIONS(220),
    [anon_sym_DOT] = ACTIONS(218),
    [anon_sym_CARET] = ACTIONS(218),
    [anon_sym_LBRACE] = ACTIONS(218),
    [anon_sym_RBRACE] = ACTIONS(218),
    [anon_sym_LBRACK] = ACTIONS(218),
    [anon_sym_RBRACK] = ACTIONS(218),
    [anon_sym_LPAREN] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_function] = ACTIONS(220),
    [anon_sym_not] = ACTIONS(220),
    [anon_sym_and] = ACTIONS(220),
    [anon_sym_or] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_EQ_EQ] = ACTIONS(218),
    [anon_sym_BANG_EQ] = ACTIONS(218),
    [anon_sym_GT] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(220),
    [anon_sym_GT_EQ] = ACTIONS(218),
    [anon_sym_LT_EQ] = ACTIONS(218),
    [anon_sym_in] = ACTIONS(220),
    [anon_sym_EQ] = ACTIONS(220),
    [anon_sym_If] = ACTIONS(220),
    [anon_sym_true] = ACTIONS(220),
    [anon_sym_false] = ACTIONS(220),
    [anon_sym_Alias] = ACTIONS(220),
    [anon_sym_Compiler] = ACTIONS(220),
    [anon_sym_Copy] = ACTIONS(220),
    [anon_sym_CopyDir] = ACTIONS(220),
    [anon_sym_CSAssembly] = ACTIONS(220),
    [anon_sym_DLL] = ACTIONS(220),
    [anon_sym_Error] = ACTIONS(220),
    [anon_sym_Exec] = ACTIONS(220),
    [anon_sym_Executable] = ACTIONS(220),
    [anon_sym_ForEach] = ACTIONS(220),
    [anon_sym_Library] = ACTIONS(220),
    [anon_sym_ListDependencies] = ACTIONS(220),
    [anon_sym_ObjectList] = ACTIONS(220),
    [anon_sym_Print] = ACTIONS(220),
    [anon_sym_RemoveDir] = ACTIONS(220),
    [anon_sym_Settings] = ACTIONS(220),
    [anon_sym_Test] = ACTIONS(220),
    [anon_sym_TextFile] = ACTIONS(220),
    [anon_sym_Unity] = ACTIONS(220),
    [anon_sym_Using] = ACTIONS(220),
    [anon_sym_VCXProject] = ACTIONS(220),
    [anon_sym_VSProjectExternal] = ACTIONS(220),
    [anon_sym_VSSolution] = ACTIONS(220),
    [anon_sym_XCodeProject] = ACTIONS(220),
    [anon_sym_exists] = ACTIONS(220),
    [anon_sym_file_exists] = ACTIONS(220),
  },
  [44] = {
    [sym__preprocessor] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(224),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(222),
    [anon_sym_AMP_AMP] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_CARET] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_function] = ACTIONS(224),
    [anon_sym_not] = ACTIONS(224),
    [anon_sym_and] = ACTIONS(224),
    [anon_sym_or] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [anon_sym_BANG_EQ] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(224),
    [anon_sym_LT] = ACTIONS(224),
    [anon_sym_GT_EQ] = ACTIONS(222),
    [anon_sym_LT_EQ] = ACTIONS(222),
    [anon_sym_in] = ACTIONS(224),
    [anon_sym_EQ] = ACTIONS(224),
    [anon_sym_If] = ACTIONS(224),
    [anon_sym_true] = ACTIONS(224),
    [anon_sym_false] = ACTIONS(224),
    [anon_sym_Alias] = ACTIONS(224),
    [anon_sym_Compiler] = ACTIONS(224),
    [anon_sym_Copy] = ACTIONS(224),
    [anon_sym_CopyDir] = ACTIONS(224),
    [anon_sym_CSAssembly] = ACTIONS(224),
    [anon_sym_DLL] = ACTIONS(224),
    [anon_sym_Error] = ACTIONS(224),
    [anon_sym_Exec] = ACTIONS(224),
    [anon_sym_Executable] = ACTIONS(224),
    [anon_sym_ForEach] = ACTIONS(224),
    [anon_sym_Library] = ACTIONS(224),
    [anon_sym_ListDependencies] = ACTIONS(224),
    [anon_sym_ObjectList] = ACTIONS(224),
    [anon_sym_Print] = ACTIONS(224),
    [anon_sym_RemoveDir] = ACTIONS(224),
    [anon_sym_Settings] = ACTIONS(224),
    [anon_sym_Test] = ACTIONS(224),
    [anon_sym_TextFile] = ACTIONS(224),
    [anon_sym_Unity] = ACTIONS(224),
    [anon_sym_Using] = ACTIONS(224),
    [anon_sym_VCXProject] = ACTIONS(224),
    [anon_sym_VSProjectExternal] = ACTIONS(224),
    [anon_sym_VSSolution] = ACTIONS(224),
    [anon_sym_XCodeProject] = ACTIONS(224),
    [anon_sym_exists] = ACTIONS(224),
    [anon_sym_file_exists] = ACTIONS(224),
  },
  [45] = {
    [sym__preprocessor] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(226),
    [sym_identifier] = ACTIONS(228),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(228),
    [anon_sym_SQUOTE] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(226),
    [anon_sym_AMP_AMP] = ACTIONS(226),
    [anon_sym_BANG] = ACTIONS(228),
    [anon_sym_DOT] = ACTIONS(226),
    [anon_sym_CARET] = ACTIONS(226),
    [anon_sym_LBRACE] = ACTIONS(226),
    [anon_sym_RBRACE] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(226),
    [anon_sym_RBRACK] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_function] = ACTIONS(228),
    [anon_sym_not] = ACTIONS(228),
    [anon_sym_and] = ACTIONS(228),
    [anon_sym_or] = ACTIONS(228),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_EQ_EQ] = ACTIONS(226),
    [anon_sym_BANG_EQ] = ACTIONS(226),
    [anon_sym_GT] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(228),
    [anon_sym_GT_EQ] = ACTIONS(226),
    [anon_sym_LT_EQ] = ACTIONS(226),
    [anon_sym_in] = ACTIONS(228),
    [anon_sym_EQ] = ACTIONS(228),
    [anon_sym_If] = ACTIONS(228),
    [anon_sym_true] = ACTIONS(228),
    [anon_sym_false] = ACTIONS(228),
    [anon_sym_Alias] = ACTIONS(228),
    [anon_sym_Compiler] = ACTIONS(228),
    [anon_sym_Copy] = ACTIONS(228),
    [anon_sym_CopyDir] = ACTIONS(228),
    [anon_sym_CSAssembly] = ACTIONS(228),
    [anon_sym_DLL] = ACTIONS(228),
    [anon_sym_Error] = ACTIONS(228),
    [anon_sym_Exec] = ACTIONS(228),
    [anon_sym_Executable] = ACTIONS(228),
    [anon_sym_ForEach] = ACTIONS(228),
    [anon_sym_Library] = ACTIONS(228),
    [anon_sym_ListDependencies] = ACTIONS(228),
    [anon_sym_ObjectList] = ACTIONS(228),
    [anon_sym_Print] = ACTIONS(228),
    [anon_sym_RemoveDir] = ACTIONS(228),
    [anon_sym_Settings] = ACTIONS(228),
    [anon_sym_Test] = ACTIONS(228),
    [anon_sym_TextFile] = ACTIONS(228),
    [anon_sym_Unity] = ACTIONS(228),
    [anon_sym_Using] = ACTIONS(228),
    [anon_sym_VCXProject] = ACTIONS(228),
    [anon_sym_VSProjectExternal] = ACTIONS(228),
    [anon_sym_VSSolution] = ACTIONS(228),
    [anon_sym_XCodeProject] = ACTIONS(228),
    [anon_sym_exists] = ACTIONS(228),
    [anon_sym_file_exists] = ACTIONS(228),
  },
  [46] = {
    [sym__preprocessor] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_identifier] = ACTIONS(232),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(232),
    [anon_sym_SQUOTE] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_AMP_AMP] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_DOT] = ACTIONS(230),
    [anon_sym_CARET] = ACTIONS(230),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(230),
    [anon_sym_RBRACK] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_function] = ACTIONS(232),
    [anon_sym_not] = ACTIONS(232),
    [anon_sym_and] = ACTIONS(232),
    [anon_sym_or] = ACTIONS(232),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_EQ_EQ] = ACTIONS(230),
    [anon_sym_BANG_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_LT] = ACTIONS(232),
    [anon_sym_GT_EQ] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(230),
    [anon_sym_in] = ACTIONS(232),
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_If] = ACTIONS(232),
    [anon_sym_true] = ACTIONS(232),
    [anon_sym_false] = ACTIONS(232),
    [anon_sym_Alias] = ACTIONS(232),
    [anon_sym_Compiler] = ACTIONS(232),
    [anon_sym_Copy] = ACTIONS(232),
    [anon_sym_CopyDir] = ACTIONS(232),
    [anon_sym_CSAssembly] = ACTIONS(232),
    [anon_sym_DLL] = ACTIONS(232),
    [anon_sym_Error] = ACTIONS(232),
    [anon_sym_Exec] = ACTIONS(232),
    [anon_sym_Executable] = ACTIONS(232),
    [anon_sym_ForEach] = ACTIONS(232),
    [anon_sym_Library] = ACTIONS(232),
    [anon_sym_ListDependencies] = ACTIONS(232),
    [anon_sym_ObjectList] = ACTIONS(232),
    [anon_sym_Print] = ACTIONS(232),
    [anon_sym_RemoveDir] = ACTIONS(232),
    [anon_sym_Settings] = ACTIONS(232),
    [anon_sym_Test] = ACTIONS(232),
    [anon_sym_TextFile] = ACTIONS(232),
    [anon_sym_Unity] = ACTIONS(232),
    [anon_sym_Using] = ACTIONS(232),
    [anon_sym_VCXProject] = ACTIONS(232),
    [anon_sym_VSProjectExternal] = ACTIONS(232),
    [anon_sym_VSSolution] = ACTIONS(232),
    [anon_sym_XCodeProject] = ACTIONS(232),
    [anon_sym_exists] = ACTIONS(232),
    [anon_sym_file_exists] = ACTIONS(232),
  },
  [47] = {
    [sym__preprocessor] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(234),
    [sym_identifier] = ACTIONS(236),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(234),
    [anon_sym_AMP_AMP] = ACTIONS(234),
    [anon_sym_BANG] = ACTIONS(236),
    [anon_sym_DOT] = ACTIONS(234),
    [anon_sym_CARET] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(234),
    [anon_sym_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_RBRACK] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_function] = ACTIONS(236),
    [anon_sym_not] = ACTIONS(236),
    [anon_sym_and] = ACTIONS(236),
    [anon_sym_or] = ACTIONS(236),
    [anon_sym_PLUS] = ACTIONS(234),
    [anon_sym_DASH] = ACTIONS(234),
    [anon_sym_EQ_EQ] = ACTIONS(234),
    [anon_sym_BANG_EQ] = ACTIONS(234),
    [anon_sym_GT] = ACTIONS(236),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_GT_EQ] = ACTIONS(234),
    [anon_sym_LT_EQ] = ACTIONS(234),
    [anon_sym_in] = ACTIONS(236),
    [anon_sym_EQ] = ACTIONS(236),
    [anon_sym_If] = ACTIONS(236),
    [anon_sym_true] = ACTIONS(236),
    [anon_sym_false] = ACTIONS(236),
    [anon_sym_Alias] = ACTIONS(236),
    [anon_sym_Compiler] = ACTIONS(236),
    [anon_sym_Copy] = ACTIONS(236),
    [anon_sym_CopyDir] = ACTIONS(236),
    [anon_sym_CSAssembly] = ACTIONS(236),
    [anon_sym_DLL] = ACTIONS(236),
    [anon_sym_Error] = ACTIONS(236),
    [anon_sym_Exec] = ACTIONS(236),
    [anon_sym_Executable] = ACTIONS(236),
    [anon_sym_ForEach] = ACTIONS(236),
    [anon_sym_Library] = ACTIONS(236),
    [anon_sym_ListDependencies] = ACTIONS(236),
    [anon_sym_ObjectList] = ACTIONS(236),
    [anon_sym_Print] = ACTIONS(236),
    [anon_sym_RemoveDir] = ACTIONS(236),
    [anon_sym_Settings] = ACTIONS(236),
    [anon_sym_Test] = ACTIONS(236),
    [anon_sym_TextFile] = ACTIONS(236),
    [anon_sym_Unity] = ACTIONS(236),
    [anon_sym_Using] = ACTIONS(236),
    [anon_sym_VCXProject] = ACTIONS(236),
    [anon_sym_VSProjectExternal] = ACTIONS(236),
    [anon_sym_VSSolution] = ACTIONS(236),
    [anon_sym_XCodeProject] = ACTIONS(236),
    [anon_sym_exists] = ACTIONS(236),
    [anon_sym_file_exists] = ACTIONS(236),
  },
  [48] = {
    [sym__preprocessor] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(238),
    [sym_identifier] = ACTIONS(240),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(240),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(238),
    [anon_sym_AMP_AMP] = ACTIONS(238),
    [anon_sym_BANG] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_CARET] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(238),
    [anon_sym_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_RBRACK] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_function] = ACTIONS(240),
    [anon_sym_not] = ACTIONS(240),
    [anon_sym_and] = ACTIONS(240),
    [anon_sym_or] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(238),
    [anon_sym_BANG_EQ] = ACTIONS(238),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(238),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [anon_sym_in] = ACTIONS(240),
    [anon_sym_EQ] = ACTIONS(240),
    [anon_sym_If] = ACTIONS(240),
    [anon_sym_true] = ACTIONS(240),
    [anon_sym_false] = ACTIONS(240),
    [anon_sym_Alias] = ACTIONS(240),
    [anon_sym_Compiler] = ACTIONS(240),
    [anon_sym_Copy] = ACTIONS(240),
    [anon_sym_CopyDir] = ACTIONS(240),
    [anon_sym_CSAssembly] = ACTIONS(240),
    [anon_sym_DLL] = ACTIONS(240),
    [anon_sym_Error] = ACTIONS(240),
    [anon_sym_Exec] = ACTIONS(240),
    [anon_sym_Executable] = ACTIONS(240),
    [anon_sym_ForEach] = ACTIONS(240),
    [anon_sym_Library] = ACTIONS(240),
    [anon_sym_ListDependencies] = ACTIONS(240),
    [anon_sym_ObjectList] = ACTIONS(240),
    [anon_sym_Print] = ACTIONS(240),
    [anon_sym_RemoveDir] = ACTIONS(240),
    [anon_sym_Settings] = ACTIONS(240),
    [anon_sym_Test] = ACTIONS(240),
    [anon_sym_TextFile] = ACTIONS(240),
    [anon_sym_Unity] = ACTIONS(240),
    [anon_sym_Using] = ACTIONS(240),
    [anon_sym_VCXProject] = ACTIONS(240),
    [anon_sym_VSProjectExternal] = ACTIONS(240),
    [anon_sym_VSSolution] = ACTIONS(240),
    [anon_sym_XCodeProject] = ACTIONS(240),
    [anon_sym_exists] = ACTIONS(240),
    [anon_sym_file_exists] = ACTIONS(240),
  },
  [49] = {
    [sym__preprocessor] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(242),
    [sym_identifier] = ACTIONS(244),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_DOT] = ACTIONS(242),
    [anon_sym_CARET] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(242),
    [anon_sym_RBRACK] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_function] = ACTIONS(244),
    [anon_sym_not] = ACTIONS(144),
    [anon_sym_and] = ACTIONS(146),
    [anon_sym_or] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_EQ_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ] = ACTIONS(250),
    [anon_sym_GT] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(252),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [anon_sym_in] = ACTIONS(150),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_If] = ACTIONS(244),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(244),
    [anon_sym_Alias] = ACTIONS(244),
    [anon_sym_Compiler] = ACTIONS(244),
    [anon_sym_Copy] = ACTIONS(244),
    [anon_sym_CopyDir] = ACTIONS(244),
    [anon_sym_CSAssembly] = ACTIONS(244),
    [anon_sym_DLL] = ACTIONS(244),
    [anon_sym_Error] = ACTIONS(244),
    [anon_sym_Exec] = ACTIONS(244),
    [anon_sym_Executable] = ACTIONS(244),
    [anon_sym_ForEach] = ACTIONS(244),
    [anon_sym_Library] = ACTIONS(244),
    [anon_sym_ListDependencies] = ACTIONS(244),
    [anon_sym_ObjectList] = ACTIONS(244),
    [anon_sym_Print] = ACTIONS(244),
    [anon_sym_RemoveDir] = ACTIONS(244),
    [anon_sym_Settings] = ACTIONS(244),
    [anon_sym_Test] = ACTIONS(244),
    [anon_sym_TextFile] = ACTIONS(244),
    [anon_sym_Unity] = ACTIONS(244),
    [anon_sym_Using] = ACTIONS(244),
    [anon_sym_VCXProject] = ACTIONS(244),
    [anon_sym_VSProjectExternal] = ACTIONS(244),
    [anon_sym_VSSolution] = ACTIONS(244),
    [anon_sym_XCodeProject] = ACTIONS(244),
    [anon_sym_exists] = ACTIONS(244),
    [anon_sym_file_exists] = ACTIONS(244),
  },
  [50] = {
    [sym__preprocessor] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(254),
    [sym_identifier] = ACTIONS(256),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(256),
    [anon_sym_SQUOTE] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(254),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(254),
    [anon_sym_BANG] = ACTIONS(256),
    [anon_sym_DOT] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_RBRACE] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(254),
    [anon_sym_RBRACK] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_function] = ACTIONS(256),
    [anon_sym_not] = ACTIONS(256),
    [anon_sym_and] = ACTIONS(256),
    [anon_sym_or] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_GT] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(256),
    [anon_sym_GT_EQ] = ACTIONS(254),
    [anon_sym_LT_EQ] = ACTIONS(254),
    [anon_sym_in] = ACTIONS(256),
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_If] = ACTIONS(256),
    [anon_sym_true] = ACTIONS(256),
    [anon_sym_false] = ACTIONS(256),
    [anon_sym_Alias] = ACTIONS(256),
    [anon_sym_Compiler] = ACTIONS(256),
    [anon_sym_Copy] = ACTIONS(256),
    [anon_sym_CopyDir] = ACTIONS(256),
    [anon_sym_CSAssembly] = ACTIONS(256),
    [anon_sym_DLL] = ACTIONS(256),
    [anon_sym_Error] = ACTIONS(256),
    [anon_sym_Exec] = ACTIONS(256),
    [anon_sym_Executable] = ACTIONS(256),
    [anon_sym_ForEach] = ACTIONS(256),
    [anon_sym_Library] = ACTIONS(256),
    [anon_sym_ListDependencies] = ACTIONS(256),
    [anon_sym_ObjectList] = ACTIONS(256),
    [anon_sym_Print] = ACTIONS(256),
    [anon_sym_RemoveDir] = ACTIONS(256),
    [anon_sym_Settings] = ACTIONS(256),
    [anon_sym_Test] = ACTIONS(256),
    [anon_sym_TextFile] = ACTIONS(256),
    [anon_sym_Unity] = ACTIONS(256),
    [anon_sym_Using] = ACTIONS(256),
    [anon_sym_VCXProject] = ACTIONS(256),
    [anon_sym_VSProjectExternal] = ACTIONS(256),
    [anon_sym_VSSolution] = ACTIONS(256),
    [anon_sym_XCodeProject] = ACTIONS(256),
    [anon_sym_exists] = ACTIONS(256),
    [anon_sym_file_exists] = ACTIONS(256),
  },
  [51] = {
    [sym__preprocessor] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(258),
    [sym_identifier] = ACTIONS(260),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(260),
    [anon_sym_SQUOTE] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_AMP_AMP] = ACTIONS(258),
    [anon_sym_BANG] = ACTIONS(260),
    [anon_sym_DOT] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_LBRACE] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(258),
    [anon_sym_RBRACK] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_function] = ACTIONS(260),
    [anon_sym_not] = ACTIONS(260),
    [anon_sym_and] = ACTIONS(260),
    [anon_sym_or] = ACTIONS(260),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(258),
    [anon_sym_BANG_EQ] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(258),
    [anon_sym_in] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(260),
    [anon_sym_If] = ACTIONS(260),
    [anon_sym_true] = ACTIONS(260),
    [anon_sym_false] = ACTIONS(260),
    [anon_sym_Alias] = ACTIONS(260),
    [anon_sym_Compiler] = ACTIONS(260),
    [anon_sym_Copy] = ACTIONS(260),
    [anon_sym_CopyDir] = ACTIONS(260),
    [anon_sym_CSAssembly] = ACTIONS(260),
    [anon_sym_DLL] = ACTIONS(260),
    [anon_sym_Error] = ACTIONS(260),
    [anon_sym_Exec] = ACTIONS(260),
    [anon_sym_Executable] = ACTIONS(260),
    [anon_sym_ForEach] = ACTIONS(260),
    [anon_sym_Library] = ACTIONS(260),
    [anon_sym_ListDependencies] = ACTIONS(260),
    [anon_sym_ObjectList] = ACTIONS(260),
    [anon_sym_Print] = ACTIONS(260),
    [anon_sym_RemoveDir] = ACTIONS(260),
    [anon_sym_Settings] = ACTIONS(260),
    [anon_sym_Test] = ACTIONS(260),
    [anon_sym_TextFile] = ACTIONS(260),
    [anon_sym_Unity] = ACTIONS(260),
    [anon_sym_Using] = ACTIONS(260),
    [anon_sym_VCXProject] = ACTIONS(260),
    [anon_sym_VSProjectExternal] = ACTIONS(260),
    [anon_sym_VSSolution] = ACTIONS(260),
    [anon_sym_XCodeProject] = ACTIONS(260),
    [anon_sym_exists] = ACTIONS(260),
    [anon_sym_file_exists] = ACTIONS(260),
  },
  [52] = {
    [sym__preprocessor] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(262),
    [sym_identifier] = ACTIONS(264),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(264),
    [anon_sym_SQUOTE] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(262),
    [anon_sym_AMP_AMP] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(264),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_CARET] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(262),
    [anon_sym_RBRACK] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_function] = ACTIONS(264),
    [anon_sym_not] = ACTIONS(264),
    [anon_sym_and] = ACTIONS(264),
    [anon_sym_or] = ACTIONS(264),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_EQ_EQ] = ACTIONS(262),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(264),
    [anon_sym_EQ] = ACTIONS(264),
    [anon_sym_If] = ACTIONS(264),
    [anon_sym_true] = ACTIONS(264),
    [anon_sym_false] = ACTIONS(264),
    [anon_sym_Alias] = ACTIONS(264),
    [anon_sym_Compiler] = ACTIONS(264),
    [anon_sym_Copy] = ACTIONS(264),
    [anon_sym_CopyDir] = ACTIONS(264),
    [anon_sym_CSAssembly] = ACTIONS(264),
    [anon_sym_DLL] = ACTIONS(264),
    [anon_sym_Error] = ACTIONS(264),
    [anon_sym_Exec] = ACTIONS(264),
    [anon_sym_Executable] = ACTIONS(264),
    [anon_sym_ForEach] = ACTIONS(264),
    [anon_sym_Library] = ACTIONS(264),
    [anon_sym_ListDependencies] = ACTIONS(264),
    [anon_sym_ObjectList] = ACTIONS(264),
    [anon_sym_Print] = ACTIONS(264),
    [anon_sym_RemoveDir] = ACTIONS(264),
    [anon_sym_Settings] = ACTIONS(264),
    [anon_sym_Test] = ACTIONS(264),
    [anon_sym_TextFile] = ACTIONS(264),
    [anon_sym_Unity] = ACTIONS(264),
    [anon_sym_Using] = ACTIONS(264),
    [anon_sym_VCXProject] = ACTIONS(264),
    [anon_sym_VSProjectExternal] = ACTIONS(264),
    [anon_sym_VSSolution] = ACTIONS(264),
    [anon_sym_XCodeProject] = ACTIONS(264),
    [anon_sym_exists] = ACTIONS(264),
    [anon_sym_file_exists] = ACTIONS(264),
  },
  [53] = {
    [sym__preprocessor] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(266),
    [sym_identifier] = ACTIONS(268),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(266),
    [anon_sym_BANG] = ACTIONS(268),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(266),
    [anon_sym_RBRACK] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_function] = ACTIONS(268),
    [anon_sym_not] = ACTIONS(144),
    [anon_sym_and] = ACTIONS(268),
    [anon_sym_or] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(266),
    [anon_sym_DASH] = ACTIONS(266),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [anon_sym_BANG_EQ] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [anon_sym_in] = ACTIONS(150),
    [anon_sym_EQ] = ACTIONS(268),
    [anon_sym_If] = ACTIONS(268),
    [anon_sym_true] = ACTIONS(268),
    [anon_sym_false] = ACTIONS(268),
    [anon_sym_Alias] = ACTIONS(268),
    [anon_sym_Compiler] = ACTIONS(268),
    [anon_sym_Copy] = ACTIONS(268),
    [anon_sym_CopyDir] = ACTIONS(268),
    [anon_sym_CSAssembly] = ACTIONS(268),
    [anon_sym_DLL] = ACTIONS(268),
    [anon_sym_Error] = ACTIONS(268),
    [anon_sym_Exec] = ACTIONS(268),
    [anon_sym_Executable] = ACTIONS(268),
    [anon_sym_ForEach] = ACTIONS(268),
    [anon_sym_Library] = ACTIONS(268),
    [anon_sym_ListDependencies] = ACTIONS(268),
    [anon_sym_ObjectList] = ACTIONS(268),
    [anon_sym_Print] = ACTIONS(268),
    [anon_sym_RemoveDir] = ACTIONS(268),
    [anon_sym_Settings] = ACTIONS(268),
    [anon_sym_Test] = ACTIONS(268),
    [anon_sym_TextFile] = ACTIONS(268),
    [anon_sym_Unity] = ACTIONS(268),
    [anon_sym_Using] = ACTIONS(268),
    [anon_sym_VCXProject] = ACTIONS(268),
    [anon_sym_VSProjectExternal] = ACTIONS(268),
    [anon_sym_VSSolution] = ACTIONS(268),
    [anon_sym_XCodeProject] = ACTIONS(268),
    [anon_sym_exists] = ACTIONS(268),
    [anon_sym_file_exists] = ACTIONS(268),
  },
  [54] = {
    [sym__preprocessor] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym_identifier] = ACTIONS(272),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(272),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(270),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(270),
    [anon_sym_AMP_AMP] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(270),
    [anon_sym_CARET] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACK] = ACTIONS(270),
    [anon_sym_RBRACK] = ACTIONS(270),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_function] = ACTIONS(272),
    [anon_sym_not] = ACTIONS(144),
    [anon_sym_and] = ACTIONS(146),
    [anon_sym_or] = ACTIONS(272),
    [anon_sym_PLUS] = ACTIONS(270),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_EQ_EQ] = ACTIONS(270),
    [anon_sym_BANG_EQ] = ACTIONS(270),
    [anon_sym_GT] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(272),
    [anon_sym_GT_EQ] = ACTIONS(270),
    [anon_sym_LT_EQ] = ACTIONS(270),
    [anon_sym_in] = ACTIONS(150),
    [anon_sym_EQ] = ACTIONS(272),
    [anon_sym_If] = ACTIONS(272),
    [anon_sym_true] = ACTIONS(272),
    [anon_sym_false] = ACTIONS(272),
    [anon_sym_Alias] = ACTIONS(272),
    [anon_sym_Compiler] = ACTIONS(272),
    [anon_sym_Copy] = ACTIONS(272),
    [anon_sym_CopyDir] = ACTIONS(272),
    [anon_sym_CSAssembly] = ACTIONS(272),
    [anon_sym_DLL] = ACTIONS(272),
    [anon_sym_Error] = ACTIONS(272),
    [anon_sym_Exec] = ACTIONS(272),
    [anon_sym_Executable] = ACTIONS(272),
    [anon_sym_ForEach] = ACTIONS(272),
    [anon_sym_Library] = ACTIONS(272),
    [anon_sym_ListDependencies] = ACTIONS(272),
    [anon_sym_ObjectList] = ACTIONS(272),
    [anon_sym_Print] = ACTIONS(272),
    [anon_sym_RemoveDir] = ACTIONS(272),
    [anon_sym_Settings] = ACTIONS(272),
    [anon_sym_Test] = ACTIONS(272),
    [anon_sym_TextFile] = ACTIONS(272),
    [anon_sym_Unity] = ACTIONS(272),
    [anon_sym_Using] = ACTIONS(272),
    [anon_sym_VCXProject] = ACTIONS(272),
    [anon_sym_VSProjectExternal] = ACTIONS(272),
    [anon_sym_VSSolution] = ACTIONS(272),
    [anon_sym_XCodeProject] = ACTIONS(272),
    [anon_sym_exists] = ACTIONS(272),
    [anon_sym_file_exists] = ACTIONS(272),
  },
  [55] = {
    [sym__preprocessor] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(274),
    [sym_identifier] = ACTIONS(276),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(274),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(274),
    [anon_sym_AMP_AMP] = ACTIONS(274),
    [anon_sym_BANG] = ACTIONS(276),
    [anon_sym_DOT] = ACTIONS(274),
    [anon_sym_CARET] = ACTIONS(274),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(274),
    [anon_sym_RBRACK] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_function] = ACTIONS(276),
    [anon_sym_not] = ACTIONS(144),
    [anon_sym_and] = ACTIONS(276),
    [anon_sym_or] = ACTIONS(276),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_EQ_EQ] = ACTIONS(274),
    [anon_sym_BANG_EQ] = ACTIONS(274),
    [anon_sym_GT] = ACTIONS(276),
    [anon_sym_LT] = ACTIONS(276),
    [anon_sym_GT_EQ] = ACTIONS(274),
    [anon_sym_LT_EQ] = ACTIONS(274),
    [anon_sym_in] = ACTIONS(150),
    [anon_sym_EQ] = ACTIONS(276),
    [anon_sym_If] = ACTIONS(276),
    [anon_sym_true] = ACTIONS(276),
    [anon_sym_false] = ACTIONS(276),
    [anon_sym_Alias] = ACTIONS(276),
    [anon_sym_Compiler] = ACTIONS(276),
    [anon_sym_Copy] = ACTIONS(276),
    [anon_sym_CopyDir] = ACTIONS(276),
    [anon_sym_CSAssembly] = ACTIONS(276),
    [anon_sym_DLL] = ACTIONS(276),
    [anon_sym_Error] = ACTIONS(276),
    [anon_sym_Exec] = ACTIONS(276),
    [anon_sym_Executable] = ACTIONS(276),
    [anon_sym_ForEach] = ACTIONS(276),
    [anon_sym_Library] = ACTIONS(276),
    [anon_sym_ListDependencies] = ACTIONS(276),
    [anon_sym_ObjectList] = ACTIONS(276),
    [anon_sym_Print] = ACTIONS(276),
    [anon_sym_RemoveDir] = ACTIONS(276),
    [anon_sym_Settings] = ACTIONS(276),
    [anon_sym_Test] = ACTIONS(276),
    [anon_sym_TextFile] = ACTIONS(276),
    [anon_sym_Unity] = ACTIONS(276),
    [anon_sym_Using] = ACTIONS(276),
    [anon_sym_VCXProject] = ACTIONS(276),
    [anon_sym_VSProjectExternal] = ACTIONS(276),
    [anon_sym_VSSolution] = ACTIONS(276),
    [anon_sym_XCodeProject] = ACTIONS(276),
    [anon_sym_exists] = ACTIONS(276),
    [anon_sym_file_exists] = ACTIONS(276),
  },
  [56] = {
    [sym__preprocessor] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_identifier] = ACTIONS(280),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(280),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(278),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_BANG] = ACTIONS(280),
    [anon_sym_DOT] = ACTIONS(278),
    [anon_sym_CARET] = ACTIONS(278),
    [anon_sym_LBRACE] = ACTIONS(278),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(278),
    [anon_sym_RBRACK] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_function] = ACTIONS(280),
    [anon_sym_not] = ACTIONS(280),
    [anon_sym_and] = ACTIONS(280),
    [anon_sym_or] = ACTIONS(280),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(278),
    [anon_sym_EQ_EQ] = ACTIONS(278),
    [anon_sym_BANG_EQ] = ACTIONS(278),
    [anon_sym_GT] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(280),
    [anon_sym_GT_EQ] = ACTIONS(278),
    [anon_sym_LT_EQ] = ACTIONS(278),
    [anon_sym_in] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(280),
    [anon_sym_If] = ACTIONS(280),
    [anon_sym_true] = ACTIONS(280),
    [anon_sym_false] = ACTIONS(280),
    [anon_sym_Alias] = ACTIONS(280),
    [anon_sym_Compiler] = ACTIONS(280),
    [anon_sym_Copy] = ACTIONS(280),
    [anon_sym_CopyDir] = ACTIONS(280),
    [anon_sym_CSAssembly] = ACTIONS(280),
    [anon_sym_DLL] = ACTIONS(280),
    [anon_sym_Error] = ACTIONS(280),
    [anon_sym_Exec] = ACTIONS(280),
    [anon_sym_Executable] = ACTIONS(280),
    [anon_sym_ForEach] = ACTIONS(280),
    [anon_sym_Library] = ACTIONS(280),
    [anon_sym_ListDependencies] = ACTIONS(280),
    [anon_sym_ObjectList] = ACTIONS(280),
    [anon_sym_Print] = ACTIONS(280),
    [anon_sym_RemoveDir] = ACTIONS(280),
    [anon_sym_Settings] = ACTIONS(280),
    [anon_sym_Test] = ACTIONS(280),
    [anon_sym_TextFile] = ACTIONS(280),
    [anon_sym_Unity] = ACTIONS(280),
    [anon_sym_Using] = ACTIONS(280),
    [anon_sym_VCXProject] = ACTIONS(280),
    [anon_sym_VSProjectExternal] = ACTIONS(280),
    [anon_sym_VSSolution] = ACTIONS(280),
    [anon_sym_XCodeProject] = ACTIONS(280),
    [anon_sym_exists] = ACTIONS(280),
    [anon_sym_file_exists] = ACTIONS(280),
  },
  [57] = {
    [sym__preprocessor] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(282),
    [sym_identifier] = ACTIONS(284),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(282),
    [anon_sym_DQUOTE] = ACTIONS(282),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(282),
    [anon_sym_AMP_AMP] = ACTIONS(282),
    [anon_sym_BANG] = ACTIONS(284),
    [anon_sym_DOT] = ACTIONS(282),
    [anon_sym_CARET] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(282),
    [anon_sym_RBRACK] = ACTIONS(282),
    [anon_sym_LPAREN] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_function] = ACTIONS(284),
    [anon_sym_not] = ACTIONS(284),
    [anon_sym_and] = ACTIONS(284),
    [anon_sym_or] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(282),
    [anon_sym_DASH] = ACTIONS(282),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [anon_sym_BANG_EQ] = ACTIONS(282),
    [anon_sym_GT] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(284),
    [anon_sym_GT_EQ] = ACTIONS(282),
    [anon_sym_LT_EQ] = ACTIONS(282),
    [anon_sym_in] = ACTIONS(284),
    [anon_sym_EQ] = ACTIONS(284),
    [anon_sym_If] = ACTIONS(284),
    [anon_sym_true] = ACTIONS(284),
    [anon_sym_false] = ACTIONS(284),
    [anon_sym_Alias] = ACTIONS(284),
    [anon_sym_Compiler] = ACTIONS(284),
    [anon_sym_Copy] = ACTIONS(284),
    [anon_sym_CopyDir] = ACTIONS(284),
    [anon_sym_CSAssembly] = ACTIONS(284),
    [anon_sym_DLL] = ACTIONS(284),
    [anon_sym_Error] = ACTIONS(284),
    [anon_sym_Exec] = ACTIONS(284),
    [anon_sym_Executable] = ACTIONS(284),
    [anon_sym_ForEach] = ACTIONS(284),
    [anon_sym_Library] = ACTIONS(284),
    [anon_sym_ListDependencies] = ACTIONS(284),
    [anon_sym_ObjectList] = ACTIONS(284),
    [anon_sym_Print] = ACTIONS(284),
    [anon_sym_RemoveDir] = ACTIONS(284),
    [anon_sym_Settings] = ACTIONS(284),
    [anon_sym_Test] = ACTIONS(284),
    [anon_sym_TextFile] = ACTIONS(284),
    [anon_sym_Unity] = ACTIONS(284),
    [anon_sym_Using] = ACTIONS(284),
    [anon_sym_VCXProject] = ACTIONS(284),
    [anon_sym_VSProjectExternal] = ACTIONS(284),
    [anon_sym_VSSolution] = ACTIONS(284),
    [anon_sym_XCodeProject] = ACTIONS(284),
    [anon_sym_exists] = ACTIONS(284),
    [anon_sym_file_exists] = ACTIONS(284),
  },
  [58] = {
    [sym__preprocessor] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(286),
    [sym_identifier] = ACTIONS(288),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(286),
    [anon_sym_DQUOTE] = ACTIONS(286),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(286),
    [anon_sym_AMP_AMP] = ACTIONS(286),
    [anon_sym_BANG] = ACTIONS(288),
    [anon_sym_DOT] = ACTIONS(286),
    [anon_sym_CARET] = ACTIONS(286),
    [anon_sym_LBRACE] = ACTIONS(286),
    [anon_sym_RBRACE] = ACTIONS(286),
    [anon_sym_LBRACK] = ACTIONS(286),
    [anon_sym_RBRACK] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_function] = ACTIONS(288),
    [anon_sym_not] = ACTIONS(288),
    [anon_sym_and] = ACTIONS(288),
    [anon_sym_or] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(286),
    [anon_sym_BANG_EQ] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(288),
    [anon_sym_LT] = ACTIONS(288),
    [anon_sym_GT_EQ] = ACTIONS(286),
    [anon_sym_LT_EQ] = ACTIONS(286),
    [anon_sym_in] = ACTIONS(288),
    [anon_sym_EQ] = ACTIONS(288),
    [anon_sym_If] = ACTIONS(288),
    [anon_sym_true] = ACTIONS(288),
    [anon_sym_false] = ACTIONS(288),
    [anon_sym_Alias] = ACTIONS(288),
    [anon_sym_Compiler] = ACTIONS(288),
    [anon_sym_Copy] = ACTIONS(288),
    [anon_sym_CopyDir] = ACTIONS(288),
    [anon_sym_CSAssembly] = ACTIONS(288),
    [anon_sym_DLL] = ACTIONS(288),
    [anon_sym_Error] = ACTIONS(288),
    [anon_sym_Exec] = ACTIONS(288),
    [anon_sym_Executable] = ACTIONS(288),
    [anon_sym_ForEach] = ACTIONS(288),
    [anon_sym_Library] = ACTIONS(288),
    [anon_sym_ListDependencies] = ACTIONS(288),
    [anon_sym_ObjectList] = ACTIONS(288),
    [anon_sym_Print] = ACTIONS(288),
    [anon_sym_RemoveDir] = ACTIONS(288),
    [anon_sym_Settings] = ACTIONS(288),
    [anon_sym_Test] = ACTIONS(288),
    [anon_sym_TextFile] = ACTIONS(288),
    [anon_sym_Unity] = ACTIONS(288),
    [anon_sym_Using] = ACTIONS(288),
    [anon_sym_VCXProject] = ACTIONS(288),
    [anon_sym_VSProjectExternal] = ACTIONS(288),
    [anon_sym_VSSolution] = ACTIONS(288),
    [anon_sym_XCodeProject] = ACTIONS(288),
    [anon_sym_exists] = ACTIONS(288),
    [anon_sym_file_exists] = ACTIONS(288),
  },
  [59] = {
    [sym__preprocessor] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(290),
    [sym_identifier] = ACTIONS(292),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(292),
    [anon_sym_SQUOTE] = ACTIONS(290),
    [anon_sym_DQUOTE] = ACTIONS(290),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(290),
    [anon_sym_AMP_AMP] = ACTIONS(290),
    [anon_sym_BANG] = ACTIONS(292),
    [anon_sym_DOT] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(290),
    [anon_sym_LBRACE] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(290),
    [anon_sym_LBRACK] = ACTIONS(290),
    [anon_sym_RBRACK] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_function] = ACTIONS(292),
    [anon_sym_not] = ACTIONS(292),
    [anon_sym_and] = ACTIONS(292),
    [anon_sym_or] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_EQ_EQ] = ACTIONS(290),
    [anon_sym_BANG_EQ] = ACTIONS(290),
    [anon_sym_GT] = ACTIONS(292),
    [anon_sym_LT] = ACTIONS(292),
    [anon_sym_GT_EQ] = ACTIONS(290),
    [anon_sym_LT_EQ] = ACTIONS(290),
    [anon_sym_in] = ACTIONS(292),
    [anon_sym_EQ] = ACTIONS(292),
    [anon_sym_If] = ACTIONS(292),
    [anon_sym_true] = ACTIONS(292),
    [anon_sym_false] = ACTIONS(292),
    [anon_sym_Alias] = ACTIONS(292),
    [anon_sym_Compiler] = ACTIONS(292),
    [anon_sym_Copy] = ACTIONS(292),
    [anon_sym_CopyDir] = ACTIONS(292),
    [anon_sym_CSAssembly] = ACTIONS(292),
    [anon_sym_DLL] = ACTIONS(292),
    [anon_sym_Error] = ACTIONS(292),
    [anon_sym_Exec] = ACTIONS(292),
    [anon_sym_Executable] = ACTIONS(292),
    [anon_sym_ForEach] = ACTIONS(292),
    [anon_sym_Library] = ACTIONS(292),
    [anon_sym_ListDependencies] = ACTIONS(292),
    [anon_sym_ObjectList] = ACTIONS(292),
    [anon_sym_Print] = ACTIONS(292),
    [anon_sym_RemoveDir] = ACTIONS(292),
    [anon_sym_Settings] = ACTIONS(292),
    [anon_sym_Test] = ACTIONS(292),
    [anon_sym_TextFile] = ACTIONS(292),
    [anon_sym_Unity] = ACTIONS(292),
    [anon_sym_Using] = ACTIONS(292),
    [anon_sym_VCXProject] = ACTIONS(292),
    [anon_sym_VSProjectExternal] = ACTIONS(292),
    [anon_sym_VSSolution] = ACTIONS(292),
    [anon_sym_XCodeProject] = ACTIONS(292),
    [anon_sym_exists] = ACTIONS(292),
    [anon_sym_file_exists] = ACTIONS(292),
  },
  [60] = {
    [sym__preprocessor] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(294),
    [sym_identifier] = ACTIONS(296),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(296),
    [anon_sym_SQUOTE] = ACTIONS(294),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(294),
    [anon_sym_CARET] = ACTIONS(294),
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(294),
    [anon_sym_RBRACK] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_function] = ACTIONS(296),
    [anon_sym_not] = ACTIONS(144),
    [anon_sym_and] = ACTIONS(146),
    [anon_sym_or] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_EQ_EQ] = ACTIONS(294),
    [anon_sym_BANG_EQ] = ACTIONS(294),
    [anon_sym_GT] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_GT_EQ] = ACTIONS(294),
    [anon_sym_LT_EQ] = ACTIONS(294),
    [anon_sym_in] = ACTIONS(150),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_If] = ACTIONS(296),
    [anon_sym_true] = ACTIONS(296),
    [anon_sym_false] = ACTIONS(296),
    [anon_sym_Alias] = ACTIONS(296),
    [anon_sym_Compiler] = ACTIONS(296),
    [anon_sym_Copy] = ACTIONS(296),
    [anon_sym_CopyDir] = ACTIONS(296),
    [anon_sym_CSAssembly] = ACTIONS(296),
    [anon_sym_DLL] = ACTIONS(296),
    [anon_sym_Error] = ACTIONS(296),
    [anon_sym_Exec] = ACTIONS(296),
    [anon_sym_Executable] = ACTIONS(296),
    [anon_sym_ForEach] = ACTIONS(296),
    [anon_sym_Library] = ACTIONS(296),
    [anon_sym_ListDependencies] = ACTIONS(296),
    [anon_sym_ObjectList] = ACTIONS(296),
    [anon_sym_Print] = ACTIONS(296),
    [anon_sym_RemoveDir] = ACTIONS(296),
    [anon_sym_Settings] = ACTIONS(296),
    [anon_sym_Test] = ACTIONS(296),
    [anon_sym_TextFile] = ACTIONS(296),
    [anon_sym_Unity] = ACTIONS(296),
    [anon_sym_Using] = ACTIONS(296),
    [anon_sym_VCXProject] = ACTIONS(296),
    [anon_sym_VSProjectExternal] = ACTIONS(296),
    [anon_sym_VSSolution] = ACTIONS(296),
    [anon_sym_XCodeProject] = ACTIONS(296),
    [anon_sym_exists] = ACTIONS(296),
    [anon_sym_file_exists] = ACTIONS(296),
  },
  [61] = {
    [sym__preprocessor] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(298),
    [sym_identifier] = ACTIONS(300),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(300),
    [anon_sym_DOT] = ACTIONS(298),
    [anon_sym_CARET] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_function] = ACTIONS(300),
    [anon_sym_not] = ACTIONS(144),
    [anon_sym_and] = ACTIONS(146),
    [anon_sym_or] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [anon_sym_EQ_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(300),
    [anon_sym_LT] = ACTIONS(300),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [anon_sym_in] = ACTIONS(150),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_If] = ACTIONS(300),
    [anon_sym_true] = ACTIONS(300),
    [anon_sym_false] = ACTIONS(300),
    [anon_sym_Alias] = ACTIONS(300),
    [anon_sym_Compiler] = ACTIONS(300),
    [anon_sym_Copy] = ACTIONS(300),
    [anon_sym_CopyDir] = ACTIONS(300),
    [anon_sym_CSAssembly] = ACTIONS(300),
    [anon_sym_DLL] = ACTIONS(300),
    [anon_sym_Error] = ACTIONS(300),
    [anon_sym_Exec] = ACTIONS(300),
    [anon_sym_Executable] = ACTIONS(300),
    [anon_sym_ForEach] = ACTIONS(300),
    [anon_sym_Library] = ACTIONS(300),
    [anon_sym_ListDependencies] = ACTIONS(300),
    [anon_sym_ObjectList] = ACTIONS(300),
    [anon_sym_Print] = ACTIONS(300),
    [anon_sym_RemoveDir] = ACTIONS(300),
    [anon_sym_Settings] = ACTIONS(300),
    [anon_sym_Test] = ACTIONS(300),
    [anon_sym_TextFile] = ACTIONS(300),
    [anon_sym_Unity] = ACTIONS(300),
    [anon_sym_Using] = ACTIONS(300),
    [anon_sym_VCXProject] = ACTIONS(300),
    [anon_sym_VSProjectExternal] = ACTIONS(300),
    [anon_sym_VSSolution] = ACTIONS(300),
    [anon_sym_XCodeProject] = ACTIONS(300),
    [anon_sym_exists] = ACTIONS(300),
    [anon_sym_file_exists] = ACTIONS(300),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(304), 1,
      sym_decimal,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      anon_sym_BANG,
    ACTIONS(318), 1,
      anon_sym_exists,
    ACTIONS(320), 1,
      anon_sym_file_exists,
    STATE(62), 1,
      sym__preprocessor,
    STATE(109), 1,
      sym_preprocessor_expression,
    ACTIONS(312), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(101), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    STATE(94), 3,
      sym_string,
      sym_number,
      sym_boolean,
    ACTIONS(314), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
    STATE(97), 7,
      sym_preprocessor_or,
      sym_preprocessor_and,
      sym_preprocessor_not,
      sym_variable,
      sym_literal,
      sym_exists,
      sym_file_exists,
  [73] = 18,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(304), 1,
      sym_decimal,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      anon_sym_BANG,
    ACTIONS(318), 1,
      anon_sym_exists,
    ACTIONS(320), 1,
      anon_sym_file_exists,
    STATE(63), 1,
      sym__preprocessor,
    STATE(104), 1,
      sym_preprocessor_expression,
    ACTIONS(312), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(101), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    STATE(94), 3,
      sym_string,
      sym_number,
      sym_boolean,
    ACTIONS(314), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
    STATE(97), 7,
      sym_preprocessor_or,
      sym_preprocessor_and,
      sym_preprocessor_not,
      sym_variable,
      sym_literal,
      sym_exists,
      sym_file_exists,
  [146] = 18,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(304), 1,
      sym_decimal,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      anon_sym_BANG,
    ACTIONS(318), 1,
      anon_sym_exists,
    ACTIONS(320), 1,
      anon_sym_file_exists,
    STATE(64), 1,
      sym__preprocessor,
    STATE(107), 1,
      sym_preprocessor_expression,
    ACTIONS(312), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(101), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    STATE(94), 3,
      sym_string,
      sym_number,
      sym_boolean,
    ACTIONS(314), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
    STATE(97), 7,
      sym_preprocessor_or,
      sym_preprocessor_and,
      sym_preprocessor_not,
      sym_variable,
      sym_literal,
      sym_exists,
      sym_file_exists,
  [219] = 18,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(304), 1,
      sym_decimal,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      anon_sym_BANG,
    ACTIONS(318), 1,
      anon_sym_exists,
    ACTIONS(320), 1,
      anon_sym_file_exists,
    STATE(65), 1,
      sym__preprocessor,
    STATE(108), 1,
      sym_preprocessor_expression,
    ACTIONS(312), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(101), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    STATE(94), 3,
      sym_string,
      sym_number,
      sym_boolean,
    ACTIONS(314), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
    STATE(97), 7,
      sym_preprocessor_or,
      sym_preprocessor_and,
      sym_preprocessor_not,
      sym_variable,
      sym_literal,
      sym_exists,
      sym_file_exists,
  [292] = 14,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      anon_sym_EQ,
    ACTIONS(246), 1,
      anon_sym_PLUS,
    ACTIONS(248), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    ACTIONS(324), 1,
      anon_sym_not,
    ACTIONS(326), 1,
      anon_sym_in,
    STATE(66), 1,
      sym__preprocessor,
    ACTIONS(140), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(142), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(252), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(250), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [343] = 14,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      anon_sym_EQ,
    ACTIONS(246), 1,
      anon_sym_PLUS,
    ACTIONS(248), 1,
      anon_sym_DASH,
    ACTIONS(324), 1,
      anon_sym_not,
    ACTIONS(326), 1,
      anon_sym_in,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      sym__preprocessor,
    ACTIONS(140), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(142), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(252), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(250), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [394] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(68), 1,
      sym__preprocessor,
    STATE(41), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    STATE(45), 2,
      sym_string,
      sym_variable,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(334), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    ACTIONS(332), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
  [438] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(69), 1,
      sym__preprocessor,
    STATE(41), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    STATE(44), 2,
      sym_string,
      sym_variable,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(334), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    ACTIONS(332), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
  [482] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(336), 1,
      anon_sym_define,
    ACTIONS(338), 1,
      anon_sym_undef,
    ACTIONS(340), 1,
      anon_sym_import,
    ACTIONS(342), 1,
      anon_sym_include,
    ACTIONS(344), 1,
      anon_sym_if,
    STATE(70), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(346), 3,
      sym_preprocessor_else,
      sym_preprocessor_endif,
      sym_preprocessor_once,
    STATE(137), 5,
      sym_preprocessor_define,
      sym_preprocessor_undef,
      sym_preprocessor_import,
      sym_preprocessor_include,
      sym_preprocessor_if,
  [524] = 9,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      sym_identifier,
    STATE(71), 1,
      sym__preprocessor,
    STATE(119), 1,
      sym_variable,
    STATE(101), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    ACTIONS(314), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
  [561] = 9,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(302), 1,
      sym_identifier,
    STATE(72), 1,
      sym__preprocessor,
    STATE(120), 1,
      sym_variable,
    STATE(101), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    ACTIONS(314), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
  [598] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_DOLLAR,
    ACTIONS(354), 1,
      anon_sym_PERCENT,
    STATE(73), 1,
      sym__preprocessor,
    STATE(80), 1,
      aux_sym_string_repeat2,
    STATE(84), 1,
      sym__double_inner,
    ACTIONS(348), 2,
      sym_double_quoted,
      sym_escape_sequence,
    STATE(90), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [634] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    STATE(74), 1,
      sym__preprocessor,
    STATE(82), 1,
      aux_sym_string_repeat1,
    STATE(92), 1,
      sym__single_inner,
    ACTIONS(356), 2,
      sym_single_quoted,
      sym_escape_sequence,
    STATE(89), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [670] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      sym__preprocessor,
    STATE(78), 1,
      aux_sym_string_repeat1,
    STATE(92), 1,
      sym__single_inner,
    ACTIONS(356), 2,
      sym_single_quoted,
      sym_escape_sequence,
    STATE(89), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [706] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(352), 1,
      anon_sym_DOLLAR,
    ACTIONS(354), 1,
      anon_sym_PERCENT,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym__preprocessor,
    STATE(81), 1,
      aux_sym_string_repeat2,
    STATE(84), 1,
      sym__double_inner,
    ACTIONS(348), 2,
      sym_double_quoted,
      sym_escape_sequence,
    STATE(90), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [742] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      aux_sym_string_repeat1,
    STATE(77), 1,
      sym__preprocessor,
    STATE(92), 1,
      sym__single_inner,
    ACTIONS(356), 2,
      sym_single_quoted,
      sym_escape_sequence,
    STATE(89), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [778] = 9,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    ACTIONS(371), 1,
      anon_sym_DOLLAR,
    ACTIONS(374), 1,
      anon_sym_PERCENT,
    STATE(92), 1,
      sym__single_inner,
    ACTIONS(366), 2,
      sym_single_quoted,
      sym_escape_sequence,
    STATE(78), 2,
      sym__preprocessor,
      aux_sym_string_repeat1,
    STATE(89), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [812] = 9,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_DOLLAR,
    ACTIONS(385), 1,
      anon_sym_PERCENT,
    STATE(84), 1,
      sym__double_inner,
    ACTIONS(377), 2,
      sym_double_quoted,
      sym_escape_sequence,
    STATE(79), 2,
      sym__preprocessor,
      aux_sym_string_repeat2,
    STATE(90), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [846] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(352), 1,
      anon_sym_DOLLAR,
    ACTIONS(354), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym_string_repeat2,
    STATE(80), 1,
      sym__preprocessor,
    STATE(84), 1,
      sym__double_inner,
    ACTIONS(348), 2,
      sym_double_quoted,
      sym_escape_sequence,
    STATE(90), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [882] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(352), 1,
      anon_sym_DOLLAR,
    ACTIONS(354), 1,
      anon_sym_PERCENT,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym_string_repeat2,
    STATE(81), 1,
      sym__preprocessor,
    STATE(84), 1,
      sym__double_inner,
    ACTIONS(348), 2,
      sym_double_quoted,
      sym_escape_sequence,
    STATE(90), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [918] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_DOLLAR,
    ACTIONS(360), 1,
      anon_sym_PERCENT,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      aux_sym_string_repeat1,
    STATE(82), 1,
      sym__preprocessor,
    STATE(92), 1,
      sym__single_inner,
    ACTIONS(356), 2,
      sym_single_quoted,
      sym_escape_sequence,
    STATE(89), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [954] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(83), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(390), 5,
      sym_single_quoted,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [974] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(84), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(392), 5,
      sym_double_quoted,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [994] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(85), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(394), 5,
      sym_single_quoted,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1014] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(86), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(390), 5,
      sym_double_quoted,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1034] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(394), 5,
      sym_double_quoted,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1054] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(396), 5,
      sym_double_quoted,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1074] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(89), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(398), 5,
      sym_single_quoted,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1094] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(400), 5,
      sym_double_quoted,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1114] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(396), 5,
      sym_single_quoted,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1134] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(92), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(402), 5,
      sym_single_quoted,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1154] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(174), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1174] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(94), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(262), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1194] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(404), 1,
      sym_decimal,
    STATE(95), 1,
      sym__preprocessor,
    ACTIONS(406), 2,
      anon_sym_AT,
      anon_sym_STAR,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1216] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(96), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(170), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1236] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(97), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(408), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1256] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(234), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1276] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(99), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(218), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1296] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(214), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1316] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(101), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(210), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1336] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(102), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(178), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1356] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(290), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1376] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(104), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(410), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1396] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(412), 1,
      sym_decimal,
    STATE(105), 1,
      sym__preprocessor,
    ACTIONS(414), 2,
      anon_sym_AT,
      anon_sym_STAR,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1418] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(106), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(166), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1438] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(416), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1458] = 7,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(418), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(420), 1,
      anon_sym_AMP_AMP,
    ACTIONS(422), 1,
      sym__preprocessor_end,
    STATE(108), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1482] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(420), 1,
      anon_sym_AMP_AMP,
    STATE(109), 1,
      sym__preprocessor,
    ACTIONS(424), 2,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1504] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_array,
    STATE(110), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1525] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(426), 1,
      sym_identifier,
    STATE(111), 1,
      sym__preprocessor,
    STATE(134), 1,
      sym_environment_variable,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1546] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(426), 1,
      sym_identifier,
    STATE(112), 1,
      sym__preprocessor,
    STATE(123), 1,
      sym_environment_variable,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1567] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(428), 1,
      sym_identifier,
    STATE(113), 1,
      sym__preprocessor,
    STATE(126), 1,
      sym_environment_variable,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1588] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(430), 1,
      sym__preprocessor_end,
    STATE(114), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1606] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(432), 1,
      sym__preprocessor_end,
    STATE(115), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1624] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(434), 1,
      anon_sym_DOLLAR2,
    STATE(116), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1642] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(436), 1,
      sym_filename,
    STATE(117), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1660] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(438), 1,
      anon_sym_in,
    STATE(118), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1678] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(440), 1,
      sym__preprocessor_end,
    STATE(119), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1696] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(442), 1,
      sym__preprocessor_end,
    STATE(120), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1714] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1732] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1750] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1768] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(448), 1,
      sym_filename,
    STATE(124), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1786] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1804] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      sym__preprocessor_end,
    STATE(126), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1822] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(127), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1840] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    STATE(128), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1858] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1876] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(460), 1,
      sym_identifier,
    STATE(130), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1894] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1912] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1930] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(466), 1,
      anon_sym_DOLLAR2,
    STATE(133), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1948] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1966] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1984] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(472), 1,
      sym_identifier,
    STATE(136), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [2002] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(474), 1,
      sym__preprocessor_end,
    STATE(137), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [2020] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(476), 1,
      sym_filename,
    STATE(138), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [2038] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [2056] = 1,
    ACTIONS(480), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(62)] = 0,
  [SMALL_STATE(63)] = 73,
  [SMALL_STATE(64)] = 146,
  [SMALL_STATE(65)] = 219,
  [SMALL_STATE(66)] = 292,
  [SMALL_STATE(67)] = 343,
  [SMALL_STATE(68)] = 394,
  [SMALL_STATE(69)] = 438,
  [SMALL_STATE(70)] = 482,
  [SMALL_STATE(71)] = 524,
  [SMALL_STATE(72)] = 561,
  [SMALL_STATE(73)] = 598,
  [SMALL_STATE(74)] = 634,
  [SMALL_STATE(75)] = 670,
  [SMALL_STATE(76)] = 706,
  [SMALL_STATE(77)] = 742,
  [SMALL_STATE(78)] = 778,
  [SMALL_STATE(79)] = 812,
  [SMALL_STATE(80)] = 846,
  [SMALL_STATE(81)] = 882,
  [SMALL_STATE(82)] = 918,
  [SMALL_STATE(83)] = 954,
  [SMALL_STATE(84)] = 974,
  [SMALL_STATE(85)] = 994,
  [SMALL_STATE(86)] = 1014,
  [SMALL_STATE(87)] = 1034,
  [SMALL_STATE(88)] = 1054,
  [SMALL_STATE(89)] = 1074,
  [SMALL_STATE(90)] = 1094,
  [SMALL_STATE(91)] = 1114,
  [SMALL_STATE(92)] = 1134,
  [SMALL_STATE(93)] = 1154,
  [SMALL_STATE(94)] = 1174,
  [SMALL_STATE(95)] = 1194,
  [SMALL_STATE(96)] = 1216,
  [SMALL_STATE(97)] = 1236,
  [SMALL_STATE(98)] = 1256,
  [SMALL_STATE(99)] = 1276,
  [SMALL_STATE(100)] = 1296,
  [SMALL_STATE(101)] = 1316,
  [SMALL_STATE(102)] = 1336,
  [SMALL_STATE(103)] = 1356,
  [SMALL_STATE(104)] = 1376,
  [SMALL_STATE(105)] = 1396,
  [SMALL_STATE(106)] = 1418,
  [SMALL_STATE(107)] = 1438,
  [SMALL_STATE(108)] = 1458,
  [SMALL_STATE(109)] = 1482,
  [SMALL_STATE(110)] = 1504,
  [SMALL_STATE(111)] = 1525,
  [SMALL_STATE(112)] = 1546,
  [SMALL_STATE(113)] = 1567,
  [SMALL_STATE(114)] = 1588,
  [SMALL_STATE(115)] = 1606,
  [SMALL_STATE(116)] = 1624,
  [SMALL_STATE(117)] = 1642,
  [SMALL_STATE(118)] = 1660,
  [SMALL_STATE(119)] = 1678,
  [SMALL_STATE(120)] = 1696,
  [SMALL_STATE(121)] = 1714,
  [SMALL_STATE(122)] = 1732,
  [SMALL_STATE(123)] = 1750,
  [SMALL_STATE(124)] = 1768,
  [SMALL_STATE(125)] = 1786,
  [SMALL_STATE(126)] = 1804,
  [SMALL_STATE(127)] = 1822,
  [SMALL_STATE(128)] = 1840,
  [SMALL_STATE(129)] = 1858,
  [SMALL_STATE(130)] = 1876,
  [SMALL_STATE(131)] = 1894,
  [SMALL_STATE(132)] = 1912,
  [SMALL_STATE(133)] = 1930,
  [SMALL_STATE(134)] = 1948,
  [SMALL_STATE(135)] = 1966,
  [SMALL_STATE(136)] = 1984,
  [SMALL_STATE(137)] = 2002,
  [SMALL_STATE(138)] = 2020,
  [SMALL_STATE(139)] = 2038,
  [SMALL_STATE(140)] = 2056,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 8),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 8),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5, .production_id = 14),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5, .production_id = 14),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare, 3, .production_id = 10),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compare, 3, .production_id = 10),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in, 4, .production_id = 12),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_in, 4, .production_id = 12),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_exists, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_exists, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exists, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 11),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 11),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 7),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 7),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesis, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesis, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3, .production_id = 10),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign, 3, .production_id = 10),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_variable, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_variable, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_macros, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_macros, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_promotion, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_promotion, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 9),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 9),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3, .production_id = 10),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 3, .production_id = 10),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 3, .production_id = 10),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or, 3, .production_id = 10),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3, .production_id = 10),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 3, .production_id = 10),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 3, .production_id = 10),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 3, .production_id = 10),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 3, .production_id = 10),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 3, .production_id = 10),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(89),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(127),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(105),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(90),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(136),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(95),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 2, .production_id = 6),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_inner, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_inner, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_expression, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_not, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_and, 3, .production_id = 13),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_if, 2, .production_id = 5),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_or, 3, .production_id = 13),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_variable, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_include, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_define, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_undef, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_import, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [456] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preprocessor, 3),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__preprocessor_end = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__preprocessor_end] = sym__preprocessor_end,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__preprocessor_end] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_fastbuild_external_scanner_create(void);
void tree_sitter_fastbuild_external_scanner_destroy(void *);
bool tree_sitter_fastbuild_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fastbuild_external_scanner_serialize(void *, char *);
void tree_sitter_fastbuild_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fastbuild(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_fastbuild_external_scanner_create,
      tree_sitter_fastbuild_external_scanner_destroy,
      tree_sitter_fastbuild_external_scanner_scan,
      tree_sitter_fastbuild_external_scanner_serialize,
      tree_sitter_fastbuild_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
