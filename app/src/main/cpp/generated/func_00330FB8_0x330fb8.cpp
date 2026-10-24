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

// Function: func_00330FB8
// Address: 0x330fb8 - 0x330fe8
void func_00330FB8_0x330fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330FB8_0x330fb8");
#endif

    ctx->pc = 0x330fb8u;

    // 0x330fb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x330fbc: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x330fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x330fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330fc4: 0x24428448  addiu       $v0, $v0, -0x7BB8
    ctx->pc = 0x330fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935624));
    // 0x330fc8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x330fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x330fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x330fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330fd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x330fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3D8448u));
    // 0x330fd4: 0x24848410  addiu       $a0, $a0, -0x7BF0
    ctx->pc = 0x330fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935568));
    // 0x330fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330fdc: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x330fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x330fe0: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x330FE0u;
    ctx->pc = 0x330FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330FE0u;
    // 0x330fe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x330FE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330FE8u;
}
