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

// Function: func_00347868
// Address: 0x347868 - 0x347908
void func_00347868_0x347868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347868_0x347868");
#endif

    switch (ctx->pc) {
        case 0x347868u: goto label_347868;
        case 0x34786cu: goto label_34786c;
        case 0x347870u: goto label_347870;
        case 0x347874u: goto label_347874;
        case 0x347878u: goto label_347878;
        case 0x34787cu: goto label_34787c;
        case 0x347880u: goto label_347880;
        case 0x347884u: goto label_347884;
        case 0x347888u: goto label_347888;
        case 0x34788cu: goto label_34788c;
        case 0x347890u: goto label_347890;
        case 0x347894u: goto label_347894;
        case 0x347898u: goto label_347898;
        case 0x34789cu: goto label_34789c;
        case 0x3478a0u: goto label_3478a0;
        case 0x3478a4u: goto label_3478a4;
        case 0x3478a8u: goto label_3478a8;
        case 0x3478acu: goto label_3478ac;
        case 0x3478b0u: goto label_3478b0;
        case 0x3478b4u: goto label_3478b4;
        case 0x3478b8u: goto label_3478b8;
        case 0x3478bcu: goto label_3478bc;
        case 0x3478c0u: goto label_3478c0;
        case 0x3478c4u: goto label_3478c4;
        case 0x3478c8u: goto label_3478c8;
        case 0x3478ccu: goto label_3478cc;
        case 0x3478d0u: goto label_3478d0;
        case 0x3478d4u: goto label_3478d4;
        case 0x3478d8u: goto label_3478d8;
        case 0x3478dcu: goto label_3478dc;
        case 0x3478e0u: goto label_3478e0;
        case 0x3478e4u: goto label_3478e4;
        case 0x3478e8u: goto label_3478e8;
        case 0x3478ecu: goto label_3478ec;
        case 0x3478f0u: goto label_3478f0;
        case 0x3478f4u: goto label_3478f4;
        case 0x3478f8u: goto label_3478f8;
        case 0x3478fcu: goto label_3478fc;
        case 0x347900u: goto label_347900;
        case 0x347904u: goto label_347904;
        default: break;
    }

    ctx->pc = 0x347868u;

label_347868:
    // 0x347868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_34786c:
    // 0x34786c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34786cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_347870:
    // 0x347870: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x347870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_347874:
    // 0x347874: 0xc0d1a0a  jal         func_346828
label_347878:
    if (ctx->pc == 0x347878u) {
        ctx->pc = 0x347878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347874u;
        // 0x347878: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34787Cu;
        goto label_34787c;
    }
    ctx->pc = 0x347874u;
    SET_GPR_U32(ctx, 31, 0x34787Cu);
    ctx->pc = 0x347878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347874u;
    // 0x347878: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x347874u, 0x34787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34787Cu;
label_34787c:
    // 0x34787c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34787cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_347880:
    // 0x347880: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_347884:
    // 0x347884: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_347888:
    if (ctx->pc == 0x347888u) {
        ctx->pc = 0x347888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347884u;
        // 0x347888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34788Cu;
        goto label_34788c;
    }
    ctx->pc = 0x347884u;
    {
        const bool branch_taken_0x347884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x347888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347884u;
        // 0x347888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347884) {
            ctx->pc = 0x3478A8u;
            goto label_3478a8;
        }
    }
    ctx->pc = 0x34788Cu;
label_34788c:
    // 0x34788c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x34788cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_347890:
    // 0x347890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_347894:
    // 0x347894: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x347894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_347898:
    // 0x347898: 0x24848f10  addiu       $a0, $a0, -0x70F0
    ctx->pc = 0x347898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938384));
label_34789c:
    // 0x34789c: 0x80d22f8  j           func_348BE0
label_3478a0:
    if (ctx->pc == 0x3478A0u) {
        ctx->pc = 0x3478A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34789Cu;
        // 0x3478a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3478A4u;
        goto label_3478a4;
    }
    ctx->pc = 0x34789Cu;
    ctx->pc = 0x3478A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34789Cu;
    // 0x3478a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x34789Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3478A4u;
label_3478a4:
    // 0x3478a4: 0x0  nop
    ctx->pc = 0x3478a4u;
    // NOP
label_3478a8:
    // 0x3478a8: 0xc0d1f96  jal         func_347E58
