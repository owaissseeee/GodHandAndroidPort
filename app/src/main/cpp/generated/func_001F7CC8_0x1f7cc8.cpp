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

// Function: func_001F7CC8
// Address: 0x1f7cc8 - 0x1f7d18
void func_001F7CC8_0x1f7cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F7CC8_0x1f7cc8");
#endif

    switch (ctx->pc) {
        case 0x1f7d08u: goto label_1f7d08;
        default: break;
    }

    ctx->pc = 0x1f7cc8u;

    // 0x1f7cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7ccc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f7cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7cd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7cd4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1f7cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1f7cd8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1f7cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1f7cdc: 0x3463f9fc  ori         $v1, $v1, 0xF9FC
    ctx->pc = 0x1f7cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63996);
    // 0x1f7ce0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1f7ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f7ce4: 0x2442c320  addiu       $v0, $v0, -0x3CE0
    ctx->pc = 0x1f7ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951712));
    // 0x1f7ce8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1f7ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1f7cec: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1f7cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1f7cf0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1f7cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f7cf4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7CF4u;
    {
        const bool branch_taken_0x1f7cf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CF4u;
        // 0x1f7cf8: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cf4) {
            ctx->pc = 0x1F7D08u;
            goto label_1f7d08;
        }
    }
    ctx->pc = 0x1F7CFCu;
    // 0x1f7cfc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f7cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d00: 0xc07df46  jal         func_1F7D18
    ctx->pc = 0x1F7D00u;
    SET_GPR_U32(ctx, 31, 0x1F7D08u);
    ctx->pc = 0x1F7D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7D00u;
    // 0x1f7d04: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D18u, 0x1F7D00u, 0x1F7D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D08u;
label_1f7d08:
    // 0x1f7d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D0Cu;
        // 0x1f7d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7D14u;
    // 0x1f7d14: 0x0  nop
    ctx->pc = 0x1f7d14u;
    // NOP
    ctx->pc = 0x1f7d18u;
}
