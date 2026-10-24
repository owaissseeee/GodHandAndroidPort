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

// Function: cIDBase_clear
// Address: 0x2a9df8 - 0x2a9ea0
void cIDBase_clear_0x2a9df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_clear_0x2a9df8");
#endif

    switch (ctx->pc) {
        case 0x2a9e38u: goto label_2a9e38;
        case 0x2a9e60u: goto label_2a9e60;
        default: break;
    }

    ctx->pc = 0x2a9df8u;

    // 0x2a9df8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a9dfc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a9dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a9e00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a9e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9e04: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a9e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a9e08: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a9e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2a9e0c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x2a9e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a9e10: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2a9e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2a9e14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a9e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a9e18: 0xa0800018  sb          $zero, 0x18($a0)
    ctx->pc = 0x2a9e18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9e1c: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x2a9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x2a9e20: 0xa0800019  sb          $zero, 0x19($a0)
    ctx->pc = 0x2a9e20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9e24: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2a9e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a9e28: 0xa480001a  sh          $zero, 0x1A($a0)
    ctx->pc = 0x2a9e28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a9e2c: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x2a9e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9e30: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x2a9e30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9e34: 0xa080001e  sb          $zero, 0x1E($a0)
    ctx->pc = 0x2a9e34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 0));
label_2a9e38:
    // 0x2a9e38: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a9e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9e3c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a9e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a9e40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a9e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a9e44: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a9e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a9e48: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A9E48u;
    {
        const bool branch_taken_0x2a9e48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2A9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E48u;
        // 0x2a9e4c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e48) {
            ctx->pc = 0x2A9E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9e38;
        }
    }
    ctx->pc = 0x2A9E50u;
    // 0x2a9e50: 0x24e2d880  addiu       $v0, $a3, -0x2780
    ctx->pc = 0x2a9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957184));
    // 0x2a9e54: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x2a9e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2a9e58: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a9e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a9e5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2a9e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a9e60:
    // 0x2a9e60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a9e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9e64: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a9e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a9e68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2a9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2a9e6c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a9e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a9e70: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A9E70u;
    {
        const bool branch_taken_0x2a9e70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2A9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E70u;
        // 0x2a9e74: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9e70) {
            ctx->pc = 0x2A9E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9e60;
        }
    }
    ctx->pc = 0x2A9E78u;
    // 0x2a9e78: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2a9e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2a9e7c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2a9e7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2a9e80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9e84: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2a9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a9e88: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2a9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a9e8c: 0xa4820044  sh          $v0, 0x44($a0)
    ctx->pc = 0x2a9e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a9e90: 0xa0830046  sb          $v1, 0x46($a0)
    ctx->pc = 0x2a9e90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 70), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a9e94: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9E94u;
        // 0x2a9e98: 0xe4800040  swc1        $f0, 0x40($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9E9Cu;
    // 0x2a9e9c: 0x0  nop
    ctx->pc = 0x2a9e9cu;
    // NOP
    ctx->pc = 0x2a9ea0u;
}
