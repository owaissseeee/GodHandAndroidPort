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

// Function: func_00274F50
// Address: 0x274f50 - 0x274fe8
void func_00274F50_0x274f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00274F50_0x274f50");
#endif

    ctx->pc = 0x274f50u;

    // 0x274f50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x274f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f54: 0x8ca20564  lw          $v0, 0x564($a1)
    ctx->pc = 0x274f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1380)));
    // 0x274f58: 0x3842021c  xori        $v0, $v0, 0x21C
    ctx->pc = 0x274f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)540);
    // 0x274f5c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x274F5Cu;
    {
        const bool branch_taken_0x274f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F5Cu;
        // 0x274f60: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f5c) {
            ctx->pc = 0x274FB8u;
            goto label_274fb8;
        }
    }
    ctx->pc = 0x274F64u;
    // 0x274f64: 0x24040403  addiu       $a0, $zero, 0x403
    ctx->pc = 0x274f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x274f68: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x274f68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 31312)));
    // 0x274f6c: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x274F6Cu;
    {
        const bool branch_taken_0x274f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x274f6c) {
            ctx->pc = 0x274FB8u;
            goto label_274fb8;
        }
    }
    ctx->pc = 0x274F74u;
    // 0x274f74: 0xc4a11748  lwc1        $f1, 0x1748($a1)
    ctx->pc = 0x274f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 5960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x274f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274f7c: 0x0  nop
    ctx->pc = 0x274f7cu;
    // NOP
    // 0x274f80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x274f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274f84: 0x0  nop
    ctx->pc = 0x274f84u;
    // NOP
    // 0x274f88: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x274F88u;
    {
        const bool branch_taken_0x274f88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x274F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F88u;
        // 0x274f8c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f88) {
            ctx->pc = 0x274FB8u;
            goto label_274fb8;
        }
    }
    ctx->pc = 0x274F90u;
    // 0x274f90: 0x244364f0  addiu       $v1, $v0, 0x64F0
    ctx->pc = 0x274f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x274f94: 0x8c62056c  lw          $v0, 0x56C($v1)
    ctx->pc = 0x274f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1388)));
    // 0x274f98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274F98u;
    {
        const bool branch_taken_0x274f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274f98) {
            ctx->pc = 0x274FB8u;
            goto label_274fb8;
        }
    }
    ctx->pc = 0x274FA0u;
    // 0x274fa0: 0x8442054a  lh          $v0, 0x54A($v0)
    ctx->pc = 0x274fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x274fa4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274FA4u;
    {
        const bool branch_taken_0x274fa4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x274fa4) {
            ctx->pc = 0x274FB8u;
            goto label_274fb8;
        }
    }
    ctx->pc = 0x274FACu;
    // 0x274fac: 0x8c620568  lw          $v0, 0x568($v1)
    ctx->pc = 0x274facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1384)));
    // 0x274fb0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x274FB0u;
    {
        const bool branch_taken_0x274fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274fb0) {
            ctx->pc = 0x274FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274FB0u;
            // 0x274fb4: 0x8442054a  lh          $v0, 0x54A($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274FC0u;
            goto label_274fc0;
        }
    }
    ctx->pc = 0x274FB8u;
label_274fb8:
    // 0x274fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x274FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FB8u;
        // 0x274fbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274FC0u;
label_274fc0:
    // 0x274fc0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274FC0u;
    {
        const bool branch_taken_0x274fc0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x274FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FC0u;
        // 0x274fc4: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274fc0) {
            ctx->pc = 0x274FE0u;
            goto label_274fe0;
        }
    }
    ctx->pc = 0x274FC8u;
    // 0x274fc8: 0xa0a002f7  sb          $zero, 0x2F7($a1)
    ctx->pc = 0x274fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x274fcc: 0xa0a202f5  sb          $v0, 0x2F5($a1)
    ctx->pc = 0x274fccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x274fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274fd4: 0xa0a002f4  sb          $zero, 0x2F4($a1)
    ctx->pc = 0x274fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x274fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x274FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FD8u;
        // 0x274fdc: 0xa0a002f6  sb          $zero, 0x2F6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274FE0u;
label_274fe0:
    // 0x274fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x274FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FE0u;
        // 0x274fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274FE8u;
}
