#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 61
#define SYMBOL_COUNT 138
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
  sym_array = 110,
  sym_struct = 111,
  sym_arguments = 112,
  sym_parenthesis = 113,
  sym_function_call = 114,
  sym_function_definition = 115,
  sym_expression = 116,
  sym_not = 117,
  sym_and = 118,
  sym_or = 119,
  sym_add = 120,
  sym_sub = 121,
  sym_compare = 122,
  sym_in = 123,
  sym_not_in = 124,
  sym_assign = 125,
  sym_literal = 126,
  sym_if = 127,
  sym_number = 128,
  sym_boolean = 129,
  sym_builtin_function = 130,
  sym_builtin_variable = 131,
  sym_builtin_macros = 132,
  sym_exists = 133,
  sym_file_exists = 134,
  aux_sym_source_file_repeat1 = 135,
  aux_sym_string_repeat1 = 136,
  aux_sym_string_repeat2 = 137,
  anon_alias_sym_notin = 138,
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
  [75] = 72,
  [76] = 73,
  [77] = 77,
  [78] = 78,
  [79] = 71,
  [80] = 74,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 86,
  [90] = 84,
  [91] = 31,
  [92] = 25,
  [93] = 93,
  [94] = 30,
  [95] = 95,
  [96] = 47,
  [97] = 42,
  [98] = 41,
  [99] = 40,
  [100] = 32,
  [101] = 59,
  [102] = 102,
  [103] = 93,
  [104] = 34,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 109,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 112,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 123,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 114,
  [132] = 121,
  [133] = 120,
  [134] = 125,
  [135] = 135,
  [136] = 115,
  [137] = 129,
  [138] = 138,
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
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 15, .external_lex_state = 1},
  [92] = {.lex_state = 15, .external_lex_state = 1},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 15, .external_lex_state = 1},
  [95] = {.lex_state = 15, .external_lex_state = 1},
  [96] = {.lex_state = 15, .external_lex_state = 1},
  [97] = {.lex_state = 15, .external_lex_state = 1},
  [98] = {.lex_state = 15, .external_lex_state = 1},
  [99] = {.lex_state = 15, .external_lex_state = 1},
  [100] = {.lex_state = 15, .external_lex_state = 1},
  [101] = {.lex_state = 15, .external_lex_state = 1},
  [102] = {.lex_state = 15, .external_lex_state = 1},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 15, .external_lex_state = 1},
  [105] = {.lex_state = 15, .external_lex_state = 1},
  [106] = {.lex_state = 15, .external_lex_state = 1},
  [107] = {.lex_state = 15, .external_lex_state = 1},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 15, .external_lex_state = 1},
  [113] = {.lex_state = 15, .external_lex_state = 1},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 15, .external_lex_state = 1},
  [118] = {.lex_state = 15, .external_lex_state = 1},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 15},
  [121] = {.lex_state = 15},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 15, .external_lex_state = 1},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 15},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 15},
  [130] = {.lex_state = 15},
  [131] = {.lex_state = 15},
  [132] = {.lex_state = 15},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 15, .external_lex_state = 1},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 15},
  [138] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(126),
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(1),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(5),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [2] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(2),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(50),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(62),
    [anon_sym_CARET] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_function] = ACTIONS(74),
    [anon_sym_not] = ACTIONS(77),
    [anon_sym_If] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(83),
    [anon_sym_false] = ACTIONS(83),
    [anon_sym_Alias] = ACTIONS(86),
    [anon_sym_Compiler] = ACTIONS(86),
    [anon_sym_Copy] = ACTIONS(86),
    [anon_sym_CopyDir] = ACTIONS(86),
    [anon_sym_CSAssembly] = ACTIONS(86),
    [anon_sym_DLL] = ACTIONS(86),
    [anon_sym_Error] = ACTIONS(86),
    [anon_sym_Exec] = ACTIONS(86),
    [anon_sym_Executable] = ACTIONS(86),
    [anon_sym_ForEach] = ACTIONS(86),
    [anon_sym_Library] = ACTIONS(86),
    [anon_sym_ListDependencies] = ACTIONS(86),
    [anon_sym_ObjectList] = ACTIONS(86),
    [anon_sym_Print] = ACTIONS(86),
    [anon_sym_RemoveDir] = ACTIONS(86),
    [anon_sym_Settings] = ACTIONS(86),
    [anon_sym_Test] = ACTIONS(86),
    [anon_sym_TextFile] = ACTIONS(86),
    [anon_sym_Unity] = ACTIONS(86),
    [anon_sym_Using] = ACTIONS(86),
    [anon_sym_VCXProject] = ACTIONS(86),
    [anon_sym_VSProjectExternal] = ACTIONS(86),
    [anon_sym_VSSolution] = ACTIONS(86),
    [anon_sym_XCodeProject] = ACTIONS(86),
    [anon_sym_exists] = ACTIONS(89),
    [anon_sym_file_exists] = ACTIONS(92),
  },
  [3] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(3),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [4] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(4),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [5] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(5),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(99),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [6] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(6),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [7] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(7),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [8] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(8),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [9] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(9),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(49),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(4),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [10] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(10),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(58),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [11] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(11),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(26),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [12] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(12),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(65),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [13] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(13),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(60),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [14] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(14),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(55),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [15] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(15),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(52),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [16] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(16),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(66),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [17] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(17),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(39),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [18] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(18),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(51),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [19] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(19),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(37),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [20] = {
    [sym_string] = STATE(25),
    [sym__preprocessor] = STATE(20),
    [sym_function] = STATE(21),
    [sym_usage] = STATE(50),
    [sym_array] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_parenthesis] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_function_definition] = STATE(50),
    [sym_expression] = STATE(27),
    [sym_not] = STATE(50),
    [sym_and] = STATE(50),
    [sym_or] = STATE(50),
    [sym_add] = STATE(50),
    [sym_sub] = STATE(50),
    [sym_compare] = STATE(50),
    [sym_in] = STATE(50),
    [sym_not_in] = STATE(50),
    [sym_assign] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_if] = STATE(50),
    [sym_number] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_builtin_function] = STATE(56),
    [sym_exists] = STATE(50),
    [sym_file_exists] = STATE(50),
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
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_not] = ACTIONS(33),
    [anon_sym_If] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_Alias] = ACTIONS(39),
    [anon_sym_Compiler] = ACTIONS(39),
    [anon_sym_Copy] = ACTIONS(39),
    [anon_sym_CopyDir] = ACTIONS(39),
    [anon_sym_CSAssembly] = ACTIONS(39),
    [anon_sym_DLL] = ACTIONS(39),
    [anon_sym_Error] = ACTIONS(39),
    [anon_sym_Exec] = ACTIONS(39),
    [anon_sym_Executable] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(39),
    [anon_sym_Library] = ACTIONS(39),
    [anon_sym_ListDependencies] = ACTIONS(39),
    [anon_sym_ObjectList] = ACTIONS(39),
    [anon_sym_Print] = ACTIONS(39),
    [anon_sym_RemoveDir] = ACTIONS(39),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_Test] = ACTIONS(39),
    [anon_sym_TextFile] = ACTIONS(39),
    [anon_sym_Unity] = ACTIONS(39),
    [anon_sym_Using] = ACTIONS(39),
    [anon_sym_VCXProject] = ACTIONS(39),
    [anon_sym_VSProjectExternal] = ACTIONS(39),
    [anon_sym_VSSolution] = ACTIONS(39),
    [anon_sym_XCodeProject] = ACTIONS(39),
    [anon_sym_exists] = ACTIONS(41),
    [anon_sym_file_exists] = ACTIONS(43),
  },
  [21] = {
    [sym__preprocessor] = STATE(21),
    [sym_array] = STATE(54),
    [sym_arguments] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_identifier] = ACTIONS(111),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_AMP_AMP] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_function] = ACTIONS(111),
    [anon_sym_not] = ACTIONS(111),
    [anon_sym_and] = ACTIONS(111),
    [anon_sym_or] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_in] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(111),
    [anon_sym_If] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [anon_sym_Alias] = ACTIONS(111),
    [anon_sym_Compiler] = ACTIONS(111),
    [anon_sym_Copy] = ACTIONS(111),
    [anon_sym_CopyDir] = ACTIONS(111),
    [anon_sym_CSAssembly] = ACTIONS(111),
    [anon_sym_DLL] = ACTIONS(111),
    [anon_sym_Error] = ACTIONS(111),
    [anon_sym_Exec] = ACTIONS(111),
    [anon_sym_Executable] = ACTIONS(111),
    [anon_sym_ForEach] = ACTIONS(111),
    [anon_sym_Library] = ACTIONS(111),
    [anon_sym_ListDependencies] = ACTIONS(111),
    [anon_sym_ObjectList] = ACTIONS(111),
    [anon_sym_Print] = ACTIONS(111),
    [anon_sym_RemoveDir] = ACTIONS(111),
    [anon_sym_Settings] = ACTIONS(111),
    [anon_sym_Test] = ACTIONS(111),
    [anon_sym_TextFile] = ACTIONS(111),
    [anon_sym_Unity] = ACTIONS(111),
    [anon_sym_Using] = ACTIONS(111),
    [anon_sym_VCXProject] = ACTIONS(111),
    [anon_sym_VSProjectExternal] = ACTIONS(111),
    [anon_sym_VSSolution] = ACTIONS(111),
    [anon_sym_XCodeProject] = ACTIONS(111),
    [anon_sym_exists] = ACTIONS(111),
    [anon_sym_file_exists] = ACTIONS(111),
  },
  [22] = {
    [sym__preprocessor] = STATE(22),
    [sym_array] = STATE(35),
    [sym_arguments] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_AMP_AMP] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_function] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(117),
    [anon_sym_and] = ACTIONS(117),
    [anon_sym_or] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(115),
    [anon_sym_in] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_If] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_false] = ACTIONS(117),
    [anon_sym_Alias] = ACTIONS(117),
    [anon_sym_Compiler] = ACTIONS(117),
    [anon_sym_Copy] = ACTIONS(117),
    [anon_sym_CopyDir] = ACTIONS(117),
    [anon_sym_CSAssembly] = ACTIONS(117),
    [anon_sym_DLL] = ACTIONS(117),
    [anon_sym_Error] = ACTIONS(117),
    [anon_sym_Exec] = ACTIONS(117),
    [anon_sym_Executable] = ACTIONS(117),
    [anon_sym_ForEach] = ACTIONS(117),
    [anon_sym_Library] = ACTIONS(117),
    [anon_sym_ListDependencies] = ACTIONS(117),
    [anon_sym_ObjectList] = ACTIONS(117),
    [anon_sym_Print] = ACTIONS(117),
    [anon_sym_RemoveDir] = ACTIONS(117),
    [anon_sym_Settings] = ACTIONS(117),
    [anon_sym_Test] = ACTIONS(117),
    [anon_sym_TextFile] = ACTIONS(117),
    [anon_sym_Unity] = ACTIONS(117),
    [anon_sym_Using] = ACTIONS(117),
    [anon_sym_VCXProject] = ACTIONS(117),
    [anon_sym_VSProjectExternal] = ACTIONS(117),
    [anon_sym_VSSolution] = ACTIONS(117),
    [anon_sym_XCodeProject] = ACTIONS(117),
    [anon_sym_exists] = ACTIONS(117),
    [anon_sym_file_exists] = ACTIONS(117),
  },
  [23] = {
    [sym__preprocessor] = STATE(23),
    [sym_array] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_identifier] = ACTIONS(121),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_AMP_AMP] = ACTIONS(119),
    [anon_sym_BANG] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_CARET] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_function] = ACTIONS(121),
    [anon_sym_not] = ACTIONS(121),
    [anon_sym_and] = ACTIONS(121),
    [anon_sym_or] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(119),
    [anon_sym_in] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_If] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(121),
    [anon_sym_false] = ACTIONS(121),
    [anon_sym_Alias] = ACTIONS(121),
    [anon_sym_Compiler] = ACTIONS(121),
    [anon_sym_Copy] = ACTIONS(121),
    [anon_sym_CopyDir] = ACTIONS(121),
    [anon_sym_CSAssembly] = ACTIONS(121),
    [anon_sym_DLL] = ACTIONS(121),
    [anon_sym_Error] = ACTIONS(121),
    [anon_sym_Exec] = ACTIONS(121),
    [anon_sym_Executable] = ACTIONS(121),
    [anon_sym_ForEach] = ACTIONS(121),
    [anon_sym_Library] = ACTIONS(121),
    [anon_sym_ListDependencies] = ACTIONS(121),
    [anon_sym_ObjectList] = ACTIONS(121),
    [anon_sym_Print] = ACTIONS(121),
    [anon_sym_RemoveDir] = ACTIONS(121),
    [anon_sym_Settings] = ACTIONS(121),
    [anon_sym_Test] = ACTIONS(121),
    [anon_sym_TextFile] = ACTIONS(121),
    [anon_sym_Unity] = ACTIONS(121),
    [anon_sym_Using] = ACTIONS(121),
    [anon_sym_VCXProject] = ACTIONS(121),
    [anon_sym_VSProjectExternal] = ACTIONS(121),
    [anon_sym_VSSolution] = ACTIONS(121),
    [anon_sym_XCodeProject] = ACTIONS(121),
    [anon_sym_exists] = ACTIONS(121),
    [anon_sym_file_exists] = ACTIONS(121),
  },
  [24] = {
    [sym__preprocessor] = STATE(24),
    [sym_array] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_identifier] = ACTIONS(125),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(123),
    [anon_sym_AMP_AMP] = ACTIONS(123),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_function] = ACTIONS(125),
    [anon_sym_not] = ACTIONS(125),
    [anon_sym_and] = ACTIONS(125),
    [anon_sym_or] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_BANG_EQ] = ACTIONS(123),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT_EQ] = ACTIONS(123),
    [anon_sym_LT_EQ] = ACTIONS(123),
    [anon_sym_in] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(125),
    [anon_sym_If] = ACTIONS(125),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(125),
    [anon_sym_Alias] = ACTIONS(125),
    [anon_sym_Compiler] = ACTIONS(125),
    [anon_sym_Copy] = ACTIONS(125),
    [anon_sym_CopyDir] = ACTIONS(125),
    [anon_sym_CSAssembly] = ACTIONS(125),
    [anon_sym_DLL] = ACTIONS(125),
    [anon_sym_Error] = ACTIONS(125),
    [anon_sym_Exec] = ACTIONS(125),
    [anon_sym_Executable] = ACTIONS(125),
    [anon_sym_ForEach] = ACTIONS(125),
    [anon_sym_Library] = ACTIONS(125),
    [anon_sym_ListDependencies] = ACTIONS(125),
    [anon_sym_ObjectList] = ACTIONS(125),
    [anon_sym_Print] = ACTIONS(125),
    [anon_sym_RemoveDir] = ACTIONS(125),
    [anon_sym_Settings] = ACTIONS(125),
    [anon_sym_Test] = ACTIONS(125),
    [anon_sym_TextFile] = ACTIONS(125),
    [anon_sym_Unity] = ACTIONS(125),
    [anon_sym_Using] = ACTIONS(125),
    [anon_sym_VCXProject] = ACTIONS(125),
    [anon_sym_VSProjectExternal] = ACTIONS(125),
    [anon_sym_VSSolution] = ACTIONS(125),
    [anon_sym_XCodeProject] = ACTIONS(125),
    [anon_sym_exists] = ACTIONS(125),
    [anon_sym_file_exists] = ACTIONS(125),
  },
  [25] = {
    [sym__preprocessor] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_identifier] = ACTIONS(129),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(127),
    [anon_sym_AMP_AMP] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_function] = ACTIONS(129),
    [anon_sym_not] = ACTIONS(129),
    [anon_sym_and] = ACTIONS(129),
    [anon_sym_or] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_BANG_EQ] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(127),
    [anon_sym_LT_EQ] = ACTIONS(127),
    [anon_sym_in] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(129),
    [anon_sym_If] = ACTIONS(129),
    [anon_sym_true] = ACTIONS(129),
    [anon_sym_false] = ACTIONS(129),
    [anon_sym_Alias] = ACTIONS(129),
    [anon_sym_Compiler] = ACTIONS(129),
    [anon_sym_Copy] = ACTIONS(129),
    [anon_sym_CopyDir] = ACTIONS(129),
    [anon_sym_CSAssembly] = ACTIONS(129),
    [anon_sym_DLL] = ACTIONS(129),
    [anon_sym_Error] = ACTIONS(129),
    [anon_sym_Exec] = ACTIONS(129),
    [anon_sym_Executable] = ACTIONS(129),
    [anon_sym_ForEach] = ACTIONS(129),
    [anon_sym_Library] = ACTIONS(129),
    [anon_sym_ListDependencies] = ACTIONS(129),
    [anon_sym_ObjectList] = ACTIONS(129),
    [anon_sym_Print] = ACTIONS(129),
    [anon_sym_RemoveDir] = ACTIONS(129),
    [anon_sym_Settings] = ACTIONS(129),
    [anon_sym_Test] = ACTIONS(129),
    [anon_sym_TextFile] = ACTIONS(129),
    [anon_sym_Unity] = ACTIONS(129),
    [anon_sym_Using] = ACTIONS(129),
    [anon_sym_VCXProject] = ACTIONS(129),
    [anon_sym_VSProjectExternal] = ACTIONS(129),
    [anon_sym_VSSolution] = ACTIONS(129),
    [anon_sym_XCodeProject] = ACTIONS(129),
    [anon_sym_exists] = ACTIONS(129),
    [anon_sym_file_exists] = ACTIONS(129),
  },
  [26] = {
    [sym__preprocessor] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_identifier] = ACTIONS(133),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_BANG] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_function] = ACTIONS(133),
    [anon_sym_not] = ACTIONS(139),
    [anon_sym_and] = ACTIONS(141),
    [anon_sym_or] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_EQ_EQ] = ACTIONS(131),
    [anon_sym_BANG_EQ] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(131),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_in] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_If] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(133),
    [anon_sym_Alias] = ACTIONS(133),
    [anon_sym_Compiler] = ACTIONS(133),
    [anon_sym_Copy] = ACTIONS(133),
    [anon_sym_CopyDir] = ACTIONS(133),
    [anon_sym_CSAssembly] = ACTIONS(133),
    [anon_sym_DLL] = ACTIONS(133),
    [anon_sym_Error] = ACTIONS(133),
    [anon_sym_Exec] = ACTIONS(133),
    [anon_sym_Executable] = ACTIONS(133),
    [anon_sym_ForEach] = ACTIONS(133),
    [anon_sym_Library] = ACTIONS(133),
    [anon_sym_ListDependencies] = ACTIONS(133),
    [anon_sym_ObjectList] = ACTIONS(133),
    [anon_sym_Print] = ACTIONS(133),
    [anon_sym_RemoveDir] = ACTIONS(133),
    [anon_sym_Settings] = ACTIONS(133),
    [anon_sym_Test] = ACTIONS(133),
    [anon_sym_TextFile] = ACTIONS(133),
    [anon_sym_Unity] = ACTIONS(133),
    [anon_sym_Using] = ACTIONS(133),
    [anon_sym_VCXProject] = ACTIONS(133),
    [anon_sym_VSProjectExternal] = ACTIONS(133),
    [anon_sym_VSSolution] = ACTIONS(133),
    [anon_sym_XCodeProject] = ACTIONS(133),
    [anon_sym_exists] = ACTIONS(133),
    [anon_sym_file_exists] = ACTIONS(133),
  },
  [27] = {
    [sym__preprocessor] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_identifier] = ACTIONS(151),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(149),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_BANG] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_CARET] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_function] = ACTIONS(151),
    [anon_sym_not] = ACTIONS(139),
    [anon_sym_and] = ACTIONS(151),
    [anon_sym_or] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_in] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_If] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_Alias] = ACTIONS(151),
    [anon_sym_Compiler] = ACTIONS(151),
    [anon_sym_Copy] = ACTIONS(151),
    [anon_sym_CopyDir] = ACTIONS(151),
    [anon_sym_CSAssembly] = ACTIONS(151),
    [anon_sym_DLL] = ACTIONS(151),
    [anon_sym_Error] = ACTIONS(151),
    [anon_sym_Exec] = ACTIONS(151),
    [anon_sym_Executable] = ACTIONS(151),
    [anon_sym_ForEach] = ACTIONS(151),
    [anon_sym_Library] = ACTIONS(151),
    [anon_sym_ListDependencies] = ACTIONS(151),
    [anon_sym_ObjectList] = ACTIONS(151),
    [anon_sym_Print] = ACTIONS(151),
    [anon_sym_RemoveDir] = ACTIONS(151),
    [anon_sym_Settings] = ACTIONS(151),
    [anon_sym_Test] = ACTIONS(151),
    [anon_sym_TextFile] = ACTIONS(151),
    [anon_sym_Unity] = ACTIONS(151),
    [anon_sym_Using] = ACTIONS(151),
    [anon_sym_VCXProject] = ACTIONS(151),
    [anon_sym_VSProjectExternal] = ACTIONS(151),
    [anon_sym_VSSolution] = ACTIONS(151),
    [anon_sym_XCodeProject] = ACTIONS(151),
    [anon_sym_exists] = ACTIONS(151),
    [anon_sym_file_exists] = ACTIONS(151),
  },
  [28] = {
    [sym__preprocessor] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_identifier] = ACTIONS(155),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_BANG] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_CARET] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_function] = ACTIONS(155),
    [anon_sym_not] = ACTIONS(155),
    [anon_sym_and] = ACTIONS(155),
    [anon_sym_or] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_in] = ACTIONS(155),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_If] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(155),
    [anon_sym_Alias] = ACTIONS(155),
    [anon_sym_Compiler] = ACTIONS(155),
    [anon_sym_Copy] = ACTIONS(155),
    [anon_sym_CopyDir] = ACTIONS(155),
    [anon_sym_CSAssembly] = ACTIONS(155),
    [anon_sym_DLL] = ACTIONS(155),
    [anon_sym_Error] = ACTIONS(155),
    [anon_sym_Exec] = ACTIONS(155),
    [anon_sym_Executable] = ACTIONS(155),
    [anon_sym_ForEach] = ACTIONS(155),
    [anon_sym_Library] = ACTIONS(155),
    [anon_sym_ListDependencies] = ACTIONS(155),
    [anon_sym_ObjectList] = ACTIONS(155),
    [anon_sym_Print] = ACTIONS(155),
    [anon_sym_RemoveDir] = ACTIONS(155),
    [anon_sym_Settings] = ACTIONS(155),
    [anon_sym_Test] = ACTIONS(155),
    [anon_sym_TextFile] = ACTIONS(155),
    [anon_sym_Unity] = ACTIONS(155),
    [anon_sym_Using] = ACTIONS(155),
    [anon_sym_VCXProject] = ACTIONS(155),
    [anon_sym_VSProjectExternal] = ACTIONS(155),
    [anon_sym_VSSolution] = ACTIONS(155),
    [anon_sym_XCodeProject] = ACTIONS(155),
    [anon_sym_exists] = ACTIONS(155),
    [anon_sym_file_exists] = ACTIONS(155),
  },
  [29] = {
    [sym__preprocessor] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_identifier] = ACTIONS(159),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(157),
    [anon_sym_CARET] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_function] = ACTIONS(159),
    [anon_sym_not] = ACTIONS(159),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_or] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_EQ_EQ] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(159),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [anon_sym_in] = ACTIONS(159),
    [anon_sym_EQ] = ACTIONS(159),
    [anon_sym_If] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(159),
    [anon_sym_Alias] = ACTIONS(159),
    [anon_sym_Compiler] = ACTIONS(159),
    [anon_sym_Copy] = ACTIONS(159),
    [anon_sym_CopyDir] = ACTIONS(159),
    [anon_sym_CSAssembly] = ACTIONS(159),
    [anon_sym_DLL] = ACTIONS(159),
    [anon_sym_Error] = ACTIONS(159),
    [anon_sym_Exec] = ACTIONS(159),
    [anon_sym_Executable] = ACTIONS(159),
    [anon_sym_ForEach] = ACTIONS(159),
    [anon_sym_Library] = ACTIONS(159),
    [anon_sym_ListDependencies] = ACTIONS(159),
    [anon_sym_ObjectList] = ACTIONS(159),
    [anon_sym_Print] = ACTIONS(159),
    [anon_sym_RemoveDir] = ACTIONS(159),
    [anon_sym_Settings] = ACTIONS(159),
    [anon_sym_Test] = ACTIONS(159),
    [anon_sym_TextFile] = ACTIONS(159),
    [anon_sym_Unity] = ACTIONS(159),
    [anon_sym_Using] = ACTIONS(159),
    [anon_sym_VCXProject] = ACTIONS(159),
    [anon_sym_VSProjectExternal] = ACTIONS(159),
    [anon_sym_VSSolution] = ACTIONS(159),
    [anon_sym_XCodeProject] = ACTIONS(159),
    [anon_sym_exists] = ACTIONS(159),
    [anon_sym_file_exists] = ACTIONS(159),
  },
  [30] = {
    [sym__preprocessor] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_BANG] = ACTIONS(163),
    [anon_sym_DOT] = ACTIONS(161),
    [anon_sym_CARET] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_function] = ACTIONS(163),
    [anon_sym_not] = ACTIONS(163),
    [anon_sym_and] = ACTIONS(163),
    [anon_sym_or] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(161),
    [anon_sym_BANG_EQ] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(161),
    [anon_sym_in] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_If] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [anon_sym_Alias] = ACTIONS(163),
    [anon_sym_Compiler] = ACTIONS(163),
    [anon_sym_Copy] = ACTIONS(163),
    [anon_sym_CopyDir] = ACTIONS(163),
    [anon_sym_CSAssembly] = ACTIONS(163),
    [anon_sym_DLL] = ACTIONS(163),
    [anon_sym_Error] = ACTIONS(163),
    [anon_sym_Exec] = ACTIONS(163),
    [anon_sym_Executable] = ACTIONS(163),
    [anon_sym_ForEach] = ACTIONS(163),
    [anon_sym_Library] = ACTIONS(163),
    [anon_sym_ListDependencies] = ACTIONS(163),
    [anon_sym_ObjectList] = ACTIONS(163),
    [anon_sym_Print] = ACTIONS(163),
    [anon_sym_RemoveDir] = ACTIONS(163),
    [anon_sym_Settings] = ACTIONS(163),
    [anon_sym_Test] = ACTIONS(163),
    [anon_sym_TextFile] = ACTIONS(163),
    [anon_sym_Unity] = ACTIONS(163),
    [anon_sym_Using] = ACTIONS(163),
    [anon_sym_VCXProject] = ACTIONS(163),
    [anon_sym_VSProjectExternal] = ACTIONS(163),
    [anon_sym_VSSolution] = ACTIONS(163),
    [anon_sym_XCodeProject] = ACTIONS(163),
    [anon_sym_exists] = ACTIONS(163),
    [anon_sym_file_exists] = ACTIONS(163),
  },
  [31] = {
    [sym__preprocessor] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_identifier] = ACTIONS(167),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(165),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_BANG] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_function] = ACTIONS(167),
    [anon_sym_not] = ACTIONS(167),
    [anon_sym_and] = ACTIONS(167),
    [anon_sym_or] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_EQ_EQ] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_in] = ACTIONS(167),
    [anon_sym_EQ] = ACTIONS(167),
    [anon_sym_If] = ACTIONS(167),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_Alias] = ACTIONS(167),
    [anon_sym_Compiler] = ACTIONS(167),
    [anon_sym_Copy] = ACTIONS(167),
    [anon_sym_CopyDir] = ACTIONS(167),
    [anon_sym_CSAssembly] = ACTIONS(167),
    [anon_sym_DLL] = ACTIONS(167),
    [anon_sym_Error] = ACTIONS(167),
    [anon_sym_Exec] = ACTIONS(167),
    [anon_sym_Executable] = ACTIONS(167),
    [anon_sym_ForEach] = ACTIONS(167),
    [anon_sym_Library] = ACTIONS(167),
    [anon_sym_ListDependencies] = ACTIONS(167),
    [anon_sym_ObjectList] = ACTIONS(167),
    [anon_sym_Print] = ACTIONS(167),
    [anon_sym_RemoveDir] = ACTIONS(167),
    [anon_sym_Settings] = ACTIONS(167),
    [anon_sym_Test] = ACTIONS(167),
    [anon_sym_TextFile] = ACTIONS(167),
    [anon_sym_Unity] = ACTIONS(167),
    [anon_sym_Using] = ACTIONS(167),
    [anon_sym_VCXProject] = ACTIONS(167),
    [anon_sym_VSProjectExternal] = ACTIONS(167),
    [anon_sym_VSSolution] = ACTIONS(167),
    [anon_sym_XCodeProject] = ACTIONS(167),
    [anon_sym_exists] = ACTIONS(167),
    [anon_sym_file_exists] = ACTIONS(167),
  },
  [32] = {
    [sym__preprocessor] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_identifier] = ACTIONS(171),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_BANG] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(169),
    [anon_sym_CARET] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_function] = ACTIONS(171),
    [anon_sym_not] = ACTIONS(171),
    [anon_sym_and] = ACTIONS(171),
    [anon_sym_or] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT_EQ] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(169),
    [anon_sym_in] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_If] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [anon_sym_Alias] = ACTIONS(171),
    [anon_sym_Compiler] = ACTIONS(171),
    [anon_sym_Copy] = ACTIONS(171),
    [anon_sym_CopyDir] = ACTIONS(171),
    [anon_sym_CSAssembly] = ACTIONS(171),
    [anon_sym_DLL] = ACTIONS(171),
    [anon_sym_Error] = ACTIONS(171),
    [anon_sym_Exec] = ACTIONS(171),
    [anon_sym_Executable] = ACTIONS(171),
    [anon_sym_ForEach] = ACTIONS(171),
    [anon_sym_Library] = ACTIONS(171),
    [anon_sym_ListDependencies] = ACTIONS(171),
    [anon_sym_ObjectList] = ACTIONS(171),
    [anon_sym_Print] = ACTIONS(171),
    [anon_sym_RemoveDir] = ACTIONS(171),
    [anon_sym_Settings] = ACTIONS(171),
    [anon_sym_Test] = ACTIONS(171),
    [anon_sym_TextFile] = ACTIONS(171),
    [anon_sym_Unity] = ACTIONS(171),
    [anon_sym_Using] = ACTIONS(171),
    [anon_sym_VCXProject] = ACTIONS(171),
    [anon_sym_VSProjectExternal] = ACTIONS(171),
    [anon_sym_VSSolution] = ACTIONS(171),
    [anon_sym_XCodeProject] = ACTIONS(171),
    [anon_sym_exists] = ACTIONS(171),
    [anon_sym_file_exists] = ACTIONS(171),
  },
  [33] = {
    [sym__preprocessor] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_identifier] = ACTIONS(175),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_AMP_AMP] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_function] = ACTIONS(175),
    [anon_sym_not] = ACTIONS(175),
    [anon_sym_and] = ACTIONS(175),
    [anon_sym_or] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_EQ_EQ] = ACTIONS(173),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_GT_EQ] = ACTIONS(173),
    [anon_sym_LT_EQ] = ACTIONS(173),
    [anon_sym_in] = ACTIONS(175),
    [anon_sym_EQ] = ACTIONS(175),
    [anon_sym_If] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_false] = ACTIONS(175),
    [anon_sym_Alias] = ACTIONS(175),
    [anon_sym_Compiler] = ACTIONS(175),
    [anon_sym_Copy] = ACTIONS(175),
    [anon_sym_CopyDir] = ACTIONS(175),
    [anon_sym_CSAssembly] = ACTIONS(175),
    [anon_sym_DLL] = ACTIONS(175),
    [anon_sym_Error] = ACTIONS(175),
    [anon_sym_Exec] = ACTIONS(175),
    [anon_sym_Executable] = ACTIONS(175),
    [anon_sym_ForEach] = ACTIONS(175),
    [anon_sym_Library] = ACTIONS(175),
    [anon_sym_ListDependencies] = ACTIONS(175),
    [anon_sym_ObjectList] = ACTIONS(175),
    [anon_sym_Print] = ACTIONS(175),
    [anon_sym_RemoveDir] = ACTIONS(175),
    [anon_sym_Settings] = ACTIONS(175),
    [anon_sym_Test] = ACTIONS(175),
    [anon_sym_TextFile] = ACTIONS(175),
    [anon_sym_Unity] = ACTIONS(175),
    [anon_sym_Using] = ACTIONS(175),
    [anon_sym_VCXProject] = ACTIONS(175),
    [anon_sym_VSProjectExternal] = ACTIONS(175),
    [anon_sym_VSSolution] = ACTIONS(175),
    [anon_sym_XCodeProject] = ACTIONS(175),
    [anon_sym_exists] = ACTIONS(175),
    [anon_sym_file_exists] = ACTIONS(175),
  },
  [34] = {
    [sym__preprocessor] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_identifier] = ACTIONS(179),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_CARET] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_function] = ACTIONS(179),
    [anon_sym_not] = ACTIONS(179),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_or] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_in] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_If] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(179),
    [anon_sym_Alias] = ACTIONS(179),
    [anon_sym_Compiler] = ACTIONS(179),
    [anon_sym_Copy] = ACTIONS(179),
    [anon_sym_CopyDir] = ACTIONS(179),
    [anon_sym_CSAssembly] = ACTIONS(179),
    [anon_sym_DLL] = ACTIONS(179),
    [anon_sym_Error] = ACTIONS(179),
    [anon_sym_Exec] = ACTIONS(179),
    [anon_sym_Executable] = ACTIONS(179),
    [anon_sym_ForEach] = ACTIONS(179),
    [anon_sym_Library] = ACTIONS(179),
    [anon_sym_ListDependencies] = ACTIONS(179),
    [anon_sym_ObjectList] = ACTIONS(179),
    [anon_sym_Print] = ACTIONS(179),
    [anon_sym_RemoveDir] = ACTIONS(179),
    [anon_sym_Settings] = ACTIONS(179),
    [anon_sym_Test] = ACTIONS(179),
    [anon_sym_TextFile] = ACTIONS(179),
    [anon_sym_Unity] = ACTIONS(179),
    [anon_sym_Using] = ACTIONS(179),
    [anon_sym_VCXProject] = ACTIONS(179),
    [anon_sym_VSProjectExternal] = ACTIONS(179),
    [anon_sym_VSSolution] = ACTIONS(179),
    [anon_sym_XCodeProject] = ACTIONS(179),
    [anon_sym_exists] = ACTIONS(179),
    [anon_sym_file_exists] = ACTIONS(179),
  },
  [35] = {
    [sym__preprocessor] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_function] = ACTIONS(183),
    [anon_sym_not] = ACTIONS(183),
    [anon_sym_and] = ACTIONS(183),
    [anon_sym_or] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_in] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_If] = ACTIONS(183),
    [anon_sym_true] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(183),
    [anon_sym_Alias] = ACTIONS(183),
    [anon_sym_Compiler] = ACTIONS(183),
    [anon_sym_Copy] = ACTIONS(183),
    [anon_sym_CopyDir] = ACTIONS(183),
    [anon_sym_CSAssembly] = ACTIONS(183),
    [anon_sym_DLL] = ACTIONS(183),
    [anon_sym_Error] = ACTIONS(183),
    [anon_sym_Exec] = ACTIONS(183),
    [anon_sym_Executable] = ACTIONS(183),
    [anon_sym_ForEach] = ACTIONS(183),
    [anon_sym_Library] = ACTIONS(183),
    [anon_sym_ListDependencies] = ACTIONS(183),
    [anon_sym_ObjectList] = ACTIONS(183),
    [anon_sym_Print] = ACTIONS(183),
    [anon_sym_RemoveDir] = ACTIONS(183),
    [anon_sym_Settings] = ACTIONS(183),
    [anon_sym_Test] = ACTIONS(183),
    [anon_sym_TextFile] = ACTIONS(183),
    [anon_sym_Unity] = ACTIONS(183),
    [anon_sym_Using] = ACTIONS(183),
    [anon_sym_VCXProject] = ACTIONS(183),
    [anon_sym_VSProjectExternal] = ACTIONS(183),
    [anon_sym_VSSolution] = ACTIONS(183),
    [anon_sym_XCodeProject] = ACTIONS(183),
    [anon_sym_exists] = ACTIONS(183),
    [anon_sym_file_exists] = ACTIONS(183),
  },
  [36] = {
    [sym__preprocessor] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(185),
    [anon_sym_AMP_AMP] = ACTIONS(185),
    [anon_sym_BANG] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_CARET] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_function] = ACTIONS(187),
    [anon_sym_not] = ACTIONS(187),
    [anon_sym_and] = ACTIONS(187),
    [anon_sym_or] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [anon_sym_BANG_EQ] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(185),
    [anon_sym_LT_EQ] = ACTIONS(185),
    [anon_sym_in] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(187),
    [anon_sym_If] = ACTIONS(187),
    [anon_sym_true] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(187),
    [anon_sym_Alias] = ACTIONS(187),
    [anon_sym_Compiler] = ACTIONS(187),
    [anon_sym_Copy] = ACTIONS(187),
    [anon_sym_CopyDir] = ACTIONS(187),
    [anon_sym_CSAssembly] = ACTIONS(187),
    [anon_sym_DLL] = ACTIONS(187),
    [anon_sym_Error] = ACTIONS(187),
    [anon_sym_Exec] = ACTIONS(187),
    [anon_sym_Executable] = ACTIONS(187),
    [anon_sym_ForEach] = ACTIONS(187),
    [anon_sym_Library] = ACTIONS(187),
    [anon_sym_ListDependencies] = ACTIONS(187),
    [anon_sym_ObjectList] = ACTIONS(187),
    [anon_sym_Print] = ACTIONS(187),
    [anon_sym_RemoveDir] = ACTIONS(187),
    [anon_sym_Settings] = ACTIONS(187),
    [anon_sym_Test] = ACTIONS(187),
    [anon_sym_TextFile] = ACTIONS(187),
    [anon_sym_Unity] = ACTIONS(187),
    [anon_sym_Using] = ACTIONS(187),
    [anon_sym_VCXProject] = ACTIONS(187),
    [anon_sym_VSProjectExternal] = ACTIONS(187),
    [anon_sym_VSSolution] = ACTIONS(187),
    [anon_sym_XCodeProject] = ACTIONS(187),
    [anon_sym_exists] = ACTIONS(187),
    [anon_sym_file_exists] = ACTIONS(187),
  },
  [37] = {
    [sym__preprocessor] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_identifier] = ACTIONS(191),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_BANG] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_CARET] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_function] = ACTIONS(191),
    [anon_sym_not] = ACTIONS(139),
    [anon_sym_and] = ACTIONS(141),
    [anon_sym_or] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_EQ_EQ] = ACTIONS(189),
    [anon_sym_BANG_EQ] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_GT_EQ] = ACTIONS(189),
    [anon_sym_LT_EQ] = ACTIONS(189),
    [anon_sym_in] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_If] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(191),
    [anon_sym_Alias] = ACTIONS(191),
    [anon_sym_Compiler] = ACTIONS(191),
    [anon_sym_Copy] = ACTIONS(191),
    [anon_sym_CopyDir] = ACTIONS(191),
    [anon_sym_CSAssembly] = ACTIONS(191),
    [anon_sym_DLL] = ACTIONS(191),
    [anon_sym_Error] = ACTIONS(191),
    [anon_sym_Exec] = ACTIONS(191),
    [anon_sym_Executable] = ACTIONS(191),
    [anon_sym_ForEach] = ACTIONS(191),
    [anon_sym_Library] = ACTIONS(191),
    [anon_sym_ListDependencies] = ACTIONS(191),
    [anon_sym_ObjectList] = ACTIONS(191),
    [anon_sym_Print] = ACTIONS(191),
    [anon_sym_RemoveDir] = ACTIONS(191),
    [anon_sym_Settings] = ACTIONS(191),
    [anon_sym_Test] = ACTIONS(191),
    [anon_sym_TextFile] = ACTIONS(191),
    [anon_sym_Unity] = ACTIONS(191),
    [anon_sym_Using] = ACTIONS(191),
    [anon_sym_VCXProject] = ACTIONS(191),
    [anon_sym_VSProjectExternal] = ACTIONS(191),
    [anon_sym_VSSolution] = ACTIONS(191),
    [anon_sym_XCodeProject] = ACTIONS(191),
    [anon_sym_exists] = ACTIONS(191),
    [anon_sym_file_exists] = ACTIONS(191),
  },
  [38] = {
    [sym__preprocessor] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_identifier] = ACTIONS(195),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_BANG] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(193),
    [anon_sym_CARET] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_function] = ACTIONS(195),
    [anon_sym_not] = ACTIONS(195),
    [anon_sym_and] = ACTIONS(195),
    [anon_sym_or] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_GT_EQ] = ACTIONS(193),
    [anon_sym_LT_EQ] = ACTIONS(193),
    [anon_sym_in] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_If] = ACTIONS(195),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_Alias] = ACTIONS(195),
    [anon_sym_Compiler] = ACTIONS(195),
    [anon_sym_Copy] = ACTIONS(195),
    [anon_sym_CopyDir] = ACTIONS(195),
    [anon_sym_CSAssembly] = ACTIONS(195),
    [anon_sym_DLL] = ACTIONS(195),
    [anon_sym_Error] = ACTIONS(195),
    [anon_sym_Exec] = ACTIONS(195),
    [anon_sym_Executable] = ACTIONS(195),
    [anon_sym_ForEach] = ACTIONS(195),
    [anon_sym_Library] = ACTIONS(195),
    [anon_sym_ListDependencies] = ACTIONS(195),
    [anon_sym_ObjectList] = ACTIONS(195),
    [anon_sym_Print] = ACTIONS(195),
    [anon_sym_RemoveDir] = ACTIONS(195),
    [anon_sym_Settings] = ACTIONS(195),
    [anon_sym_Test] = ACTIONS(195),
    [anon_sym_TextFile] = ACTIONS(195),
    [anon_sym_Unity] = ACTIONS(195),
    [anon_sym_Using] = ACTIONS(195),
    [anon_sym_VCXProject] = ACTIONS(195),
    [anon_sym_VSProjectExternal] = ACTIONS(195),
    [anon_sym_VSSolution] = ACTIONS(195),
    [anon_sym_XCodeProject] = ACTIONS(195),
    [anon_sym_exists] = ACTIONS(195),
    [anon_sym_file_exists] = ACTIONS(195),
  },
  [39] = {
    [sym__preprocessor] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_identifier] = ACTIONS(199),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(197),
    [anon_sym_AMP_AMP] = ACTIONS(197),
    [anon_sym_BANG] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(197),
    [anon_sym_CARET] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_function] = ACTIONS(199),
    [anon_sym_not] = ACTIONS(199),
    [anon_sym_and] = ACTIONS(199),
    [anon_sym_or] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_EQ_EQ] = ACTIONS(197),
    [anon_sym_BANG_EQ] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_GT_EQ] = ACTIONS(197),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_in] = ACTIONS(199),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_If] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(199),
    [anon_sym_false] = ACTIONS(199),
    [anon_sym_Alias] = ACTIONS(199),
    [anon_sym_Compiler] = ACTIONS(199),
    [anon_sym_Copy] = ACTIONS(199),
    [anon_sym_CopyDir] = ACTIONS(199),
    [anon_sym_CSAssembly] = ACTIONS(199),
    [anon_sym_DLL] = ACTIONS(199),
    [anon_sym_Error] = ACTIONS(199),
    [anon_sym_Exec] = ACTIONS(199),
    [anon_sym_Executable] = ACTIONS(199),
    [anon_sym_ForEach] = ACTIONS(199),
    [anon_sym_Library] = ACTIONS(199),
    [anon_sym_ListDependencies] = ACTIONS(199),
    [anon_sym_ObjectList] = ACTIONS(199),
    [anon_sym_Print] = ACTIONS(199),
    [anon_sym_RemoveDir] = ACTIONS(199),
    [anon_sym_Settings] = ACTIONS(199),
    [anon_sym_Test] = ACTIONS(199),
    [anon_sym_TextFile] = ACTIONS(199),
    [anon_sym_Unity] = ACTIONS(199),
    [anon_sym_Using] = ACTIONS(199),
    [anon_sym_VCXProject] = ACTIONS(199),
    [anon_sym_VSProjectExternal] = ACTIONS(199),
    [anon_sym_VSSolution] = ACTIONS(199),
    [anon_sym_XCodeProject] = ACTIONS(199),
    [anon_sym_exists] = ACTIONS(199),
    [anon_sym_file_exists] = ACTIONS(199),
  },
  [40] = {
    [sym__preprocessor] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_identifier] = ACTIONS(203),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(201),
    [anon_sym_AMP_AMP] = ACTIONS(201),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_CARET] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_function] = ACTIONS(203),
    [anon_sym_not] = ACTIONS(203),
    [anon_sym_and] = ACTIONS(203),
    [anon_sym_or] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_EQ_EQ] = ACTIONS(201),
    [anon_sym_BANG_EQ] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(201),
    [anon_sym_LT_EQ] = ACTIONS(201),
    [anon_sym_in] = ACTIONS(203),
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_If] = ACTIONS(203),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_false] = ACTIONS(203),
    [anon_sym_Alias] = ACTIONS(203),
    [anon_sym_Compiler] = ACTIONS(203),
    [anon_sym_Copy] = ACTIONS(203),
    [anon_sym_CopyDir] = ACTIONS(203),
    [anon_sym_CSAssembly] = ACTIONS(203),
    [anon_sym_DLL] = ACTIONS(203),
    [anon_sym_Error] = ACTIONS(203),
    [anon_sym_Exec] = ACTIONS(203),
    [anon_sym_Executable] = ACTIONS(203),
    [anon_sym_ForEach] = ACTIONS(203),
    [anon_sym_Library] = ACTIONS(203),
    [anon_sym_ListDependencies] = ACTIONS(203),
    [anon_sym_ObjectList] = ACTIONS(203),
    [anon_sym_Print] = ACTIONS(203),
    [anon_sym_RemoveDir] = ACTIONS(203),
    [anon_sym_Settings] = ACTIONS(203),
    [anon_sym_Test] = ACTIONS(203),
    [anon_sym_TextFile] = ACTIONS(203),
    [anon_sym_Unity] = ACTIONS(203),
    [anon_sym_Using] = ACTIONS(203),
    [anon_sym_VCXProject] = ACTIONS(203),
    [anon_sym_VSProjectExternal] = ACTIONS(203),
    [anon_sym_VSSolution] = ACTIONS(203),
    [anon_sym_XCodeProject] = ACTIONS(203),
    [anon_sym_exists] = ACTIONS(203),
    [anon_sym_file_exists] = ACTIONS(203),
  },
  [41] = {
    [sym__preprocessor] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_identifier] = ACTIONS(207),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_function] = ACTIONS(207),
    [anon_sym_not] = ACTIONS(207),
    [anon_sym_and] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_GT_EQ] = ACTIONS(205),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_in] = ACTIONS(207),
    [anon_sym_EQ] = ACTIONS(207),
    [anon_sym_If] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_Alias] = ACTIONS(207),
    [anon_sym_Compiler] = ACTIONS(207),
    [anon_sym_Copy] = ACTIONS(207),
    [anon_sym_CopyDir] = ACTIONS(207),
    [anon_sym_CSAssembly] = ACTIONS(207),
    [anon_sym_DLL] = ACTIONS(207),
    [anon_sym_Error] = ACTIONS(207),
    [anon_sym_Exec] = ACTIONS(207),
    [anon_sym_Executable] = ACTIONS(207),
    [anon_sym_ForEach] = ACTIONS(207),
    [anon_sym_Library] = ACTIONS(207),
    [anon_sym_ListDependencies] = ACTIONS(207),
    [anon_sym_ObjectList] = ACTIONS(207),
    [anon_sym_Print] = ACTIONS(207),
    [anon_sym_RemoveDir] = ACTIONS(207),
    [anon_sym_Settings] = ACTIONS(207),
    [anon_sym_Test] = ACTIONS(207),
    [anon_sym_TextFile] = ACTIONS(207),
    [anon_sym_Unity] = ACTIONS(207),
    [anon_sym_Using] = ACTIONS(207),
    [anon_sym_VCXProject] = ACTIONS(207),
    [anon_sym_VSProjectExternal] = ACTIONS(207),
    [anon_sym_VSSolution] = ACTIONS(207),
    [anon_sym_XCodeProject] = ACTIONS(207),
    [anon_sym_exists] = ACTIONS(207),
    [anon_sym_file_exists] = ACTIONS(207),
  },
  [42] = {
    [sym__preprocessor] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_identifier] = ACTIONS(211),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_BANG] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_CARET] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_function] = ACTIONS(211),
    [anon_sym_not] = ACTIONS(211),
    [anon_sym_and] = ACTIONS(211),
    [anon_sym_or] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_GT_EQ] = ACTIONS(209),
    [anon_sym_LT_EQ] = ACTIONS(209),
    [anon_sym_in] = ACTIONS(211),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_If] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(211),
    [anon_sym_Alias] = ACTIONS(211),
    [anon_sym_Compiler] = ACTIONS(211),
    [anon_sym_Copy] = ACTIONS(211),
    [anon_sym_CopyDir] = ACTIONS(211),
    [anon_sym_CSAssembly] = ACTIONS(211),
    [anon_sym_DLL] = ACTIONS(211),
    [anon_sym_Error] = ACTIONS(211),
    [anon_sym_Exec] = ACTIONS(211),
    [anon_sym_Executable] = ACTIONS(211),
    [anon_sym_ForEach] = ACTIONS(211),
    [anon_sym_Library] = ACTIONS(211),
    [anon_sym_ListDependencies] = ACTIONS(211),
    [anon_sym_ObjectList] = ACTIONS(211),
    [anon_sym_Print] = ACTIONS(211),
    [anon_sym_RemoveDir] = ACTIONS(211),
    [anon_sym_Settings] = ACTIONS(211),
    [anon_sym_Test] = ACTIONS(211),
    [anon_sym_TextFile] = ACTIONS(211),
    [anon_sym_Unity] = ACTIONS(211),
    [anon_sym_Using] = ACTIONS(211),
    [anon_sym_VCXProject] = ACTIONS(211),
    [anon_sym_VSProjectExternal] = ACTIONS(211),
    [anon_sym_VSSolution] = ACTIONS(211),
    [anon_sym_XCodeProject] = ACTIONS(211),
    [anon_sym_exists] = ACTIONS(211),
    [anon_sym_file_exists] = ACTIONS(211),
  },
  [43] = {
    [sym__preprocessor] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_identifier] = ACTIONS(215),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(213),
    [anon_sym_CARET] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_function] = ACTIONS(215),
    [anon_sym_not] = ACTIONS(215),
    [anon_sym_and] = ACTIONS(215),
    [anon_sym_or] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_in] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(215),
    [anon_sym_If] = ACTIONS(215),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [anon_sym_Alias] = ACTIONS(215),
    [anon_sym_Compiler] = ACTIONS(215),
    [anon_sym_Copy] = ACTIONS(215),
    [anon_sym_CopyDir] = ACTIONS(215),
    [anon_sym_CSAssembly] = ACTIONS(215),
    [anon_sym_DLL] = ACTIONS(215),
    [anon_sym_Error] = ACTIONS(215),
    [anon_sym_Exec] = ACTIONS(215),
    [anon_sym_Executable] = ACTIONS(215),
    [anon_sym_ForEach] = ACTIONS(215),
    [anon_sym_Library] = ACTIONS(215),
    [anon_sym_ListDependencies] = ACTIONS(215),
    [anon_sym_ObjectList] = ACTIONS(215),
    [anon_sym_Print] = ACTIONS(215),
    [anon_sym_RemoveDir] = ACTIONS(215),
    [anon_sym_Settings] = ACTIONS(215),
    [anon_sym_Test] = ACTIONS(215),
    [anon_sym_TextFile] = ACTIONS(215),
    [anon_sym_Unity] = ACTIONS(215),
    [anon_sym_Using] = ACTIONS(215),
    [anon_sym_VCXProject] = ACTIONS(215),
    [anon_sym_VSProjectExternal] = ACTIONS(215),
    [anon_sym_VSSolution] = ACTIONS(215),
    [anon_sym_XCodeProject] = ACTIONS(215),
    [anon_sym_exists] = ACTIONS(215),
    [anon_sym_file_exists] = ACTIONS(215),
  },
  [44] = {
    [sym__preprocessor] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_identifier] = ACTIONS(219),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_BANG] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_CARET] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_function] = ACTIONS(219),
    [anon_sym_not] = ACTIONS(219),
    [anon_sym_and] = ACTIONS(219),
    [anon_sym_or] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_in] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_If] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_false] = ACTIONS(219),
    [anon_sym_Alias] = ACTIONS(219),
    [anon_sym_Compiler] = ACTIONS(219),
    [anon_sym_Copy] = ACTIONS(219),
    [anon_sym_CopyDir] = ACTIONS(219),
    [anon_sym_CSAssembly] = ACTIONS(219),
    [anon_sym_DLL] = ACTIONS(219),
    [anon_sym_Error] = ACTIONS(219),
    [anon_sym_Exec] = ACTIONS(219),
    [anon_sym_Executable] = ACTIONS(219),
    [anon_sym_ForEach] = ACTIONS(219),
    [anon_sym_Library] = ACTIONS(219),
    [anon_sym_ListDependencies] = ACTIONS(219),
    [anon_sym_ObjectList] = ACTIONS(219),
    [anon_sym_Print] = ACTIONS(219),
    [anon_sym_RemoveDir] = ACTIONS(219),
    [anon_sym_Settings] = ACTIONS(219),
    [anon_sym_Test] = ACTIONS(219),
    [anon_sym_TextFile] = ACTIONS(219),
    [anon_sym_Unity] = ACTIONS(219),
    [anon_sym_Using] = ACTIONS(219),
    [anon_sym_VCXProject] = ACTIONS(219),
    [anon_sym_VSProjectExternal] = ACTIONS(219),
    [anon_sym_VSSolution] = ACTIONS(219),
    [anon_sym_XCodeProject] = ACTIONS(219),
    [anon_sym_exists] = ACTIONS(219),
    [anon_sym_file_exists] = ACTIONS(219),
  },
  [45] = {
    [sym__preprocessor] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_identifier] = ACTIONS(223),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_BANG] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_function] = ACTIONS(223),
    [anon_sym_not] = ACTIONS(223),
    [anon_sym_and] = ACTIONS(223),
    [anon_sym_or] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_GT_EQ] = ACTIONS(221),
    [anon_sym_LT_EQ] = ACTIONS(221),
    [anon_sym_in] = ACTIONS(223),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_If] = ACTIONS(223),
    [anon_sym_true] = ACTIONS(223),
    [anon_sym_false] = ACTIONS(223),
    [anon_sym_Alias] = ACTIONS(223),
    [anon_sym_Compiler] = ACTIONS(223),
    [anon_sym_Copy] = ACTIONS(223),
    [anon_sym_CopyDir] = ACTIONS(223),
    [anon_sym_CSAssembly] = ACTIONS(223),
    [anon_sym_DLL] = ACTIONS(223),
    [anon_sym_Error] = ACTIONS(223),
    [anon_sym_Exec] = ACTIONS(223),
    [anon_sym_Executable] = ACTIONS(223),
    [anon_sym_ForEach] = ACTIONS(223),
    [anon_sym_Library] = ACTIONS(223),
    [anon_sym_ListDependencies] = ACTIONS(223),
    [anon_sym_ObjectList] = ACTIONS(223),
    [anon_sym_Print] = ACTIONS(223),
    [anon_sym_RemoveDir] = ACTIONS(223),
    [anon_sym_Settings] = ACTIONS(223),
    [anon_sym_Test] = ACTIONS(223),
    [anon_sym_TextFile] = ACTIONS(223),
    [anon_sym_Unity] = ACTIONS(223),
    [anon_sym_Using] = ACTIONS(223),
    [anon_sym_VCXProject] = ACTIONS(223),
    [anon_sym_VSProjectExternal] = ACTIONS(223),
    [anon_sym_VSSolution] = ACTIONS(223),
    [anon_sym_XCodeProject] = ACTIONS(223),
    [anon_sym_exists] = ACTIONS(223),
    [anon_sym_file_exists] = ACTIONS(223),
  },
  [46] = {
    [sym__preprocessor] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(225),
    [anon_sym_AMP_AMP] = ACTIONS(225),
    [anon_sym_BANG] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_function] = ACTIONS(227),
    [anon_sym_not] = ACTIONS(227),
    [anon_sym_and] = ACTIONS(227),
    [anon_sym_or] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_EQ_EQ] = ACTIONS(225),
    [anon_sym_BANG_EQ] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(225),
    [anon_sym_LT_EQ] = ACTIONS(225),
    [anon_sym_in] = ACTIONS(227),
    [anon_sym_EQ] = ACTIONS(227),
    [anon_sym_If] = ACTIONS(227),
    [anon_sym_true] = ACTIONS(227),
    [anon_sym_false] = ACTIONS(227),
    [anon_sym_Alias] = ACTIONS(227),
    [anon_sym_Compiler] = ACTIONS(227),
    [anon_sym_Copy] = ACTIONS(227),
    [anon_sym_CopyDir] = ACTIONS(227),
    [anon_sym_CSAssembly] = ACTIONS(227),
    [anon_sym_DLL] = ACTIONS(227),
    [anon_sym_Error] = ACTIONS(227),
    [anon_sym_Exec] = ACTIONS(227),
    [anon_sym_Executable] = ACTIONS(227),
    [anon_sym_ForEach] = ACTIONS(227),
    [anon_sym_Library] = ACTIONS(227),
    [anon_sym_ListDependencies] = ACTIONS(227),
    [anon_sym_ObjectList] = ACTIONS(227),
    [anon_sym_Print] = ACTIONS(227),
    [anon_sym_RemoveDir] = ACTIONS(227),
    [anon_sym_Settings] = ACTIONS(227),
    [anon_sym_Test] = ACTIONS(227),
    [anon_sym_TextFile] = ACTIONS(227),
    [anon_sym_Unity] = ACTIONS(227),
    [anon_sym_Using] = ACTIONS(227),
    [anon_sym_VCXProject] = ACTIONS(227),
    [anon_sym_VSProjectExternal] = ACTIONS(227),
    [anon_sym_VSSolution] = ACTIONS(227),
    [anon_sym_XCodeProject] = ACTIONS(227),
    [anon_sym_exists] = ACTIONS(227),
    [anon_sym_file_exists] = ACTIONS(227),
  },
  [47] = {
    [sym__preprocessor] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_identifier] = ACTIONS(231),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_BANG] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_function] = ACTIONS(231),
    [anon_sym_not] = ACTIONS(231),
    [anon_sym_and] = ACTIONS(231),
    [anon_sym_or] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(229),
    [anon_sym_BANG_EQ] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_in] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_If] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(231),
    [anon_sym_false] = ACTIONS(231),
    [anon_sym_Alias] = ACTIONS(231),
    [anon_sym_Compiler] = ACTIONS(231),
    [anon_sym_Copy] = ACTIONS(231),
    [anon_sym_CopyDir] = ACTIONS(231),
    [anon_sym_CSAssembly] = ACTIONS(231),
    [anon_sym_DLL] = ACTIONS(231),
    [anon_sym_Error] = ACTIONS(231),
    [anon_sym_Exec] = ACTIONS(231),
    [anon_sym_Executable] = ACTIONS(231),
    [anon_sym_ForEach] = ACTIONS(231),
    [anon_sym_Library] = ACTIONS(231),
    [anon_sym_ListDependencies] = ACTIONS(231),
    [anon_sym_ObjectList] = ACTIONS(231),
    [anon_sym_Print] = ACTIONS(231),
    [anon_sym_RemoveDir] = ACTIONS(231),
    [anon_sym_Settings] = ACTIONS(231),
    [anon_sym_Test] = ACTIONS(231),
    [anon_sym_TextFile] = ACTIONS(231),
    [anon_sym_Unity] = ACTIONS(231),
    [anon_sym_Using] = ACTIONS(231),
    [anon_sym_VCXProject] = ACTIONS(231),
    [anon_sym_VSProjectExternal] = ACTIONS(231),
    [anon_sym_VSSolution] = ACTIONS(231),
    [anon_sym_XCodeProject] = ACTIONS(231),
    [anon_sym_exists] = ACTIONS(231),
    [anon_sym_file_exists] = ACTIONS(231),
  },
  [48] = {
    [sym__preprocessor] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(233),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_function] = ACTIONS(235),
    [anon_sym_not] = ACTIONS(235),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT_EQ] = ACTIONS(233),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [anon_sym_in] = ACTIONS(235),
    [anon_sym_EQ] = ACTIONS(235),
    [anon_sym_If] = ACTIONS(235),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_false] = ACTIONS(235),
    [anon_sym_Alias] = ACTIONS(235),
    [anon_sym_Compiler] = ACTIONS(235),
    [anon_sym_Copy] = ACTIONS(235),
    [anon_sym_CopyDir] = ACTIONS(235),
    [anon_sym_CSAssembly] = ACTIONS(235),
    [anon_sym_DLL] = ACTIONS(235),
    [anon_sym_Error] = ACTIONS(235),
    [anon_sym_Exec] = ACTIONS(235),
    [anon_sym_Executable] = ACTIONS(235),
    [anon_sym_ForEach] = ACTIONS(235),
    [anon_sym_Library] = ACTIONS(235),
    [anon_sym_ListDependencies] = ACTIONS(235),
    [anon_sym_ObjectList] = ACTIONS(235),
    [anon_sym_Print] = ACTIONS(235),
    [anon_sym_RemoveDir] = ACTIONS(235),
    [anon_sym_Settings] = ACTIONS(235),
    [anon_sym_Test] = ACTIONS(235),
    [anon_sym_TextFile] = ACTIONS(235),
    [anon_sym_Unity] = ACTIONS(235),
    [anon_sym_Using] = ACTIONS(235),
    [anon_sym_VCXProject] = ACTIONS(235),
    [anon_sym_VSProjectExternal] = ACTIONS(235),
    [anon_sym_VSSolution] = ACTIONS(235),
    [anon_sym_XCodeProject] = ACTIONS(235),
    [anon_sym_exists] = ACTIONS(235),
    [anon_sym_file_exists] = ACTIONS(235),
  },
  [49] = {
    [sym__preprocessor] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_identifier] = ACTIONS(239),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_BANG] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_function] = ACTIONS(239),
    [anon_sym_not] = ACTIONS(139),
    [anon_sym_and] = ACTIONS(141),
    [anon_sym_or] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_in] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_If] = ACTIONS(239),
    [anon_sym_true] = ACTIONS(239),
    [anon_sym_false] = ACTIONS(239),
    [anon_sym_Alias] = ACTIONS(239),
    [anon_sym_Compiler] = ACTIONS(239),
    [anon_sym_Copy] = ACTIONS(239),
    [anon_sym_CopyDir] = ACTIONS(239),
    [anon_sym_CSAssembly] = ACTIONS(239),
    [anon_sym_DLL] = ACTIONS(239),
    [anon_sym_Error] = ACTIONS(239),
    [anon_sym_Exec] = ACTIONS(239),
    [anon_sym_Executable] = ACTIONS(239),
    [anon_sym_ForEach] = ACTIONS(239),
    [anon_sym_Library] = ACTIONS(239),
    [anon_sym_ListDependencies] = ACTIONS(239),
    [anon_sym_ObjectList] = ACTIONS(239),
    [anon_sym_Print] = ACTIONS(239),
    [anon_sym_RemoveDir] = ACTIONS(239),
    [anon_sym_Settings] = ACTIONS(239),
    [anon_sym_Test] = ACTIONS(239),
    [anon_sym_TextFile] = ACTIONS(239),
    [anon_sym_Unity] = ACTIONS(239),
    [anon_sym_Using] = ACTIONS(239),
    [anon_sym_VCXProject] = ACTIONS(239),
    [anon_sym_VSProjectExternal] = ACTIONS(239),
    [anon_sym_VSSolution] = ACTIONS(239),
    [anon_sym_XCodeProject] = ACTIONS(239),
    [anon_sym_exists] = ACTIONS(239),
    [anon_sym_file_exists] = ACTIONS(239),
  },
  [50] = {
    [sym__preprocessor] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_identifier] = ACTIONS(251),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_BANG] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(249),
    [anon_sym_CARET] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_function] = ACTIONS(251),
    [anon_sym_not] = ACTIONS(251),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_If] = ACTIONS(251),
    [anon_sym_true] = ACTIONS(251),
    [anon_sym_false] = ACTIONS(251),
    [anon_sym_Alias] = ACTIONS(251),
    [anon_sym_Compiler] = ACTIONS(251),
    [anon_sym_Copy] = ACTIONS(251),
    [anon_sym_CopyDir] = ACTIONS(251),
    [anon_sym_CSAssembly] = ACTIONS(251),
    [anon_sym_DLL] = ACTIONS(251),
    [anon_sym_Error] = ACTIONS(251),
    [anon_sym_Exec] = ACTIONS(251),
    [anon_sym_Executable] = ACTIONS(251),
    [anon_sym_ForEach] = ACTIONS(251),
    [anon_sym_Library] = ACTIONS(251),
    [anon_sym_ListDependencies] = ACTIONS(251),
    [anon_sym_ObjectList] = ACTIONS(251),
    [anon_sym_Print] = ACTIONS(251),
    [anon_sym_RemoveDir] = ACTIONS(251),
    [anon_sym_Settings] = ACTIONS(251),
    [anon_sym_Test] = ACTIONS(251),
    [anon_sym_TextFile] = ACTIONS(251),
    [anon_sym_Unity] = ACTIONS(251),
    [anon_sym_Using] = ACTIONS(251),
    [anon_sym_VCXProject] = ACTIONS(251),
    [anon_sym_VSProjectExternal] = ACTIONS(251),
    [anon_sym_VSSolution] = ACTIONS(251),
    [anon_sym_XCodeProject] = ACTIONS(251),
    [anon_sym_exists] = ACTIONS(251),
    [anon_sym_file_exists] = ACTIONS(251),
  },
  [51] = {
    [sym__preprocessor] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_identifier] = ACTIONS(255),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(253),
    [anon_sym_BANG] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_CARET] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_function] = ACTIONS(255),
    [anon_sym_not] = ACTIONS(139),
    [anon_sym_and] = ACTIONS(255),
    [anon_sym_or] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(255),
    [anon_sym_If] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [anon_sym_Alias] = ACTIONS(255),
    [anon_sym_Compiler] = ACTIONS(255),
    [anon_sym_Copy] = ACTIONS(255),
    [anon_sym_CopyDir] = ACTIONS(255),
    [anon_sym_CSAssembly] = ACTIONS(255),
    [anon_sym_DLL] = ACTIONS(255),
    [anon_sym_Error] = ACTIONS(255),
    [anon_sym_Exec] = ACTIONS(255),
    [anon_sym_Executable] = ACTIONS(255),
    [anon_sym_ForEach] = ACTIONS(255),
    [anon_sym_Library] = ACTIONS(255),
    [anon_sym_ListDependencies] = ACTIONS(255),
    [anon_sym_ObjectList] = ACTIONS(255),
    [anon_sym_Print] = ACTIONS(255),
    [anon_sym_RemoveDir] = ACTIONS(255),
    [anon_sym_Settings] = ACTIONS(255),
    [anon_sym_Test] = ACTIONS(255),
    [anon_sym_TextFile] = ACTIONS(255),
    [anon_sym_Unity] = ACTIONS(255),
    [anon_sym_Using] = ACTIONS(255),
    [anon_sym_VCXProject] = ACTIONS(255),
    [anon_sym_VSProjectExternal] = ACTIONS(255),
    [anon_sym_VSSolution] = ACTIONS(255),
    [anon_sym_XCodeProject] = ACTIONS(255),
    [anon_sym_exists] = ACTIONS(255),
    [anon_sym_file_exists] = ACTIONS(255),
  },
  [52] = {
    [sym__preprocessor] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_identifier] = ACTIONS(259),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_BANG] = ACTIONS(259),
    [anon_sym_DOT] = ACTIONS(257),
    [anon_sym_CARET] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_RBRACE] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_RBRACK] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_function] = ACTIONS(259),
    [anon_sym_not] = ACTIONS(139),
    [anon_sym_and] = ACTIONS(141),
    [anon_sym_or] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_EQ_EQ] = ACTIONS(257),
    [anon_sym_BANG_EQ] = ACTIONS(257),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_GT_EQ] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(257),
    [anon_sym_in] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_If] = ACTIONS(259),
    [anon_sym_true] = ACTIONS(259),
    [anon_sym_false] = ACTIONS(259),
    [anon_sym_Alias] = ACTIONS(259),
    [anon_sym_Compiler] = ACTIONS(259),
    [anon_sym_Copy] = ACTIONS(259),
    [anon_sym_CopyDir] = ACTIONS(259),
    [anon_sym_CSAssembly] = ACTIONS(259),
    [anon_sym_DLL] = ACTIONS(259),
    [anon_sym_Error] = ACTIONS(259),
    [anon_sym_Exec] = ACTIONS(259),
    [anon_sym_Executable] = ACTIONS(259),
    [anon_sym_ForEach] = ACTIONS(259),
    [anon_sym_Library] = ACTIONS(259),
    [anon_sym_ListDependencies] = ACTIONS(259),
    [anon_sym_ObjectList] = ACTIONS(259),
    [anon_sym_Print] = ACTIONS(259),
    [anon_sym_RemoveDir] = ACTIONS(259),
    [anon_sym_Settings] = ACTIONS(259),
    [anon_sym_Test] = ACTIONS(259),
    [anon_sym_TextFile] = ACTIONS(259),
    [anon_sym_Unity] = ACTIONS(259),
    [anon_sym_Using] = ACTIONS(259),
    [anon_sym_VCXProject] = ACTIONS(259),
    [anon_sym_VSProjectExternal] = ACTIONS(259),
    [anon_sym_VSSolution] = ACTIONS(259),
    [anon_sym_XCodeProject] = ACTIONS(259),
    [anon_sym_exists] = ACTIONS(259),
    [anon_sym_file_exists] = ACTIONS(259),
  },
  [53] = {
    [sym__preprocessor] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_identifier] = ACTIONS(263),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(261),
    [anon_sym_AMP_AMP] = ACTIONS(261),
    [anon_sym_BANG] = ACTIONS(263),
    [anon_sym_DOT] = ACTIONS(261),
    [anon_sym_CARET] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_function] = ACTIONS(263),
    [anon_sym_not] = ACTIONS(263),
    [anon_sym_and] = ACTIONS(263),
    [anon_sym_or] = ACTIONS(263),
    [anon_sym_PLUS] = ACTIONS(261),
    [anon_sym_DASH] = ACTIONS(261),
    [anon_sym_EQ_EQ] = ACTIONS(261),
    [anon_sym_BANG_EQ] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(263),
    [anon_sym_GT_EQ] = ACTIONS(261),
    [anon_sym_LT_EQ] = ACTIONS(261),
    [anon_sym_in] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(263),
    [anon_sym_If] = ACTIONS(263),
    [anon_sym_true] = ACTIONS(263),
    [anon_sym_false] = ACTIONS(263),
    [anon_sym_Alias] = ACTIONS(263),
    [anon_sym_Compiler] = ACTIONS(263),
    [anon_sym_Copy] = ACTIONS(263),
    [anon_sym_CopyDir] = ACTIONS(263),
    [anon_sym_CSAssembly] = ACTIONS(263),
    [anon_sym_DLL] = ACTIONS(263),
    [anon_sym_Error] = ACTIONS(263),
    [anon_sym_Exec] = ACTIONS(263),
    [anon_sym_Executable] = ACTIONS(263),
    [anon_sym_ForEach] = ACTIONS(263),
    [anon_sym_Library] = ACTIONS(263),
    [anon_sym_ListDependencies] = ACTIONS(263),
    [anon_sym_ObjectList] = ACTIONS(263),
    [anon_sym_Print] = ACTIONS(263),
    [anon_sym_RemoveDir] = ACTIONS(263),
    [anon_sym_Settings] = ACTIONS(263),
    [anon_sym_Test] = ACTIONS(263),
    [anon_sym_TextFile] = ACTIONS(263),
    [anon_sym_Unity] = ACTIONS(263),
    [anon_sym_Using] = ACTIONS(263),
    [anon_sym_VCXProject] = ACTIONS(263),
    [anon_sym_VSProjectExternal] = ACTIONS(263),
    [anon_sym_VSSolution] = ACTIONS(263),
    [anon_sym_XCodeProject] = ACTIONS(263),
    [anon_sym_exists] = ACTIONS(263),
    [anon_sym_file_exists] = ACTIONS(263),
  },
  [54] = {
    [sym__preprocessor] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_identifier] = ACTIONS(267),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_AMP_AMP] = ACTIONS(265),
    [anon_sym_BANG] = ACTIONS(267),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_CARET] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_function] = ACTIONS(267),
    [anon_sym_not] = ACTIONS(267),
    [anon_sym_and] = ACTIONS(267),
    [anon_sym_or] = ACTIONS(267),
    [anon_sym_PLUS] = ACTIONS(265),
    [anon_sym_DASH] = ACTIONS(265),
    [anon_sym_EQ_EQ] = ACTIONS(265),
    [anon_sym_BANG_EQ] = ACTIONS(265),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_LT] = ACTIONS(267),
    [anon_sym_GT_EQ] = ACTIONS(265),
    [anon_sym_LT_EQ] = ACTIONS(265),
    [anon_sym_in] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_If] = ACTIONS(267),
    [anon_sym_true] = ACTIONS(267),
    [anon_sym_false] = ACTIONS(267),
    [anon_sym_Alias] = ACTIONS(267),
    [anon_sym_Compiler] = ACTIONS(267),
    [anon_sym_Copy] = ACTIONS(267),
    [anon_sym_CopyDir] = ACTIONS(267),
    [anon_sym_CSAssembly] = ACTIONS(267),
    [anon_sym_DLL] = ACTIONS(267),
    [anon_sym_Error] = ACTIONS(267),
    [anon_sym_Exec] = ACTIONS(267),
    [anon_sym_Executable] = ACTIONS(267),
    [anon_sym_ForEach] = ACTIONS(267),
    [anon_sym_Library] = ACTIONS(267),
    [anon_sym_ListDependencies] = ACTIONS(267),
    [anon_sym_ObjectList] = ACTIONS(267),
    [anon_sym_Print] = ACTIONS(267),
    [anon_sym_RemoveDir] = ACTIONS(267),
    [anon_sym_Settings] = ACTIONS(267),
    [anon_sym_Test] = ACTIONS(267),
    [anon_sym_TextFile] = ACTIONS(267),
    [anon_sym_Unity] = ACTIONS(267),
    [anon_sym_Using] = ACTIONS(267),
    [anon_sym_VCXProject] = ACTIONS(267),
    [anon_sym_VSProjectExternal] = ACTIONS(267),
    [anon_sym_VSSolution] = ACTIONS(267),
    [anon_sym_XCodeProject] = ACTIONS(267),
    [anon_sym_exists] = ACTIONS(267),
    [anon_sym_file_exists] = ACTIONS(267),
  },
  [55] = {
    [sym__preprocessor] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_identifier] = ACTIONS(271),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_BANG] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(269),
    [anon_sym_CARET] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_function] = ACTIONS(271),
    [anon_sym_not] = ACTIONS(139),
    [anon_sym_and] = ACTIONS(271),
    [anon_sym_or] = ACTIONS(271),
    [anon_sym_PLUS] = ACTIONS(269),
    [anon_sym_DASH] = ACTIONS(269),
    [anon_sym_EQ_EQ] = ACTIONS(269),
    [anon_sym_BANG_EQ] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(271),
    [anon_sym_LT] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(269),
    [anon_sym_LT_EQ] = ACTIONS(269),
    [anon_sym_in] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_If] = ACTIONS(271),
    [anon_sym_true] = ACTIONS(271),
    [anon_sym_false] = ACTIONS(271),
    [anon_sym_Alias] = ACTIONS(271),
    [anon_sym_Compiler] = ACTIONS(271),
    [anon_sym_Copy] = ACTIONS(271),
    [anon_sym_CopyDir] = ACTIONS(271),
    [anon_sym_CSAssembly] = ACTIONS(271),
    [anon_sym_DLL] = ACTIONS(271),
    [anon_sym_Error] = ACTIONS(271),
    [anon_sym_Exec] = ACTIONS(271),
    [anon_sym_Executable] = ACTIONS(271),
    [anon_sym_ForEach] = ACTIONS(271),
    [anon_sym_Library] = ACTIONS(271),
    [anon_sym_ListDependencies] = ACTIONS(271),
    [anon_sym_ObjectList] = ACTIONS(271),
    [anon_sym_Print] = ACTIONS(271),
    [anon_sym_RemoveDir] = ACTIONS(271),
    [anon_sym_Settings] = ACTIONS(271),
    [anon_sym_Test] = ACTIONS(271),
    [anon_sym_TextFile] = ACTIONS(271),
    [anon_sym_Unity] = ACTIONS(271),
    [anon_sym_Using] = ACTIONS(271),
    [anon_sym_VCXProject] = ACTIONS(271),
    [anon_sym_VSProjectExternal] = ACTIONS(271),
    [anon_sym_VSSolution] = ACTIONS(271),
    [anon_sym_XCodeProject] = ACTIONS(271),
    [anon_sym_exists] = ACTIONS(271),
    [anon_sym_file_exists] = ACTIONS(271),
  },
  [56] = {
    [sym__preprocessor] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_identifier] = ACTIONS(275),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(273),
    [anon_sym_AMP_AMP] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(273),
    [anon_sym_CARET] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_function] = ACTIONS(275),
    [anon_sym_not] = ACTIONS(275),
    [anon_sym_and] = ACTIONS(275),
    [anon_sym_or] = ACTIONS(275),
    [anon_sym_PLUS] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_EQ_EQ] = ACTIONS(273),
    [anon_sym_BANG_EQ] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(275),
    [anon_sym_GT_EQ] = ACTIONS(273),
    [anon_sym_LT_EQ] = ACTIONS(273),
    [anon_sym_in] = ACTIONS(275),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_If] = ACTIONS(275),
    [anon_sym_true] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(275),
    [anon_sym_Alias] = ACTIONS(275),
    [anon_sym_Compiler] = ACTIONS(275),
    [anon_sym_Copy] = ACTIONS(275),
    [anon_sym_CopyDir] = ACTIONS(275),
    [anon_sym_CSAssembly] = ACTIONS(275),
    [anon_sym_DLL] = ACTIONS(275),
    [anon_sym_Error] = ACTIONS(275),
    [anon_sym_Exec] = ACTIONS(275),
    [anon_sym_Executable] = ACTIONS(275),
    [anon_sym_ForEach] = ACTIONS(275),
    [anon_sym_Library] = ACTIONS(275),
    [anon_sym_ListDependencies] = ACTIONS(275),
    [anon_sym_ObjectList] = ACTIONS(275),
    [anon_sym_Print] = ACTIONS(275),
    [anon_sym_RemoveDir] = ACTIONS(275),
    [anon_sym_Settings] = ACTIONS(275),
    [anon_sym_Test] = ACTIONS(275),
    [anon_sym_TextFile] = ACTIONS(275),
    [anon_sym_Unity] = ACTIONS(275),
    [anon_sym_Using] = ACTIONS(275),
    [anon_sym_VCXProject] = ACTIONS(275),
    [anon_sym_VSProjectExternal] = ACTIONS(275),
    [anon_sym_VSSolution] = ACTIONS(275),
    [anon_sym_XCodeProject] = ACTIONS(275),
    [anon_sym_exists] = ACTIONS(275),
    [anon_sym_file_exists] = ACTIONS(275),
  },
  [57] = {
    [sym__preprocessor] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(277),
    [sym_identifier] = ACTIONS(279),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(279),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_BANG] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_function] = ACTIONS(279),
    [anon_sym_not] = ACTIONS(279),
    [anon_sym_and] = ACTIONS(279),
    [anon_sym_or] = ACTIONS(279),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(279),
    [anon_sym_LT] = ACTIONS(279),
    [anon_sym_GT_EQ] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(277),
    [anon_sym_in] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_If] = ACTIONS(279),
    [anon_sym_true] = ACTIONS(279),
    [anon_sym_false] = ACTIONS(279),
    [anon_sym_Alias] = ACTIONS(279),
    [anon_sym_Compiler] = ACTIONS(279),
    [anon_sym_Copy] = ACTIONS(279),
    [anon_sym_CopyDir] = ACTIONS(279),
    [anon_sym_CSAssembly] = ACTIONS(279),
    [anon_sym_DLL] = ACTIONS(279),
    [anon_sym_Error] = ACTIONS(279),
    [anon_sym_Exec] = ACTIONS(279),
    [anon_sym_Executable] = ACTIONS(279),
    [anon_sym_ForEach] = ACTIONS(279),
    [anon_sym_Library] = ACTIONS(279),
    [anon_sym_ListDependencies] = ACTIONS(279),
    [anon_sym_ObjectList] = ACTIONS(279),
    [anon_sym_Print] = ACTIONS(279),
    [anon_sym_RemoveDir] = ACTIONS(279),
    [anon_sym_Settings] = ACTIONS(279),
    [anon_sym_Test] = ACTIONS(279),
    [anon_sym_TextFile] = ACTIONS(279),
    [anon_sym_Unity] = ACTIONS(279),
    [anon_sym_Using] = ACTIONS(279),
    [anon_sym_VCXProject] = ACTIONS(279),
    [anon_sym_VSProjectExternal] = ACTIONS(279),
    [anon_sym_VSSolution] = ACTIONS(279),
    [anon_sym_XCodeProject] = ACTIONS(279),
    [anon_sym_exists] = ACTIONS(279),
    [anon_sym_file_exists] = ACTIONS(279),
  },
  [58] = {
    [sym__preprocessor] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym_identifier] = ACTIONS(283),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_BANG] = ACTIONS(283),
    [anon_sym_DOT] = ACTIONS(281),
    [anon_sym_CARET] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_function] = ACTIONS(283),
    [anon_sym_not] = ACTIONS(139),
    [anon_sym_and] = ACTIONS(141),
    [anon_sym_or] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(281),
    [anon_sym_DASH] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(281),
    [anon_sym_BANG_EQ] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(283),
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_GT_EQ] = ACTIONS(281),
    [anon_sym_LT_EQ] = ACTIONS(281),
    [anon_sym_in] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_If] = ACTIONS(283),
    [anon_sym_true] = ACTIONS(283),
    [anon_sym_false] = ACTIONS(283),
    [anon_sym_Alias] = ACTIONS(283),
    [anon_sym_Compiler] = ACTIONS(283),
    [anon_sym_Copy] = ACTIONS(283),
    [anon_sym_CopyDir] = ACTIONS(283),
    [anon_sym_CSAssembly] = ACTIONS(283),
    [anon_sym_DLL] = ACTIONS(283),
    [anon_sym_Error] = ACTIONS(283),
    [anon_sym_Exec] = ACTIONS(283),
    [anon_sym_Executable] = ACTIONS(283),
    [anon_sym_ForEach] = ACTIONS(283),
    [anon_sym_Library] = ACTIONS(283),
    [anon_sym_ListDependencies] = ACTIONS(283),
    [anon_sym_ObjectList] = ACTIONS(283),
    [anon_sym_Print] = ACTIONS(283),
    [anon_sym_RemoveDir] = ACTIONS(283),
    [anon_sym_Settings] = ACTIONS(283),
    [anon_sym_Test] = ACTIONS(283),
    [anon_sym_TextFile] = ACTIONS(283),
    [anon_sym_Unity] = ACTIONS(283),
    [anon_sym_Using] = ACTIONS(283),
    [anon_sym_VCXProject] = ACTIONS(283),
    [anon_sym_VSProjectExternal] = ACTIONS(283),
    [anon_sym_VSSolution] = ACTIONS(283),
    [anon_sym_XCodeProject] = ACTIONS(283),
    [anon_sym_exists] = ACTIONS(283),
    [anon_sym_file_exists] = ACTIONS(283),
  },
  [59] = {
    [sym__preprocessor] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(285),
    [sym_identifier] = ACTIONS(287),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_BANG] = ACTIONS(287),
    [anon_sym_DOT] = ACTIONS(285),
    [anon_sym_CARET] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_function] = ACTIONS(287),
    [anon_sym_not] = ACTIONS(287),
    [anon_sym_and] = ACTIONS(287),
    [anon_sym_or] = ACTIONS(287),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_EQ_EQ] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(287),
    [anon_sym_GT_EQ] = ACTIONS(285),
    [anon_sym_LT_EQ] = ACTIONS(285),
    [anon_sym_in] = ACTIONS(287),
    [anon_sym_EQ] = ACTIONS(287),
    [anon_sym_If] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(287),
    [anon_sym_false] = ACTIONS(287),
    [anon_sym_Alias] = ACTIONS(287),
    [anon_sym_Compiler] = ACTIONS(287),
    [anon_sym_Copy] = ACTIONS(287),
    [anon_sym_CopyDir] = ACTIONS(287),
    [anon_sym_CSAssembly] = ACTIONS(287),
    [anon_sym_DLL] = ACTIONS(287),
    [anon_sym_Error] = ACTIONS(287),
    [anon_sym_Exec] = ACTIONS(287),
    [anon_sym_Executable] = ACTIONS(287),
    [anon_sym_ForEach] = ACTIONS(287),
    [anon_sym_Library] = ACTIONS(287),
    [anon_sym_ListDependencies] = ACTIONS(287),
    [anon_sym_ObjectList] = ACTIONS(287),
    [anon_sym_Print] = ACTIONS(287),
    [anon_sym_RemoveDir] = ACTIONS(287),
    [anon_sym_Settings] = ACTIONS(287),
    [anon_sym_Test] = ACTIONS(287),
    [anon_sym_TextFile] = ACTIONS(287),
    [anon_sym_Unity] = ACTIONS(287),
    [anon_sym_Using] = ACTIONS(287),
    [anon_sym_VCXProject] = ACTIONS(287),
    [anon_sym_VSProjectExternal] = ACTIONS(287),
    [anon_sym_VSSolution] = ACTIONS(287),
    [anon_sym_XCodeProject] = ACTIONS(287),
    [anon_sym_exists] = ACTIONS(287),
    [anon_sym_file_exists] = ACTIONS(287),
  },
  [60] = {
    [sym__preprocessor] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym_identifier] = ACTIONS(291),
    [sym__separator] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(11),
    [sym_comment] = ACTIONS(11),
    [sym__newline] = ACTIONS(3),
    [sym_decimal] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_BANG] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(289),
    [anon_sym_CARET] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_function] = ACTIONS(291),
    [anon_sym_not] = ACTIONS(139),
    [anon_sym_and] = ACTIONS(141),
    [anon_sym_or] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_EQ_EQ] = ACTIONS(289),
    [anon_sym_BANG_EQ] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(289),
    [anon_sym_LT_EQ] = ACTIONS(289),
    [anon_sym_in] = ACTIONS(145),
    [anon_sym_EQ] = ACTIONS(147),
    [anon_sym_If] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(291),
    [anon_sym_false] = ACTIONS(291),
    [anon_sym_Alias] = ACTIONS(291),
    [anon_sym_Compiler] = ACTIONS(291),
    [anon_sym_Copy] = ACTIONS(291),
    [anon_sym_CopyDir] = ACTIONS(291),
    [anon_sym_CSAssembly] = ACTIONS(291),
    [anon_sym_DLL] = ACTIONS(291),
    [anon_sym_Error] = ACTIONS(291),
    [anon_sym_Exec] = ACTIONS(291),
    [anon_sym_Executable] = ACTIONS(291),
    [anon_sym_ForEach] = ACTIONS(291),
    [anon_sym_Library] = ACTIONS(291),
    [anon_sym_ListDependencies] = ACTIONS(291),
    [anon_sym_ObjectList] = ACTIONS(291),
    [anon_sym_Print] = ACTIONS(291),
    [anon_sym_RemoveDir] = ACTIONS(291),
    [anon_sym_Settings] = ACTIONS(291),
    [anon_sym_Test] = ACTIONS(291),
    [anon_sym_TextFile] = ACTIONS(291),
    [anon_sym_Unity] = ACTIONS(291),
    [anon_sym_Using] = ACTIONS(291),
    [anon_sym_VCXProject] = ACTIONS(291),
    [anon_sym_VSProjectExternal] = ACTIONS(291),
    [anon_sym_VSSolution] = ACTIONS(291),
    [anon_sym_XCodeProject] = ACTIONS(291),
    [anon_sym_exists] = ACTIONS(291),
    [anon_sym_file_exists] = ACTIONS(291),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      sym_decimal,
    ACTIONS(297), 1,
      anon_sym_SQUOTE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_BANG,
    ACTIONS(309), 1,
      anon_sym_exists,
    ACTIONS(311), 1,
      anon_sym_file_exists,
    STATE(61), 1,
      sym__preprocessor,
    STATE(102), 1,
      sym_preprocessor_expression,
    ACTIONS(303), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    STATE(92), 3,
      sym_string,
      sym_number,
      sym_boolean,
    ACTIONS(305), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
    STATE(95), 7,
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
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      sym_decimal,
    ACTIONS(297), 1,
      anon_sym_SQUOTE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_BANG,
    ACTIONS(309), 1,
      anon_sym_exists,
    ACTIONS(311), 1,
      anon_sym_file_exists,
    STATE(62), 1,
      sym__preprocessor,
    STATE(107), 1,
      sym_preprocessor_expression,
    ACTIONS(303), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    STATE(92), 3,
      sym_string,
      sym_number,
      sym_boolean,
    ACTIONS(305), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
    STATE(95), 7,
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
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      sym_decimal,
    ACTIONS(297), 1,
      anon_sym_SQUOTE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_BANG,
    ACTIONS(309), 1,
      anon_sym_exists,
    ACTIONS(311), 1,
      anon_sym_file_exists,
    STATE(63), 1,
      sym__preprocessor,
    STATE(105), 1,
      sym_preprocessor_expression,
    ACTIONS(303), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    STATE(92), 3,
      sym_string,
      sym_number,
      sym_boolean,
    ACTIONS(305), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
    STATE(95), 7,
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
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(295), 1,
      sym_decimal,
    ACTIONS(297), 1,
      anon_sym_SQUOTE,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      anon_sym_BANG,
    ACTIONS(309), 1,
      anon_sym_exists,
    ACTIONS(311), 1,
      anon_sym_file_exists,
    STATE(64), 1,
      sym__preprocessor,
    STATE(106), 1,
      sym_preprocessor_expression,
    ACTIONS(303), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    STATE(92), 3,
      sym_string,
      sym_number,
      sym_boolean,
    ACTIONS(305), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
    STATE(95), 7,
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
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(241), 1,
      anon_sym_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(315), 1,
      anon_sym_not,
    ACTIONS(317), 1,
      anon_sym_in,
    STATE(65), 1,
      sym__preprocessor,
    ACTIONS(135), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(137), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(247), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(245), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [343] = 14,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(241), 1,
      anon_sym_PLUS,
    ACTIONS(243), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      anon_sym_not,
    ACTIONS(317), 1,
      anon_sym_in,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym__preprocessor,
    ACTIONS(135), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_or,
    ACTIONS(137), 2,
      anon_sym_AMP_AMP,
      anon_sym_and,
    ACTIONS(247), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(245), 4,
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
    ACTIONS(321), 1,
      sym_identifier,
    STATE(67), 1,
      sym__preprocessor,
    STATE(40), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    STATE(43), 2,
      sym_string,
      sym_variable,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(325), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    ACTIONS(323), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
  [438] = 11,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_define,
    ACTIONS(329), 1,
      anon_sym_undef,
    ACTIONS(331), 1,
      anon_sym_import,
    ACTIONS(333), 1,
      anon_sym_include,
    ACTIONS(335), 1,
      anon_sym_if,
    STATE(68), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(337), 3,
      sym_preprocessor_else,
      sym_preprocessor_endif,
      sym_preprocessor_once,
    STATE(135), 5,
      sym_preprocessor_define,
      sym_preprocessor_undef,
      sym_preprocessor_import,
      sym_preprocessor_include,
      sym_preprocessor_if,
  [480] = 9,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(69), 1,
      sym__preprocessor,
    STATE(118), 1,
      sym_variable,
    STATE(99), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    ACTIONS(305), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
  [517] = 9,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(70), 1,
      sym__preprocessor,
    STATE(117), 1,
      sym_variable,
    STATE(99), 2,
      sym_builtin_variable,
      sym_builtin_macros,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    ACTIONS(305), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
  [554] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(345), 1,
      anon_sym_PERCENT,
    STATE(71), 1,
      sym__preprocessor,
    STATE(78), 1,
      aux_sym_string_repeat2,
    STATE(82), 1,
      sym__double_inner,
    ACTIONS(339), 2,
      sym_double_quoted,
      sym_escape_sequence,
    STATE(88), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [590] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(345), 1,
      anon_sym_PERCENT,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      sym__preprocessor,
    STATE(79), 1,
      aux_sym_string_repeat2,
    STATE(82), 1,
      sym__double_inner,
    ACTIONS(339), 2,
      sym_double_quoted,
      sym_escape_sequence,
    STATE(88), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [626] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      anon_sym_DOLLAR,
    ACTIONS(353), 1,
      anon_sym_PERCENT,
    STATE(73), 1,
      sym__preprocessor,
    STATE(80), 1,
      aux_sym_string_repeat1,
    STATE(81), 1,
      sym__single_inner,
    ACTIONS(349), 2,
      sym_single_quoted,
      sym_escape_sequence,
    STATE(87), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [662] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      anon_sym_DOLLAR,
    ACTIONS(353), 1,
      anon_sym_PERCENT,
    STATE(74), 1,
      sym__preprocessor,
    STATE(77), 1,
      aux_sym_string_repeat1,
    STATE(81), 1,
      sym__single_inner,
    ACTIONS(349), 2,
      sym_single_quoted,
      sym_escape_sequence,
    STATE(87), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [698] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(345), 1,
      anon_sym_PERCENT,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym_string_repeat2,
    STATE(75), 1,
      sym__preprocessor,
    STATE(82), 1,
      sym__double_inner,
    ACTIONS(339), 2,
      sym_double_quoted,
      sym_escape_sequence,
    STATE(88), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [734] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      anon_sym_DOLLAR,
    ACTIONS(353), 1,
      anon_sym_PERCENT,
    ACTIONS(355), 1,
      anon_sym_SQUOTE,
    STATE(74), 1,
      aux_sym_string_repeat1,
    STATE(76), 1,
      sym__preprocessor,
    STATE(81), 1,
      sym__single_inner,
    ACTIONS(349), 2,
      sym_single_quoted,
      sym_escape_sequence,
    STATE(87), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [770] = 9,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(360), 1,
      anon_sym_SQUOTE,
    ACTIONS(362), 1,
      anon_sym_DOLLAR,
    ACTIONS(365), 1,
      anon_sym_PERCENT,
    STATE(81), 1,
      sym__single_inner,
    ACTIONS(357), 2,
      sym_single_quoted,
      sym_escape_sequence,
    STATE(77), 2,
      sym__preprocessor,
      aux_sym_string_repeat1,
    STATE(87), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [804] = 9,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_DOLLAR,
    ACTIONS(376), 1,
      anon_sym_PERCENT,
    STATE(82), 1,
      sym__double_inner,
    ACTIONS(368), 2,
      sym_double_quoted,
      sym_escape_sequence,
    STATE(78), 2,
      sym__preprocessor,
      aux_sym_string_repeat2,
    STATE(88), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [838] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      anon_sym_DOLLAR,
    ACTIONS(345), 1,
      anon_sym_PERCENT,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_string_repeat2,
    STATE(79), 1,
      sym__preprocessor,
    STATE(82), 1,
      sym__double_inner,
    ACTIONS(339), 2,
      sym_double_quoted,
      sym_escape_sequence,
    STATE(88), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [874] = 10,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      anon_sym_DOLLAR,
    ACTIONS(353), 1,
      anon_sym_PERCENT,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      aux_sym_string_repeat1,
    STATE(80), 1,
      sym__preprocessor,
    STATE(81), 1,
      sym__single_inner,
    ACTIONS(349), 2,
      sym_single_quoted,
      sym_escape_sequence,
    STATE(87), 2,
      sym_interpolation,
      sym_placeholder,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
  [910] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(81), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(381), 5,
      sym_single_quoted,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [930] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(82), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(383), 5,
      sym_double_quoted,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [950] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(83), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(385), 5,
      sym_single_quoted,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [970] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(84), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(387), 5,
      sym_double_quoted,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [990] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(85), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(385), 5,
      sym_double_quoted,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1010] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(86), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(389), 5,
      sym_double_quoted,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1030] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(391), 5,
      sym_single_quoted,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1050] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(393), 5,
      sym_double_quoted,
      sym_escape_sequence,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1070] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(89), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(389), 5,
      sym_single_quoted,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1090] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym__preprocessor,
    ACTIONS(3), 4,
      sym__separator,
      sym__whitespace,
      sym_comment,
      sym__newline,
    ACTIONS(387), 5,
      sym_single_quoted,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [1110] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(165), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1130] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(92), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(127), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1150] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(395), 1,
      sym_decimal,
    STATE(93), 1,
      sym__preprocessor,
    ACTIONS(397), 2,
      anon_sym_AT,
      anon_sym_STAR,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1172] = 5,
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
    ACTIONS(161), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1192] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(95), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(399), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1212] = 5,
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
    ACTIONS(229), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1232] = 5,
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
    ACTIONS(209), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1252] = 5,
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
    ACTIONS(205), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1272] = 5,
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
    ACTIONS(201), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1292] = 5,
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
    ACTIONS(169), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1312] = 5,
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
    ACTIONS(285), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1332] = 5,
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
    ACTIONS(401), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1352] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(403), 1,
      sym_decimal,
    STATE(103), 1,
      sym__preprocessor,
    ACTIONS(405), 2,
      anon_sym_AT,
      anon_sym_STAR,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1374] = 5,
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
    ACTIONS(177), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1394] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    STATE(105), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
    ACTIONS(407), 3,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1414] = 7,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(409), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(411), 1,
      anon_sym_AMP_AMP,
    ACTIONS(413), 1,
      sym__preprocessor_end,
    STATE(106), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1438] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(411), 1,
      anon_sym_AMP_AMP,
    STATE(107), 1,
      sym__preprocessor,
    ACTIONS(415), 2,
      sym__preprocessor_end,
      anon_sym_PIPE_PIPE,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1460] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_array,
    STATE(108), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1481] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(417), 1,
      sym_identifier,
    STATE(109), 1,
      sym__preprocessor,
    STATE(132), 1,
      sym_environment_variable,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1502] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(417), 1,
      sym_identifier,
    STATE(110), 1,
      sym__preprocessor,
    STATE(121), 1,
      sym_environment_variable,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1523] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(419), 1,
      sym_identifier,
    STATE(111), 1,
      sym__preprocessor,
    STATE(124), 1,
      sym_environment_variable,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1544] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(421), 1,
      sym__preprocessor_end,
    STATE(112), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1562] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(423), 1,
      sym__preprocessor_end,
    STATE(113), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1580] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(425), 1,
      anon_sym_DOLLAR2,
    STATE(114), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1598] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(427), 1,
      sym_filename,
    STATE(115), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1616] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(429), 1,
      anon_sym_in,
    STATE(116), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1634] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(431), 1,
      sym__preprocessor_end,
    STATE(117), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1652] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(433), 1,
      sym__preprocessor_end,
    STATE(118), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1670] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1688] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1706] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1724] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      sym_filename,
    STATE(122), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1742] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1760] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      sym__preprocessor_end,
    STATE(124), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1778] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(445), 1,
      sym_identifier,
    STATE(125), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1796] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1814] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1832] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(451), 1,
      sym_identifier,
    STATE(128), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1850] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1868] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1886] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(457), 1,
      anon_sym_DOLLAR2,
    STATE(131), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1904] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1922] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1940] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(463), 1,
      sym_identifier,
    STATE(134), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1958] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(465), 1,
      sym__preprocessor_end,
    STATE(135), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1976] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(467), 1,
      sym_filename,
    STATE(136), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [1994] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(469), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym__preprocessor,
    ACTIONS(11), 3,
      sym__separator,
      sym__whitespace,
      sym_comment,
  [2012] = 1,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(61)] = 0,
  [SMALL_STATE(62)] = 73,
  [SMALL_STATE(63)] = 146,
  [SMALL_STATE(64)] = 219,
  [SMALL_STATE(65)] = 292,
  [SMALL_STATE(66)] = 343,
  [SMALL_STATE(67)] = 394,
  [SMALL_STATE(68)] = 438,
  [SMALL_STATE(69)] = 480,
  [SMALL_STATE(70)] = 517,
  [SMALL_STATE(71)] = 554,
  [SMALL_STATE(72)] = 590,
  [SMALL_STATE(73)] = 626,
  [SMALL_STATE(74)] = 662,
  [SMALL_STATE(75)] = 698,
  [SMALL_STATE(76)] = 734,
  [SMALL_STATE(77)] = 770,
  [SMALL_STATE(78)] = 804,
  [SMALL_STATE(79)] = 838,
  [SMALL_STATE(80)] = 874,
  [SMALL_STATE(81)] = 910,
  [SMALL_STATE(82)] = 930,
  [SMALL_STATE(83)] = 950,
  [SMALL_STATE(84)] = 970,
  [SMALL_STATE(85)] = 990,
  [SMALL_STATE(86)] = 1010,
  [SMALL_STATE(87)] = 1030,
  [SMALL_STATE(88)] = 1050,
  [SMALL_STATE(89)] = 1070,
  [SMALL_STATE(90)] = 1090,
  [SMALL_STATE(91)] = 1110,
  [SMALL_STATE(92)] = 1130,
  [SMALL_STATE(93)] = 1150,
  [SMALL_STATE(94)] = 1172,
  [SMALL_STATE(95)] = 1192,
  [SMALL_STATE(96)] = 1212,
  [SMALL_STATE(97)] = 1232,
  [SMALL_STATE(98)] = 1252,
  [SMALL_STATE(99)] = 1272,
  [SMALL_STATE(100)] = 1292,
  [SMALL_STATE(101)] = 1312,
  [SMALL_STATE(102)] = 1332,
  [SMALL_STATE(103)] = 1352,
  [SMALL_STATE(104)] = 1374,
  [SMALL_STATE(105)] = 1394,
  [SMALL_STATE(106)] = 1414,
  [SMALL_STATE(107)] = 1438,
  [SMALL_STATE(108)] = 1460,
  [SMALL_STATE(109)] = 1481,
  [SMALL_STATE(110)] = 1502,
  [SMALL_STATE(111)] = 1523,
  [SMALL_STATE(112)] = 1544,
  [SMALL_STATE(113)] = 1562,
  [SMALL_STATE(114)] = 1580,
  [SMALL_STATE(115)] = 1598,
  [SMALL_STATE(116)] = 1616,
  [SMALL_STATE(117)] = 1634,
  [SMALL_STATE(118)] = 1652,
  [SMALL_STATE(119)] = 1670,
  [SMALL_STATE(120)] = 1688,
  [SMALL_STATE(121)] = 1706,
  [SMALL_STATE(122)] = 1724,
  [SMALL_STATE(123)] = 1742,
  [SMALL_STATE(124)] = 1760,
  [SMALL_STATE(125)] = 1778,
  [SMALL_STATE(126)] = 1796,
  [SMALL_STATE(127)] = 1814,
  [SMALL_STATE(128)] = 1832,
  [SMALL_STATE(129)] = 1850,
  [SMALL_STATE(130)] = 1868,
  [SMALL_STATE(131)] = 1886,
  [SMALL_STATE(132)] = 1904,
  [SMALL_STATE(133)] = 1922,
  [SMALL_STATE(134)] = 1940,
  [SMALL_STATE(135)] = 1958,
  [SMALL_STATE(136)] = 1976,
  [SMALL_STATE(137)] = 1994,
  [SMALL_STATE(138)] = 2012,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 8),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 8),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare, 3, .production_id = 10),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compare, 3, .production_id = 10),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in, 4, .production_id = 12),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_in, 4, .production_id = 12),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_exists, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_exists, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exists, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 11),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 11),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 7),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesis, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesis, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3, .production_id = 10),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign, 3, .production_id = 10),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_variable, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_variable, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_macros, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_macros, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 9),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 9),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3, .production_id = 10),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 3, .production_id = 10),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 3, .production_id = 10),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or, 3, .production_id = 10),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5, .production_id = 14),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5, .production_id = 14),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3, .production_id = 10),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 3, .production_id = 10),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_function, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 3, .production_id = 10),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 3, .production_id = 10),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 3, .production_id = 10),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 3, .production_id = 10),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(87),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(125),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(103),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(88),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(134),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(93),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 2, .production_id = 6),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_inner, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_inner, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_expression, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_not, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_and, 3, .production_id = 13),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_if, 2, .production_id = 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_or, 3, .production_id = 13),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_variable, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_include, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_define, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_undef, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_import, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [447] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__preprocessor, 3),
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
