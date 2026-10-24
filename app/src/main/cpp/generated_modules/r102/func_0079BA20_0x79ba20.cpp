#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_0079BA20
// Address: 0x79ba20 - 0x79bad0
void func_0079BA20_0x79ba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BA20_0x79ba20");
#endif

    switch (ctx->pc) {
        case 0x79ba50u: goto label_79ba50;
        case 0x79ba5cu: goto label_79ba5c;
        case 0x79ba68u: goto label_79ba68;
        case 0x79ba78u: goto label_79ba78;
        case 0x79ba88u: goto label_79ba88;
        case 0x79ba98u: goto label_79ba98;
        case 0x79baa4u: goto label_79baa4;
        case 0x79baacu: goto label_79baac;
        case 0x79bab8u: goto label_79bab8;
        default: break;
    }

    ctx->pc = 0x79ba20u;

    // 0x79ba20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79ba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79ba24: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x79ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79ba28: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x79ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x79ba2c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79ba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79ba30: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79ba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79ba34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79ba34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79ba38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79ba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79ba3c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79ba3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79ba40: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79ba40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79ba44: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79ba44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x79ba48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79BA48u;
    {
        const bool branch_taken_0x79ba48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA48u;
        // 0x79ba4c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba48) {
            ctx->pc = 0x79BA5Cu;
            goto label_79ba5c;
        }
    }
    ctx->pc = 0x79BA50u;
label_79ba50:
    // 0x79ba50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ba50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ba54: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79BA54u;
    SET_GPR_U32(ctx, 31, 0x79BA5Cu);
    ctx->pc = 0x79BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA54u;
    // 0x79ba58: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BA54u, 0x79BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA5Cu;
label_79ba5c:
    // 0x79ba5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79ba5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ba60: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79BA60u;
    SET_GPR_U32(ctx, 31, 0x79BA68u);
    ctx->pc = 0x79BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA60u;
    // 0x79ba64: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79BA60u, 0x79BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA68u;
label_79ba68:
    // 0x79ba68: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BA68u;
    {
        const bool branch_taken_0x79ba68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x79ba68) {
            ctx->pc = 0x79BA80u;
            goto label_79ba80;
        }
    }
    ctx->pc = 0x79BA70u;
    // 0x79ba70: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79BA70u;
    SET_GPR_U32(ctx, 31, 0x79BA78u);
    ctx->pc = 0x79BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA70u;
    // 0x79ba74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79BA70u, 0x79BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA78u;
label_79ba78:
    // 0x79ba78: 0x1451fff5  bne         $v0, $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x79BA78u;
    {
        const bool branch_taken_0x79ba78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x79BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA78u;
        // 0x79ba7c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba78) {
            ctx->pc = 0x79BA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ba50;
        }
    }
    ctx->pc = 0x79BA80u;
label_79ba80:
    // 0x79ba80: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79BA80u;
    SET_GPR_U32(ctx, 31, 0x79BA88u);
    ctx->pc = 0x79BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA80u;
    // 0x79ba84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79BA80u, 0x79BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA88u;
label_79ba88:
    // 0x79ba88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BA88u;
    {
        const bool branch_taken_0x79ba88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA88u;
        // 0x79ba8c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba88) {
            ctx->pc = 0x79BAB0u;
            goto label_79bab0;
        }
    }
    ctx->pc = 0x79BA90u;
    // 0x79ba90: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79BA90u;
    SET_GPR_U32(ctx, 31, 0x79BA98u);
    ctx->pc = 0x79BA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA90u;
    // 0x79ba94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79BA90u, 0x79BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA98u;
label_79ba98:
    // 0x79ba98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ba98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ba9c: 0xc0a5874  jal         func_2961D0
    ctx->pc = 0x79BA9Cu;
    SET_GPR_U32(ctx, 31, 0x79BAA4u);
    ctx->pc = 0x79BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA9Cu;
    // 0x79baa0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961D0u, 0x79BA9Cu, 0x79BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAA4u;
label_79baa4:
    // 0x79baa4: 0xc0a5860  jal         func_296180
    ctx->pc = 0x79BAA4u;
    SET_GPR_U32(ctx, 31, 0x79BAACu);
    ctx->pc = 0x79BAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BAA4u;
    // 0x79baa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296180u, 0x79BAA4u, 0x79BAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAACu;
label_79baac:
    // 0x79baac: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79baacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79bab0:
    // 0x79bab0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79BAB0u;
    SET_GPR_U32(ctx, 31, 0x79BAB8u);
    ctx->pc = 0x79BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BAB0u;
    // 0x79bab4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79BAB0u, 0x79BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAB8u;
label_79bab8:
    // 0x79bab8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79bab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79babc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79babcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79bac0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79bac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79bac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79bac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bac8: 0x3e00008  jr          $ra
    ctx->pc = 0x79BAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAC8u;
        // 0x79bacc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BAD0u;
}
} // namespace gh_r102
