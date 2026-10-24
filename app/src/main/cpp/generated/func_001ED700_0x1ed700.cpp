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

// Function: func_001ED700
// Address: 0x1ed700 - 0x1ed7c8
void func_001ED700_0x1ed700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ED700_0x1ed700");
#endif

    switch (ctx->pc) {
        case 0x1ed730u: goto label_1ed730;
        case 0x1ed73cu: goto label_1ed73c;
        case 0x1ed764u: goto label_1ed764;
        case 0x1ed780u: goto label_1ed780;
        case 0x1ed78cu: goto label_1ed78c;
        case 0x1ed7b4u: goto label_1ed7b4;
        default: break;
    }

    ctx->pc = 0x1ed700u;

    // 0x1ed700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ed700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ed704: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ed704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed708: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ed708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ed70c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ed70cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed714: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1ED714u;
    {
        const bool branch_taken_0x1ed714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED714u;
        // 0x1ed718: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed714) {
            ctx->pc = 0x1ED76Cu;
            goto label_1ed76c;
        }
    }
    ctx->pc = 0x1ED71Cu;
    // 0x1ed71c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ed71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ed720: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED720u;
    {
        const bool branch_taken_0x1ed720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED720u;
        // 0x1ed724: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed720) {
            ctx->pc = 0x1ED750u;
            goto label_1ed750;
        }
    }
    ctx->pc = 0x1ED728u;
    // 0x1ed728: 0x24f00060  addiu       $s0, $a3, 0x60
    ctx->pc = 0x1ed728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x1ed72c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1ed72cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ed730:
    // 0x1ed730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed734: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ED734u;
    SET_GPR_U32(ctx, 31, 0x1ED73Cu);
    ctx->pc = 0x1ED738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED734u;
    // 0x1ed738: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ED734u, 0x1ED73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED73Cu;
label_1ed73c:
    // 0x1ed73c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ed73cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ed740: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ED740u;
    {
        const bool branch_taken_0x1ed740 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1ED744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED740u;
        // 0x1ed744: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed740) {
            ctx->pc = 0x1ED730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed730;
        }
    }
    ctx->pc = 0x1ED748u;
    // 0x1ed748: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1ED748u;
    {
        const bool branch_taken_0x1ed748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED748u;
        // 0x1ed74c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed748) {
            ctx->pc = 0x1ED7B8u;
            goto label_1ed7b8;
        }
    }
    ctx->pc = 0x1ED750u;
label_1ed750:
    // 0x1ed750: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ed750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed754: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1ed754u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ed758: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1ed758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1ed75c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ED75Cu;
    SET_GPR_U32(ctx, 31, 0x1ED764u);
    ctx->pc = 0x1ED760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED75Cu;
    // 0x1ed760: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ED75Cu, 0x1ED764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED764u;
label_1ed764:
    // 0x1ed764: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1ED764u;
    {
        const bool branch_taken_0x1ed764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED764u;
        // 0x1ed768: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed764) {
            ctx->pc = 0x1ED7B8u;
            goto label_1ed7b8;
        }
    }
    ctx->pc = 0x1ED76Cu;
label_1ed76c:
    // 0x1ed76c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ed76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ed770: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED770u;
    {
        const bool branch_taken_0x1ed770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED770u;
        // 0x1ed774: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed770) {
            ctx->pc = 0x1ED7A0u;
            goto label_1ed7a0;
        }
    }
    ctx->pc = 0x1ED778u;
    // 0x1ed778: 0x24f00060  addiu       $s0, $a3, 0x60
    ctx->pc = 0x1ed778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x1ed77c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1ed77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ed780:
    // 0x1ed780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed784: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ED784u;
    SET_GPR_U32(ctx, 31, 0x1ED78Cu);
    ctx->pc = 0x1ED788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED784u;
    // 0x1ed788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ED784u, 0x1ED78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED78Cu;
label_1ed78c:
    // 0x1ed78c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ed78cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1ed790: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ED790u;
    {
        const bool branch_taken_0x1ed790 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1ED794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED790u;
        // 0x1ed794: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed790) {
            ctx->pc = 0x1ED780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed780;
        }
    }
    ctx->pc = 0x1ED798u;
    // 0x1ed798: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED798u;
    {
        const bool branch_taken_0x1ed798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED798u;
        // 0x1ed79c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed798) {
            ctx->pc = 0x1ED7B8u;
            goto label_1ed7b8;
        }
    }
    ctx->pc = 0x1ED7A0u;
label_1ed7a0:
    // 0x1ed7a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ed7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7a4: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1ed7a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ed7a8: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1ed7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1ed7ac: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ED7ACu;
    SET_GPR_U32(ctx, 31, 0x1ED7B4u);
    ctx->pc = 0x1ED7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED7ACu;
    // 0x1ed7b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ED7ACu, 0x1ED7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7B4u;
label_1ed7b4:
    // 0x1ed7b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ed7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ed7b8:
    // 0x1ed7b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed7bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7C0u;
        // 0x1ed7c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED7C8u;
}
