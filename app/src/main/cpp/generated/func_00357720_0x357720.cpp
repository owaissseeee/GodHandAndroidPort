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

// Function: func_00357720
// Address: 0x357720 - 0x3577a8
void func_00357720_0x357720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357720_0x357720");
#endif

    switch (ctx->pc) {
        case 0x357760u: goto label_357760;
        default: break;
    }

    ctx->pc = 0x357720u;

    // 0x357720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357728: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35772c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35772cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357730: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x357730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x357734: 0x26300a0c  addiu       $s0, $s1, 0xA0C
    ctx->pc = 0x357734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2572));
    // 0x357738: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x357738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x35773c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x35773Cu;
    {
        const bool branch_taken_0x35773c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35773c) {
            ctx->pc = 0x357740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35773Cu;
            // 0x357740: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357764u;
            goto label_357764;
        }
    }
    ctx->pc = 0x357744u;
    // 0x357744: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x357744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x357748: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x357748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35774c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35774Cu;
    {
        const bool branch_taken_0x35774c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35774c) {
            ctx->pc = 0x357750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35774Cu;
            // 0x357750: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357764u;
            goto label_357764;
        }
    }
    ctx->pc = 0x357754u;
    // 0x357754: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x357754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x357758: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x357758u;
    SET_GPR_U32(ctx, 31, 0x357760u);
    ctx->pc = 0x35775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357758u;
    // 0x35775c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x357758u, 0x357760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357760u;
label_357760:
    // 0x357760: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x357760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_357764:
    // 0x357764: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x357764u;
    {
        const bool branch_taken_0x357764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357764) {
            ctx->pc = 0x357768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357764u;
            // 0x357768: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357798u;
            goto label_357798;
        }
    }
    ctx->pc = 0x35776Cu;
    // 0x35776c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x35776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x357770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357774: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x357774u;
    {
        const bool branch_taken_0x357774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x357778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357774u;
        // 0x357778: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357774) {
            ctx->pc = 0x357798u;
            goto label_357798;
        }
    }
    ctx->pc = 0x35777Cu;
    // 0x35777c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35777cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357784: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x357784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x357788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35778c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x35778cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357790: 0x80d6800  j           func_35A000
    ctx->pc = 0x357790u;
    ctx->pc = 0x357794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357790u;
    // 0x357794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x357790u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x357798u;
label_357798:
    // 0x357798: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35779c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35779cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3577a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3577A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3577A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3577A0u;
        // 0x3577a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3577A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3577A8u;
}
