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

// Function: func_00349BC8
// Address: 0x349bc8 - 0x349be8
void func_00349BC8_0x349bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349BC8_0x349bc8");
#endif

    ctx->pc = 0x349bc8u;

    // 0x349bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349bd0: 0x8c822004  lw          $v0, 0x2004($a0)
    ctx->pc = 0x349bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x349bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349bd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x349bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349bdc: 0x80caa0e  j           func_32A838
    ctx->pc = 0x349BDCu;
    ctx->pc = 0x349BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349BDCu;
    // 0x349be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A838u, 0x349BDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x349BE4u;
    // 0x349be4: 0x0  nop
    ctx->pc = 0x349be4u;
    // NOP
    ctx->pc = 0x349be8u;
}
