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

// Function: Forward32D868_32DA08
// Address: 0x32da08 - 0x32da28
void Forward32D868_32DA08_0x32da08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward32D868_32DA08_0x32da08");
#endif

    ctx->pc = 0x32da08u;

    // 0x32da08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32da08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32da0c: 0x3c08000f  lui         $t0, 0xF
    ctx->pc = 0x32da0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15 << 16));
    // 0x32da10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32da10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32da14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32da14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da18: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x32da18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x32da1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32da1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32da20: 0x80cb61a  j           func_32D868
    ctx->pc = 0x32DA20u;
    ctx->pc = 0x32DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DA20u;
    // 0x32da24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D868u, 0x32DA20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DA28u;
}
