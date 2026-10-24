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

// Function: func_002BAC98
// Address: 0x2bac98 - 0x2bacf0
void func_002BAC98_0x2bac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BAC98_0x2bac98");
#endif

    switch (ctx->pc) {
        case 0x2bacb8u: goto label_2bacb8;
        default: break;
    }

    ctx->pc = 0x2bac98u;

    // 0x2bac98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2bac98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bac9c: 0x24a30014  addiu       $v1, $a1, 0x14
    ctx->pc = 0x2bac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x2baca0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2BACA0u;
    {
        const bool branch_taken_0x2baca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACA0u;
        // 0x2baca4: 0x3c040043  lui         $a0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baca0) {
            ctx->pc = 0x2BACD0u;
            goto label_2bacd0;
        }
    }
    ctx->pc = 0x2BACA8u;
    // 0x2baca8: 0x24a20034  addiu       $v0, $a1, 0x34
    ctx->pc = 0x2baca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x2bacac: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BACACu;
    {
        const bool branch_taken_0x2bacac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bacac) {
            ctx->pc = 0x2BACB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BACACu;
            // 0x2bacb0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BACD4u;
            goto label_2bacd4;
        }
    }
    ctx->pc = 0x2BACB4u;
    // 0x2bacb4: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x2bacb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_2bacb8:
    // 0x2bacb8: 0x0  nop
    ctx->pc = 0x2bacb8u;
    // NOP
    // 0x2bacbc: 0x0  nop
    ctx->pc = 0x2bacbcu;
    // NOP
    // 0x2bacc0: 0x0  nop
    ctx->pc = 0x2bacc0u;
    // NOP
    // 0x2bacc4: 0x0  nop
    ctx->pc = 0x2bacc4u;
    // NOP
    // 0x2bacc8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BACC8u;
    {
        const bool branch_taken_0x2bacc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACC8u;
        // 0x2baccc: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacc8) {
            ctx->pc = 0x2BACB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bacb8;
        }
    }
    ctx->pc = 0x2BACD0u;
label_2bacd0:
    // 0x2bacd0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2bacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2bacd4:
    // 0x2bacd4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2bacd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2bacd8: 0x3463f9fc  ori         $v1, $v1, 0xF9FC
    ctx->pc = 0x2bacd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63996);
    // 0x2bacdc: 0x2484c320  addiu       $a0, $a0, -0x3CE0
    ctx->pc = 0x2bacdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951712));
    // 0x2bace0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2bace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bace4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2bace4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x2bace8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BACE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACE8u;
        // 0x2bacec: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BACE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BACF0u;
}
