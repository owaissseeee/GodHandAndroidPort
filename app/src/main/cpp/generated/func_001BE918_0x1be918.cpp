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

// Function: func_001BE918
// Address: 0x1be918 - 0x1be950
void func_001BE918_0x1be918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BE918_0x1be918");
#endif

    switch (ctx->pc) {
        case 0x1be92cu: goto label_1be92c;
        default: break;
    }

    ctx->pc = 0x1be918u;

    // 0x1be918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be91c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1be91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1be920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be924: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1BE924u;
    SET_GPR_U32(ctx, 31, 0x1BE92Cu);
    ctx->pc = 0x1BE928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE924u;
    // 0x1be928: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1BE924u, 0x1BE92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE92Cu;
label_1be92c:
    // 0x1be92c: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x1be92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1be930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be938: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1be938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1be93c: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x1be93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x1be940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1be940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be944: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE944u;
        // 0x1be948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE94Cu;
    // 0x1be94c: 0x0  nop
    ctx->pc = 0x1be94cu;
    // NOP
    ctx->pc = 0x1be950u;
}
