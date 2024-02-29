#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 154
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 1
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 26

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym_comment = 2,
  sym__whitespace = 3,
  sym_newline = 4,
  anon_sym_SQUOTE = 5,
  anon_sym_DQUOTE = 6,
  sym_single_quoted = 7,
  sym_double_quoted = 8,
  sym_escape_sequence = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_DOLLAR2 = 11,
  anon_sym_PERCENT = 12,
  anon_sym_POUND = 13,
  anon_sym_define = 14,
  anon_sym_undef = 15,
  anon_sym_if = 16,
  anon_sym_endif = 17,
  anon_sym_else = 18,
  anon_sym_import = 19,
  anon_sym_include = 20,
  anon_sym_once = 21,
  anon_sym_exists = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_file_exists = 25,
  anon_sym_or = 26,
  anon_sym_PIPE_PIPE = 27,
  anon_sym_and = 28,
  anon_sym_AMP_AMP = 29,
  anon_sym_BANG = 30,
  anon_sym___LINUX__ = 31,
  anon_sym___OSX__ = 32,
  anon_sym___WINDOWS__ = 33,
  sym__separator = 34,
  sym_filename = 35,
  anon_sym_DOT = 36,
  anon_sym_CARET = 37,
  anon_sym_EQ = 38,
  anon_sym_PLUS = 39,
  anon_sym_DASH = 40,
  anon_sym_true = 41,
  anon_sym_false = 42,
  sym_decimal = 43,
  anon_sym_LBRACE = 44,
  anon_sym_RBRACE = 45,
  anon_sym_LBRACK = 46,
  anon_sym_RBRACK = 47,
  anon_sym_function = 48,
  anon_sym_Error = 49,
  anon_sym_Print = 50,
  anon_sym_Using = 51,
  anon_sym_Settings = 52,
  anon_sym_ForEach = 53,
  anon_sym_If = 54,
  anon_sym_EQ_EQ = 55,
  anon_sym_BANG_EQ = 56,
  anon_sym_LT = 57,
  anon_sym_LT_EQ = 58,
  anon_sym_GT = 59,
  anon_sym_GT_EQ = 60,
  anon_sym_not = 61,
  anon_sym_in = 62,
  anon_sym_Alias = 63,
  anon_sym_Compiler = 64,
  anon_sym_Copy = 65,
  anon_sym_CopyDir = 66,
  anon_sym_CSAssembly = 67,
  anon_sym_DLL = 68,
  anon_sym_Exec = 69,
  anon_sym_Executable = 70,
  anon_sym_Library = 71,
  anon_sym_ListDependencies = 72,
  anon_sym_ObjectList = 73,
  anon_sym_RemoveDir = 74,
  anon_sym_Test = 75,
  anon_sym_TextFile = 76,
  anon_sym_Unity = 77,
  anon_sym_VCXProject = 78,
  anon_sym_VSProjectExternal = 79,
  anon_sym_VSSolution = 80,
  anon_sym_XCodeProject = 81,
  anon_sym__CURRENT_BFF_DIR_ = 82,
  anon_sym__FASTBUILD_VERSION_STRING_ = 83,
  anon_sym__FASTBUILD_VERSION_ = 84,
  anon_sym__FASTBUILD_EXE_PATH_ = 85,
  anon_sym__WORKING_DIR_ = 86,
  sym_source_file = 87,
  sym_string = 88,
  sym_interpolation = 89,
  sym_placeholder = 90,
  sym_environment_variable = 91,
  sym_define = 92,
  sym_undef = 93,
  sym_if_directive = 94,
  sym_import = 95,
  sym_include = 96,
  sym_once = 97,
  sym_exists = 98,
  sym_file_exists = 99,
  sym_or_directive = 100,
  sym_and_directive = 101,
  sym_negate_directive = 102,
  sym_builtin_macros = 103,
  sym_user_macros = 104,
  sym_variable = 105,
  sym_usage = 106,
  sym_propagation = 107,
  sym_assignment = 108,
  sym_concatenation = 109,
  sym_subtraction = 110,
  sym_boolean = 111,
  sym_array = 112,
  sym_struct = 113,
  sym_arguments = 114,
  sym_function_call = 115,
  sym_function_definition = 116,
  sym_user_function = 117,
  sym_error = 118,
  sym_print = 119,
  sym_using = 120,
  sym_settings = 121,
  sym_for_each = 122,
  sym_if = 123,
  sym_parenthesis = 124,
  sym_comparison = 125,
  sym_and = 126,
  sym_or = 127,
  sym_negate = 128,
  sym_in = 129,
  sym_not_in = 130,
  sym_builtin_function = 131,
  sym_builtin_variable = 132,
  aux_sym_string_repeat1 = 133,
  aux_sym_string_repeat2 = 134,
  aux_sym_body_repeat1 = 135,
  aux_sym_for_each_repeat1 = 136,
  anon_alias_sym_notin = 137,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_newline] = "newline",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym_single_quoted] = "single_quoted",
  [sym_double_quoted] = "double_quoted",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_POUND] = "#if",
  [anon_sym_define] = "#define",
  [anon_sym_undef] = "#undef",
  [anon_sym_if] = "#if",
  [anon_sym_endif] = "#endif",
  [anon_sym_else] = "#else",
  [anon_sym_import] = "#import",
  [anon_sym_include] = "#include",
  [anon_sym_once] = "#once",
  [anon_sym_exists] = "exists",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_file_exists] = "file_exists",
  [anon_sym_or] = "or",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_and] = "and",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_BANG] = "!",
  [anon_sym___LINUX__] = "__LINUX__",
  [anon_sym___OSX__] = "__OSX__",
  [anon_sym___WINDOWS__] = "__WINDOWS__",
  [sym__separator] = "_separator",
  [sym_filename] = "filename",
  [anon_sym_DOT] = ".",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_decimal] = "decimal",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_function] = "function",
  [anon_sym_Error] = "Error",
  [anon_sym_Print] = "Print",
  [anon_sym_Using] = "Using",
  [anon_sym_Settings] = "Settings",
  [anon_sym_ForEach] = "ForEach",
  [anon_sym_If] = "If",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_not] = "not",
  [anon_sym_in] = "in",
  [anon_sym_Alias] = "Alias",
  [anon_sym_Compiler] = "Compiler",
  [anon_sym_Copy] = "Copy",
  [anon_sym_CopyDir] = "CopyDir",
  [anon_sym_CSAssembly] = "CSAssembly",
  [anon_sym_DLL] = "DLL",
  [anon_sym_Exec] = "Exec",
  [anon_sym_Executable] = "Executable",
  [anon_sym_Library] = "Library",
  [anon_sym_ListDependencies] = "ListDependencies",
  [anon_sym_ObjectList] = "ObjectList",
  [anon_sym_RemoveDir] = "RemoveDir",
  [anon_sym_Test] = "Test",
  [anon_sym_TextFile] = "TextFile",
  [anon_sym_Unity] = "Unity",
  [anon_sym_VCXProject] = "VCXProject",
  [anon_sym_VSProjectExternal] = "VSProjectExternal",
  [anon_sym_VSSolution] = "VSSolution",
  [anon_sym_XCodeProject] = "XCodeProject",
  [anon_sym__CURRENT_BFF_DIR_] = "_CURRENT_BFF_DIR_",
  [anon_sym__FASTBUILD_VERSION_STRING_] = "_FASTBUILD_VERSION_STRING_",
  [anon_sym__FASTBUILD_VERSION_] = "_FASTBUILD_VERSION_",
  [anon_sym__FASTBUILD_EXE_PATH_] = "_FASTBUILD_EXE_PATH_",
  [anon_sym__WORKING_DIR_] = "_WORKING_DIR_",
  [sym_source_file] = "source_file",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym_placeholder] = "placeholder",
  [sym_environment_variable] = "environment_variable",
  [sym_define] = "define",
  [sym_undef] = "undef",
  [sym_if_directive] = "if_directive",
  [sym_import] = "import",
  [sym_include] = "include",
  [sym_once] = "once",
  [sym_exists] = "exists",
  [sym_file_exists] = "file_exists",
  [sym_or_directive] = "or_directive",
  [sym_and_directive] = "and_directive",
  [sym_negate_directive] = "negate_directive",
  [sym_builtin_macros] = "builtin_macros",
  [sym_user_macros] = "user_macros",
  [sym_variable] = "variable",
  [sym_usage] = "usage",
  [sym_propagation] = "propagation",
  [sym_assignment] = "assignment",
  [sym_concatenation] = "concatenation",
  [sym_subtraction] = "subtraction",
  [sym_boolean] = "boolean",
  [sym_array] = "array",
  [sym_struct] = "struct",
  [sym_arguments] = "arguments",
  [sym_function_call] = "function_call",
  [sym_function_definition] = "function_definition",
  [sym_user_function] = "user_function",
  [sym_error] = "error",
  [sym_print] = "print",
  [sym_using] = "using",
  [sym_settings] = "settings",
  [sym_for_each] = "for_each",
  [sym_if] = "if",
  [sym_parenthesis] = "parenthesis",
  [sym_comparison] = "comparison",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_negate] = "negate",
  [sym_in] = "in",
  [sym_not_in] = "not_in",
  [sym_builtin_function] = "builtin_function",
  [sym_builtin_variable] = "builtin_variable",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_for_each_repeat1] = "for_each_repeat1",
  [anon_alias_sym_notin] = "not in",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_newline] = sym_newline,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_single_quoted] = sym_single_quoted,
  [sym_double_quoted] = sym_double_quoted,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_undef] = anon_sym_undef,
  [anon_sym_if] = anon_sym_POUND,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_once] = anon_sym_once,
  [anon_sym_exists] = anon_sym_exists,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_file_exists] = anon_sym_file_exists,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym___LINUX__] = anon_sym___LINUX__,
  [anon_sym___OSX__] = anon_sym___OSX__,
  [anon_sym___WINDOWS__] = anon_sym___WINDOWS__,
  [sym__separator] = sym__separator,
  [sym_filename] = sym_filename,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_decimal] = sym_decimal,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_Error] = anon_sym_Error,
  [anon_sym_Print] = anon_sym_Print,
  [anon_sym_Using] = anon_sym_Using,
  [anon_sym_Settings] = anon_sym_Settings,
  [anon_sym_ForEach] = anon_sym_ForEach,
  [anon_sym_If] = anon_sym_If,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_Alias] = anon_sym_Alias,
  [anon_sym_Compiler] = anon_sym_Compiler,
  [anon_sym_Copy] = anon_sym_Copy,
  [anon_sym_CopyDir] = anon_sym_CopyDir,
  [anon_sym_CSAssembly] = anon_sym_CSAssembly,
  [anon_sym_DLL] = anon_sym_DLL,
  [anon_sym_Exec] = anon_sym_Exec,
  [anon_sym_Executable] = anon_sym_Executable,
  [anon_sym_Library] = anon_sym_Library,
  [anon_sym_ListDependencies] = anon_sym_ListDependencies,
  [anon_sym_ObjectList] = anon_sym_ObjectList,
  [anon_sym_RemoveDir] = anon_sym_RemoveDir,
  [anon_sym_Test] = anon_sym_Test,
  [anon_sym_TextFile] = anon_sym_TextFile,
  [anon_sym_Unity] = anon_sym_Unity,
  [anon_sym_VCXProject] = anon_sym_VCXProject,
  [anon_sym_VSProjectExternal] = anon_sym_VSProjectExternal,
  [anon_sym_VSSolution] = anon_sym_VSSolution,
  [anon_sym_XCodeProject] = anon_sym_XCodeProject,
  [anon_sym__CURRENT_BFF_DIR_] = anon_sym__CURRENT_BFF_DIR_,
  [anon_sym__FASTBUILD_VERSION_STRING_] = anon_sym__FASTBUILD_VERSION_STRING_,
  [anon_sym__FASTBUILD_VERSION_] = anon_sym__FASTBUILD_VERSION_,
  [anon_sym__FASTBUILD_EXE_PATH_] = anon_sym__FASTBUILD_EXE_PATH_,
  [anon_sym__WORKING_DIR_] = anon_sym__WORKING_DIR_,
  [sym_source_file] = sym_source_file,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym_placeholder] = sym_placeholder,
  [sym_environment_variable] = sym_environment_variable,
  [sym_define] = sym_define,
  [sym_undef] = sym_undef,
  [sym_if_directive] = sym_if_directive,
  [sym_import] = sym_import,
  [sym_include] = sym_include,
  [sym_once] = sym_once,
  [sym_exists] = sym_exists,
  [sym_file_exists] = sym_file_exists,
  [sym_or_directive] = sym_or_directive,
  [sym_and_directive] = sym_and_directive,
  [sym_negate_directive] = sym_negate_directive,
  [sym_builtin_macros] = sym_builtin_macros,
  [sym_user_macros] = sym_user_macros,
  [sym_variable] = sym_variable,
  [sym_usage] = sym_usage,
  [sym_propagation] = sym_propagation,
  [sym_assignment] = sym_assignment,
  [sym_concatenation] = sym_concatenation,
  [sym_subtraction] = sym_subtraction,
  [sym_boolean] = sym_boolean,
  [sym_array] = sym_array,
  [sym_struct] = sym_struct,
  [sym_arguments] = sym_arguments,
  [sym_function_call] = sym_function_call,
  [sym_function_definition] = sym_function_definition,
  [sym_user_function] = sym_user_function,
  [sym_error] = sym_error,
  [sym_print] = sym_print,
  [sym_using] = sym_using,
  [sym_settings] = sym_settings,
  [sym_for_each] = sym_for_each,
  [sym_if] = sym_if,
  [sym_parenthesis] = sym_parenthesis,
  [sym_comparison] = sym_comparison,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [sym_negate] = sym_negate,
  [sym_in] = sym_in,
  [sym_not_in] = sym_not_in,
  [sym_builtin_function] = sym_builtin_function,
  [sym_builtin_variable] = sym_builtin_variable,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_for_each_repeat1] = aux_sym_for_each_repeat1,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_newline] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [anon_sym_once] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exists] = {
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
  [anon_sym_file_exists] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
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
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
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
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Settings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ForEach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_If] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
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
  [anon_sym_Exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Executable] = {
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
  [anon_sym_RemoveDir] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
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
  [sym_environment_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_undef] = {
    .visible = true,
    .named = true,
  },
  [sym_if_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_once] = {
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
  [sym_or_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_and_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_negate_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_macros] = {
    .visible = true,
    .named = true,
  },
  [sym_user_macros] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_usage] = {
    .visible = true,
    .named = true,
  },
  [sym_propagation] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_concatenation] = {
    .visible = true,
    .named = true,
  },
  [sym_subtraction] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_user_function] = {
    .visible = true,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [sym_print] = {
    .visible = true,
    .named = true,
  },
  [sym_using] = {
    .visible = true,
    .named = true,
  },
  [sym_settings] = {
    .visible = true,
    .named = true,
  },
  [sym_for_each] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesis] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
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
  [sym_negate] = {
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
  [sym_builtin_function] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_each_repeat1] = {
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
  field_else = 4,
  field_iterator = 5,
  field_lhs = 6,
  field_message = 7,
  field_name = 8,
  field_number = 9,
  field_operator = 10,
  field_rhs = 11,
  field_settings = 12,
  field_struct = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_else] = "else",
  [field_iterator] = "iterator",
  [field_lhs] = "lhs",
  [field_message] = "message",
  [field_name] = "name",
  [field_number] = "number",
  [field_operator] = "operator",
  [field_rhs] = "rhs",
  [field_settings] = "settings",
  [field_struct] = "struct",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 1},
  [9] = {.index = 4, .length = 2},
  [10] = {.index = 6, .length = 1},
  [11] = {.index = 7, .length = 3},
  [12] = {.index = 10, .length = 3},
  [13] = {.index = 13, .length = 1},
  [14] = {.index = 14, .length = 1},
  [15] = {.index = 15, .length = 2},
  [16] = {.index = 17, .length = 1},
  [17] = {.index = 18, .length = 2},
  [18] = {.index = 20, .length = 2},
  [19] = {.index = 22, .length = 3},
  [20] = {.index = 25, .length = 2},
  [21] = {.index = 27, .length = 2},
  [22] = {.index = 17, .length = 1},
  [23] = {.index = 29, .length = 2},
  [24] = {.index = 25, .length = 2},
  [25] = {.index = 31, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_settings, 1},
  [1] =
    {field_arguments, 1},
    {field_name, 0},
  [3] =
    {field_number, 1},
  [4] =
    {field_lhs, 0},
    {field_rhs, 2},
  [6] =
    {field_iterator, 0},
  [7] =
    {field_arguments, 1},
    {field_body, 2},
    {field_name, 0},
  [10] =
    {field_arguments, 2},
    {field_body, 3},
    {field_name, 1},
  [13] =
    {field_message, 2},
  [14] =
    {field_struct, 2},
  [15] =
    {field_iterator, 0, .inherited = true},
    {field_iterator, 1, .inherited = true},
  [17] =
    {field_condition, 2},
  [18] =
    {field_body, 4},
    {field_iterator, 2, .inherited = true},
  [20] =
    {field_body, 4},
    {field_condition, 2},
  [22] =
    {field_lhs, 0},
    {field_operator, 1},
    {field_rhs, 2},
  [25] =
    {field_body, 3},
    {field_condition, 2},
  [27] =
    {field_lhs, 0},
    {field_rhs, 3},
  [29] =
    {field_condition, 2},
    {field_else, 5},
  [31] =
    {field_body, 3},
    {field_condition, 2},
    {field_else, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_sym_once,
  },
  [5] = {
    [0] = anon_sym_define,
  },
  [6] = {
    [0] = anon_sym_undef,
  },
  [7] = {
    [0] = anon_sym_import,
  },
  [8] = {
    [0] = anon_sym_include,
  },
  [16] = {
    [3] = anon_sym_endif,
    [4] = anon_sym_endif,
  },
  [20] = {
    [4] = anon_sym_endif,
    [5] = anon_sym_endif,
  },
  [21] = {
    [1] = anon_alias_sym_notin,
    [2] = anon_alias_sym_notin,
  },
  [22] = {
    [3] = anon_sym_else,
    [5] = anon_sym_endif,
    [6] = anon_sym_endif,
  },
  [23] = {
    [3] = anon_sym_else,
    [6] = anon_sym_endif,
    [7] = anon_sym_endif,
  },
  [24] = {
    [4] = anon_sym_else,
    [6] = anon_sym_endif,
  },
  [25] = {
    [4] = anon_sym_else,
    [7] = anon_sym_endif,
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
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 112,
  [115] = 113,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 139,
  [152] = 131,
  [153] = 140,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '^') ADVANCE(47);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '}') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '|') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '^') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '^') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == ' ' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == '|') ADVANCE(39);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
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
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '^') ADVANCE(47);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '}') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '[') ADVANCE(57);
      if (lookahead == ']') ADVANCE(58);
      if (lookahead == '^') ADVANCE(47);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead == '\n') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '\'' ||
          lookahead == '^') ADVANCE(17);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_single_quoted);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_single_quoted);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          lookahead != '^') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_double_quoted);
      if (lookahead == '\n') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '^') ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_double_quoted);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '^') ADVANCE(17);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_double_quoted);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '^') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_double_quoted);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '^') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_double_quoted);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '^') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__separator);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_filename);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
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
      ACCEPT_TOKEN(anon_sym_else);
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
      ACCEPT_TOKEN(anon_sym_once);
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
      ACCEPT_TOKEN(anon_sym_endif);
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
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 0},
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
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_undef] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_once] = ACTIONS(1),
    [anon_sym_exists] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_file_exists] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym___LINUX__] = ACTIONS(1),
    [anon_sym___OSX__] = ACTIONS(1),
    [anon_sym___WINDOWS__] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_Error] = ACTIONS(1),
    [anon_sym_Print] = ACTIONS(1),
    [anon_sym_Using] = ACTIONS(1),
    [anon_sym_Settings] = ACTIONS(1),
    [anon_sym_ForEach] = ACTIONS(1),
    [anon_sym_If] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_Alias] = ACTIONS(1),
    [anon_sym_Compiler] = ACTIONS(1),
    [anon_sym_Copy] = ACTIONS(1),
    [anon_sym_CopyDir] = ACTIONS(1),
    [anon_sym_CSAssembly] = ACTIONS(1),
    [anon_sym_DLL] = ACTIONS(1),
    [anon_sym_Exec] = ACTIONS(1),
    [anon_sym_Executable] = ACTIONS(1),
    [anon_sym_Library] = ACTIONS(1),
    [anon_sym_ListDependencies] = ACTIONS(1),
    [anon_sym_ObjectList] = ACTIONS(1),
    [anon_sym_RemoveDir] = ACTIONS(1),
    [anon_sym_Test] = ACTIONS(1),
    [anon_sym_TextFile] = ACTIONS(1),
    [anon_sym_Unity] = ACTIONS(1),
    [anon_sym_VCXProject] = ACTIONS(1),
    [anon_sym_VSProjectExternal] = ACTIONS(1),
    [anon_sym_VSSolution] = ACTIONS(1),
    [anon_sym_XCodeProject] = ACTIONS(1),
    [anon_sym__CURRENT_BFF_DIR_] = ACTIONS(1),
    [anon_sym__FASTBUILD_VERSION_STRING_] = ACTIONS(1),
    [anon_sym__FASTBUILD_VERSION_] = ACTIONS(1),
    [anon_sym__FASTBUILD_EXE_PATH_] = ACTIONS(1),
    [anon_sym__WORKING_DIR_] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(130),
    [sym_string] = STATE(29),
    [sym_define] = STATE(10),
    [sym_undef] = STATE(10),
    [sym_if_directive] = STATE(10),
    [sym_import] = STATE(10),
    [sym_include] = STATE(10),
    [sym_once] = STATE(10),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [sym__separator] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
  [2] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(12),
    [sym_undef] = STATE(12),
    [sym_if_directive] = STATE(12),
    [sym_import] = STATE(12),
    [sym_include] = STATE(12),
    [sym_once] = STATE(12),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_or] = ACTIONS(49),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_and] = ACTIONS(53),
    [anon_sym_AMP_AMP] = ACTIONS(55),
    [sym__separator] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
  [3] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(3),
    [sym_undef] = STATE(3),
    [sym_if_directive] = STATE(3),
    [sym_import] = STATE(3),
    [sym_include] = STATE(3),
    [sym_once] = STATE(3),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(59),
    [sym__separator] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [sym_decimal] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(59),
    [anon_sym_function] = ACTIONS(94),
    [anon_sym_Error] = ACTIONS(97),
    [anon_sym_Print] = ACTIONS(100),
    [anon_sym_Using] = ACTIONS(103),
    [anon_sym_Settings] = ACTIONS(106),
    [anon_sym_ForEach] = ACTIONS(109),
    [anon_sym_If] = ACTIONS(112),
    [anon_sym_Alias] = ACTIONS(115),
    [anon_sym_Compiler] = ACTIONS(115),
    [anon_sym_Copy] = ACTIONS(115),
    [anon_sym_CopyDir] = ACTIONS(115),
    [anon_sym_CSAssembly] = ACTIONS(115),
    [anon_sym_DLL] = ACTIONS(115),
    [anon_sym_Exec] = ACTIONS(115),
    [anon_sym_Executable] = ACTIONS(115),
    [anon_sym_Library] = ACTIONS(115),
    [anon_sym_ListDependencies] = ACTIONS(115),
    [anon_sym_ObjectList] = ACTIONS(115),
    [anon_sym_RemoveDir] = ACTIONS(115),
    [anon_sym_Test] = ACTIONS(115),
    [anon_sym_TextFile] = ACTIONS(115),
    [anon_sym_Unity] = ACTIONS(115),
    [anon_sym_VCXProject] = ACTIONS(115),
    [anon_sym_VSProjectExternal] = ACTIONS(115),
    [anon_sym_VSSolution] = ACTIONS(115),
    [anon_sym_XCodeProject] = ACTIONS(115),
  },
  [4] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(9),
    [sym_undef] = STATE(9),
    [sym_if_directive] = STATE(9),
    [sym_import] = STATE(9),
    [sym_include] = STATE(9),
    [sym_once] = STATE(9),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(9),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [sym__separator] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
  [5] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(3),
    [sym_undef] = STATE(3),
    [sym_if_directive] = STATE(3),
    [sym_import] = STATE(3),
    [sym_include] = STATE(3),
    [sym_once] = STATE(3),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(122),
    [sym__separator] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
  [6] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(7),
    [sym_undef] = STATE(7),
    [sym_if_directive] = STATE(7),
    [sym_import] = STATE(7),
    [sym_include] = STATE(7),
    [sym_once] = STATE(7),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [sym__separator] = ACTIONS(126),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
  [7] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(3),
    [sym_undef] = STATE(3),
    [sym_if_directive] = STATE(3),
    [sym_import] = STATE(3),
    [sym_include] = STATE(3),
    [sym_once] = STATE(3),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [sym__separator] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
  [8] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(5),
    [sym_undef] = STATE(5),
    [sym_if_directive] = STATE(5),
    [sym_import] = STATE(5),
    [sym_include] = STATE(5),
    [sym_once] = STATE(5),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(132),
    [sym__separator] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
  [9] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(3),
    [sym_undef] = STATE(3),
    [sym_if_directive] = STATE(3),
    [sym_import] = STATE(3),
    [sym_include] = STATE(3),
    [sym_once] = STATE(3),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [sym__separator] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
  [10] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(3),
    [sym_undef] = STATE(3),
    [sym_if_directive] = STATE(3),
    [sym_import] = STATE(3),
    [sym_include] = STATE(3),
    [sym_once] = STATE(3),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [sym__separator] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
  [11] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(14),
    [sym_undef] = STATE(14),
    [sym_if_directive] = STATE(14),
    [sym_import] = STATE(14),
    [sym_include] = STATE(14),
    [sym_once] = STATE(14),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(14),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(140),
    [sym__separator] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
  [12] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(3),
    [sym_undef] = STATE(3),
    [sym_if_directive] = STATE(3),
    [sym_import] = STATE(3),
    [sym_include] = STATE(3),
    [sym_once] = STATE(3),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(144),
    [sym__separator] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
  [13] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(3),
    [sym_undef] = STATE(3),
    [sym_if_directive] = STATE(3),
    [sym_import] = STATE(3),
    [sym_include] = STATE(3),
    [sym_once] = STATE(3),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(146),
    [sym__separator] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
  [14] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(3),
    [sym_undef] = STATE(3),
    [sym_if_directive] = STATE(3),
    [sym_import] = STATE(3),
    [sym_include] = STATE(3),
    [sym_once] = STATE(3),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(148),
    [sym__separator] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
  [15] = {
    [sym_string] = STATE(29),
    [sym_define] = STATE(13),
    [sym_undef] = STATE(13),
    [sym_if_directive] = STATE(13),
    [sym_import] = STATE(13),
    [sym_include] = STATE(13),
    [sym_once] = STATE(13),
    [sym_usage] = STATE(29),
    [sym_propagation] = STATE(29),
    [sym_assignment] = STATE(29),
    [sym_concatenation] = STATE(29),
    [sym_subtraction] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_array] = STATE(29),
    [sym_struct] = STATE(29),
    [sym_function_call] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_user_function] = STATE(123),
    [sym_error] = STATE(29),
    [sym_print] = STATE(29),
    [sym_using] = STATE(29),
    [sym_settings] = STATE(29),
    [sym_for_each] = STATE(29),
    [sym_if] = STATE(29),
    [sym_builtin_function] = STATE(123),
    [aux_sym_body_repeat1] = STATE(13),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_newline] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(150),
    [sym__separator] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_decimal] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_function] = ACTIONS(31),
    [anon_sym_Error] = ACTIONS(33),
    [anon_sym_Print] = ACTIONS(35),
    [anon_sym_Using] = ACTIONS(37),
    [anon_sym_Settings] = ACTIONS(39),
    [anon_sym_ForEach] = ACTIONS(41),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_Alias] = ACTIONS(45),
    [anon_sym_Compiler] = ACTIONS(45),
    [anon_sym_Copy] = ACTIONS(45),
    [anon_sym_CopyDir] = ACTIONS(45),
    [anon_sym_CSAssembly] = ACTIONS(45),
    [anon_sym_DLL] = ACTIONS(45),
    [anon_sym_Exec] = ACTIONS(45),
    [anon_sym_Executable] = ACTIONS(45),
    [anon_sym_Library] = ACTIONS(45),
    [anon_sym_ListDependencies] = ACTIONS(45),
    [anon_sym_ObjectList] = ACTIONS(45),
    [anon_sym_RemoveDir] = ACTIONS(45),
    [anon_sym_Test] = ACTIONS(45),
    [anon_sym_TextFile] = ACTIONS(45),
    [anon_sym_Unity] = ACTIONS(45),
    [anon_sym_VCXProject] = ACTIONS(45),
    [anon_sym_VSProjectExternal] = ACTIONS(45),
    [anon_sym_VSSolution] = ACTIONS(45),
    [anon_sym_XCodeProject] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(154), 21,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(156), 36,
      anon_sym_or,
      anon_sym_and,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_in,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [69] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(158), 21,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(160), 36,
      anon_sym_or,
      anon_sym_and,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_in,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [138] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(162), 21,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(164), 36,
      anon_sym_or,
      anon_sym_and,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_in,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [207] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(166), 21,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(168), 36,
      anon_sym_or,
      anon_sym_and,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_in,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [276] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(170), 21,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(172), 36,
      anon_sym_or,
      anon_sym_and,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_in,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [345] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(174), 21,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(176), 36,
      anon_sym_or,
      anon_sym_and,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_not,
      anon_sym_in,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [414] = 22,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_Error,
    ACTIONS(35), 1,
      anon_sym_Print,
    ACTIONS(37), 1,
      anon_sym_Using,
    ACTIONS(39), 1,
      anon_sym_Settings,
    ACTIONS(41), 1,
      anon_sym_ForEach,
    ACTIONS(43), 1,
      anon_sym_If,
    ACTIONS(178), 1,
      sym_decimal,
    STATE(118), 1,
      sym_propagation,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_user_function,
      sym_builtin_function,
    STATE(42), 16,
      sym_string,
      sym_usage,
      sym_assignment,
      sym_concatenation,
      sym_subtraction,
      sym_boolean,
      sym_array,
      sym_struct,
      sym_function_call,
      sym_function_definition,
      sym_error,
      sym_print,
      sym_using,
      sym_settings,
      sym_for_each,
      sym_if,
    ACTIONS(45), 19,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [517] = 22,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_Error,
    ACTIONS(35), 1,
      anon_sym_Print,
    ACTIONS(37), 1,
      anon_sym_Using,
    ACTIONS(39), 1,
      anon_sym_Settings,
    ACTIONS(41), 1,
      anon_sym_ForEach,
    ACTIONS(43), 1,
      anon_sym_If,
    ACTIONS(180), 1,
      sym_decimal,
    STATE(118), 1,
      sym_propagation,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_user_function,
      sym_builtin_function,
    STATE(40), 16,
      sym_string,
      sym_usage,
      sym_assignment,
      sym_concatenation,
      sym_subtraction,
      sym_boolean,
      sym_array,
      sym_struct,
      sym_function_call,
      sym_function_definition,
      sym_error,
      sym_print,
      sym_using,
      sym_settings,
      sym_for_each,
      sym_if,
    ACTIONS(45), 19,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [620] = 22,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_function,
    ACTIONS(33), 1,
      anon_sym_Error,
    ACTIONS(35), 1,
      anon_sym_Print,
    ACTIONS(37), 1,
      anon_sym_Using,
    ACTIONS(39), 1,
      anon_sym_Settings,
    ACTIONS(41), 1,
      anon_sym_ForEach,
    ACTIONS(43), 1,
      anon_sym_If,
    ACTIONS(182), 1,
      sym_decimal,
    STATE(118), 1,
      sym_propagation,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_user_function,
      sym_builtin_function,
    STATE(39), 16,
      sym_string,
      sym_usage,
      sym_assignment,
      sym_concatenation,
      sym_subtraction,
      sym_boolean,
      sym_array,
      sym_struct,
      sym_function_call,
      sym_function_definition,
      sym_error,
      sym_print,
      sym_using,
      sym_settings,
      sym_for_each,
      sym_if,
    ACTIONS(45), 19,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [723] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(184), 15,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(186), 31,
      anon_sym_or,
      anon_sym_and,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [781] = 6,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_array,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(188), 15,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(190), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [843] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(192), 15,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(194), 31,
      anon_sym_or,
      anon_sym_and,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [901] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(196), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(198), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [958] = 7,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(206), 1,
      anon_sym_PLUS,
    ACTIONS(208), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(200), 13,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(202), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1021] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(210), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(212), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1078] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(214), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(216), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1135] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(218), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(220), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1192] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(222), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(224), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1249] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(226), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(228), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1306] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(230), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(232), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1363] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(236), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1420] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(238), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(240), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1477] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(242), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(244), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1534] = 5,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 15,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(248), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1593] = 5,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(250), 15,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(252), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1652] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(254), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(256), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1709] = 5,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(258), 15,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(260), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1768] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(262), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(264), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1825] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(266), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(268), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1882] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(272), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1939] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(274), 16,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(276), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [1996] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(280), 11,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(278), 31,
      anon_sym_or,
      anon_sym_and,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2050] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(282), 13,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(284), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2104] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(286), 13,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(288), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2158] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(290), 13,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(292), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2212] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 13,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(296), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2266] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(300), 11,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(298), 31,
      anon_sym_or,
      anon_sym_and,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2320] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 13,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(304), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2374] = 6,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(53), 1,
      anon_sym_and,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 10,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_PIPE_PIPE,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(306), 30,
      anon_sym_or,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2432] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 13,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(312), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2486] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 13,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(316), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2540] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(318), 13,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(320), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2594] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 13,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(324), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2648] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(328), 11,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(326), 31,
      anon_sym_or,
      anon_sym_and,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2702] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(330), 13,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(332), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2756] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 13,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(336), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2810] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(340), 11,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    ACTIONS(338), 31,
      anon_sym_or,
      anon_sym_and,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2864] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 13,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_CARET,
      sym_decimal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(344), 29,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_function,
      anon_sym_Error,
      anon_sym_Print,
      anon_sym_Using,
      anon_sym_Settings,
      anon_sym_ForEach,
      anon_sym_If,
      anon_sym_Alias,
      anon_sym_Compiler,
      anon_sym_Copy,
      anon_sym_CopyDir,
      anon_sym_CSAssembly,
      anon_sym_DLL,
      anon_sym_Exec,
      anon_sym_Executable,
      anon_sym_Library,
      anon_sym_ListDependencies,
      anon_sym_ObjectList,
      anon_sym_RemoveDir,
      anon_sym_Test,
      anon_sym_TextFile,
      anon_sym_Unity,
      anon_sym_VCXProject,
      anon_sym_VSProjectExternal,
      anon_sym_VSSolution,
      anon_sym_XCodeProject,
  [2918] = 11,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(350), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 3,
      sym_string,
      sym_usage,
      sym_boolean,
    STATE(85), 7,
      sym_parenthesis,
      sym_comparison,
      sym_and,
      sym_or,
      sym_negate,
      sym_in,
      sym_not_in,
  [2963] = 11,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(350), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(78), 3,
      sym_string,
      sym_usage,
      sym_boolean,
    STATE(89), 7,
      sym_parenthesis,
      sym_comparison,
      sym_and,
      sym_or,
      sym_negate,
      sym_in,
      sym_not_in,
  [3008] = 11,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(350), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(76), 3,
      sym_string,
      sym_usage,
      sym_boolean,
    STATE(91), 7,
      sym_parenthesis,
      sym_comparison,
      sym_and,
      sym_or,
      sym_negate,
      sym_in,
      sym_not_in,
  [3053] = 11,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(350), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 3,
      sym_string,
      sym_usage,
      sym_boolean,
    STATE(88), 7,
      sym_parenthesis,
      sym_comparison,
      sym_and,
      sym_or,
      sym_negate,
      sym_in,
      sym_not_in,
  [3098] = 11,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(350), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 3,
      sym_string,
      sym_usage,
      sym_boolean,
    STATE(84), 7,
      sym_parenthesis,
      sym_comparison,
      sym_and,
      sym_or,
      sym_negate,
      sym_in,
      sym_not_in,
  [3143] = 11,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 2,
      anon_sym_BANG,
      anon_sym_not,
    ACTIONS(350), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(77), 3,
      sym_string,
      sym_usage,
      sym_boolean,
    STATE(87), 7,
      sym_parenthesis,
      sym_comparison,
      sym_and,
      sym_or,
      sym_negate,
      sym_in,
      sym_not_in,
  [3188] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(366), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(364), 16,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
      sym__separator,
      anon_sym_DOT,
      anon_sym_true,
      anon_sym_false,
      sym_decimal,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3218] = 8,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_exists,
    ACTIONS(372), 1,
      anon_sym_file_exists,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    STATE(47), 7,
      sym_exists,
      sym_file_exists,
      sym_or_directive,
      sym_and_directive,
      sym_negate_directive,
      sym_builtin_macros,
      sym_user_macros,
  [3252] = 8,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_exists,
    ACTIONS(372), 1,
      anon_sym_file_exists,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    STATE(2), 7,
      sym_exists,
      sym_file_exists,
      sym_or_directive,
      sym_and_directive,
      sym_negate_directive,
      sym_builtin_macros,
      sym_user_macros,
  [3286] = 8,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_exists,
    ACTIONS(372), 1,
      anon_sym_file_exists,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    STATE(62), 7,
      sym_exists,
      sym_file_exists,
      sym_or_directive,
      sym_and_directive,
      sym_negate_directive,
      sym_builtin_macros,
      sym_user_macros,
  [3320] = 8,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(370), 1,
      anon_sym_exists,
    ACTIONS(372), 1,
      anon_sym_file_exists,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(376), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
    STATE(54), 7,
      sym_exists,
      sym_file_exists,
      sym_or_directive,
      sym_and_directive,
      sym_negate_directive,
      sym_builtin_macros,
      sym_user_macros,
  [3354] = 9,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(388), 1,
      anon_sym_not,
    ACTIONS(390), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(382), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3389] = 8,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(388), 1,
      anon_sym_not,
    ACTIONS(390), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3422] = 6,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(388), 1,
      anon_sym_not,
    ACTIONS(390), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(394), 9,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3451] = 6,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(388), 1,
      anon_sym_not,
    ACTIONS(390), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 9,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3480] = 9,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(388), 1,
      anon_sym_not,
    ACTIONS(390), 1,
      anon_sym_in,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(382), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3515] = 12,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(412), 1,
      sym__separator,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(421), 1,
      sym_decimal,
    STATE(80), 1,
      aux_sym_for_each_repeat1,
    STATE(101), 1,
      sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(418), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(138), 3,
      sym_string,
      sym_usage,
      sym_boolean,
  [3556] = 7,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(388), 1,
      anon_sym_not,
    ACTIONS(390), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(424), 5,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [3587] = 12,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(428), 1,
      sym__separator,
    ACTIONS(430), 1,
      sym_decimal,
    STATE(80), 1,
      aux_sym_for_each_repeat1,
    STATE(101), 1,
      sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(138), 3,
      sym_string,
      sym_usage,
      sym_boolean,
  [3628] = 11,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      sym_decimal,
    ACTIONS(432), 1,
      sym__separator,
    STATE(82), 1,
      aux_sym_for_each_repeat1,
    STATE(101), 1,
      sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(138), 3,
      sym_string,
      sym_usage,
      sym_boolean,
  [3666] = 5,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(424), 5,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
  [3691] = 7,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(382), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3720] = 8,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(18), 1,
      sym_builtin_variable,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(20), 2,
      sym_string,
      sym_variable,
    ACTIONS(436), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
  [3751] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(394), 9,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3774] = 7,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(380), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(382), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3803] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(400), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 9,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3826] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(440), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(438), 9,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3849] = 6,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(382), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(386), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 3,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(384), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3876] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(444), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(442), 9,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3899] = 8,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(18), 1,
      sym_builtin_variable,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(46), 2,
      sym_string,
      sym_variable,
    ACTIONS(436), 5,
      anon_sym__CURRENT_BFF_DIR_,
      anon_sym__FASTBUILD_VERSION_STRING_,
      anon_sym__FASTBUILD_VERSION_,
      anon_sym__FASTBUILD_EXE_PATH_,
      anon_sym__WORKING_DIR_,
  [3930] = 8,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 3,
      sym_string,
      sym_usage,
      sym_boolean,
  [3959] = 8,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(448), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(350), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(90), 3,
      sym_string,
      sym_usage,
      sym_boolean,
  [3988] = 7,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      sym_double_quoted,
    ACTIONS(454), 1,
      sym_escape_sequence,
    ACTIONS(456), 1,
      anon_sym_DOLLAR,
    ACTIONS(458), 1,
      anon_sym_PERCENT,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym_newline,
    STATE(104), 3,
      sym_interpolation,
      sym_placeholder,
      aux_sym_string_repeat2,
  [4014] = 7,
    ACTIONS(456), 1,
      anon_sym_DOLLAR,
    ACTIONS(458), 1,
      anon_sym_PERCENT,
    ACTIONS(460), 1,
      anon_sym_DQUOTE,
    ACTIONS(462), 1,
      sym_double_quoted,
    ACTIONS(464), 1,
      sym_escape_sequence,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym_newline,
    STATE(96), 3,
      sym_interpolation,
      sym_placeholder,
      aux_sym_string_repeat2,
  [4040] = 10,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(466), 1,
      anon_sym_define,
    ACTIONS(468), 1,
      anon_sym_undef,
    ACTIONS(470), 1,
      anon_sym_if,
    ACTIONS(472), 1,
      anon_sym_endif,
    ACTIONS(474), 1,
      anon_sym_else,
    ACTIONS(476), 1,
      anon_sym_import,
    ACTIONS(478), 1,
      anon_sym_include,
    ACTIONS(480), 1,
      anon_sym_once,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4072] = 10,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(466), 1,
      anon_sym_define,
    ACTIONS(468), 1,
      anon_sym_undef,
    ACTIONS(470), 1,
      anon_sym_if,
    ACTIONS(476), 1,
      anon_sym_import,
    ACTIONS(478), 1,
      anon_sym_include,
    ACTIONS(480), 1,
      anon_sym_once,
    ACTIONS(482), 1,
      anon_sym_endif,
    ACTIONS(484), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4104] = 7,
    ACTIONS(460), 1,
      anon_sym_SQUOTE,
    ACTIONS(486), 1,
      sym_single_quoted,
    ACTIONS(488), 1,
      sym_escape_sequence,
    ACTIONS(490), 1,
      anon_sym_DOLLAR,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym_newline,
    STATE(103), 3,
      sym_interpolation,
      sym_placeholder,
      aux_sym_string_repeat1,
  [4130] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(494), 8,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_RPAREN,
      sym__separator,
      anon_sym_DOT,
      anon_sym_true,
      anon_sym_false,
      sym_decimal,
  [4148] = 7,
    ACTIONS(496), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      sym_single_quoted,
    ACTIONS(501), 1,
      sym_escape_sequence,
    ACTIONS(504), 1,
      anon_sym_DOLLAR,
    ACTIONS(507), 1,
      anon_sym_PERCENT,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym_newline,
    STATE(102), 3,
      sym_interpolation,
      sym_placeholder,
      aux_sym_string_repeat1,
  [4174] = 7,
    ACTIONS(450), 1,
      anon_sym_SQUOTE,
    ACTIONS(490), 1,
      anon_sym_DOLLAR,
    ACTIONS(492), 1,
      anon_sym_PERCENT,
    ACTIONS(510), 1,
      sym_single_quoted,
    ACTIONS(512), 1,
      sym_escape_sequence,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym_newline,
    STATE(102), 3,
      sym_interpolation,
      sym_placeholder,
      aux_sym_string_repeat1,
  [4200] = 7,
    ACTIONS(514), 1,
      anon_sym_DQUOTE,
    ACTIONS(516), 1,
      sym_double_quoted,
    ACTIONS(519), 1,
      sym_escape_sequence,
    ACTIONS(522), 1,
      anon_sym_DOLLAR,
    ACTIONS(525), 1,
      anon_sym_PERCENT,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym_newline,
    STATE(104), 3,
      sym_interpolation,
      sym_placeholder,
      aux_sym_string_repeat2,
  [4226] = 9,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(466), 1,
      anon_sym_define,
    ACTIONS(468), 1,
      anon_sym_undef,
    ACTIONS(470), 1,
      anon_sym_if,
    ACTIONS(476), 1,
      anon_sym_import,
    ACTIONS(478), 1,
      anon_sym_include,
    ACTIONS(480), 1,
      anon_sym_once,
    ACTIONS(528), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4255] = 9,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(466), 1,
      anon_sym_define,
    ACTIONS(468), 1,
      anon_sym_undef,
    ACTIONS(470), 1,
      anon_sym_if,
    ACTIONS(476), 1,
      anon_sym_import,
    ACTIONS(478), 1,
      anon_sym_include,
    ACTIONS(480), 1,
      anon_sym_once,
    ACTIONS(530), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4284] = 9,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(466), 1,
      anon_sym_define,
    ACTIONS(468), 1,
      anon_sym_undef,
    ACTIONS(470), 1,
      anon_sym_if,
    ACTIONS(476), 1,
      anon_sym_import,
    ACTIONS(478), 1,
      anon_sym_include,
    ACTIONS(480), 1,
      anon_sym_once,
    ACTIONS(532), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4313] = 9,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(466), 1,
      anon_sym_define,
    ACTIONS(468), 1,
      anon_sym_undef,
    ACTIONS(470), 1,
      anon_sym_if,
    ACTIONS(476), 1,
      anon_sym_import,
    ACTIONS(478), 1,
      anon_sym_include,
    ACTIONS(480), 1,
      anon_sym_once,
    ACTIONS(534), 1,
      anon_sym_endif,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4342] = 5,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(48), 2,
      sym_builtin_macros,
      sym_user_macros,
    ACTIONS(376), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
  [4362] = 8,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(466), 1,
      anon_sym_define,
    ACTIONS(468), 1,
      anon_sym_undef,
    ACTIONS(470), 1,
      anon_sym_if,
    ACTIONS(476), 1,
      anon_sym_import,
    ACTIONS(478), 1,
      anon_sym_include,
    ACTIONS(480), 1,
      anon_sym_once,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4388] = 5,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(368), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(61), 2,
      sym_builtin_macros,
      sym_user_macros,
    ACTIONS(376), 3,
      anon_sym___LINUX__,
      anon_sym___OSX__,
      anon_sym___WINDOWS__,
  [4408] = 3,
    ACTIONS(538), 1,
      sym_single_quoted,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym_newline,
    ACTIONS(536), 4,
      anon_sym_SQUOTE,
      sym_escape_sequence,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [4423] = 3,
    ACTIONS(542), 1,
      sym_double_quoted,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym_newline,
    ACTIONS(540), 4,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [4438] = 3,
    ACTIONS(538), 1,
      sym_double_quoted,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym_newline,
    ACTIONS(536), 4,
      anon_sym_DQUOTE,
      sym_escape_sequence,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [4453] = 3,
    ACTIONS(542), 1,
      sym_single_quoted,
    ACTIONS(5), 3,
      sym_comment,
      sym__whitespace,
      sym_newline,
    ACTIONS(540), 4,
      anon_sym_SQUOTE,
      sym_escape_sequence,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
  [4468] = 5,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4485] = 5,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4502] = 5,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(206), 1,
      anon_sym_PLUS,
    ACTIONS(208), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4519] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(125), 1,
      sym_user_function,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4533] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(546), 1,
      sym_identifier,
    STATE(150), 1,
      sym_environment_variable,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4547] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_array,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4561] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_array,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4575] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4589] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(546), 1,
      sym_identifier,
    STATE(51), 1,
      sym_environment_variable,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4603] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4617] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_array,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4631] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_array,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4645] = 4,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(19), 1,
      anon_sym_DOT,
    STATE(129), 1,
      sym_usage,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4659] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4670] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4681] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(554), 1,
      anon_sym_DOLLAR2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4692] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(556), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4703] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4714] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4725] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4736] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(564), 1,
      sym_filename,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4747] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4758] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(390), 1,
      anon_sym_in,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4769] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(568), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4780] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(570), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4791] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4802] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4813] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4824] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4835] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(580), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4846] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(582), 1,
      sym_filename,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4857] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(584), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4868] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4879] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4890] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4901] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(592), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4912] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(594), 1,
      anon_sym_DOLLAR2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [4923] = 3,
    ACTIONS(5), 1,
      sym_newline,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 69,
  [SMALL_STATE(18)] = 138,
  [SMALL_STATE(19)] = 207,
  [SMALL_STATE(20)] = 276,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 414,
  [SMALL_STATE(23)] = 517,
  [SMALL_STATE(24)] = 620,
  [SMALL_STATE(25)] = 723,
  [SMALL_STATE(26)] = 781,
  [SMALL_STATE(27)] = 843,
  [SMALL_STATE(28)] = 901,
  [SMALL_STATE(29)] = 958,
  [SMALL_STATE(30)] = 1021,
  [SMALL_STATE(31)] = 1078,
  [SMALL_STATE(32)] = 1135,
  [SMALL_STATE(33)] = 1192,
  [SMALL_STATE(34)] = 1249,
  [SMALL_STATE(35)] = 1306,
  [SMALL_STATE(36)] = 1363,
  [SMALL_STATE(37)] = 1420,
  [SMALL_STATE(38)] = 1477,
  [SMALL_STATE(39)] = 1534,
  [SMALL_STATE(40)] = 1593,
  [SMALL_STATE(41)] = 1652,
  [SMALL_STATE(42)] = 1709,
  [SMALL_STATE(43)] = 1768,
  [SMALL_STATE(44)] = 1825,
  [SMALL_STATE(45)] = 1882,
  [SMALL_STATE(46)] = 1939,
  [SMALL_STATE(47)] = 1996,
  [SMALL_STATE(48)] = 2050,
  [SMALL_STATE(49)] = 2104,
  [SMALL_STATE(50)] = 2158,
  [SMALL_STATE(51)] = 2212,
  [SMALL_STATE(52)] = 2266,
  [SMALL_STATE(53)] = 2320,
  [SMALL_STATE(54)] = 2374,
  [SMALL_STATE(55)] = 2432,
  [SMALL_STATE(56)] = 2486,
  [SMALL_STATE(57)] = 2540,
  [SMALL_STATE(58)] = 2594,
  [SMALL_STATE(59)] = 2648,
  [SMALL_STATE(60)] = 2702,
  [SMALL_STATE(61)] = 2756,
  [SMALL_STATE(62)] = 2810,
  [SMALL_STATE(63)] = 2864,
  [SMALL_STATE(64)] = 2918,
  [SMALL_STATE(65)] = 2963,
  [SMALL_STATE(66)] = 3008,
  [SMALL_STATE(67)] = 3053,
  [SMALL_STATE(68)] = 3098,
  [SMALL_STATE(69)] = 3143,
  [SMALL_STATE(70)] = 3188,
  [SMALL_STATE(71)] = 3218,
  [SMALL_STATE(72)] = 3252,
  [SMALL_STATE(73)] = 3286,
  [SMALL_STATE(74)] = 3320,
  [SMALL_STATE(75)] = 3354,
  [SMALL_STATE(76)] = 3389,
  [SMALL_STATE(77)] = 3422,
  [SMALL_STATE(78)] = 3451,
  [SMALL_STATE(79)] = 3480,
  [SMALL_STATE(80)] = 3515,
  [SMALL_STATE(81)] = 3556,
  [SMALL_STATE(82)] = 3587,
  [SMALL_STATE(83)] = 3628,
  [SMALL_STATE(84)] = 3666,
  [SMALL_STATE(85)] = 3691,
  [SMALL_STATE(86)] = 3720,
  [SMALL_STATE(87)] = 3751,
  [SMALL_STATE(88)] = 3774,
  [SMALL_STATE(89)] = 3803,
  [SMALL_STATE(90)] = 3826,
  [SMALL_STATE(91)] = 3849,
  [SMALL_STATE(92)] = 3876,
  [SMALL_STATE(93)] = 3899,
  [SMALL_STATE(94)] = 3930,
  [SMALL_STATE(95)] = 3959,
  [SMALL_STATE(96)] = 3988,
  [SMALL_STATE(97)] = 4014,
  [SMALL_STATE(98)] = 4040,
  [SMALL_STATE(99)] = 4072,
  [SMALL_STATE(100)] = 4104,
  [SMALL_STATE(101)] = 4130,
  [SMALL_STATE(102)] = 4148,
  [SMALL_STATE(103)] = 4174,
  [SMALL_STATE(104)] = 4200,
  [SMALL_STATE(105)] = 4226,
  [SMALL_STATE(106)] = 4255,
  [SMALL_STATE(107)] = 4284,
  [SMALL_STATE(108)] = 4313,
  [SMALL_STATE(109)] = 4342,
  [SMALL_STATE(110)] = 4362,
  [SMALL_STATE(111)] = 4388,
  [SMALL_STATE(112)] = 4408,
  [SMALL_STATE(113)] = 4423,
  [SMALL_STATE(114)] = 4438,
  [SMALL_STATE(115)] = 4453,
  [SMALL_STATE(116)] = 4468,
  [SMALL_STATE(117)] = 4485,
  [SMALL_STATE(118)] = 4502,
  [SMALL_STATE(119)] = 4519,
  [SMALL_STATE(120)] = 4533,
  [SMALL_STATE(121)] = 4547,
  [SMALL_STATE(122)] = 4561,
  [SMALL_STATE(123)] = 4575,
  [SMALL_STATE(124)] = 4589,
  [SMALL_STATE(125)] = 4603,
  [SMALL_STATE(126)] = 4617,
  [SMALL_STATE(127)] = 4631,
  [SMALL_STATE(128)] = 4645,
  [SMALL_STATE(129)] = 4659,
  [SMALL_STATE(130)] = 4670,
  [SMALL_STATE(131)] = 4681,
  [SMALL_STATE(132)] = 4692,
  [SMALL_STATE(133)] = 4703,
  [SMALL_STATE(134)] = 4714,
  [SMALL_STATE(135)] = 4725,
  [SMALL_STATE(136)] = 4736,
  [SMALL_STATE(137)] = 4747,
  [SMALL_STATE(138)] = 4758,
  [SMALL_STATE(139)] = 4769,
  [SMALL_STATE(140)] = 4780,
  [SMALL_STATE(141)] = 4791,
  [SMALL_STATE(142)] = 4802,
  [SMALL_STATE(143)] = 4813,
  [SMALL_STATE(144)] = 4824,
  [SMALL_STATE(145)] = 4835,
  [SMALL_STATE(146)] = 4846,
  [SMALL_STATE(147)] = 4857,
  [SMALL_STATE(148)] = 4868,
  [SMALL_STATE(149)] = 4879,
  [SMALL_STATE(150)] = 4890,
  [SMALL_STATE(151)] = 4901,
  [SMALL_STATE(152)] = 4912,
  [SMALL_STATE(153)] = 4923,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(137),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(100),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(97),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(110),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(3),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(86),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(93),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(16),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(29),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(6),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(119),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(141),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(148),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(147),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(121),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(145),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(144),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(143),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_variable, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_variable, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_usage, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_usage, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_macros, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_macros, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_macros, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_macros, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 4, .production_id = 14),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_using, 4, .production_id = 14),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print, 4, .production_id = 13),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print, 4, .production_id = 13),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error, 4, .production_id = 13),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error, 4, .production_id = 13),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 12),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, .production_id = 12),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 11),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 11),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each, 5, .production_id = 17),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_each, 5, .production_id = 17),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtraction, 3, .production_id = 9),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtraction, 3, .production_id = 9),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concatenation, 3, .production_id = 9),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_concatenation, 3, .production_id = 9),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5, .production_id = 18),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5, .production_id = 18),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 9),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings, 2, .production_id = 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings, 2, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_propagation, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_propagation, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate_directive, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate_directive, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3, .production_id = 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3, .production_id = 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 5, .production_id = 16),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 5, .production_id = 16),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 9, .production_id = 25),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 9, .production_id = 25),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 7),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3, .production_id = 7),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exists, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exists, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_variable, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_variable, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or_directive, 3, .production_id = 9),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_directive, 3, .production_id = 9),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 6, .production_id = 20),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 6, .production_id = 20),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 8, .production_id = 23),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 8, .production_id = 23),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_once, 2, .production_id = 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_once, 2, .production_id = 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 8, .production_id = 24),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 8, .production_id = 24),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_exists, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_exists, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_directive, 7, .production_id = 22),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_directive, 7, .production_id = 22),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_undef, 3, .production_id = 6),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_undef, 3, .production_id = 6),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_directive, 3, .production_id = 9),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_directive, 3, .production_id = 9),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, .production_id = 8),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3, .production_id = 8),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in, 3, .production_id = 9),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in, 3, .production_id = 9),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 3, .production_id = 9),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 19),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison, 3, .production_id = 19),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_repeat1, 2, .production_id = 15), SHIFT_REPEAT(100),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_repeat1, 2, .production_id = 15), SHIFT_REPEAT(97),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_repeat1, 2, .production_id = 15),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_repeat1, 2, .production_id = 15), SHIFT_REPEAT(80),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_repeat1, 2, .production_id = 15), SHIFT_REPEAT(86),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_repeat1, 2, .production_id = 15), SHIFT_REPEAT(16),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_repeat1, 2, .production_id = 15), SHIFT_REPEAT(138),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3, .production_id = 9),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in, 4, .production_id = 21),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not_in, 4, .production_id = 21),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesis, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesis, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_repeat1, 1, .production_id = 10),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(102),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(102),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(140),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(139),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(104),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(104),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(153),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(151),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 2, .production_id = 4),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 2, .production_id = 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [552] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_function, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_function, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
