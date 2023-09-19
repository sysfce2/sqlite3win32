# pragma warning (disable : 4229)  // anachronism used: modifiers on data are ignored
# pragma warning (disable : 4005)  // macro redefinition

#define SQLITE_API extern "C"
#define SQLITE_STDCALL __stdcall
#define SQLITE_CDECL __cdecl
#define SQLITE_WIN32_MALLOC 1
#define SQLITE_WIN32_HEAP_CREATE 1
#define SQLITE_THREADSAFE 1
#define SQLITE_DEFAULT_CACHE_SIZE -8000
// #define SQLITE_USE_URI 1
#define SQLITE_SOUNDEX 1
#define SQLITE_OMIT_DEPRECATED 1
#define SQLITE_OMIT_AUTOINIT 1
#define SQLITE_ENABLE_FTS3 1
#define SQLITE_ENABLE_FTS3_PARENTHESIS 1
#define SQLITE_ENABLE_FTS4 1
#define SQLITE_ENABLE_RTREE 1
#define SQLITE_ENABLE_UNLOCK_NOTIFY 1
#define SQLITE_ENABLE_COLUMN_METADATA 1
// #define SQLITE_ENABLE_DESERIALIZE 1
#define SQLITE_ENABLE_NORMALIZE 1
#define SQLITE_ENABLE_MATH_FUNCTIONS 1
#define SQLITE_DQS 0
#define HAVE_LOG2 0

#include <windows.h>
#include "sqlite3\sqlite3.h"

SQLITE_API int SQLITE_STDCALL sqlite3_win32_is_nt(void);
SQLITE_API void SQLITE_STDCALL sqlite3_win32_sleep(DWORD milliseconds);
SQLITE_API char *SQLITE_STDCALL sqlite3_win32_utf8_to_mbcs(const char *zFilename);
SQLITE_API char *SQLITE_STDCALL sqlite3_win32_mbcs_to_utf8(const char *zFilename);
SQLITE_API void SQLITE_STDCALL sqlite3_win32_write_debug(const char *zBuf, int nBuf);
SQLITE_API void SQLITE_STDCALL sqlite3_regexp_init(sqlite3 *db, char **pzErrMsg, const sqlite3_api_routines *pApi);
SQLITE_API void SQLITE_STDCALL sqlite3_concat_init(sqlite3 *db, char **pzErrMsg, const sqlite3_api_routines *pApi);

#define MODULE sqlite3win32stubs

#define DECLFUNC(Name) void __stdcall stub_sqlite3_##Name(void);
#define DEFFUNC(Name) __declspec(naked) void __stdcall MODULE::stub_sqlite3_##Name() { __asm { jmp sqlite3_##Name } }

