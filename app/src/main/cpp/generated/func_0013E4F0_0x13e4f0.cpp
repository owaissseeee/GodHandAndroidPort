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

// Function: func_0013E4F0
// Address: 0x13e4f0 - 0x13e6e0
void func_0013E4F0_0x13e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013E4F0_0x13e4f0");
#endif

    switch (ctx->pc) {
        case 0x13e548u: goto label_13e548;
        case 0x13e570u: goto label_13e570;
        case 0x13e598u: goto label_13e598;
        case 0x13e5c0u: goto label_13e5c0;
        case 0x13e5e4u: goto label_13e5e4;
        case 0x13e60cu: goto label_13e60c;
        case 0x13e62cu: goto label_13e62c;
        case 0x13e64cu: goto label_13e64c;
        case 0x13e664u: goto label_13e664;
        case 0x13e67cu: goto label_13e67c;
        case 0x13e69cu: goto label_13e69c;
        case 0x13e6b0u: goto label_13e6b0;
        case 0x13e6c8u: goto label_13e6c8;
        default: break;
    }

    ctx->pc = 0x13e4f0u;

    // 0x13e4f0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x13e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x13e4f4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13e4f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13e4f8: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x13e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x13e4fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13e4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13e500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e504: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x13e504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x13e508: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13e508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13e50c: 0x24647a24  addiu       $a0, $v1, 0x7A24
    ctx->pc = 0x13e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
    // 0x13e510: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13e510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13e514: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13e514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13e518: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x13E518u;
    {
        const bool branch_taken_0x13e518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E518u;
        // 0x13e51c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e518) {
            ctx->pc = 0x13E6C8u;
            goto label_13e6c8;
        }
    }
    ctx->pc = 0x13E520u;
    // 0x13e520: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13e520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13e524: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x13E524u;
    {
        const bool branch_taken_0x13e524 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x13E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E524u;
        // 0x13e528: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e524) {
            ctx->pc = 0x13E6CCu;
            goto label_13e6cc;
        }
    }
    ctx->pc = 0x13E52Cu;
    // 0x13e52c: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x13e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x13e530: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x13E530u;
    {
        const bool branch_taken_0x13e530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E530u;
        // 0x13e534: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e530) {
            ctx->pc = 0x13E6CCu;
            goto label_13e6cc;
        }
    }
    ctx->pc = 0x13E538u;
    // 0x13e538: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x13e538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x13e53c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13e53cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e540: 0xc07ea54  jal         func_1FA950
    ctx->pc = 0x13E540u;
    SET_GPR_U32(ctx, 31, 0x13E548u);
    ctx->pc = 0x13E544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E540u;
    // 0x13e544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA950u, 0x13E540u, 0x13E548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E548u;
label_13e548:
    // 0x13e548: 0x5840000c  blezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13E548u;
    {
        const bool branch_taken_0x13e548 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x13e548) {
            ctx->pc = 0x13E54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E548u;
            // 0x13e54c: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E57Cu;
            goto label_13e57c;
        }
    }
    ctx->pc = 0x13E550u;
    // 0x13e550: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x13e550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x13e554: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13e554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13e558: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13e558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13e55c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e560: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13e564: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13e568: 0xc07ea54  jal         func_1FA950
    ctx->pc = 0x13E568u;
    SET_GPR_U32(ctx, 31, 0x13E570u);
    ctx->pc = 0x13E56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E568u;
    // 0x13e56c: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA950u, 0x13E568u, 0x13E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E570u;
label_13e570:
    // 0x13e570: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x13e570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x13e574: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13E574u;
    {
        const bool branch_taken_0x13e574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E574u;
        // 0x13e578: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e574) {
            ctx->pc = 0x13E58Cu;
            goto label_13e58c;
        }
    }
    ctx->pc = 0x13E57Cu;
label_13e57c:
    // 0x13e57c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x13e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x13e580: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13e584: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e588: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13e588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_13e58c:
    // 0x13e58c: 0x26509b70  addiu       $s0, $s2, -0x6490
    ctx->pc = 0x13e58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    // 0x13e590: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x13E590u;
    SET_GPR_U32(ctx, 31, 0x13E598u);
    ctx->pc = 0x13E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E590u;
    // 0x13e594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x13E590u, 0x13E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E598u;
label_13e598:
    // 0x13e598: 0x5840000c  blezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13E598u;
    {
        const bool branch_taken_0x13e598 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x13e598) {
            ctx->pc = 0x13E59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E598u;
            // 0x13e59c: 0x8e2400a0  lw          $a0, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E5CCu;
            goto label_13e5cc;
        }
    }
    ctx->pc = 0x13E5A0u;
    // 0x13e5a0: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x13e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x13e5a4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13e5a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13e5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13e5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e5b0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13e5b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13e5b8: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x13E5B8u;
    SET_GPR_U32(ctx, 31, 0x13E5C0u);
    ctx->pc = 0x13E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E5B8u;
    // 0x13e5bc: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x13E5B8u, 0x13E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E5C0u;
label_13e5c0:
    // 0x13e5c0: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x13e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x13e5c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13E5C4u;
    {
        const bool branch_taken_0x13e5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5C4u;
        // 0x13e5c8: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5c4) {
            ctx->pc = 0x13E5DCu;
            goto label_13e5dc;
        }
    }
    ctx->pc = 0x13E5CCu;
