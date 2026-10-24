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

// Function: func_003447A8
// Address: 0x3447a8 - 0x3448b0
void func_003447A8_0x3447a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003447A8_0x3447a8");
#endif

    switch (ctx->pc) {
        case 0x3447dcu: goto label_3447dc;
        case 0x3447f4u: goto label_3447f4;
        case 0x344814u: goto label_344814;
        case 0x344828u: goto label_344828;
        case 0x344830u: goto label_344830;
        case 0x34484cu: goto label_34484c;
        case 0x344864u: goto label_344864;
        case 0x344874u: goto label_344874;
        case 0x344890u: goto label_344890;
        default: break;
    }

    ctx->pc = 0x3447a8u;

    // 0x3447a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3447a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3447ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3447acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3447b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3447b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3447b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3447b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3447b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3447bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3447c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3447c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447c4: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x3447c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x3447c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3447c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3447ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3447d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3447d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3447d4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3447D4u;
    SET_GPR_U32(ctx, 31, 0x3447DCu);
    ctx->pc = 0x3447D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3447D4u;
    // 0x3447d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3447D4u, 0x3447DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447DCu;
label_3447dc:
    // 0x3447dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3447dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3447e0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3447e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x3447e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3447e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3447e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3447e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447ec: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x3447ECu;
    SET_GPR_U32(ctx, 31, 0x3447F4u);
    ctx->pc = 0x3447F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3447ECu;
    // 0x3447f0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x3447ECu, 0x3447F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447F4u;
label_3447f4:
    // 0x3447f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3447f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3447f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3447fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344800: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x344800u;
    {
        const bool branch_taken_0x344800 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x344804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344800u;
        // 0x344804: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344800) {
            ctx->pc = 0x344820u;
            goto label_344820;
        }
    }
    ctx->pc = 0x344808u;
    // 0x344808: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x344808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x34480c: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x34480Cu;
    SET_GPR_U32(ctx, 31, 0x344814u);
    ctx->pc = 0x344810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34480Cu;
    // 0x344810: 0x248477d0  addiu       $a0, $a0, 0x77D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x34480Cu, 0x344814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344814u;
label_344814:
    // 0x344814: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x344814u;
    {
        const bool branch_taken_0x344814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344814u;
        // 0x344818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344814) {
            ctx->pc = 0x344894u;
            goto label_344894;
        }
    }
    ctx->pc = 0x34481Cu;
    // 0x34481c: 0x0  nop
    ctx->pc = 0x34481cu;
    // NOP
label_344820:
    // 0x344820: 0xc0d122c  jal         func_3448B0
    ctx->pc = 0x344820u;
    SET_GPR_U32(ctx, 31, 0x344828u);
    ctx->pc = 0x3448B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448B0u, 0x344820u, 0x344828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344828u;
label_344828:
    // 0x344828: 0xc0d19be  jal         func_3466F8
    ctx->pc = 0x344828u;
    SET_GPR_U32(ctx, 31, 0x344830u);
    ctx->pc = 0x34482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344828u;
    // 0x34482c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3466F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3466F8u, 0x344828u, 0x344830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344830u;
label_344830:
    // 0x344830: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x344830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344834: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x344834u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344838: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x344838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34483c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x34483Cu;
    {
        const bool branch_taken_0x34483c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x344840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34483Cu;
        // 0x344840: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34483c) {
            ctx->pc = 0x344894u;
            goto label_344894;
        }
    }
    ctx->pc = 0x344844u;
    // 0x344844: 0xc0d6420  jal         func_359080
    ctx->pc = 0x344844u;
    SET_GPR_U32(ctx, 31, 0x34484Cu);
    ctx->pc = 0x359080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359080u, 0x344844u, 0x34484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34484Cu;
label_34484c:
    // 0x34484c: 0x54530012  bnel        $v0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x34484Cu;
    {
        const bool branch_taken_0x34484c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x34484c) {
            ctx->pc = 0x344850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34484Cu;
            // 0x344850: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344898u;
            goto label_344898;
        }
    }
    ctx->pc = 0x344854u;
    // 0x344854: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x344854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34485c: 0xc0d1354  jal         func_344D50
    ctx->pc = 0x34485Cu;
    SET_GPR_U32(ctx, 31, 0x344864u);
    ctx->pc = 0x344860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34485Cu;
    // 0x344860: 0xae050078  sw          $a1, 0x78($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344D50u, 0x34485Cu, 0x344864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344864u;
label_344864:
    // 0x344864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344868: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x344868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34486c: 0xc0d1252  jal         func_344948
    ctx->pc = 0x34486Cu;
    SET_GPR_U32(ctx, 31, 0x344874u);
    ctx->pc = 0x344870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34486Cu;
    // 0x344870: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344948u, 0x34486Cu, 0x344874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344874u;
label_344874:
    // 0x344874: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x344874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x344878: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x344878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x34487c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34487cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344880: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x344880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x344884: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x344884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344888: 0xc0d123e  jal         func_3448F8
    ctx->pc = 0x344888u;
    SET_GPR_U32(ctx, 31, 0x344890u);
    ctx->pc = 0x34488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344888u;
    // 0x34488c: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448F8u, 0x344888u, 0x344890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344890u;
label_344890:
    // 0x344890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x344890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_344894:
    // 0x344894: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x344894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_344898:
    // 0x344898: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x344898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34489c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34489cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3448a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3448a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3448a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3448a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3448a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3448A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3448ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448A8u;
        // 0x3448ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3448A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3448B0u;
}
