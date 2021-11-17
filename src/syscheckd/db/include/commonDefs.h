/**
 * @file db_statement.hpp
 * @brief Definition of FIM database statements.
 * @date 2021-09-06
 *
 * @copyright Copyright (C) 2015-2021 Wazuh, Inc.
 */

#ifndef DB_COMMONDEFS_HPP
#define DB_COMMONDEFS_HPP
#include "logging_helper.h"

typedef void((*fim_sync_callback_t)(const char *, const void* buffer));
typedef void((*logging_callback_t)(const modules_log_level_t level, const char* log));

#endif // DB_STATEMENT_HPP
