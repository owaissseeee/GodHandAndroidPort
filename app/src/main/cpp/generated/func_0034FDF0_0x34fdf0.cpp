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

// Function: func_0034FDF0
// Address: 0x34fdf0 - 0x34fe78
void func_0034FDF0_0x34fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034FDF0_0x34fdf0");
#endif

    switch (ctx->pc) {
        case 0x34fe48u: goto label_34fe48;
        default: break;
    }

    ctx->pc = 0x34fdf0u;

    // 0x34fdf0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x34fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x34fdf4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34fdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fdf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34fdfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34fdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x34fe00: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x34fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34fe04: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x34fe04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x34fe08: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x34fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x34fe0c: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x34fe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x34fe10: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x34fe10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x34fe14: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x34fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
    // 0x34fe18: 0x24a6014c  addiu       $a2, $a1, 0x14C
    ctx->pc = 0x34fe18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 332));
    // 0x34fe1c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x34fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x34fe20: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x34fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x34fe24: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x34fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x34fe28: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x34fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x34fe2c: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x34fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x34fe30: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x34fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x34fe34: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x34fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x34fe38: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x34fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x34fe3c: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x34fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x34fe40: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x34fe40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x34fe44: 0x0  nop
    ctx->pc = 0x34fe44u;
    // NOP
label_34fe48:
    // 0x34fe48: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x34fe48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x34fe4c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x34fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x34fe50: 0x0  nop
    ctx->pc = 0x34fe50u;
    // NOP
    // 0x34fe54: 0x0  nop
    ctx->pc = 0x34fe54u;
    // NOP
    // 0x34fe58: 0x0  nop
    ctx->pc = 0x34fe58u;
    // NOP
    // 0x34fe5c: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34FE5Cu;
    {
        const bool branch_taken_0x34fe5c = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x34FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE5Cu;
        // 0x34fe60: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fe5c) {
            ctx->pc = 0x34FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34fe48;
        }
    }
    ctx->pc = 0x34FE64u;
    // 0x34fe64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34fe68: 0xaca00150  sw          $zero, 0x150($a1)
    ctx->pc = 0x34fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 336), GPR_U32(ctx, 0));
    // 0x34fe6c: 0xaca20158  sw          $v0, 0x158($a1)
    ctx->pc = 0x34fe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 2));
    // 0x34fe70: 0x3e00008  jr          $ra
    ctx->pc = 0x34FE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FE70u;
        // 0x34fe74: 0xaca00154  sw          $zero, 0x154($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FE78u;
}
