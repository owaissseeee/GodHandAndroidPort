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

// Function: UpdatePhaseWithPostStepA
// Address: 0x1ac838 - 0x1ac908
void UpdatePhaseWithPostStepA_0x1ac838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePhaseWithPostStepA_0x1ac838");
#endif

    switch (ctx->pc) {
        case 0x1ac838u: goto label_1ac838;
        case 0x1ac83cu: goto label_1ac83c;
        case 0x1ac840u: goto label_1ac840;
        case 0x1ac844u: goto label_1ac844;
        case 0x1ac848u: goto label_1ac848;
        case 0x1ac84cu: goto label_1ac84c;
        case 0x1ac850u: goto label_1ac850;
        case 0x1ac854u: goto label_1ac854;
        case 0x1ac858u: goto label_1ac858;
        case 0x1ac85cu: goto label_1ac85c;
        case 0x1ac860u: goto label_1ac860;
        case 0x1ac864u: goto label_1ac864;
        case 0x1ac868u: goto label_1ac868;
        case 0x1ac86cu: goto label_1ac86c;
        case 0x1ac870u: goto label_1ac870;
        case 0x1ac874u: goto label_1ac874;
        case 0x1ac878u: goto label_1ac878;
        case 0x1ac87cu: goto label_1ac87c;
        case 0x1ac880u: goto label_1ac880;
        case 0x1ac884u: goto label_1ac884;
        case 0x1ac888u: goto label_1ac888;
        case 0x1ac88cu: goto label_1ac88c;
        case 0x1ac890u: goto label_1ac890;
        case 0x1ac894u: goto label_1ac894;
        case 0x1ac898u: goto label_1ac898;
        case 0x1ac89cu: goto label_1ac89c;
        case 0x1ac8a0u: goto label_1ac8a0;
        case 0x1ac8a4u: goto label_1ac8a4;
        case 0x1ac8a8u: goto label_1ac8a8;
        case 0x1ac8acu: goto label_1ac8ac;
        case 0x1ac8b0u: goto label_1ac8b0;
        case 0x1ac8b4u: goto label_1ac8b4;
        case 0x1ac8b8u: goto label_1ac8b8;
        case 0x1ac8bcu: goto label_1ac8bc;
        case 0x1ac8c0u: goto label_1ac8c0;
        case 0x1ac8c4u: goto label_1ac8c4;
        case 0x1ac8c8u: goto label_1ac8c8;
        case 0x1ac8ccu: goto label_1ac8cc;
        case 0x1ac8d0u: goto label_1ac8d0;
        case 0x1ac8d4u: goto label_1ac8d4;
        case 0x1ac8d8u: goto label_1ac8d8;
        case 0x1ac8dcu: goto label_1ac8dc;
        case 0x1ac8e0u: goto label_1ac8e0;
        case 0x1ac8e4u: goto label_1ac8e4;
        case 0x1ac8e8u: goto label_1ac8e8;
        case 0x1ac8ecu: goto label_1ac8ec;
        case 0x1ac8f0u: goto label_1ac8f0;
        case 0x1ac8f4u: goto label_1ac8f4;
        case 0x1ac8f8u: goto label_1ac8f8;
        case 0x1ac8fcu: goto label_1ac8fc;
        case 0x1ac900u: goto label_1ac900;
        case 0x1ac904u: goto label_1ac904;
        default: break;
    }

    ctx->pc = 0x1ac838u;

label_1ac838:
    // 0x1ac838: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ac838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ac83c:
    // 0x1ac83c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ac83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ac840:
    // 0x1ac840: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ac840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ac844:
    // 0x1ac844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac848:
    // 0x1ac848: 0xc06ddac  jal         func_1B76B0
label_1ac84c:
    if (ctx->pc == 0x1AC84Cu) {
        ctx->pc = 0x1AC84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC848u;
        // 0x1ac84c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC850u;
        goto label_1ac850;
    }
    ctx->pc = 0x1AC848u;
    SET_GPR_U32(ctx, 31, 0x1AC850u);
    ctx->pc = 0x1AC84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC848u;
    // 0x1ac84c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1AC848u, 0x1AC850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC850u;
label_1ac850:
    // 0x1ac850: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_1ac854:
    if (ctx->pc == 0x1AC854u) {
        ctx->pc = 0x1AC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC850u;
        // 0x1ac854: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC858u;
        goto label_1ac858;
    }
    ctx->pc = 0x1AC850u;
    {
        const bool branch_taken_0x1ac850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC850u;
        // 0x1ac854: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac850) {
            ctx->pc = 0x1AC8F4u;
            goto label_1ac8f4;
        }
    }
    ctx->pc = 0x1AC858u;
label_1ac858:
    // 0x1ac858: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1ac858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1ac85c:
    // 0x1ac85c: 0x2446dc18  addiu       $a2, $v0, -0x23E8
    ctx->pc = 0x1ac85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958104));
label_1ac860:
    // 0x1ac860: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1ac860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac864:
    // 0x1ac864: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ac864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ac868:
    // 0x1ac868: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1ac868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1ac86c:
    // 0x1ac86c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1ac86cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1ac870:
    // 0x1ac870: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1ac874:
    if (ctx->pc == 0x1AC874u) {
        ctx->pc = 0x1AC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC870u;
        // 0x1ac874: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC878u;
        goto label_1ac878;
    }
    ctx->pc = 0x1AC870u;
    {
        const bool branch_taken_0x1ac870 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC870u;
        // 0x1ac874: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac870) {
            ctx->pc = 0x1AC89Cu;
            goto label_1ac89c;
        }
    }
    ctx->pc = 0x1AC878u;