class MODULE
{
    DECLFUNC(aggregate_context)
    DECLFUNC(auto_extension)
    DECLFUNC(autovacuum_pages)
    DECLFUNC(backup_finish)
    DECLFUNC(backup_init)
    DECLFUNC(backup_pagecount)
    DECLFUNC(backup_remaining)
    DECLFUNC(backup_step)
    DECLFUNC(bind_blob64)
    DECLFUNC(bind_blob)
    DECLFUNC(bind_double)
    DECLFUNC(bind_int64)
    DECLFUNC(bind_int)
    DECLFUNC(bind_null)
    DECLFUNC(bind_parameter_count)
    DECLFUNC(bind_parameter_index)
    DECLFUNC(bind_parameter_name)
    DECLFUNC(bind_pointer)
    DECLFUNC(bind_text16)
    DECLFUNC(bind_text64)
    DECLFUNC(bind_text)
    DECLFUNC(bind_value)
    DECLFUNC(bind_zeroblob64)
    DECLFUNC(bind_zeroblob)
    DECLFUNC(blob_bytes)
    DECLFUNC(blob_close)
    DECLFUNC(blob_open)
    DECLFUNC(blob_read)
    DECLFUNC(blob_reopen)
    DECLFUNC(blob_write)
    DECLFUNC(busy_handler)
    DECLFUNC(busy_timeout)
    DECLFUNC(cancel_auto_extension)
    DECLFUNC(changes)
    DECLFUNC(changes64)
    DECLFUNC(clear_bindings)
    DECLFUNC(close)
    DECLFUNC(close_v2)
    DECLFUNC(collation_needed16)
    DECLFUNC(collation_needed)
    DECLFUNC(column_blob)
    DECLFUNC(column_bytes16)
    DECLFUNC(column_bytes)
    DECLFUNC(column_count)
    DECLFUNC(column_database_name16)
    DECLFUNC(column_database_name)
    DECLFUNC(column_decltype16)
    DECLFUNC(column_decltype)
    DECLFUNC(column_double)
    DECLFUNC(column_int64)
    DECLFUNC(column_int)
    DECLFUNC(column_name16)
    DECLFUNC(column_name)
    DECLFUNC(column_origin_name16)
    DECLFUNC(column_origin_name)
    DECLFUNC(column_table_name16)
    DECLFUNC(column_table_name)
    DECLFUNC(column_text16)
    DECLFUNC(column_text)
    DECLFUNC(column_type)
    DECLFUNC(column_value)
    DECLFUNC(commit_hook)
    DECLFUNC(compileoption_get)
    DECLFUNC(compileoption_used)
    DECLFUNC(complete16)
    DECLFUNC(complete)
    DECLFUNC(context_db_handle)
    DECLFUNC(create_collation16)
    DECLFUNC(create_collation)
    DECLFUNC(create_collation_v2)
    DECLFUNC(create_filename)
    DECLFUNC(create_function16)
    DECLFUNC(create_function)
    DECLFUNC(create_function_v2)
    DECLFUNC(create_module)
    DECLFUNC(create_module_v2)
    DECLFUNC(create_window_function)
    DECLFUNC(database_file_object)
    DECLFUNC(data_count)
    DECLFUNC(db_cacheflush)
    DECLFUNC(db_filename)
    DECLFUNC(db_handle)
    DECLFUNC(db_mutex)
    DECLFUNC(db_name)
    DECLFUNC(db_readonly)
    DECLFUNC(db_release_memory)
    DECLFUNC(db_status)
    DECLFUNC(declare_vtab)
    DECLFUNC(deserialize)
    DECLFUNC(drop_modules)
    DECLFUNC(enable_load_extension)
    DECLFUNC(enable_shared_cache)
    DECLFUNC(errcode)
    DECLFUNC(errmsg16)
    DECLFUNC(errmsg)
    DECLFUNC(error_offset)
    DECLFUNC(errstr)
    DECLFUNC(exec)
    DECLFUNC(expanded_sql)
    DECLFUNC(extended_errcode)
    DECLFUNC(extended_result_codes)
    DECLFUNC(file_control)
    DECLFUNC(filename_database)
    DECLFUNC(filename_journal)
    DECLFUNC(filename_wal)
    DECLFUNC(finalize)
    DECLFUNC(free)
    DECLFUNC(free_filename)
    DECLFUNC(free_table)
    DECLFUNC(get_autocommit)
    DECLFUNC(get_auxdata)
    DECLFUNC(get_table)
    DECLFUNC(hard_heap_limit64)
    DECLFUNC(initialize)
    DECLFUNC(interrupt)
    DECLFUNC(is_interrupted)
    DECLFUNC(keyword_check)
    DECLFUNC(keyword_count)
    DECLFUNC(keyword_name)
    DECLFUNC(last_insert_rowid)
    DECLFUNC(libversion)
    DECLFUNC(libversion_number)
    DECLFUNC(limit)
    DECLFUNC(load_extension)
    DECLFUNC(malloc64)
    DECLFUNC(malloc)
    DECLFUNC(memory_highwater)
    DECLFUNC(memory_used)
    DECLFUNC(msize)
    DECLFUNC(mutex_alloc)
    DECLFUNC(mutex_enter)
    DECLFUNC(mutex_free)
    DECLFUNC(mutex_leave)
    DECLFUNC(mutex_try)
    DECLFUNC(next_stmt)
    DECLFUNC(normalized_sql)
    DECLFUNC(open16)
    DECLFUNC(open)
    DECLFUNC(open_v2)
    DECLFUNC(os_end)
    DECLFUNC(os_init)
    DECLFUNC(overload_function)
    DECLFUNC(prepare)
    DECLFUNC(prepare_v2)
    DECLFUNC(prepare_v3)
    DECLFUNC(prepare16)
    DECLFUNC(prepare16_v2)
    DECLFUNC(prepare16_v3)
    DECLFUNC(progress_handler)
    DECLFUNC(randomness)
    DECLFUNC(realloc64)
    DECLFUNC(realloc)
    DECLFUNC(release_memory)
    DECLFUNC(reset)
    DECLFUNC(reset_auto_extension)
    DECLFUNC(result_blob64)
    DECLFUNC(result_blob)
    DECLFUNC(result_double)
    DECLFUNC(result_error16)
    DECLFUNC(result_error)
    DECLFUNC(result_error_code)
    DECLFUNC(result_error_nomem)
    DECLFUNC(result_error_toobig)
    DECLFUNC(result_int64)
    DECLFUNC(result_int)
    DECLFUNC(result_null)
    DECLFUNC(result_subtype)
    DECLFUNC(result_text16)
    DECLFUNC(result_text16be)
    DECLFUNC(result_text16le)
    DECLFUNC(result_text64)
    DECLFUNC(result_text)
    DECLFUNC(result_value)
    DECLFUNC(result_pointer)
    DECLFUNC(result_zeroblob64)
    DECLFUNC(result_zeroblob)
    DECLFUNC(rollback_hook)
    DECLFUNC(serialize)
    DECLFUNC(rtree_geometry_callback)
    DECLFUNC(rtree_query_callback)
    DECLFUNC(set_authorizer)
    DECLFUNC(set_auxdata)
    DECLFUNC(set_last_insert_rowid)
    DECLFUNC(shutdown)
    DECLFUNC(sleep)
    DECLFUNC(soft_heap_limit64)
    DECLFUNC(soft_heap_limit)
    DECLFUNC(sourceid)
    DECLFUNC(sql)
    DECLFUNC(str_new)
    DECLFUNC(str_finish)
    DECLFUNC(str_append)
    DECLFUNC(str_appendall)
    DECLFUNC(str_appendchar)
    DECLFUNC(str_reset)
    DECLFUNC(str_errcode)
    DECLFUNC(str_length)
    DECLFUNC(str_value)
    DECLFUNC(status64)
    DECLFUNC(status)
    DECLFUNC(step)
    DECLFUNC(stmt_busy)
    DECLFUNC(stmt_isexplain)
    DECLFUNC(stmt_readonly)
    DECLFUNC(stmt_status)
    DECLFUNC(strglob)
    DECLFUNC(stricmp)
    DECLFUNC(strlike)
    DECLFUNC(strnicmp)
    DECLFUNC(system_errno)
    DECLFUNC(table_column_metadata)
    DECLFUNC(threadsafe)
    DECLFUNC(total_changes64)
    DECLFUNC(total_changes)
    DECLFUNC(trace_v2)
    DECLFUNC(txn_state)
    DECLFUNC(update_hook)
    DECLFUNC(uri_boolean)
    DECLFUNC(uri_int64)
    DECLFUNC(uri_key)
    DECLFUNC(uri_parameter)
    DECLFUNC(user_data)
    DECLFUNC(value_blob)
    DECLFUNC(value_bytes16)
    DECLFUNC(value_bytes)
    DECLFUNC(value_double)
    DECLFUNC(value_dup)
    DECLFUNC(value_encoding)
    DECLFUNC(value_free)
    DECLFUNC(value_frombind)
    DECLFUNC(value_int64)
    DECLFUNC(value_int)
    DECLFUNC(value_pointer)
    DECLFUNC(value_numeric_type)
    DECLFUNC(value_nochange)
    DECLFUNC(value_subtype)
    DECLFUNC(value_text16)
    DECLFUNC(value_text16be)
    DECLFUNC(value_text16le)
    DECLFUNC(value_text)
    DECLFUNC(value_type)
    DECLFUNC(vfs_find)
    DECLFUNC(vfs_register)
    DECLFUNC(vfs_unregister)
    DECLFUNC(vtab_collation)
    DECLFUNC(vtab_distinct)
    DECLFUNC(vtab_in)
    DECLFUNC(vtab_in_first)
    DECLFUNC(vtab_in_next)
    DECLFUNC(vtab_nochange)
    DECLFUNC(vtab_on_conflict)
    DECLFUNC(vtab_rhs_value)
    DECLFUNC(wal_autocheckpoint)
    DECLFUNC(wal_checkpoint)
    DECLFUNC(wal_checkpoint_v2)
    DECLFUNC(wal_hook)
    DECLFUNC(win32_is_nt)
    DECLFUNC(win32_mbcs_to_utf8)
    DECLFUNC(win32_set_directory)
    DECLFUNC(win32_set_directory8)
    DECLFUNC(win32_set_directory16)
    DECLFUNC(win32_sleep)
    DECLFUNC(win32_utf8_to_mbcs)
    DECLFUNC(win32_write_debug)
    DECLFUNC(regexp_init)
    DECLFUNC(concat_init)
};

