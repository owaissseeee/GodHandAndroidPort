#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __unpack_d
// Address: 0x79cc38 - 0x79ccd8
void ps2___unpack_d_0x79cc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_d_0x79cc38");
#endif

    ctx->pc = 0x79cc38u;

    // 0x79cc38: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x79cc38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79cc3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79cc40: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x79cc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x79cc44: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x79cc44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x79cc48: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x79cc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79cc4c: 0x2153e  dsrl32      $v0, $v0, 20
    ctx->pc = 0x79cc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 20));
    // 0x79cc50: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x79cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x79cc54: 0x304407ff  andi        $a0, $v0, 0x7FF
    ctx->pc = 0x79cc54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x79cc58: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79CC58u;
    {
        const bool branch_taken_0x79cc58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CC58u;
        // 0x79cc5c: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cc58) {
            ctx->pc = 0x79CC70u;
            goto label_79cc70;
        }
    }
    ctx->pc = 0x79CC60u;
    // 0x79cc60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79cc64: 0x3e00008  jr          $ra
    ctx->pc = 0x79CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CC64u;
        // 0x79cc68: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CC6Cu;
    // 0x79cc6c: 0x0  nop
    ctx->pc = 0x79cc6cu;
    // NOP
label_79cc70:
    // 0x79cc70: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79CC70u;
    {
        const bool branch_taken_0x79cc70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x79cc70) {
            ctx->pc = 0x79CC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CC70u;
            // 0x79cc74: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CCB0u;
            goto label_79ccb0;
        }
    }
    ctx->pc = 0x79CC78u;
    // 0x79cc78: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79CC78u;
    {
        const bool branch_taken_0x79cc78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CC78u;
        // 0x79cc7c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cc78) {
            ctx->pc = 0x79CC88u;
            goto label_79cc88;
        }
    }
    ctx->pc = 0x79CC80u;
    // 0x79cc80: 0x3e00008  jr          $ra
    ctx->pc = 0x79CC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CC80u;
        // 0x79cc84: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CC88u;
label_79cc88:
    // 0x79cc88: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79cc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79cc8c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x79cc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x79cc90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79cc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79cc94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79CC94u;
    {
        const bool branch_taken_0x79cc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CC94u;
        // 0x79cc98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cc94) {
            ctx->pc = 0x79CCA4u;
            goto label_79cca4;
        }
    }
    ctx->pc = 0x79CC9Cu;
    // 0x79cc9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79CC9Cu;
    {
        const bool branch_taken_0x79cc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CC9Cu;
        // 0x79cca0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cc9c) {
            ctx->pc = 0x79CCA8u;
            goto label_79cca8;
        }
    }
    ctx->pc = 0x79CCA4u;
label_79cca4:
    // 0x79cca4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x79cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_79cca8:
    // 0x79cca8: 0x3e00008  jr          $ra
    ctx->pc = 0x79CCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CCA8u;
        // 0x79ccac: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CCB0u;
label_79ccb0:
    // 0x79ccb0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79ccb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79ccb4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x79ccb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x79ccb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x79ccb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x79ccbc: 0x2484fc01  addiu       $a0, $a0, -0x3FF
    ctx->pc = 0x79ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
    // 0x79ccc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79ccc4: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x79ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x79ccc8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x79ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x79cccc: 0x3e00008  jr          $ra
    ctx->pc = 0x79CCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CCCCu;
        // 0x79ccd0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CCD4u;
    // 0x79ccd4: 0x0  nop
    ctx->pc = 0x79ccd4u;
    // NOP
    ctx->pc = 0x79ccd8u;
}
} // namespace gh_r501