label_1ac878:
    // 0x1ac878: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1ac878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1ac87c:
    // 0x1ac87c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1ac87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ac880:
    // 0x1ac880: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ac880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ac884:
    // 0x1ac884: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ac884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ac888:
    // 0x1ac888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ac888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ac88c:
    // 0x1ac88c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1ac88cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1ac890:
    // 0x1ac890: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1ac890u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1ac894:
    // 0x1ac894: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ac898:
    if (ctx->pc == 0x1AC898u) {
        ctx->pc = 0x1AC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC894u;
        // 0x1ac898: 0x2503dc18  addiu       $v1, $t0, -0x23E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC89Cu;
        goto label_1ac89c;
    }
    ctx->pc = 0x1AC894u;
    {
        const bool branch_taken_0x1ac894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC894u;
        // 0x1ac898: 0x2503dc18  addiu       $v1, $t0, -0x23E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac894) {
            ctx->pc = 0x1AC8A8u;
            goto label_1ac8a8;
        }
    }
    ctx->pc = 0x1AC89Cu;
label_1ac89c:
    // 0x1ac89c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1ac89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1ac8a0:
    // 0x1ac8a0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1ac8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ac8a4:
    // 0x1ac8a4: 0x2503dc18  addiu       $v1, $t0, -0x23E8
    ctx->pc = 0x1ac8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958104));
label_1ac8a8:
    // 0x1ac8a8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1ac8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1ac8ac:
    // 0x1ac8ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ac8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ac8b0:
    // 0x1ac8b0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1ac8b4:
    if (ctx->pc == 0x1AC8B4u) {
        ctx->pc = 0x1AC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8B0u;
        // 0x1ac8b4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8B8u;
        goto label_1ac8b8;
    }
    ctx->pc = 0x1AC8B0u;
    {
        const bool branch_taken_0x1ac8b0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8B0u;
        // 0x1ac8b4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8b0) {
            ctx->pc = 0x1AC8CCu;
            goto label_1ac8cc;
        }
    }
    ctx->pc = 0x1AC8B8u;
label_1ac8b8:
    // 0x1ac8b8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1ac8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1ac8bc:
    // 0x1ac8bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1ac8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1ac8c0:
    // 0x1ac8c0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1ac8c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1ac8c4:
    // 0x1ac8c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ac8c8:
    if (ctx->pc == 0x1AC8C8u) {
        ctx->pc = 0x1AC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8C4u;
        // 0x1ac8c8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8CCu;
        goto label_1ac8cc;
    }
    ctx->pc = 0x1AC8C4u;
    {
        const bool branch_taken_0x1ac8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8C4u;
        // 0x1ac8c8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8c4) {
            ctx->pc = 0x1AC8D0u;
            goto label_1ac8d0;
        }
    }
    ctx->pc = 0x1AC8CCu;
label_1ac8cc:
    // 0x1ac8cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ac8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ac8d0:
    // 0x1ac8d0: 0xc0f809  jalr        $a2
label_1ac8d4:
    if (ctx->pc == 0x1AC8D4u) {
        ctx->pc = 0x1AC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8D0u;
        // 0x1ac8d4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8D8u;
        goto label_1ac8d8;
    }
    ctx->pc = 0x1AC8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1AC8D8u);
        ctx->pc = 0x1AC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8D0u;
        // 0x1ac8d4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC8D0u, 0x1AC8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC8D8u;
label_1ac8d8:
    // 0x1ac8d8: 0xc06b242  jal         func_1AC908
label_1ac8dc:
    if (ctx->pc == 0x1AC8DCu) {
        ctx->pc = 0x1AC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8D8u;
        // 0x1ac8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8E0u;
        goto label_1ac8e0;
    }
    ctx->pc = 0x1AC8D8u;
    SET_GPR_U32(ctx, 31, 0x1AC8E0u);
    ctx->pc = 0x1AC8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC8D8u;
    // 0x1ac8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC908u, 0x1AC8D8u, 0x1AC8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC8E0u;
label_1ac8e0:
    // 0x1ac8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac8e4:
    // 0x1ac8e4: 0xc0aa1fa  jal         func_2A87E8
label_1ac8e8:
    if (ctx->pc == 0x1AC8E8u) {
        ctx->pc = 0x1AC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8E4u;
        // 0x1ac8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8ECu;
        goto label_1ac8ec;
    }
    ctx->pc = 0x1AC8E4u;
    SET_GPR_U32(ctx, 31, 0x1AC8ECu);
    ctx->pc = 0x1AC8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC8E4u;
    // 0x1ac8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1AC8E4u, 0x1AC8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC8ECu;
label_1ac8ec:
    // 0x1ac8ec: 0xc06ddb6  jal         func_1B76D8
label_1ac8f0:
    if (ctx->pc == 0x1AC8F0u) {
        ctx->pc = 0x1AC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8ECu;
        // 0x1ac8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8F4u;
        goto label_1ac8f4;
    }
    ctx->pc = 0x1AC8ECu;
    SET_GPR_U32(ctx, 31, 0x1AC8F4u);
    ctx->pc = 0x1AC8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC8ECu;
    // 0x1ac8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1AC8ECu, 0x1AC8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC8F4u;
label_1ac8f4:
    // 0x1ac8f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ac8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac8f8:
    // 0x1ac8f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ac8f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac8fc:
    // 0x1ac8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac900:
    // 0x1ac900: 0x3e00008  jr          $ra
label_1ac904:
    if (ctx->pc == 0x1AC904u) {
        ctx->pc = 0x1AC904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC900u;
        // 0x1ac904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC908u;
        goto label_fallthrough_0x1ac900;
    }
    ctx->pc = 0x1AC900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC900u;
        // 0x1ac904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ac900:
    ctx->pc = 0x1AC908u;
}
