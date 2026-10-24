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

// Function: func_001E6C80
// Address: 0x1e6c80 - 0x1e6cd8
void func_001E6C80_0x1e6c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E6C80_0x1e6c80");
#endif

    switch (ctx->pc) {
        case 0x1e6cb8u: goto label_1e6cb8;
        case 0x1e6cccu: goto label_1e6ccc;
        default: break;
    }

    ctx->pc = 0x1e6c80u;

    // 0x1e6c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6c84: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e6c84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6c8c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6C8Cu;
    {
        const bool branch_taken_0x1e6c8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C8Cu;
        // 0x1e6c90: 0xa46003e2  sh          $zero, 0x3E2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 994), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c8c) {
            ctx->pc = 0x1E6C9Cu;
            goto label_1e6c9c;
        }
    }
    ctx->pc = 0x1E6C94u;
    // 0x1e6c94: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e6c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6c98: 0xa46203e2  sh          $v0, 0x3E2($v1)
    ctx->pc = 0x1e6c98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 994), (uint16_t)GPR_U32(ctx, 2));
label_1e6c9c:
    // 0x1e6c9c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6C9Cu;
    {
        const bool branch_taken_0x1e6c9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C9Cu;
        // 0x1e6ca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c9c) {
            ctx->pc = 0x1E6CC0u;
            goto label_1e6cc0;
        }
    }
    ctx->pc = 0x1E6CA4u;
    // 0x1e6ca4: 0x946203e2  lhu         $v0, 0x3E2($v1)
    ctx->pc = 0x1e6ca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 994)));
    // 0x1e6ca8: 0x8c6403c8  lw          $a0, 0x3C8($v1)
    ctx->pc = 0x1e6ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x1e6cac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e6cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e6cb0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6CB0u;
    SET_GPR_U32(ctx, 31, 0x1E6CB8u);
    ctx->pc = 0x1E6CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CB0u;
    // 0x1e6cb4: 0xa46203e2  sh          $v0, 0x3E2($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 994), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6CB0u, 0x1E6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6CB8u;
label_1e6cb8:
    // 0x1e6cb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6CB8u;
    {
        const bool branch_taken_0x1e6cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6CB8u;
        // 0x1e6cbc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6cb8) {
            ctx->pc = 0x1E6CD0u;
            goto label_1e6cd0;
        }
    }
    ctx->pc = 0x1E6CC0u;
label_1e6cc0:
    // 0x1e6cc0: 0x8c6403c8  lw          $a0, 0x3C8($v1)
    ctx->pc = 0x1e6cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x1e6cc4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6CC4u;
    SET_GPR_U32(ctx, 31, 0x1E6CCCu);
    ctx->pc = 0x1E6CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CC4u;
    // 0x1e6cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6CC4u, 0x1E6CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6CCCu;
label_1e6ccc:
    // 0x1e6ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6cd0:
    // 0x1e6cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6CD0u;
        // 0x1e6cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6CD8u;
}
