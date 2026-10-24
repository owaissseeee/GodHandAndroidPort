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

// Function: cOmBase_countGroupsInAction211
// Address: 0x260650 - 0x2606e8
void cOmBase_countGroupsInAction211_0x260650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_countGroupsInAction211_0x260650");
#endif

    switch (ctx->pc) {
        case 0x260690u: goto label_260690;
        case 0x2606a4u: goto label_2606a4;
        case 0x2606b8u: goto label_2606b8;
        case 0x2606ccu: goto label_2606cc;
        default: break;
    }

    ctx->pc = 0x260650u;

    // 0x260650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x260650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x260654: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x260654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x260658: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x260658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x26065c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26065cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260660: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x260660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x260664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x260668: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x260668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x26066c: 0x38420211  xori        $v0, $v0, 0x211
    ctx->pc = 0x26066cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)529);
    // 0x260670: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x260670u;
    {
        const bool branch_taken_0x260670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260670) {
            ctx->pc = 0x260674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260670u;
            // 0x260674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2606D0u;
            goto label_2606d0;
        }
    }
    ctx->pc = 0x260678u;
    // 0x260678: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x260678u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x26067c: 0x964502fe  lhu         $a1, 0x2FE($s2)
    ctx->pc = 0x26067cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
    // 0x260680: 0x263164f0  addiu       $s1, $s1, 0x64F0
    ctx->pc = 0x260680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 25840));
    // 0x260684: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x260684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x260688: 0xc0a4670  jal         func_2919C0
    ctx->pc = 0x260688u;
    SET_GPR_U32(ctx, 31, 0x260690u);
    ctx->pc = 0x26068Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260688u;
    // 0x26068c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x260688u, 0x260690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260690u;
label_260690:
    // 0x260690: 0x964502fe  lhu         $a1, 0x2FE($s2)
    ctx->pc = 0x260690u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
    // 0x260694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x260694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x260698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26069c: 0xc0a4670  jal         func_2919C0
    ctx->pc = 0x26069Cu;
    SET_GPR_U32(ctx, 31, 0x2606A4u);
    ctx->pc = 0x2606A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26069Cu;
    // 0x2606a0: 0x24060203  addiu       $a2, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x26069Cu, 0x2606A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606A4u;
label_2606a4:
    // 0x2606a4: 0x964502fe  lhu         $a1, 0x2FE($s2)
    ctx->pc = 0x2606a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
    // 0x2606a8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2606a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2606ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2606acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2606b0: 0xc0a4670  jal         func_2919C0
    ctx->pc = 0x2606B0u;
    SET_GPR_U32(ctx, 31, 0x2606B8u);
    ctx->pc = 0x2606B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2606B0u;
    // 0x2606b4: 0x24060227  addiu       $a2, $zero, 0x227 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 551));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x2606B0u, 0x2606B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606B8u;
label_2606b8:
    // 0x2606b8: 0x964502fe  lhu         $a1, 0x2FE($s2)
    ctx->pc = 0x2606b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
    // 0x2606bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2606bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2606c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2606c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2606c4: 0xc0a4670  jal         func_2919C0
    ctx->pc = 0x2606C4u;
    SET_GPR_U32(ctx, 31, 0x2606CCu);
    ctx->pc = 0x2606C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2606C4u;
    // 0x2606c8: 0x2406022a  addiu       $a2, $zero, 0x22A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 554));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919C0u, 0x2606C4u, 0x2606CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606CCu;
label_2606cc:
    // 0x2606cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2606ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2606d0:
    // 0x2606d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2606d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2606d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2606d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2606d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2606d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2606dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2606dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2606e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2606E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2606E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606E0u;
        // 0x2606e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2606E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2606E8u;
}