label_13e5cc:
    // 0x13e5cc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x13e5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x13e5d0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13e5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13e5d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13e5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13e5d8: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13e5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_13e5dc:
    // 0x13e5dc: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13E5DCu;
    SET_GPR_U32(ctx, 31, 0x13E5E4u);
    ctx->pc = 0x13E5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E5DCu;
    // 0x13e5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13E5DCu, 0x13E5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E5E4u;
label_13e5e4:
    // 0x13e5e4: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x13e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x13e5e8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x13E5E8u;
    {
        const bool branch_taken_0x13e5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5E8u;
        // 0x13e5ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5e8) {
            ctx->pc = 0x13E6CCu;
            goto label_13e6cc;
        }
    }
    ctx->pc = 0x13E5F0u;
    // 0x13e5f0: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x13e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x13e5f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13E5F4u;
    {
        const bool branch_taken_0x13e5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5F4u;
        // 0x13e5f8: 0x263000b0  addiu       $s0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5f4) {
            ctx->pc = 0x13E638u;
            goto label_13e638;
        }
    }
    ctx->pc = 0x13E5FCu;
    // 0x13e5fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e604: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13E604u;
    SET_GPR_U32(ctx, 31, 0x13E60Cu);
    ctx->pc = 0x13E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E604u;
    // 0x13e608: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13E604u, 0x13E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E60Cu;
label_13e60c:
    // 0x13e60c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x13e60cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x13e610: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13e610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13e614: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13e614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13e618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e61c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x13e61cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x13e620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e624: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13E624u;
    SET_GPR_U32(ctx, 31, 0x13E62Cu);
    ctx->pc = 0x13E628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E624u;
    // 0x13e628: 0xac46002c  sw          $a2, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13E624u, 0x13E62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E62Cu;
label_13e62c:
    // 0x13e62c: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x13e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x13e630: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13E630u;
    {
        const bool branch_taken_0x13e630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E630u;
        // 0x13e634: 0xac430084  sw          $v1, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e630) {
            ctx->pc = 0x13E65Cu;
            goto label_13e65c;
        }
    }
    ctx->pc = 0x13E638u;
label_13e638:
    // 0x13e638: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x13e638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x13e63c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13e640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e644: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13E644u;
    SET_GPR_U32(ctx, 31, 0x13E64Cu);
    ctx->pc = 0x13E648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E644u;
    // 0x13e648: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13E644u, 0x13E64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E64Cu;
label_13e64c:
    // 0x13e64c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x13e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x13e650: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x13e650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x13e654: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13e654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13e658: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x13e658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_13e65c:
    // 0x13e65c: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13E65Cu;
    SET_GPR_U32(ctx, 31, 0x13E664u);
    ctx->pc = 0x13E660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E65Cu;
    // 0x13e660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13E65Cu, 0x13E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E664u;
label_13e664:
    // 0x13e664: 0x92230104  lbu         $v1, 0x104($s1)
    ctx->pc = 0x13e664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x13e668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e66c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13E66Cu;
    {
        const bool branch_taken_0x13e66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E66Cu;
        // 0x13e670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e66c) {
            ctx->pc = 0x13E6A8u;
            goto label_13e6a8;
        }
    }
    ctx->pc = 0x13E674u;
    // 0x13e674: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13E674u;
    SET_GPR_U32(ctx, 31, 0x13E67Cu);
    ctx->pc = 0x13E678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E674u;
    // 0x13e678: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13E674u, 0x13E67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E67Cu;
label_13e67c:
    // 0x13e67c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x13e67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x13e680: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13e680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13e684: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13e684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13e688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13e688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e68c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x13e68cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x13e690: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13e690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e694: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13E694u;
    SET_GPR_U32(ctx, 31, 0x13E69Cu);
    ctx->pc = 0x13E698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E694u;
    // 0x13e698: 0xac46002c  sw          $a2, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13E694u, 0x13E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E69Cu;
label_13e69c:
    // 0x13e69c: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x13e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x13e6a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13E6A0u;
    {
        const bool branch_taken_0x13e6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6A0u;
        // 0x13e6a4: 0xac430084  sw          $v1, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6a0) {
            ctx->pc = 0x13E6C0u;
            goto label_13e6c0;
        }
    }
    ctx->pc = 0x13E6A8u;
label_13e6a8:
    // 0x13e6a8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13E6A8u;
    SET_GPR_U32(ctx, 31, 0x13E6B0u);
    ctx->pc = 0x13E6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E6A8u;
    // 0x13e6ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13E6A8u, 0x13E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E6B0u;
label_13e6b0:
    // 0x13e6b0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x13e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x13e6b4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x13e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x13e6b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x13e6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x13e6bc: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x13e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_13e6c0:
    // 0x13e6c0: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13E6C0u;
    SET_GPR_U32(ctx, 31, 0x13E6C8u);
    ctx->pc = 0x13E6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E6C0u;
    // 0x13e6c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13E6C0u, 0x13E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E6C8u;
label_13e6c8:
    // 0x13e6c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13e6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13e6cc:
    // 0x13e6cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13e6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e6d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13e6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6D8u;
        // 0x13e6dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E6E0u;
}
