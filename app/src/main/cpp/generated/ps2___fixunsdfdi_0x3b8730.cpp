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

// Function: __fixunsdfdi
// Address: 0x3b8730 - 0x3b8820
void ps2___fixunsdfdi_0x3b8730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fixunsdfdi_0x3b8730");
#endif

    switch (ctx->pc) {
        case 0x3b8750u: goto label_3b8750;
        case 0x3b8768u: goto label_3b8768;
        case 0x3b8770u: goto label_3b8770;
        case 0x3b8784u: goto label_3b8784;
        case 0x3b8798u: goto label_3b8798;
        case 0x3b87a4u: goto label_3b87a4;
        case 0x3b87b0u: goto label_3b87b0;
        case 0x3b87c4u: goto label_3b87c4;
        case 0x3b87d4u: goto label_3b87d4;
        case 0x3b87dcu: goto label_3b87dc;
        case 0x3b87f4u: goto label_3b87f4;
        default: break;
    }

    ctx->pc = 0x3b8730u;

    // 0x3b8730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b8730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b8734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b8734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8738: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b8738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b873c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b873cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8740: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b8740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b8744: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b8744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b8748: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3B8748u;
    SET_GPR_U32(ctx, 31, 0x3B8750u);
    ctx->pc = 0x3B874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8748u;
    // 0x3b874c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3B8748u, 0x3B8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8750u;
label_3b8750:
    // 0x3b8750: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3B8750u;
    {
        const bool branch_taken_0x3b8750 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3B8754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8750u;
        // 0x3b8754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8750) {
            ctx->pc = 0x3B8804u;
            goto label_3b8804;
        }
    }
    ctx->pc = 0x3B8758u;
    // 0x3b8758: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x3b8758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x3b875c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3b875cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3b8760: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3B8760u;
    SET_GPR_U32(ctx, 31, 0x3B8768u);
    ctx->pc = 0x3B8764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8760u;
    // 0x3b8764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3B8760u, 0x3B8768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8768u;
label_3b8768:
    // 0x3b8768: 0xc0c7a84  jal         func_31EA10
    ctx->pc = 0x3B8768u;
    SET_GPR_U32(ctx, 31, 0x3B8770u);
    ctx->pc = 0x3B876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8768u;
    // 0x3b876c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA10u, 0x3B8768u, 0x3B8770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8770u;
label_3b8770:
    // 0x3b8770: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x3b8770u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b8774: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8774u;
    {
        const bool branch_taken_0x3b8774 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x3B8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8774u;
        // 0x3b8778: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8774) {
            ctx->pc = 0x3B878Cu;
            goto label_3b878c;
        }
    }
    ctx->pc = 0x3B877Cu;
    // 0x3b877c: 0xc0c7726  jal         func_31DC98
    ctx->pc = 0x3B877Cu;
    SET_GPR_U32(ctx, 31, 0x3B8784u);
    ctx->pc = 0x3B8780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B877Cu;
    // 0x3b8780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DC98u, 0x3B877Cu, 0x3B8784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8784u;
label_3b8784:
    // 0x3b8784: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B8784u;
    {
        const bool branch_taken_0x3b8784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8784u;
        // 0x3b8788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8784) {
            ctx->pc = 0x3B87A8u;
            goto label_3b87a8;
        }
    }
    ctx->pc = 0x3B878Cu;
label_3b878c:
    // 0x3b878c: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x3b878cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x3b8790: 0xc0c7726  jal         func_31DC98
    ctx->pc = 0x3B8790u;
    SET_GPR_U32(ctx, 31, 0x3B8798u);
    ctx->pc = 0x3B8794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8790u;
    // 0x3b8794: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DC98u, 0x3B8790u, 0x3B8798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8798u;
label_3b8798:
    // 0x3b8798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b8798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b879c: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3B879Cu;
    SET_GPR_U32(ctx, 31, 0x3B87A4u);
    ctx->pc = 0x3B87A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B879Cu;
    // 0x3b87a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3B879Cu, 0x3B87A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B87A4u;
label_3b87a4:
    // 0x3b87a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b87a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b87a8:
    // 0x3b87a8: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3B87A8u;
    SET_GPR_U32(ctx, 31, 0x3B87B0u);
    ctx->pc = 0x3B87ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B87A8u;
    // 0x3b87ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3B87A8u, 0x3B87B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B87B0u;
label_3b87b0:
    // 0x3b87b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3b87b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b87b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b87b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b87b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b87b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b87bc: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3B87BCu;
    SET_GPR_U32(ctx, 31, 0x3B87C4u);
    ctx->pc = 0x3B87C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B87BCu;
    // 0x3b87c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3B87BCu, 0x3B87C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B87C4u;
label_3b87c4:
    // 0x3b87c4: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B87C4u;
    {
        const bool branch_taken_0x3b87c4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B87C4u;
        // 0x3b87c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b87c4) {
            ctx->pc = 0x3B87ECu;
            goto label_3b87ec;
        }
    }
    ctx->pc = 0x3B87CCu;
    // 0x3b87cc: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3B87CCu;
    SET_GPR_U32(ctx, 31, 0x3B87D4u);
    ctx->pc = 0x3B87D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B87CCu;
    // 0x3b87d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3B87CCu, 0x3B87D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B87D4u;
label_3b87d4:
    // 0x3b87d4: 0xc0c7a84  jal         func_31EA10
    ctx->pc = 0x3B87D4u;
    SET_GPR_U32(ctx, 31, 0x3B87DCu);
    ctx->pc = 0x3B87D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B87D4u;
    // 0x3b87d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA10u, 0x3B87D4u, 0x3B87DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B87DCu;
label_3b87dc:
    // 0x3b87dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b87dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b87e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3b87e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b87e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B87E4u;
    {
        const bool branch_taken_0x3b87e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B87E4u;
        // 0x3b87e8: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b87e4) {
            ctx->pc = 0x3B8800u;
            goto label_3b8800;
        }
    }
    ctx->pc = 0x3B87ECu;
label_3b87ec:
    // 0x3b87ec: 0xc0c7a84  jal         func_31EA10
    ctx->pc = 0x3B87ECu;
    SET_GPR_U32(ctx, 31, 0x3B87F4u);
    ctx->pc = 0x3B87F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B87ECu;
    // 0x3b87f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA10u, 0x3B87ECu, 0x3B87F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B87F4u;
label_3b87f4:
    // 0x3b87f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b87f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b87f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3b87f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b87fc: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3b87fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_3b8800:
    // 0x3b8800: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b8800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b8804:
    // 0x3b8804: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b8804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b8808: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b8808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b880c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b880cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b8810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8814: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8814u;
        // 0x3b8818: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B881Cu;
    // 0x3b881c: 0x0  nop
    ctx->pc = 0x3b881cu;
    // NOP
    ctx->pc = 0x3b8820u;
}
