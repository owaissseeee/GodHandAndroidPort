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

// Function: func_001DB440
// Address: 0x1db440 - 0x1db558
void func_001DB440_0x1db440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DB440_0x1db440");
#endif

    switch (ctx->pc) {
        case 0x1db4c8u: goto label_1db4c8;
        case 0x1db4d8u: goto label_1db4d8;
        case 0x1db528u: goto label_1db528;
        case 0x1db538u: goto label_1db538;
        default: break;
    }

    ctx->pc = 0x1db440u;

    // 0x1db440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1db440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1db444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db44c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1db44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1db450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db458: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1db458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db45c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DB45Cu;
    {
        const bool branch_taken_0x1db45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB45Cu;
        // 0x1db460: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db45c) {
            ctx->pc = 0x1DB48Cu;
            goto label_1db48c;
        }
    }
    ctx->pc = 0x1DB464u;
    // 0x1db464: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB464u;
    {
        const bool branch_taken_0x1db464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db464) {
            ctx->pc = 0x1DB468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB464u;
            // 0x1db468: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB47Cu;
            goto label_1db47c;
        }
    }
    ctx->pc = 0x1DB46Cu;
    // 0x1db46c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DB46Cu;
    {
        const bool branch_taken_0x1db46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB46Cu;
        // 0x1db470: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db46c) {
            ctx->pc = 0x1DB4D8u;
            goto label_1db4d8;
        }
    }
    ctx->pc = 0x1DB474u;
    // 0x1db474: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1DB474u;
    {
        const bool branch_taken_0x1db474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB474u;
        // 0x1db478: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db474) {
            ctx->pc = 0x1DB54Cu;
            goto label_1db54c;
        }
    }
    ctx->pc = 0x1DB47Cu;
label_1db47c:
    // 0x1db47c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DB47Cu;
    {
        const bool branch_taken_0x1db47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DB480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB47Cu;
        // 0x1db480: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db47c) {
            ctx->pc = 0x1DB4F0u;
            goto label_1db4f0;
        }
    }
    ctx->pc = 0x1DB484u;
    // 0x1db484: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1DB484u;
    {
        const bool branch_taken_0x1db484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB484u;
        // 0x1db488: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db484) {
            ctx->pc = 0x1DB54Cu;
            goto label_1db54c;
        }
    }
    ctx->pc = 0x1DB48Cu;
label_1db48c:
    // 0x1db48c: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1db48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1db490: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB490u;
    {
        const bool branch_taken_0x1db490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB490u;
        // 0x1db494: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db490) {
            ctx->pc = 0x1DB4A0u;
            goto label_1db4a0;
        }
    }
    ctx->pc = 0x1DB498u;
    // 0x1db498: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB498u;
    {
        const bool branch_taken_0x1db498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB498u;
        // 0x1db49c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db498) {
            ctx->pc = 0x1DB4A8u;
            goto label_1db4a8;
        }
    }
    ctx->pc = 0x1DB4A0u;
label_1db4a0:
    // 0x1db4a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1db4a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db4a4: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1db4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1db4a8:
    // 0x1db4a8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1db4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1db4ac: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1DB4ACu;
    {
        const bool branch_taken_0x1db4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4ACu;
        // 0x1db4b0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db4ac) {
            ctx->pc = 0x1DB544u;
            goto label_1db544;
        }
    }
    ctx->pc = 0x1DB4B4u;
    // 0x1db4b4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1db4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1db4b8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1db4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1db4bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db4c0: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1DB4C0u;
    SET_GPR_U32(ctx, 31, 0x1DB4C8u);
    ctx->pc = 0x1DB4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB4C0u;
    // 0x1db4c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1DB4C0u, 0x1DB4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB4C8u;
label_1db4c8:
    // 0x1db4c8: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1db4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1db4cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db4d0: 0xc077d4a  jal         func_1DF528
    ctx->pc = 0x1DB4D0u;
    SET_GPR_U32(ctx, 31, 0x1DB4D8u);
    ctx->pc = 0x1DB4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB4D0u;
    // 0x1db4d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF528u, 0x1DB4D0u, 0x1DB4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB4D8u;
label_1db4d8:
    // 0x1db4d8: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1db4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db4dc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1db4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1db4e0: 0xae233028  sw          $v1, 0x3028($s1)
    ctx->pc = 0x1db4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 3));
    // 0x1db4e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db4e8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1DB4E8u;
    {
        const bool branch_taken_0x1db4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4E8u;
        // 0x1db4ec: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db4e8) {
            ctx->pc = 0x1DB544u;
            goto label_1db544;
        }
    }
    ctx->pc = 0x1DB4F0u;
label_1db4f0:
    // 0x1db4f0: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1db4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1db4f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB4F4u;
    {
        const bool branch_taken_0x1db4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4F4u;
        // 0x1db4f8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db4f4) {
            ctx->pc = 0x1DB504u;
            goto label_1db504;
        }
    }
    ctx->pc = 0x1DB4FCu;
    // 0x1db4fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB4FCu;
    {
        const bool branch_taken_0x1db4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB4FCu;
        // 0x1db500: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db4fc) {
            ctx->pc = 0x1DB50Cu;
            goto label_1db50c;
        }
    }
    ctx->pc = 0x1DB504u;
label_1db504:
    // 0x1db504: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1db504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db508: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1db508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1db50c:
    // 0x1db50c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1db50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1db510: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DB510u;
    {
        const bool branch_taken_0x1db510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB510u;
        // 0x1db514: 0x263025b0  addiu       $s0, $s1, 0x25B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db510) {
            ctx->pc = 0x1DB544u;
            goto label_1db544;
        }
    }
    ctx->pc = 0x1DB518u;
    // 0x1db518: 0xae203034  sw          $zero, 0x3034($s1)
    ctx->pc = 0x1db518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 0));
    // 0x1db51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db520: 0xc077b90  jal         func_1DEE40
    ctx->pc = 0x1DB520u;
    SET_GPR_U32(ctx, 31, 0x1DB528u);
    ctx->pc = 0x1DB524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB520u;
    // 0x1db524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE40u, 0x1DB520u, 0x1DB528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB528u;
label_1db528:
    // 0x1db528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db52c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1db52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db530: 0xc077d4a  jal         func_1DF528
    ctx->pc = 0x1DB530u;
    SET_GPR_U32(ctx, 31, 0x1DB538u);
    ctx->pc = 0x1DB534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB530u;
    // 0x1db534: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF528u, 0x1DB530u, 0x1DB538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB538u;
label_1db538:
    // 0x1db538: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1db538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1db53c: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1db53cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1db540: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1db540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
label_1db544:
    // 0x1db544: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1db544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db54c:
    // 0x1db54c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db550: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB550u;
        // 0x1db554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB558u;
}
