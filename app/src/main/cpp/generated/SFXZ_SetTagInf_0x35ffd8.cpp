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

// Function: SFXZ_SetTagInf
// Address: 0x35ffd8 - 0x360000
void SFXZ_SetTagInf_0x35ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFXZ_SetTagInf_0x35ffd8");
#endif

    ctx->pc = 0x35ffd8u;

    // 0x35ffd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ffd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ffdc: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x35ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x35ffe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ffe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ffe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ffe8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x35ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x35ffec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ffecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fff0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x35fff4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x35fff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x35fff8: 0x80d8000  j           func_360000
    ctx->pc = 0x35FFF8u;
    ctx->pc = 0x35FFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FFF8u;
    // 0x35fffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360000u, 0x35FFF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x360000u;
}
