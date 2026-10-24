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

// Function: Slot1_payoutLine2
// Address: 0x1e24a0 - 0x1e26d8
void Slot1_payoutLine2_0x1e24a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot1_payoutLine2_0x1e24a0");
#endif

    switch (ctx->pc) {
        case 0x1e2520u: goto label_1e2520;
        case 0x1e2534u: goto label_1e2534;
        case 0x1e2544u: goto label_1e2544;
        case 0x1e2594u: goto label_1e2594;
        case 0x1e25c8u: goto label_1e25c8;
        case 0x1e25e4u: goto label_1e25e4;
        case 0x1e2610u: goto label_1e2610;
        case 0x1e2644u: goto label_1e2644;
        case 0x1e2660u: goto label_1e2660;
        case 0x1e2674u: goto label_1e2674;
        case 0x1e2684u: goto label_1e2684;
        case 0x1e26a0u: goto label_1e26a0;
        default: break;
    }

    ctx->pc = 0x1e24a0u;

    // 0x1e24a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e24a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e24a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e24a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e24a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e24ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e24acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e24b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e24b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e24b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e24b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e24b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e24b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e24bc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e24bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e24c0: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E24C0u;
    {
        const bool branch_taken_0x1e24c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24C0u;
        // 0x1e24c4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24c0) {
            ctx->pc = 0x1E2554u;
            goto label_1e2554;
        }
    }
    ctx->pc = 0x1E24C8u;
    // 0x1e24c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E24C8u;
    {
        const bool branch_taken_0x1e24c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e24c8) {
            ctx->pc = 0x1E24CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E24C8u;
            // 0x1e24cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E24E0u;
            goto label_1e24e0;
        }
    }
    ctx->pc = 0x1E24D0u;
    // 0x1e24d0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E24D0u;
    {
        const bool branch_taken_0x1e24d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24D0u;
        // 0x1e24d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24d0) {
            ctx->pc = 0x1E24F8u;
            goto label_1e24f8;
        }
    }
    ctx->pc = 0x1E24D8u;
    // 0x1e24d8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1E24D8u;
    {
        const bool branch_taken_0x1e24d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24D8u;
        // 0x1e24dc: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24d8) {
            ctx->pc = 0x1E26C4u;
            goto label_1e26c4;
        }
    }
    ctx->pc = 0x1E24E0u;
label_1e24e0:
    // 0x1e24e0: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1E24E0u;
    {
        const bool branch_taken_0x1e24e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24E0u;
        // 0x1e24e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24e0) {
            ctx->pc = 0x1E25F8u;
            goto label_1e25f8;
        }
    }
    ctx->pc = 0x1E24E8u;
    // 0x1e24e8: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1E24E8u;
    {
        const bool branch_taken_0x1e24e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24E8u;
        // 0x1e24ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24e8) {
            ctx->pc = 0x1E26B0u;
            goto label_1e26b0;
        }
    }
    ctx->pc = 0x1E24F0u;
    // 0x1e24f0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1E24F0u;
    {
        const bool branch_taken_0x1e24f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24F0u;
        // 0x1e24f4: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24f0) {
            ctx->pc = 0x1E26C4u;
            goto label_1e26c4;
        }
    }
    ctx->pc = 0x1E24F8u;
label_1e24f8:
    // 0x1e24f8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e24fc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1e24fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1e2500: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e2500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e2504: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1e2504u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1e2508: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e2508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e250c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e250cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2510: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2514: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e2514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2518: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1E2518u;
    SET_GPR_U32(ctx, 31, 0x1E2520u);
    ctx->pc = 0x1E251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2518u;
    // 0x1e251c: 0xae220490  sw          $v0, 0x490($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1E2518u, 0x1E2520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2520u;
label_1e2520:
    // 0x1e2520: 0x96250494  lhu         $a1, 0x494($s1)
    ctx->pc = 0x1e2520u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x1e2524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e2524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2528: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e252c: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E252Cu;
    SET_GPR_U32(ctx, 31, 0x1E2534u);
    ctx->pc = 0x1E2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E252Cu;
    // 0x1e2530: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E252Cu, 0x1E2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2534u;
label_1e2534:
    // 0x1e2534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e2534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2538: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e2538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e253c: 0xc078ea6  jal         func_1E3A98
    ctx->pc = 0x1E253Cu;
    SET_GPR_U32(ctx, 31, 0x1E2544u);
    ctx->pc = 0x1E2540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E253Cu;
    // 0x1e2540: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A98u, 0x1E253Cu, 0x1E2544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2544u;