DEFFUNC(aggregate_context)
DEFFUNC(auto_extension)
DEFFUNC(autovacuum_pages)
DEFFUNC(backup_finish)
DEFFUNC(backup_init)
DEFFUNC(backup_pagecount)
DEFFUNC(backup_remaining)
DEFFUNC(backup_step)
DEFFUNC(bind_blob64)
DEFFUNC(bind_blob)
DEFFUNC(bind_double)
DEFFUNC(bind_int64)
DEFFUNC(bind_int)
DEFFUNC(bind_null)
DEFFUNC(bind_parameter_count)
DEFFUNC(bind_parameter_index)
DEFFUNC(bind_parameter_name)
DEFFUNC(bind_pointer)
DEFFUNC(bind_text16)
DEFFUNC(bind_text64)
DEFFUNC(bind_text)
DEFFUNC(bind_value)
DEFFUNC(bind_zeroblob64)
DEFFUNC(bind_zeroblob)
DEFFUNC(blob_bytes)
DEFFUNC(blob_close)
DEFFUNC(blob_open)
DEFFUNC(blob_read)
DEFFUNC(blob_reopen)
DEFFUNC(blob_write)
DEFFUNC(busy_handler)
DEFFUNC(busy_timeout)
DEFFUNC(cancel_auto_extension)
DEFFUNC(changes)
DEFFUNC(changes64)
DEFFUNC(clear_bindings)
DEFFUNC(close)
DEFFUNC(close_v2)
DEFFUNC(collation_needed16)
DEFFUNC(collation_needed)
DEFFUNC(column_blob)
DEFFUNC(column_bytes16)
DEFFUNC(column_bytes)
DEFFUNC(column_count)
DEFFUNC(column_database_name16)
DEFFUNC(column_database_name)
DEFFUNC(column_decltype16)
DEFFUNC(column_decltype)
DEFFUNC(column_double)
DEFFUNC(column_int64)
DEFFUNC(column_int)
DEFFUNC(column_name16)
DEFFUNC(column_name)
DEFFUNC(column_origin_name16)
DEFFUNC(column_origin_name)
DEFFUNC(column_table_name16)
DEFFUNC(column_table_name)
DEFFUNC(column_text16)
DEFFUNC(column_text)
DEFFUNC(column_type)
DEFFUNC(column_value)
DEFFUNC(commit_hook)
DEFFUNC(compileoption_get)
DEFFUNC(compileoption_used)
DEFFUNC(complete16)
DEFFUNC(complete)
DEFFUNC(context_db_handle)
DEFFUNC(create_collation16)
DEFFUNC(create_collation)
DEFFUNC(create_collation_v2)
DEFFUNC(create_filename)
DEFFUNC(create_function16)
DEFFUNC(create_function)
DEFFUNC(create_function_v2)
DEFFUNC(create_module)
DEFFUNC(create_module_v2)
DEFFUNC(create_window_function)
DEFFUNC(database_file_object)
DEFFUNC(data_count)
DEFFUNC(db_cacheflush)
DEFFUNC(db_filename)
DEFFUNC(db_handle)
DEFFUNC(db_mutex)
DEFFUNC(db_name)
DEFFUNC(db_readonly)
DEFFUNC(db_release_memory)
DEFFUNC(db_status)
DEFFUNC(declare_vtab)
DEFFUNC(deserialize)
DEFFUNC(drop_modules)
DEFFUNC(enable_load_extension)
DEFFUNC(enable_shared_cache)
DEFFUNC(errcode)
DEFFUNC(errmsg16)
DEFFUNC(errmsg)
DEFFUNC(error_offset)
DEFFUNC(errstr)
DEFFUNC(exec)
DEFFUNC(expanded_sql)
DEFFUNC(extended_errcode)
DEFFUNC(extended_result_codes)
DEFFUNC(file_control)
DEFFUNC(filename_database)
DEFFUNC(filename_journal)
DEFFUNC(filename_wal)
DEFFUNC(finalize)
DEFFUNC(free)
DEFFUNC(free_filename)
DEFFUNC(free_table)
DEFFUNC(get_autocommit)
DEFFUNC(get_auxdata)
DEFFUNC(get_table)
DEFFUNC(hard_heap_limit64)
DEFFUNC(initialize)
DEFFUNC(interrupt)
DEFFUNC(is_interrupted)
DEFFUNC(keyword_check)
DEFFUNC(keyword_count)
DEFFUNC(keyword_name)
DEFFUNC(last_insert_rowid)
DEFFUNC(libversion)
DEFFUNC(libversion_number)
DEFFUNC(limit)
DEFFUNC(load_extension)
DEFFUNC(malloc64)
DEFFUNC(malloc)
DEFFUNC(memory_highwater)
DEFFUNC(memory_used)
DEFFUNC(msize)
DEFFUNC(mutex_alloc)
DEFFUNC(mutex_enter)
DEFFUNC(mutex_free)
DEFFUNC(mutex_leave)
DEFFUNC(mutex_try)
DEFFUNC(next_stmt)
DEFFUNC(normalized_sql)
DEFFUNC(open16)
DEFFUNC(open)
DEFFUNC(open_v2)
DEFFUNC(os_end)
DEFFUNC(os_init)
DEFFUNC(overload_function)
DEFFUNC(prepare)
DEFFUNC(prepare_v2)
DEFFUNC(prepare_v3)
DEFFUNC(prepare16)
DEFFUNC(prepare16_v2)
DEFFUNC(prepare16_v3)
DEFFUNC(progress_handler)
DEFFUNC(randomness)
DEFFUNC(realloc64)
DEFFUNC(realloc)
DEFFUNC(release_memory)
DEFFUNC(reset)
DEFFUNC(reset_auto_extension)
DEFFUNC(result_blob64)
DEFFUNC(result_blob)
DEFFUNC(result_double)
DEFFUNC(result_error16)
DEFFUNC(result_error)
DEFFUNC(result_error_code)
DEFFUNC(result_error_nomem)
DEFFUNC(result_error_toobig)
DEFFUNC(result_int64)
DEFFUNC(result_int)
DEFFUNC(result_null)
DEFFUNC(result_subtype)
DEFFUNC(result_text16)
DEFFUNC(result_text16be)
DEFFUNC(result_text16le)
DEFFUNC(result_text64)
DEFFUNC(result_text)
DEFFUNC(result_value)
DEFFUNC(result_pointer)
DEFFUNC(result_zeroblob64)
DEFFUNC(result_zeroblob)
DEFFUNC(rollback_hook)
DEFFUNC(serialize)
DEFFUNC(rtree_geometry_callback)
DEFFUNC(rtree_query_callback)
DEFFUNC(set_authorizer)
DEFFUNC(set_auxdata)
DEFFUNC(set_last_insert_rowid)
DEFFUNC(shutdown)
DEFFUNC(sleep)
DEFFUNC(soft_heap_limit64)
DEFFUNC(soft_heap_limit)
DEFFUNC(sourceid)
DEFFUNC(sql)
DEFFUNC(str_new)
DEFFUNC(str_finish)
DEFFUNC(str_append)
DEFFUNC(str_appendall)
DEFFUNC(str_appendchar)
DEFFUNC(str_reset)
DEFFUNC(str_errcode)
DEFFUNC(str_length)
DEFFUNC(str_value)
DEFFUNC(status64)
DEFFUNC(status)
DEFFUNC(step)
DEFFUNC(stmt_busy)
DEFFUNC(stmt_isexplain)
DEFFUNC(stmt_readonly)
DEFFUNC(stmt_status)
DEFFUNC(strglob)
DEFFUNC(stricmp)
DEFFUNC(strlike)
DEFFUNC(strnicmp)
DEFFUNC(system_errno)
DEFFUNC(table_column_metadata)
DEFFUNC(threadsafe)
DEFFUNC(total_changes64)
DEFFUNC(total_changes)
DEFFUNC(trace_v2)
DEFFUNC(txn_state)
DEFFUNC(update_hook)
DEFFUNC(uri_boolean)
DEFFUNC(uri_int64)
DEFFUNC(uri_key)
DEFFUNC(uri_parameter)
DEFFUNC(user_data)
DEFFUNC(value_blob)
DEFFUNC(value_bytes16)
DEFFUNC(value_bytes)
DEFFUNC(value_double)
DEFFUNC(value_dup)
DEFFUNC(value_encoding)
DEFFUNC(value_free)
DEFFUNC(value_frombind)
DEFFUNC(value_int64)
DEFFUNC(value_int)
DEFFUNC(value_pointer)
DEFFUNC(value_numeric_type)
DEFFUNC(value_nochange)
DEFFUNC(value_subtype)
DEFFUNC(value_text16)
DEFFUNC(value_text16be)
DEFFUNC(value_text16le)
DEFFUNC(value_text)
DEFFUNC(value_type)
DEFFUNC(vfs_find)
DEFFUNC(vfs_register)
DEFFUNC(vfs_unregister)
DEFFUNC(vtab_collation)
DEFFUNC(vtab_distinct)
DEFFUNC(vtab_in)
DEFFUNC(vtab_in_first)
DEFFUNC(vtab_in_next)
DEFFUNC(vtab_nochange)
DEFFUNC(vtab_on_conflict)
DEFFUNC(vtab_rhs_value)
DEFFUNC(wal_autocheckpoint)
DEFFUNC(wal_checkpoint)
DEFFUNC(wal_checkpoint_v2)
DEFFUNC(wal_hook)
DEFFUNC(win32_is_nt)
DEFFUNC(win32_mbcs_to_utf8)
DEFFUNC(win32_set_directory)
DEFFUNC(win32_set_directory8)
DEFFUNC(win32_set_directory16)
DEFFUNC(win32_sleep)
DEFFUNC(win32_utf8_to_mbcs)
DEFFUNC(win32_write_debug)
DEFFUNC(regexp_init)
DEFFUNC(concat_init)