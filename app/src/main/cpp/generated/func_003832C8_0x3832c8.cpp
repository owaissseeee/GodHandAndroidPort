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

// Function: func_003832C8
// Address: 0x3832c8 - 0x3833b0
void func_003832C8_0x3832c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003832C8_0x3832c8");
#endif

    switch (ctx->pc) {
        case 0x383310u: goto label_383310;
        case 0x383320u: goto label_383320;
        case 0x38333cu: goto label_38333c;
        case 0x383350u: goto label_383350;
        case 0x38337cu: goto label_38337c;
        case 0x38338cu: goto label_38338c;
        default: break;
    }

    ctx->pc = 0x3832c8u;

    // 0x3832c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3832c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3832cc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3832ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3832d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3832d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3832d4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3832d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3832d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3832d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3832dc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3832dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3832e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3832e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3832e4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3832e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3832e8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3832e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3832ec: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x3832ECu;
    {
        const bool branch_taken_0x3832ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3832F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3832ECu;
        // 0x3832f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3832ec) {
            ctx->pc = 0x383368u;
            goto label_383368;
        }
    }
    ctx->pc = 0x3832F4u;
    // 0x3832f4: 0x263300a4  addiu       $s3, $s1, 0xA4
    ctx->pc = 0x3832f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
    // 0x3832f8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3832f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3832fc: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3832FCu;
    {
        const bool branch_taken_0x3832fc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x383300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3832FCu;
        // 0x383300: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3832fc) {
            ctx->pc = 0x38338Cu;
            goto label_38338c;
        }
    }
    ctx->pc = 0x383304u;
    // 0x383304: 0x26350026  addiu       $s5, $s1, 0x26
    ctx->pc = 0x383304u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 38));
    // 0x383308: 0x2634001c  addiu       $s4, $s1, 0x1C
    ctx->pc = 0x383308u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x38330c: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x38330cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_383310:
    // 0x383310: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x383310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x383314: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x383314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383318: 0xc0cb734  jal         func_32DCD0
    ctx->pc = 0x383318u;
    SET_GPR_U32(ctx, 31, 0x383320u);
    ctx->pc = 0x38331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383318u;
    // 0x38331c: 0x108840  sll         $s1, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCD0u, 0x383318u, 0x383320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383320u;
label_383320:
    // 0x383320: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x383320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383324: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x383324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x383328: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x383328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38332c: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x38332cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x383330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x383330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383334: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x383334u;
    SET_GPR_U32(ctx, 31, 0x38333Cu);
    ctx->pc = 0x383338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383334u;
    // 0x383338: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x383334u, 0x38333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38333Cu;
label_38333c:
    // 0x38333c: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x38333cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x383340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x383340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383344: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x383344u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x383348: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x383348u;
    SET_GPR_U32(ctx, 31, 0x383350u);
    ctx->pc = 0x38334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383348u;
    // 0x38334c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x383348u, 0x383350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383350u;
label_383350:
    // 0x383350: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x383350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x383354: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x383354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x383358: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x383358u;
    {
        const bool branch_taken_0x383358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383358) {
            ctx->pc = 0x38335Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383358u;
            // 0x38335c: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383310;
        }
    }
    ctx->pc = 0x383360u;
    // 0x383360: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x383360u;
    {
        const bool branch_taken_0x383360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383360u;
        // 0x383364: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383360) {
            ctx->pc = 0x383390u;
            goto label_383390;
        }
    }
    ctx->pc = 0x383368u;
label_383368:
    // 0x383368: 0x26300034  addiu       $s0, $s1, 0x34
    ctx->pc = 0x383368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x38336c: 0x8626001c  lh          $a2, 0x1C($s1)
    ctx->pc = 0x38336cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x383370: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x383370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x383374: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x383374u;
    SET_GPR_U32(ctx, 31, 0x38337Cu);
    ctx->pc = 0x383378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383374u;
    // 0x383378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x383374u, 0x38337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38337Cu;
label_38337c:
    // 0x38337c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x38337cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x383380: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x383380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383384: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x383384u;
    SET_GPR_U32(ctx, 31, 0x38338Cu);
    ctx->pc = 0x383388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383384u;
    // 0x383388: 0x86260026  lh          $a2, 0x26($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x383384u, 0x38338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38338Cu;
label_38338c:
    // 0x38338c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x38338cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_383390:
    // 0x383390: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x383390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x383394: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x383394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x383398: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x383398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38339c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x38339cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3833a0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3833a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3833a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3833a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3833a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3833A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3833ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3833A8u;
        // 0x3833ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3833A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3833B0u;
}
