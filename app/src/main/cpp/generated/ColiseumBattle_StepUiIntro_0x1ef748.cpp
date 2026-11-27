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

// Function: ColiseumBattle_StepUiIntro
// Address: 0x1ef748 - 0x1ef810
void ColiseumBattle_StepUiIntro_0x1ef748(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_StepUiIntro_0x1ef748");
#endif

    if (__builtin_expect(ctx->pc != 0x1ef748u, 0)) {
        switch (ctx->pc) {
            case 0x1ef788u: goto label_1ef788;
            case 0x1ef7ecu: goto label_1ef7ec;
            case 0x1ef7f4u: goto label_1ef7f4;
            case 0x1ef7fcu: goto label_1ef7fc;
            default: break;
        }
    }


    // 0x1ef748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ef74c: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef750: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ef750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ef754: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ef758: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef75c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef760: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ef760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef764: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EF764u;
    {
        const bool branch_taken_0x1ef764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EF768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF764u;
        // 0x1ef768: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef764) {
            ctx->pc = 0x1EF7A0u;
            goto label_1ef7a0;
        }
    }
    // 0x1ef76c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EF76Cu;
    {
        const bool branch_taken_0x1ef76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF76Cu;
        // 0x1ef770: 0x26110060  addiu       $s1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef76c) {
            ctx->pc = 0x1EF7E4u;
            goto label_1ef7e4;
        }
    }
    // 0x1ef774: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EF774u;
    {
        const bool branch_taken_0x1ef774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF774u;
        // 0x1ef778: 0x26020060  addiu       $v0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef774) {
            ctx->pc = 0x1EF7E4u;
            goto label_1ef7e4;
        }
    }
    // 0x1ef77c: 0x40202d  daddu       $a0, $v0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef780: 0xc07cc98  jal         func_1F3260
    SET_GPR_U32(ctx, 31, 0x1EF788u);
    ctx->pc = 0x1EF784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF780u;
    // 0x1ef784: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001F3260_0x1f3260, 0x1f3260u, 0x1ef788u)) {
        return;
    }
label_1ef788:
    // 0x1ef788: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ef788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef78c: 0x2403003c  addiu       $v1, $zero, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ef790: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1ef790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1ef794: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ef798: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF798u;
    {
        const bool branch_taken_0x1ef798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF798u;
        // 0x1ef79c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef798) {
            ctx->pc = 0x1EF7E4u;
            goto label_1ef7e4;
        }
    }
label_1ef7a0:
    // 0x1ef7a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ef7a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF7A4u;
    {
        const bool branch_taken_0x1ef7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7A4u;
        // 0x1ef7a8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7a4) {
            ctx->pc = 0x1EF7B8u;
            goto label_1ef7b8;
        }
    }
    // 0x1ef7ac: 0x182d  daddu       $v1, $zero, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF7B0u;
    {
        const bool branch_taken_0x1ef7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7B0u;
        // 0x1ef7b4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7b0) {
            ctx->pc = 0x1EF7BCu;
            goto label_1ef7bc;
        }
    }
label_1ef7b8:
    // 0x1ef7b8: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef7bc:
    // 0x1ef7bc: 0x306200ff  andi        $v0, $v1, 0xFF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ef7c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF7C0u;
    {
        const bool branch_taken_0x1ef7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7C0u;
        // 0x1ef7c4: 0x26110060  addiu       $s1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7c0) {
            ctx->pc = 0x1EF7E4u;
            goto label_1ef7e4;
        }
    }
    // 0x1ef7c8: 0x3c020074  lui         $v0, 0x74
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1ef7cc: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x1ef7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A24u));
    // 0x1ef7d0: 0x34630008  ori         $v1, $v1, 0x8
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1ef7d4: 0xac437a24  sw          $v1, 0x7A24($v0)
    ctx->pc = 0x1ef7d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
    // 0x1ef7d8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1ef7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ef7dc: 0x24840001  addiu       $a0, $a0, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ef7e0: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1ef7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_1ef7e4:
    // 0x1ef7e4: 0xc07c124  jal         func_1F0490
    SET_GPR_U32(ctx, 31, 0x1EF7ECu);
    ctx->pc = 0x1EF7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF7E4u;
    // 0x1ef7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &NoOp_1F0490_0x1f0490, 0x1f0490u, 0x1ef7ecu)) {
        return;
    }
label_1ef7ec:
    // 0x1ef7ec: 0xc07ca3c  jal         func_1F28F0
    SET_GPR_U32(ctx, 31, 0x1EF7F4u);
    ctx->pc = 0x1EF7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF7ECu;
    // 0x1ef7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001F28F0_0x1f28f0, 0x1f28f0u, 0x1ef7f4u)) {
        return;
    }
label_1ef7f4:
    // 0x1ef7f4: 0xc07ca64  jal         func_1F2990
    SET_GPR_U32(ctx, 31, 0x1EF7FCu);
    ctx->pc = 0x1EF7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF7F4u;
    // 0x1ef7f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001F2990_0x1f2990, 0x1f2990u, 0x1ef7fcu)) {
        return;
    }
label_1ef7fc:
    // 0x1ef7fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ef7fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef808: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF808u;
        // 0x1ef80c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF810u;
}