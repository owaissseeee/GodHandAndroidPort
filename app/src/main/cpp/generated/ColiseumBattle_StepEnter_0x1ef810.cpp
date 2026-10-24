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

// Function: ColiseumBattle_StepEnter
// Address: 0x1ef810 - 0x1ef8b8
void ColiseumBattle_StepEnter_0x1ef810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_StepEnter_0x1ef810");
#endif

    switch (ctx->pc) {
        case 0x1ef860u: goto label_1ef860;
        case 0x1ef86cu: goto label_1ef86c;
        case 0x1ef89cu: goto label_1ef89c;
        default: break;
    }

    ctx->pc = 0x1ef810u;

    // 0x1ef810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef818: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ef818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ef81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef824: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ef824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef828: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF828u;
    {
        const bool branch_taken_0x1ef828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF828u;
        // 0x1ef82c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef828) {
            ctx->pc = 0x1EF874u;
            goto label_1ef874;
        }
    }
    ctx->pc = 0x1EF830u;
    // 0x1ef830: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1EF830u;
    {
        const bool branch_taken_0x1ef830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef830) {
            ctx->pc = 0x1EF834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF830u;
            // 0x1ef834: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF8ACu;
            goto label_1ef8ac;
        }
    }
    ctx->pc = 0x1EF838u;
    // 0x1ef838: 0x5460001c  bnel        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EF838u;
    {
        const bool branch_taken_0x1ef838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef838) {
            ctx->pc = 0x1EF83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF838u;
            // 0x1ef83c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF8ACu;
            goto label_1ef8ac;
        }
    }
    ctx->pc = 0x1EF840u;
    // 0x1ef840: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1ef840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1ef844: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1ef844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1ef848: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1ef848u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ef84c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ef84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ef850: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EF850u;
    {
        const bool branch_taken_0x1ef850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef850) {
            ctx->pc = 0x1EF854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF850u;
            // 0x1ef854: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF8ACu;
            goto label_1ef8ac;
        }
    }
    ctx->pc = 0x1EF858u;
    // 0x1ef858: 0xc07bb1a  jal         func_1EEC68
    ctx->pc = 0x1EF858u;
    SET_GPR_U32(ctx, 31, 0x1EF860u);
    ctx->pc = 0x1EEC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEC68u, 0x1EF858u, 0x1EF860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF860u;
label_1ef860:
    // 0x1ef860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef864: 0xc07bf12  jal         func_1EFC48
    ctx->pc = 0x1EF864u;
    SET_GPR_U32(ctx, 31, 0x1EF86Cu);
    ctx->pc = 0x1EF868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF864u;
    // 0x1ef868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFC48u, 0x1EF864u, 0x1EF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF86Cu;
label_1ef86c:
    // 0x1ef86c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EF86Cu;
    {
        const bool branch_taken_0x1ef86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF86Cu;
        // 0x1ef870: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef86c) {
            ctx->pc = 0x1EF8A0u;
            goto label_1ef8a0;
        }
    }
    ctx->pc = 0x1EF874u;
label_1ef874:
    // 0x1ef874: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1ef874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1ef878: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1ef878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1ef87c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1ef87cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ef880: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ef880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ef884: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF884u;
    {
        const bool branch_taken_0x1ef884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF884u;
        // 0x1ef888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef884) {
            ctx->pc = 0x1EF8A8u;
            goto label_1ef8a8;
        }
    }
    ctx->pc = 0x1EF88Cu;
    // 0x1ef88c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1ef88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1ef890: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ef890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ef894: 0xc07bf40  jal         func_1EFD00
    ctx->pc = 0x1EF894u;
    SET_GPR_U32(ctx, 31, 0x1EF89Cu);
    ctx->pc = 0x1EF898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF894u;
    // 0x1ef898: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFD00u, 0x1EF894u, 0x1EF89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF89Cu;
label_1ef89c:
    // 0x1ef89c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ef89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ef8a0:
    // 0x1ef8a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ef8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ef8a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1ef8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1ef8a8:
    // 0x1ef8a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ef8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ef8ac:
    // 0x1ef8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8B0u;
        // 0x1ef8b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF8B8u;
}
