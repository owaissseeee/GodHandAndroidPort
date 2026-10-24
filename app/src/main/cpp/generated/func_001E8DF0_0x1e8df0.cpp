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

// Function: func_001E8DF0
// Address: 0x1e8df0 - 0x1e8e48
void func_001E8DF0_0x1e8df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E8DF0_0x1e8df0");
#endif

    switch (ctx->pc) {
        case 0x1e8e20u: goto label_1e8e20;
        default: break;
    }

    ctx->pc = 0x1e8df0u;

    // 0x1e8df0: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E8DF0u;
    {
        const bool branch_taken_0x1e8df0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DF0u;
        // 0x1e8df4: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8df0) {
            ctx->pc = 0x1E8E40u;
            goto label_1e8e40;
        }
    }
    ctx->pc = 0x1E8DF8u;
    // 0x1e8df8: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E8DF8u;
    {
        const bool branch_taken_0x1e8df8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DF8u;
        // 0x1e8dfc: 0x2ce20016  sltiu       $v0, $a3, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8df8) {
            ctx->pc = 0x1E8E40u;
            goto label_1e8e40;
        }
    }
    ctx->pc = 0x1E8E00u;
    // 0x1e8e00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E8E00u;
    {
        const bool branch_taken_0x1e8e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8e00) {
            ctx->pc = 0x1E8E40u;
            goto label_1e8e40;
        }
    }
    ctx->pc = 0x1E8E08u;
    // 0x1e8e08: 0xa48700b4  sh          $a3, 0xB4($a0)
    ctx->pc = 0x1e8e08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 180), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e8e0c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1e8e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1e8e10: 0x948200b4  lhu         $v0, 0xB4($a0)
    ctx->pc = 0x1e8e10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x1e8e14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E8E14u;
    {
        const bool branch_taken_0x1e8e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E14u;
        // 0x1e8e18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e14) {
            ctx->pc = 0x1E8E40u;
            goto label_1e8e40;
        }
    }
    ctx->pc = 0x1E8E1Cu;
    // 0x1e8e1c: 0x24830054  addiu       $v1, $a0, 0x54
    ctx->pc = 0x1e8e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
label_1e8e20:
    // 0x1e8e20: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e8e24: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e8e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e8e28: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1e8e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1e8e2c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e8e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e8e30: 0x948200b4  lhu         $v0, 0xB4($a0)
    ctx->pc = 0x1e8e30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x1e8e34: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1e8e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e8e38: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E8E38u;
    {
        const bool branch_taken_0x1e8e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8E38u;
        // 0x1e8e3c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8e38) {
            ctx->pc = 0x1E8E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8e20;
        }
    }
    ctx->pc = 0x1E8E40u;
label_1e8e40:
    // 0x1e8e40: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8E48u;
}
