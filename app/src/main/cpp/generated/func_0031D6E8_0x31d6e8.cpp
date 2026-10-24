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

// Function: func_0031D6E8
// Address: 0x31d6e8 - 0x31d778
void func_0031D6E8_0x31d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031D6E8_0x31d6e8");
#endif

    switch (ctx->pc) {
        case 0x31d6e8u: goto label_31d6e8;
        case 0x31d6ecu: goto label_31d6ec;
        case 0x31d6f0u: goto label_31d6f0;
        case 0x31d6f4u: goto label_31d6f4;
        case 0x31d6f8u: goto label_31d6f8;
        case 0x31d6fcu: goto label_31d6fc;
        case 0x31d700u: goto label_31d700;
        case 0x31d704u: goto label_31d704;
        case 0x31d708u: goto label_31d708;
        case 0x31d70cu: goto label_31d70c;
        case 0x31d710u: goto label_31d710;
        case 0x31d714u: goto label_31d714;
        case 0x31d718u: goto label_31d718;
        case 0x31d71cu: goto label_31d71c;
        case 0x31d720u: goto label_31d720;
        case 0x31d724u: goto label_31d724;
        case 0x31d728u: goto label_31d728;
        case 0x31d72cu: goto label_31d72c;
        case 0x31d730u: goto label_31d730;
        case 0x31d734u: goto label_31d734;
        case 0x31d738u: goto label_31d738;
        case 0x31d73cu: goto label_31d73c;
        case 0x31d740u: goto label_31d740;
        case 0x31d744u: goto label_31d744;
        case 0x31d748u: goto label_31d748;
        case 0x31d74cu: goto label_31d74c;
        case 0x31d750u: goto label_31d750;
        case 0x31d754u: goto label_31d754;
        case 0x31d758u: goto label_31d758;
        case 0x31d75cu: goto label_31d75c;
        case 0x31d760u: goto label_31d760;
        case 0x31d764u: goto label_31d764;
        case 0x31d768u: goto label_31d768;
        case 0x31d76cu: goto label_31d76c;
        case 0x31d770u: goto label_31d770;
        case 0x31d774u: goto label_31d774;
        default: break;
    }

    ctx->pc = 0x31d6e8u;

label_31d6e8:
    // 0x31d6e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31d6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_31d6ec:
    // 0x31d6ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x31d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_31d6f0:
    // 0x31d6f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31d6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_31d6f4:
    // 0x31d6f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31d6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_31d6f8:
    // 0x31d6f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31d6f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d6fc:
    // 0x31d6fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31d6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_31d700:
    // 0x31d700: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x31d700u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
label_31d704:
    // 0x31d704: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31d704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_31d708:
    // 0x31d708: 0x3c120045  lui         $s2, 0x45
    ctx->pc = 0x31d708u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)69 << 16));
label_31d70c:
    // 0x31d70c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x31d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_31d710:
    // 0x31d710: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x31d710u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
label_31d714:
    // 0x31d714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31d718:
    // 0x31d718: 0x24549438  addiu       $s4, $v0, -0x6BC8
    ctx->pc = 0x31d718u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939704));
label_31d71c:
    // 0x31d71c: 0x8e624070  lw          $v0, 0x4070($s3)
    ctx->pc = 0x31d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16496)));
label_31d720:
    // 0x31d720: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_31d724:
    if (ctx->pc == 0x31D724u) {
        ctx->pc = 0x31D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D720u;
        // 0x31d724: 0x26243d60  addiu       $a0, $s1, 0x3D60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D728u;
        goto label_31d728;
    }
    ctx->pc = 0x31D720u;
    {
        const bool branch_taken_0x31d720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D720u;
        // 0x31d724: 0x26243d60  addiu       $a0, $s1, 0x3D60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d720) {
            ctx->pc = 0x31D740u;
            goto label_31d740;
        }
    }
    ctx->pc = 0x31D728u;
label_31d728:
    // 0x31d728: 0xc0e238c  jal         func_388E30
label_31d72c:
    if (ctx->pc == 0x31D72Cu) {
        ctx->pc = 0x31D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D728u;
        // 0x31d72c: 0x26450f38  addiu       $a1, $s2, 0xF38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D730u;
        goto label_31d730;
    }
    ctx->pc = 0x31D728u;
    SET_GPR_U32(ctx, 31, 0x31D730u);
    ctx->pc = 0x31D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D728u;
    // 0x31d72c: 0x26450f38  addiu       $a1, $s2, 0xF38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388E30u, 0x31D728u, 0x31D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D730u;
label_31d730:
    // 0x31d730: 0x280f809  jalr        $s4
label_31d734:
    if (ctx->pc == 0x31D734u) {
        ctx->pc = 0x31D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D730u;
        // 0x31d734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D738u;
        goto label_31d738;
    }
    ctx->pc = 0x31D730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x31D738u);
        ctx->pc = 0x31D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D730u;
        // 0x31d734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D730u, 0x31D738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D738u;
label_31d738:
    // 0x31d738: 0xc0c76dc  jal         func_31DB70
label_31d73c:
    if (ctx->pc == 0x31D73Cu) {
        ctx->pc = 0x31D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D738u;
        // 0x31d73c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D740u;
        goto label_31d740;
    }
    ctx->pc = 0x31D738u;
    SET_GPR_U32(ctx, 31, 0x31D740u);
    ctx->pc = 0x31D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D738u;
    // 0x31d73c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DB70u, 0x31D738u, 0x31D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D740u;
label_31d740:
    // 0x31d740: 0x40f809  jalr        $v0
label_31d744:
    if (ctx->pc == 0x31D744u) {
        ctx->pc = 0x31D748u;
        goto label_31d748;
    }
    ctx->pc = 0x31D740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31D748u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D740u, 0x31D748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31D748u;
label_31d748:
    // 0x31d748: 0xc0e9f1c  jal         func_3A7C70
label_31d74c:
    if (ctx->pc == 0x31D74Cu) {
        ctx->pc = 0x31D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D748u;
        // 0x31d74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D750u;
        goto label_31d750;
    }
    ctx->pc = 0x31D748u;
    SET_GPR_U32(ctx, 31, 0x31D750u);
    ctx->pc = 0x31D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D748u;
    // 0x31d74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x31D748u, 0x31D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D750u;
label_31d750:
    // 0x31d750: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
label_31d754:
    if (ctx->pc == 0x31D754u) {
        ctx->pc = 0x31D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D750u;
        // 0x31d754: 0x8e624070  lw          $v0, 0x4070($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D758u;
        goto label_31d758;
    }
    ctx->pc = 0x31D750u;
    {
        const bool branch_taken_0x31d750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d750) {
            ctx->pc = 0x31D754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D750u;
            // 0x31d754: 0x8e624070  lw          $v0, 0x4070($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d720;
        }
    }
    ctx->pc = 0x31D758u;
label_31d758:
    // 0x31d758: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31d758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31d75c:
    // 0x31d75c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31d75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31d760:
    // 0x31d760: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31d760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31d764:
    // 0x31d764: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31d764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31d768:
    // 0x31d768: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31d768u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31d76c:
    // 0x31d76c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31d770:
    // 0x31d770: 0x3e00008  jr          $ra
label_31d774:
    if (ctx->pc == 0x31D774u) {
        ctx->pc = 0x31D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D770u;
        // 0x31d774: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D778u;
        goto label_fallthrough_0x31d770;
    }
    ctx->pc = 0x31D770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D770u;
        // 0x31d774: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31d770:
    ctx->pc = 0x31D778u;
}
