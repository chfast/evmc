#include "_cgo_export.h"

#include <stdlib.h>

const struct evmc_context_fn_table fn_table = {
	(evmc_account_exists_fn) accountExists,
	(evmc_get_storage_fn) getStorage,
	(evmc_set_storage_fn) setStorage,
	(evmc_get_balance_fn) getBalance,
	(evmc_get_code_size_fn) getCodeSize,
	(evmc_copy_code_fn) copyCode,
	(evmc_selfdestruct_fn) selfdestruct,
	(evmc_call_fn) call,
	(evmc_get_tx_context_fn) getTxContext,
	(evmc_get_block_hash_fn) getBlockHash,
	(evmc_emit_log_fn) emitLog,
};

void free_result_output(const struct evmc_result* result)
{
	free((void*)result->output_data);
}
