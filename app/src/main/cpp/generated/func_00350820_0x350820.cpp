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

// Function: func_00350820
// Address: 0x350820 - 0x3508c0
void func_00350820_0x350820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00350820_0x350820");
#endif

    switch (ctx->pc) {
        case 0x350848u: goto label_350848;
        case 0x350858u: goto label_350858;
        case 0x35088cu: goto label_35088c;
        default: break;
    }

    ctx->pc = 0x350820u;

    // 0x350820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x350820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x350824: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x350824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x350828: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x350828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x35082c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35082cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350830: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x350830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x350834: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x350834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x350838: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x350838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x35083c: 0x8e111fc0  lw          $s1, 0x1FC0($s0)
    ctx->pc = 0x35083cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    // 0x350840: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x350840u;
    SET_GPR_U32(ctx, 31, 0x350848u);
    ctx->pc = 0x350844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350840u;
    // 0x350844: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x350840u, 0x350848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350848u;
label_350848:
    // 0x350848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35084c: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x35084cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x350850: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x350850u;
    SET_GPR_U32(ctx, 31, 0x350858u);
    ctx->pc = 0x350854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350850u;
    // 0x350854: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x350850u, 0x350858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350858u;
label_350858:
    // 0x350858: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x350858u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35085c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350860: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x350860u;
    {
        const bool branch_taken_0x350860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350860u;
        // 0x350864: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350860) {
            ctx->pc = 0x3508A4u;
            goto label_3508a4;
        }
    }
    ctx->pc = 0x350868u;
    // 0x350868: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x350868u;
    {
        const bool branch_taken_0x350868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350868u;
        // 0x35086c: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350868) {
            ctx->pc = 0x3508A4u;
            goto label_3508a4;
        }
    }
    ctx->pc = 0x350870u;
    // 0x350870: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x350870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x350874: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x350874u;
    {
        const bool branch_taken_0x350874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x350874) {
            ctx->pc = 0x350878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350874u;
            // 0x350878: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3508A8u;
            goto label_3508a8;
        }
    }
    ctx->pc = 0x35087Cu;
    // 0x35087c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35087cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350880: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x350880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350884: 0xc0da99a  jal         func_36A668
    ctx->pc = 0x350884u;
    SET_GPR_U32(ctx, 31, 0x35088Cu);
    ctx->pc = 0x350888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350884u;
    // 0x350888: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A668u, 0x350884u, 0x35088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35088Cu;
label_35088c:
    // 0x35088c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35088Cu;
    {
        const bool branch_taken_0x35088c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35088Cu;
        // 0x350890: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35088c) {
            ctx->pc = 0x3508A8u;
            goto label_3508a8;
        }
    }
    ctx->pc = 0x350894u;
    // 0x350894: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x350894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x350898: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x350898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35089c: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x35089cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x3508a0: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x3508a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
label_3508a4:
    // 0x3508a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3508a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3508a8:
    // 0x3508a8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3508a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3508ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3508acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3508b0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3508b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3508b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3508B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3508B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3508B4u;
        // 0x3508b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3508B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3508BCu;
    // 0x3508bc: 0x0  nop
    ctx->pc = 0x3508bcu;
    // NOP
    ctx->pc = 0x3508c0u;
}
