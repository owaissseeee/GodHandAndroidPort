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

// Function: ArenaEm_stepBossIntro
// Address: 0x1f2540 - 0x1f2648
void ArenaEm_stepBossIntro_0x1f2540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ArenaEm_stepBossIntro_0x1f2540");
#endif

    switch (ctx->pc) {
        case 0x1f2598u: goto label_1f2598;
        case 0x1f25a8u: goto label_1f25a8;
        case 0x1f25b4u: goto label_1f25b4;
        case 0x1f25d8u: goto label_1f25d8;
        case 0x1f25e4u: goto label_1f25e4;
        case 0x1f25f4u: goto label_1f25f4;
        case 0x1f25fcu: goto label_1f25fc;
        case 0x1f2620u: goto label_1f2620;
        default: break;
    }

    ctx->pc = 0x1f2540u;

    // 0x1f2540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f2540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f2544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2548: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f2548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f254c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f2550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f2554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f2558: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x1f2558u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f255c: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f2560: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F2560u;
    {
        const bool branch_taken_0x1f2560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2560u;
        // 0x1f2564: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2560) {
            ctx->pc = 0x1F25A0u;
            goto label_1f25a0;
        }
    }
    ctx->pc = 0x1F2568u;
    // 0x1f2568: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2568u;
    {
        const bool branch_taken_0x1f2568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2568) {
            ctx->pc = 0x1F256Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2568u;
            // 0x1f256c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2580u;
            goto label_1f2580;
        }
    }
    ctx->pc = 0x1F2570u;
    // 0x1f2570: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2570u;
    {
        const bool branch_taken_0x1f2570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2570) {
            ctx->pc = 0x1F2590u;
            goto label_1f2590;
        }
    }
    ctx->pc = 0x1F2578u;
    // 0x1f2578: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1F2578u;
    {
        const bool branch_taken_0x1f2578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2578u;
        // 0x1f257c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2578) {
            ctx->pc = 0x1F2638u;
            goto label_1f2638;
        }
    }
    ctx->pc = 0x1F2580u;
label_1f2580:
    // 0x1f2580: 0x50620022  beql        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F2580u;
    {
        const bool branch_taken_0x1f2580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f2580) {
            ctx->pc = 0x1F2584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2580u;
            // 0x1f2584: 0x8e020ba0  lw          $v0, 0xBA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F260Cu;
            goto label_1f260c;
        }
    }
    ctx->pc = 0x1F2588u;
    // 0x1f2588: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1F2588u;
    {
        const bool branch_taken_0x1f2588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2588u;
        // 0x1f258c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2588) {
            ctx->pc = 0x1F2638u;
            goto label_1f2638;
        }
    }
    ctx->pc = 0x1F2590u;
label_1f2590:
    // 0x1f2590: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F2590u;
    SET_GPR_U32(ctx, 31, 0x1F2598u);
    ctx->pc = 0x1F2594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2590u;
    // 0x1f2594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F2590u, 0x1F2598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2598u;
label_1f2598:
    // 0x1f2598: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1F2598u;
    {
        const bool branch_taken_0x1f2598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2598u;
        // 0x1f259c: 0x8e020b94  lw          $v0, 0xB94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2598) {
            ctx->pc = 0x1F2624u;
            goto label_1f2624;
        }
    }
    ctx->pc = 0x1F25A0u;
label_1f25a0:
    // 0x1f25a0: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x1F25A0u;
    SET_GPR_U32(ctx, 31, 0x1F25A8u);
    ctx->pc = 0x1F25A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25A0u;
    // 0x1f25a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x1F25A0u, 0x1F25A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25A8u;
label_1f25a8:
    // 0x1f25a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f25a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25ac: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x1F25ACu;
    SET_GPR_U32(ctx, 31, 0x1F25B4u);
    ctx->pc = 0x1F25B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25ACu;
    // 0x1f25b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x1F25ACu, 0x1F25B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25B4u;
label_1f25b4:
    // 0x1f25b4: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F25B4u;
    {
        const bool branch_taken_0x1f25b4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F25B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25B4u;
        // 0x1f25b8: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25b4) {
            ctx->pc = 0x1F2634u;
            goto label_1f2634;
        }
    }
    ctx->pc = 0x1F25BCu;
    // 0x1f25bc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1f25bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f25c0: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F25C0u;
    {
        const bool branch_taken_0x1f25c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f25c0) {
            ctx->pc = 0x1F25C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F25C0u;
            // 0x1f25c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2638u;
            goto label_1f2638;
        }
    }
    ctx->pc = 0x1F25C8u;
    // 0x1f25c8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1f25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1f25cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f25ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25d0: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x1F25D0u;
    SET_GPR_U32(ctx, 31, 0x1F25D8u);
    ctx->pc = 0x1F25D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25D0u;
    // 0x1f25d4: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x1F25D0u, 0x1F25D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25D8u;
label_1f25d8:
    // 0x1f25d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f25d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25dc: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x1F25DCu;
    SET_GPR_U32(ctx, 31, 0x1F25E4u);
    ctx->pc = 0x1F25E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25DCu;
    // 0x1f25e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x1F25DCu, 0x1F25E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25E4u;
label_1f25e4:
    // 0x1f25e4: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x1f25e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f25e8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f25e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f25ec: 0xc0a421a  jal         func_290868
    ctx->pc = 0x1F25ECu;
    SET_GPR_U32(ctx, 31, 0x1F25F4u);
    ctx->pc = 0x1F25F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25ECu;
    // 0x1f25f0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x1F25ECu, 0x1F25F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25F4u;
label_1f25f4:
    // 0x1f25f4: 0xc09d874  jal         func_2761D0
    ctx->pc = 0x1F25F4u;
    SET_GPR_U32(ctx, 31, 0x1F25FCu);
    ctx->pc = 0x1F25F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25F4u;
    // 0x1f25f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761D0u, 0x1F25F4u, 0x1F25FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25FCu;
label_1f25fc:
    // 0x1f25fc: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f2600: 0x240300bf  addiu       $v1, $zero, 0xBF
    ctx->pc = 0x1f2600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x1f2604: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2604u;
    {
        const bool branch_taken_0x1f2604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2604u;
        // 0x1f2608: 0xae030ba0  sw          $v1, 0xBA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2604) {
            ctx->pc = 0x1F2624u;
            goto label_1f2624;
        }
    }
    ctx->pc = 0x1F260Cu;
label_1f260c:
    // 0x1f260c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F260Cu;
    {
        const bool branch_taken_0x1f260c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F260Cu;
        // 0x1f2610: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f260c) {
            ctx->pc = 0x1F2630u;
            goto label_1f2630;
        }
    }
    ctx->pc = 0x1F2614u;
    // 0x1f2614: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1f2614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1f2618: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x1F2618u;
    SET_GPR_U32(ctx, 31, 0x1F2620u);
    ctx->pc = 0x1F261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2618u;
    // 0x1f261c: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x1F2618u, 0x1F2620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2620u;
label_1f2620:
    // 0x1f2620: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f2620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
label_1f2624:
    // 0x1f2624: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2628: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2628u;
    {
        const bool branch_taken_0x1f2628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2628u;
        // 0x1f262c: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2628) {
            ctx->pc = 0x1F2634u;
            goto label_1f2634;
        }
    }
    ctx->pc = 0x1F2630u;
label_1f2630:
    // 0x1f2630: 0xae020ba0  sw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f2630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 2));
label_1f2634:
    // 0x1f2634: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f2634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2638:
    // 0x1f2638: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f2638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f263c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f263cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2640: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2640u;
        // 0x1f2644: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2648u;
}