label_1e2544:
    // 0x1e2544: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e2544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e2548: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e2548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e254c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1E254Cu;
    {
        const bool branch_taken_0x1e254c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E254Cu;
        // 0x1e2550: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e254c) {
            ctx->pc = 0x1E2688u;
            goto label_1e2688;
        }
    }
    ctx->pc = 0x1E2554u;
label_1e2554:
    // 0x1e2554: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e2554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e2558: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2558u;
    {
        const bool branch_taken_0x1e2558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2558u;
        // 0x1e255c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2558) {
            ctx->pc = 0x1E256Cu;
            goto label_1e256c;
        }
    }
    ctx->pc = 0x1E2560u;
    // 0x1e2560: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e2560u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2564: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2564u;
    {
        const bool branch_taken_0x1e2564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2564u;
        // 0x1e2568: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2564) {
            ctx->pc = 0x1E2570u;
            goto label_1e2570;
        }
    }
    ctx->pc = 0x1E256Cu;
label_1e256c:
    // 0x1e256c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e256cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2570:
    // 0x1e2570: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e2570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2574: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1E2574u;
    {
        const bool branch_taken_0x1e2574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2574u;
        // 0x1e2578: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2574) {
            ctx->pc = 0x1E26BCu;
            goto label_1e26bc;
        }
    }
    ctx->pc = 0x1E257Cu;
    // 0x1e257c: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x1e257cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1e2580: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1e2580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1e2584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e258c: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1E258Cu;
    SET_GPR_U32(ctx, 31, 0x1E2594u);
    ctx->pc = 0x1E2590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E258Cu;
    // 0x1e2590: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1E258Cu, 0x1E2594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2594u;
label_1e2594:
    // 0x1e2594: 0x8e2303d0  lw          $v1, 0x3D0($s1)
    ctx->pc = 0x1e2594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 976)));
    // 0x1e2598: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1e2598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e259c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1e259cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1e25a0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1e25a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e25a4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e25a4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e25a8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E25A8u;
    {
        const bool branch_taken_0x1e25a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e25a8) {
            ctx->pc = 0x1E25ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E25A8u;
            // 0x1e25ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E25B0u;
            goto label_1e25b0;
        }
    }
    ctx->pc = 0x1E25B0u;
label_1e25b0:
    // 0x1e25b0: 0x1812  mflo        $v1
    ctx->pc = 0x1e25b0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1e25b4: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x1e25b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x1e25b8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1e25b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e25bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e25bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25c0: 0xc07a392  jal         func_1E8E48
    ctx->pc = 0x1E25C0u;
    SET_GPR_U32(ctx, 31, 0x1E25C8u);
    ctx->pc = 0x1E25C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E25C0u;
    // 0x1e25c4: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E48u, 0x1E25C0u, 0x1E25C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E25C8u;
label_1e25c8:
    // 0x1e25c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e25c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e25ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e25d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e25d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e25d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e25d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e25d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25dc: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1E25DCu;
    SET_GPR_U32(ctx, 31, 0x1E25E4u);
    ctx->pc = 0x1E25E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E25DCu;
    // 0x1e25e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1E25DCu, 0x1E25E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E25E4u;
label_1e25e4:
    // 0x1e25e4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e25e8: 0xae2204c8  sw          $v0, 0x4C8($s1)
    ctx->pc = 0x1e25e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1224), GPR_U32(ctx, 2));
    // 0x1e25ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e25ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e25f0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1E25F0u;
    {
        const bool branch_taken_0x1e25f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25F0u;
        // 0x1e25f4: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e25f0) {
            ctx->pc = 0x1E26BCu;
            goto label_1e26bc;
        }
    }
    ctx->pc = 0x1E25F8u;
label_1e25f8:
    // 0x1e25f8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1e25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e25fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E25FCu;
    {
        const bool branch_taken_0x1e25fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25FCu;
        // 0x1e2600: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e25fc) {
            ctx->pc = 0x1E2634u;
            goto label_1e2634;
        }
    }
    ctx->pc = 0x1E2604u;
    // 0x1e2604: 0x26129b70  addiu       $s2, $s0, -0x6490
    ctx->pc = 0x1e2604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1e2608: 0xc07ea38  jal         func_1FA8E0
    ctx->pc = 0x1E2608u;
    SET_GPR_U32(ctx, 31, 0x1E2610u);
    ctx->pc = 0x1E260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2608u;
    // 0x1e260c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA8E0u, 0x1E2608u, 0x1E2610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2610u;
