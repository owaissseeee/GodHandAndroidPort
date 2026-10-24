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

// Function: func_0034B2F0
// Address: 0x34b2f0 - 0x34b3e0
void func_0034B2F0_0x34b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B2F0_0x34b2f0");
#endif

    switch (ctx->pc) {
        case 0x34b34cu: goto label_34b34c;
        case 0x34b360u: goto label_34b360;
        case 0x34b370u: goto label_34b370;
        case 0x34b384u: goto label_34b384;
        case 0x34b39cu: goto label_34b39c;
        case 0x34b3bcu: goto label_34b3bc;
        default: break;
    }

    ctx->pc = 0x34b2f0u;

    // 0x34b2f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34b2f4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x34b2f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b2f8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x34b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x34b2fc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x34b2fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b300: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x34b304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b308: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x34b308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x34b30c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x34b30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x34b310: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x34b310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x34b314: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34b314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34b318: 0x8e932004  lw          $s3, 0x2004($s4)
    ctx->pc = 0x34b318u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8196)));
    // 0x34b31c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34B31Cu;
    {
        const bool branch_taken_0x34b31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B31Cu;
        // 0x34b320: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b31c) {
            ctx->pc = 0x34B344u;
            goto label_34b344;
        }
    }
    ctx->pc = 0x34B324u;
    // 0x34b324: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x34B324u;
    {
        const bool branch_taken_0x34b324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b324) {
            ctx->pc = 0x34B328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B324u;
            // 0x34b328: 0xae600030  sw          $zero, 0x30($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B340u;
            goto label_34b340;
        }
    }
    ctx->pc = 0x34B32Cu;
    // 0x34b32c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34b330: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34B330u;
    {
        const bool branch_taken_0x34b330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B330u;
        // 0x34b334: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b330) {
            ctx->pc = 0x34B358u;
            goto label_34b358;
        }
    }
    ctx->pc = 0x34B338u;
    // 0x34b338: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34B338u;
    {
        const bool branch_taken_0x34b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B338u;
        // 0x34b33c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b338) {
            ctx->pc = 0x34B3C4u;
            goto label_34b3c4;
        }
    }
    ctx->pc = 0x34B340u;
label_34b340:
    // 0x34b340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34b340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b344:
    // 0x34b344: 0xc0d2d0c  jal         func_34B430
    ctx->pc = 0x34B344u;
    SET_GPR_U32(ctx, 31, 0x34B34Cu);
    ctx->pc = 0x34B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B430u, 0x34B344u, 0x34B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B34Cu;
label_34b34c:
    // 0x34b34c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x34B34Cu;
    {
        const bool branch_taken_0x34b34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B34Cu;
        // 0x34b350: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b34c) {
            ctx->pc = 0x34B3C0u;
            goto label_34b3c0;
        }
    }
    ctx->pc = 0x34B354u;
    // 0x34b354: 0x0  nop
    ctx->pc = 0x34b354u;
    // NOP
label_34b358:
    // 0x34b358: 0xc0d2af4  jal         func_34ABD0
    ctx->pc = 0x34B358u;
    SET_GPR_U32(ctx, 31, 0x34B360u);
    ctx->pc = 0x34B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B358u;
    // 0x34b35c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34ABD0u, 0x34B358u, 0x34B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B360u;
label_34b360:
    // 0x34b360: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x34B360u;
    {
        const bool branch_taken_0x34b360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B360u;
        // 0x34b364: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b360) {
            ctx->pc = 0x34B3C0u;
            goto label_34b3c0;
        }
    }
    ctx->pc = 0x34B368u;
    // 0x34b368: 0xc0ca94c  jal         func_32A530
    ctx->pc = 0x34B368u;
    SET_GPR_U32(ctx, 31, 0x34B370u);
    ctx->pc = 0x34B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B368u;
    // 0x34b36c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A530u, 0x34B368u, 0x34B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B370u;
label_34b370:
    // 0x34b370: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x34b370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b374: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34b374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b378: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x34b378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34b37c: 0xc0d2d2e  jal         func_34B4B8
    ctx->pc = 0x34B37Cu;
    SET_GPR_U32(ctx, 31, 0x34B384u);
    ctx->pc = 0x34B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B37Cu;
    // 0x34b380: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B4B8u, 0x34B37Cu, 0x34B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B384u;
label_34b384:
    // 0x34b384: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x34b384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x34b388: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x34b388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b38c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34b38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b390: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x34b390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34b394: 0xc0cad3a  jal         func_32B4E8
    ctx->pc = 0x34B394u;
    SET_GPR_U32(ctx, 31, 0x34B39Cu);
    ctx->pc = 0x34B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B394u;
    // 0x34b398: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B4E8u, 0x34B394u, 0x34B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B39Cu;
label_34b39c:
    // 0x34b39c: 0x26841020  addiu       $a0, $s4, 0x1020
    ctx->pc = 0x34b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4128));
    // 0x34b3a0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x34b3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34b3a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x34b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b3a8: 0xae700030  sw          $s0, 0x30($s3)
    ctx->pc = 0x34b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 16));
    // 0x34b3ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34b3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b3b0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34b3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34b3b4: 0xc0d7152  jal         func_35C548
    ctx->pc = 0x34B3B4u;
    SET_GPR_U32(ctx, 31, 0x34B3BCu);
    ctx->pc = 0x34B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B3B4u;
    // 0x34b3b8: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C548u, 0x34B3B4u, 0x34B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B3BCu;
label_34b3bc:
    // 0x34b3bc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34b3bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34b3c0:
    // 0x34b3c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34b3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b3c4:
    // 0x34b3c4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34b3c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b3c8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x34b3c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34b3cc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x34b3ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b3d0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x34b3d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34b3d4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34b3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34b3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x34B3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B3D8u;
        // 0x34b3dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B3E0u;
}
