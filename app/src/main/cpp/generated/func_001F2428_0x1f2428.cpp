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

// Function: func_001F2428
// Address: 0x1f2428 - 0x1f2538
void func_001F2428_0x1f2428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F2428_0x1f2428");
#endif

    switch (ctx->pc) {
        case 0x1f2484u: goto label_1f2484;
        case 0x1f249cu: goto label_1f249c;
        case 0x1f24c0u: goto label_1f24c0;
        case 0x1f24e4u: goto label_1f24e4;
        case 0x1f2504u: goto label_1f2504;
        case 0x1f250cu: goto label_1f250c;
        default: break;
    }

    ctx->pc = 0x1f2428u;

    // 0x1f2428: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f2428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f242c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f242cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2430: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f2430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f2434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f2434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f2438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f243c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f2440: 0x8e110b94  lw          $s1, 0xB94($s0)
    ctx->pc = 0x1f2440u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f2444: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F2444u;
    {
        const bool branch_taken_0x1f2444 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2444u;
        // 0x1f2448: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2444) {
            ctx->pc = 0x1F2494u;
            goto label_1f2494;
        }
    }
    ctx->pc = 0x1F244Cu;
    // 0x1f244c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F244Cu;
    {
        const bool branch_taken_0x1f244c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f244c) {
            ctx->pc = 0x1F2450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F244Cu;
            // 0x1f2450: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2464u;
            goto label_1f2464;
        }
    }
    ctx->pc = 0x1F2454u;
    // 0x1f2454: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2454u;
    {
        const bool branch_taken_0x1f2454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2454) {
            ctx->pc = 0x1F247Cu;
            goto label_1f247c;
        }
    }
    ctx->pc = 0x1F245Cu;
    // 0x1f245c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1F245Cu;
    {
        const bool branch_taken_0x1f245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F245Cu;
        // 0x1f2460: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f245c) {
            ctx->pc = 0x1F2528u;
            goto label_1f2528;
        }
    }
    ctx->pc = 0x1F2464u;
label_1f2464:
    // 0x1f2464: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F2464u;
    {
        const bool branch_taken_0x1f2464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2464u;
        // 0x1f2468: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2464) {
            ctx->pc = 0x1F24B8u;
            goto label_1f24b8;
        }
    }
    ctx->pc = 0x1F246Cu;
    // 0x1f246c: 0x1222001b  beq         $s1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F246Cu;
    {
        const bool branch_taken_0x1f246c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f246c) {
            ctx->pc = 0x1F24DCu;
            goto label_1f24dc;
        }
    }
    ctx->pc = 0x1F2474u;
    // 0x1f2474: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1F2474u;
    {
        const bool branch_taken_0x1f2474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2474u;
        // 0x1f2478: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2474) {
            ctx->pc = 0x1F2528u;
            goto label_1f2528;
        }
    }
    ctx->pc = 0x1F247Cu;
label_1f247c:
    // 0x1f247c: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F247Cu;
    SET_GPR_U32(ctx, 31, 0x1F2484u);
    ctx->pc = 0x1F2480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F247Cu;
    // 0x1f2480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F247Cu, 0x1F2484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2484u;
label_1f2484:
    // 0x1f2484: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f2484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f2488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f248c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1F248Cu;
    {
        const bool branch_taken_0x1f248c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F248Cu;
        // 0x1f2490: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f248c) {
            ctx->pc = 0x1F2524u;
            goto label_1f2524;
        }
    }
    ctx->pc = 0x1F2494u;
label_1f2494:
    // 0x1f2494: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F2494u;
    SET_GPR_U32(ctx, 31, 0x1F249Cu);
    ctx->pc = 0x1F2498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2494u;
    // 0x1f2498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F2494u, 0x1F249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F249Cu;
label_1f249c:
    // 0x1f249c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F249Cu;
    {
        const bool branch_taken_0x1f249c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f249c) {
            ctx->pc = 0x1F24A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F249Cu;
            // 0x1f24a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2528u;
            goto label_1f2528;
        }
    }
    ctx->pc = 0x1F24A4u;
    // 0x1f24a4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f24a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f24a8: 0xa3b10000  sb          $s1, 0x0($sp)
    ctx->pc = 0x1f24a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f24ac: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f24acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f24b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F24B0u;
    {
        const bool branch_taken_0x1f24b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F24B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24B0u;
        // 0x1f24b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24b0) {
            ctx->pc = 0x1F24FCu;
            goto label_1f24fc;
        }
    }
    ctx->pc = 0x1F24B8u;
label_1f24b8:
    // 0x1f24b8: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F24B8u;
    SET_GPR_U32(ctx, 31, 0x1F24C0u);
    ctx->pc = 0x1F24BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24B8u;
    // 0x1f24bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F24B8u, 0x1F24C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24C0u;
label_1f24c0:
    // 0x1f24c0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F24C0u;
    {
        const bool branch_taken_0x1f24c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f24c0) {
            ctx->pc = 0x1F24C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F24C0u;
            // 0x1f24c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2528u;
            goto label_1f2528;
        }
    }
    ctx->pc = 0x1F24C8u;
    // 0x1f24c8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f24c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f24cc: 0xa3b10000  sb          $s1, 0x0($sp)
    ctx->pc = 0x1f24ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f24d0: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f24d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f24d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F24D4u;
    {
        const bool branch_taken_0x1f24d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24D4u;
        // 0x1f24d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f24d4) {
            ctx->pc = 0x1F24FCu;
            goto label_1f24fc;
        }
    }
    ctx->pc = 0x1F24DCu;
label_1f24dc:
    // 0x1f24dc: 0xc07be2e  jal         func_1EF8B8
    ctx->pc = 0x1F24DCu;
    SET_GPR_U32(ctx, 31, 0x1F24E4u);
    ctx->pc = 0x1F24E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24DCu;
    // 0x1f24e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B8u, 0x1F24DCu, 0x1F24E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24E4u;
label_1f24e4:
    // 0x1f24e4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F24E4u;
    {
        const bool branch_taken_0x1f24e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f24e4) {
            ctx->pc = 0x1F24E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F24E4u;
            // 0x1f24e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2528u;
            goto label_1f2528;
        }
    }
    ctx->pc = 0x1F24ECu;
    // 0x1f24ec: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f24f0: 0xa3b10000  sb          $s1, 0x0($sp)
    ctx->pc = 0x1f24f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1f24f4: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f24f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f24f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f24f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f24fc:
    // 0x1f24fc: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F24FCu;
    SET_GPR_U32(ctx, 31, 0x1F2504u);
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F24FCu, 0x1F2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2504u;
label_1f2504:
    // 0x1f2504: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F2504u;
    SET_GPR_U32(ctx, 31, 0x1F250Cu);
    ctx->pc = 0x1F2508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2504u;
    // 0x1f2508: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F2504u, 0x1F250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F250Cu;
label_1f250c:
    // 0x1f250c: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f2510: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f2510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f2514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2518: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f2518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f251c: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f251cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
    // 0x1f2520: 0xae030b94  sw          $v1, 0xB94($s0)
    ctx->pc = 0x1f2520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 3));
label_1f2524:
    // 0x1f2524: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f2524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2528:
    // 0x1f2528: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f2528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f252c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f252cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2530: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2530u;
        // 0x1f2534: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2538u;
}
