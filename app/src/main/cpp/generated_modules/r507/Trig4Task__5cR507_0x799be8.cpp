#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r507_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r507
{
// Function: Trig4Task__5cR507
// Address: 0x799be8 - 0x799ca0
void Trig4Task__5cR507_0x799be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trig4Task__5cR507_0x799be8");
#endif

    switch (ctx->pc) {
        case 0x799c10u: goto label_799c10;
        case 0x799c1cu: goto label_799c1c;
        case 0x799c2cu: goto label_799c2c;
        case 0x799c60u: goto label_799c60;
        case 0x799c6cu: goto label_799c6c;
        case 0x799c78u: goto label_799c78;
        case 0x799c84u: goto label_799c84;
        default: break;
    }

    ctx->pc = 0x799be8u;

    // 0x799be8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799bec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x799bf0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x799bf4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799bf8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799bfc: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799c00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799c04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799C04u;
    {
        const bool branch_taken_0x799c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C04u;
        // 0x799c08: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c04) {
            ctx->pc = 0x799C1Cu;
            goto label_799c1c;
        }
    }
    ctx->pc = 0x799C0Cu;
    // 0x799c0c: 0x0  nop
    ctx->pc = 0x799c0cu;
    // NOP
label_799c10:
    // 0x799c10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c14: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799C14u;
    SET_GPR_U32(ctx, 31, 0x799C1Cu);
    ctx->pc = 0x799C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C14u;
    // 0x799c18: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799C14u, 0x799C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C1Cu;
label_799c1c:
    // 0x799c1c: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799c20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799c24: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799C24u;
    SET_GPR_U32(ctx, 31, 0x799C2Cu);
    ctx->pc = 0x799C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C24u;
    // 0x799c28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799C24u, 0x799C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C2Cu;
label_799c2c:
    // 0x799c2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c30: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799C30u;
    {
        const bool branch_taken_0x799c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C30u;
        // 0x799c34: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c30) {
            ctx->pc = 0x799C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c10;
        }
    }
    ctx->pc = 0x799C38u;
    // 0x799c38: 0x26506ab0  addiu       $s0, $s2, 0x6AB0
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
    // 0x799c3c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x799c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x799c40: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799c44: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799c48: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799c48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c50: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799c50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799c54: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799c58: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799C58u;
    SET_GPR_U32(ctx, 31, 0x799C60u);
    ctx->pc = 0x799C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C58u;
    // 0x799c5c: 0xa3a60020  sb          $a2, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799C58u, 0x799C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C60u;
label_799c60:
    // 0x799c60: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799c60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799c64: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799C64u;
    SET_GPR_U32(ctx, 31, 0x799C6Cu);
    ctx->pc = 0x799C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C64u;
    // 0x799c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799C64u, 0x799C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C6Cu;
label_799c6c:
    // 0x799c6c: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799c6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799c70: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799C70u;
    SET_GPR_U32(ctx, 31, 0x799C78u);
    ctx->pc = 0x799C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C70u;
    // 0x799c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799C70u, 0x799C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C78u;
label_799c78:
    // 0x799c78: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x799c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799c7c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799C7Cu;
    SET_GPR_U32(ctx, 31, 0x799C84u);
    ctx->pc = 0x799C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C7Cu;
    // 0x799c80: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799C7Cu, 0x799C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C84u;
label_799c84:
    // 0x799c84: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x799c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799c88: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799c8c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x799c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799c90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799c94: 0x3e00008  jr          $ra
    ctx->pc = 0x799C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C94u;
        // 0x799c98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C9Cu;
    // 0x799c9c: 0x0  nop
    ctx->pc = 0x799c9cu;
    // NOP
    ctx->pc = 0x799ca0u;
}
} // namespace gh_r507