label_3478ac:
    if (ctx->pc == 0x3478ACu) {
        ctx->pc = 0x3478B0u;
        goto label_3478b0;
    }
    ctx->pc = 0x3478A8u;
    SET_GPR_U32(ctx, 31, 0x3478B0u);
    ctx->pc = 0x347E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347E58u, 0x3478A8u, 0x3478B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3478B0u;
label_3478b0:
    // 0x3478b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3478b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3478b4:
    // 0x3478b4: 0xc0d1750  jal         func_345D40
label_3478b8:
    if (ctx->pc == 0x3478B8u) {
        ctx->pc = 0x3478B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478B4u;
        // 0x3478b8: 0x8e0501c0  lw          $a1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3478BCu;
        goto label_3478bc;
    }
    ctx->pc = 0x3478B4u;
    SET_GPR_U32(ctx, 31, 0x3478BCu);
    ctx->pc = 0x3478B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3478B4u;
    // 0x3478b8: 0x8e0501c0  lw          $a1, 0x1C0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345D40u, 0x3478B4u, 0x3478BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3478BCu;
label_3478bc:
    // 0x3478bc: 0xc0d1840  jal         func_346100
label_3478c0:
    if (ctx->pc == 0x3478C0u) {
        ctx->pc = 0x3478C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478BCu;
        // 0x3478c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3478C4u;
        goto label_3478c4;
    }
    ctx->pc = 0x3478BCu;
    SET_GPR_U32(ctx, 31, 0x3478C4u);
    ctx->pc = 0x3478C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3478BCu;
    // 0x3478c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346100u, 0x3478BCu, 0x3478C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3478C4u;
label_3478c4:
    // 0x3478c4: 0xc0cd62e  jal         func_3358B8
label_3478c8:
    if (ctx->pc == 0x3478C8u) {
        ctx->pc = 0x3478C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478C4u;
        // 0x3478c8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3478CCu;
        goto label_3478cc;
    }
    ctx->pc = 0x3478C4u;
    SET_GPR_U32(ctx, 31, 0x3478CCu);
    ctx->pc = 0x3478C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3478C4u;
    // 0x3478c8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3358B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3358B8u, 0x3478C4u, 0x3478CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3478CCu;
label_3478cc:
    // 0x3478cc: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x3478ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_3478d0:
    // 0x3478d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3478d4:
    if (ctx->pc == 0x3478D4u) {
        ctx->pc = 0x3478D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478D0u;
        // 0x3478d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3478D8u;
        goto label_3478d8;
    }
    ctx->pc = 0x3478D0u;
    {
        const bool branch_taken_0x3478d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3478D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478D0u;
        // 0x3478d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3478d0) {
            ctx->pc = 0x3478E8u;
            goto label_3478e8;
        }
    }
    ctx->pc = 0x3478D8u;
label_3478d8:
    // 0x3478d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3478d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3478dc:
    // 0x3478dc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3478dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3478e0:
    // 0x3478e0: 0x60f809  jalr        $v1
label_3478e4:
    if (ctx->pc == 0x3478E4u) {
        ctx->pc = 0x3478E8u;
        goto label_3478e8;
    }
    ctx->pc = 0x3478E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3478E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3478E0u, 0x3478E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3478E8u;
label_3478e8:
    // 0x3478e8: 0xc0d0bfe  jal         func_342FF8
label_3478ec:
    if (ctx->pc == 0x3478ECu) {
        ctx->pc = 0x3478ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478E8u;
        // 0x3478ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3478F0u;
        goto label_3478f0;
    }
    ctx->pc = 0x3478E8u;
    SET_GPR_U32(ctx, 31, 0x3478F0u);
    ctx->pc = 0x3478ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3478E8u;
    // 0x3478ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342FF8u, 0x3478E8u, 0x3478F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3478F0u;
label_3478f0:
    // 0x3478f0: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x3478f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
label_3478f4:
    // 0x3478f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3478f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3478f8:
    // 0x3478f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3478f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3478fc:
    // 0x3478fc: 0x3e00008  jr          $ra
label_347900:
    if (ctx->pc == 0x347900u) {
        ctx->pc = 0x347900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478FCu;
        // 0x347900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x347904u;
        goto label_347904;
    }
    ctx->pc = 0x3478FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478FCu;
        // 0x347900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3478FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347904u;
label_347904:
    // 0x347904: 0x0  nop
    ctx->pc = 0x347904u;
    // NOP
    ctx->pc = 0x347908u;
}
