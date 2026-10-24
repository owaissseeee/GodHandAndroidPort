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

// Function: func_001F6FA8
// Address: 0x1f6fa8 - 0x1f7050
void func_001F6FA8_0x1f6fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F6FA8_0x1f6fa8");
#endif

    switch (ctx->pc) {
        case 0x1f6fdcu: goto label_1f6fdc;
        default: break;
    }

    ctx->pc = 0x1f6fa8u;

    // 0x1f6fa8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f6fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1f6fac: 0x3406efe0  ori         $a2, $zero, 0xEFE0
    ctx->pc = 0x1f6facu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61408);
    // 0x1f6fb0: 0x636f8  dsll        $a2, $a2, 27
    ctx->pc = 0x1f6fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 27);
    // 0x1f6fb4: 0xdc657640  ld          $a1, 0x7640($v1)
    ctx->pc = 0x1f6fb4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 30272)));
    // 0x1f6fb8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f6fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f6fbc: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1f6fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1f6fc0: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1f6fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1f6fc4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1f6fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f6fc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6FC8u;
    {
        const bool branch_taken_0x1f6fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6fc8) {
            ctx->pc = 0x1F6FE4u;
            goto label_1f6fe4;
        }
    }
    ctx->pc = 0x1F6FD0u;
    // 0x1f6fd0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1f6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f6fd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6FD4u;
    {
        const bool branch_taken_0x1f6fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6fd4) {
            ctx->pc = 0x1F6FE4u;
            goto label_1f6fe4;
        }
    }
    ctx->pc = 0x1F6FDCu;
label_1f6fdc:
    // 0x1f6fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FDCu;
        // 0x1f6fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6FE4u;
label_1f6fe4:
    // 0x1f6fe4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f6fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f6fe8: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x1f6fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x1f6fec: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1f6fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f6ff0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6FF0u;
    {
        const bool branch_taken_0x1f6ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FF0u;
        // 0x1f6ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ff0) {
            ctx->pc = 0x1F7004u;
            goto label_1f7004;
        }
    }
    ctx->pc = 0x1F6FF8u;
    // 0x1f6ff8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1f6ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f6ffc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F6FFCu;
    {
        const bool branch_taken_0x1f6ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f6ffc) {
            ctx->pc = 0x1F7048u;
            goto label_1f7048;
        }
    }
    ctx->pc = 0x1F7004u;
label_1f7004:
    // 0x1f7004: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f7004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f7008: 0x214b8  dsll        $v0, $v0, 18
    ctx->pc = 0x1f7008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
    // 0x1f700c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1f700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f7010: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7010u;
    {
        const bool branch_taken_0x1f7010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7010u;
        // 0x1f7014: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7010) {
            ctx->pc = 0x1F7024u;
            goto label_1f7024;
        }
    }
    ctx->pc = 0x1F7018u;
    // 0x1f7018: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1f7018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f701c: 0x1062ffef  beq         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F701Cu;
    {
        const bool branch_taken_0x1f701c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f701c) {
            ctx->pc = 0x1F6FDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6fdc;
        }
    }
    ctx->pc = 0x1F7024u;
label_1f7024:
    // 0x1f7024: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f7024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f7028: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x1f7028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x1f702c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1f702cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f7030: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7030u;
    {
        const bool branch_taken_0x1f7030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7030u;
        // 0x1f7034: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7030) {
            ctx->pc = 0x1F7044u;
            goto label_1f7044;
        }
    }
    ctx->pc = 0x1F7038u;
    // 0x1f7038: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1f7038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f703c: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F703Cu;
    {
        const bool branch_taken_0x1f703c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F703Cu;
        // 0x1f7040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f703c) {
            ctx->pc = 0x1F7048u;
            goto label_1f7048;
        }
    }
    ctx->pc = 0x1F7044u;
label_1f7044:
    // 0x1f7044: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f7044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7048:
    // 0x1f7048: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7050u;
}
