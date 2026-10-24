#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Forward33B790_340AE8
// Address: 0x340ae8 - 0x340b00
void Forward33B790_340AE8_0x340ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33B790_340AE8_0x340ae8");
#endif

    ctx->pc = 0x340ae8u;

    // 0x340ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x340aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x340aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x340af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340af4: 0x80cede4  j           func_33B790
    ctx->pc = 0x340AF4u;
    ctx->pc = 0x340AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340AF4u;
    // 0x340af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B790u, 0x340AF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x340AFCu;
    // 0x340afc: 0x0  nop
    ctx->pc = 0x340afcu;
    // NOP
    ctx->pc = 0x340b00u;
}