label_1e2610:
    // 0x1e2610: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2610u;
    {
        const bool branch_taken_0x1e2610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2610) {
            ctx->pc = 0x1E2614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2610u;
            // 0x1e2614: 0x8e2504c8  lw          $a1, 0x4C8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2638u;
            goto label_1e2638;
        }
    }
    ctx->pc = 0x1E2618u;
    // 0x1e2618: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e2618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e261c: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1e261cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1e2620: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e2620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e2624: 0xdc437650  ld          $v1, 0x7650($v0)
    ctx->pc = 0x1e2624u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30288)));
    // 0x1e2628: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e2628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e262c: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E262Cu;
    {
        const bool branch_taken_0x1e262c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e262c) {
            ctx->pc = 0x1E2630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E262Cu;
            // 0x1e2630: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2694u;
            goto label_1e2694;
        }
    }
    ctx->pc = 0x1E2634u;
label_1e2634:
    // 0x1e2634: 0x8e2504c8  lw          $a1, 0x4C8($s1)
    ctx->pc = 0x1e2634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
label_1e2638:
    // 0x1e2638: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e2638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e263c: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1E263Cu;
    SET_GPR_U32(ctx, 31, 0x1E2644u);
    ctx->pc = 0x1E2640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E263Cu;
    // 0x1e2640: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1E263Cu, 0x1E2644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2644u;
label_1e2644:
    // 0x1e2644: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1e2644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1e2648: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x1e2648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1e264c: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x1e264cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e2650: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1e2650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e2654: 0x2812  mflo        $a1
    ctx->pc = 0x1e2654u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1e2658: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E2658u;
    SET_GPR_U32(ctx, 31, 0x1E2660u);
    ctx->pc = 0x1E265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2658u;
    // 0x1e265c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E2658u, 0x1E2660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2660u;
label_1e2660:
    // 0x1e2660: 0x96250494  lhu         $a1, 0x494($s1)
    ctx->pc = 0x1e2660u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x1e2664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e2664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2668: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e266c: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E266Cu;
    SET_GPR_U32(ctx, 31, 0x1E2674u);
    ctx->pc = 0x1E2670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E266Cu;
    // 0x1e2670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E266Cu, 0x1E2674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2674u;
label_1e2674:
    // 0x1e2674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e2674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e2678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e267c: 0xc078ea6  jal         func_1E3A98
    ctx->pc = 0x1E267Cu;
    SET_GPR_U32(ctx, 31, 0x1E2684u);
    ctx->pc = 0x1E2680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E267Cu;
    // 0x1e2680: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A98u, 0x1E267Cu, 0x1E2684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2684u;
label_1e2684:
    // 0x1e2684: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e2684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e2688:
    // 0x1e2688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e268c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E268Cu;
    {
        const bool branch_taken_0x1e268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E268Cu;
        // 0x1e2690: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e268c) {
            ctx->pc = 0x1E26BCu;
            goto label_1e26bc;
        }
    }
    ctx->pc = 0x1E2694u;
label_1e2694:
    // 0x1e2694: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2698: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E2698u;
    SET_GPR_U32(ctx, 31, 0x1E26A0u);
    ctx->pc = 0x1E269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2698u;
    // 0x1e269c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E2698u, 0x1E26A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E26A0u;
label_1e26a0:
    // 0x1e26a0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1e26a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e26a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e26a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e26a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E26A8u;
    {
        const bool branch_taken_0x1e26a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26A8u;
        // 0x1e26ac: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e26a8) {
            ctx->pc = 0x1E26BCu;
            goto label_1e26bc;
        }
    }
    ctx->pc = 0x1E26B0u;
label_1e26b0:
    // 0x1e26b0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e26b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e26b4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1e26b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1e26b8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e26b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1e26bc:
    // 0x1e26bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e26bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e26c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e26c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e26c4:
    // 0x1e26c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e26c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e26c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e26c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e26cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E26CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E26D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26CCu;
        // 0x1e26d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E26CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E26D4u;
    // 0x1e26d4: 0x0  nop
    ctx->pc = 0x1e26d4u;
    // NOP
    ctx->pc = 0x1e26d8u;
}
