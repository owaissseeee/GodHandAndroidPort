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

// Function: func_0013D7B0
// Address: 0x13d7b0 - 0x13da98
void func_0013D7B0_0x13d7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013D7B0_0x13d7b0");
#endif

    switch (ctx->pc) {
        case 0x13d820u: goto label_13d820;
        case 0x13d85cu: goto label_13d85c;
        case 0x13d8bcu: goto label_13d8bc;
        case 0x13d8fcu: goto label_13d8fc;
        case 0x13d93cu: goto label_13d93c;
        case 0x13d958u: goto label_13d958;
        case 0x13d994u: goto label_13d994;
        case 0x13d9c0u: goto label_13d9c0;
        case 0x13da14u: goto label_13da14;
        case 0x13da24u: goto label_13da24;
        case 0x13da2cu: goto label_13da2c;
        case 0x13da80u: goto label_13da80;
        default: break;
    }

    ctx->pc = 0x13d7b0u;

    // 0x13d7b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d7b4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x13d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x13d7b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d7bc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x13d7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13d7c0: 0x52e78  dsll        $a1, $a1, 25
    ctx->pc = 0x13d7c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 25);
    // 0x13d7c4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x13d7c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x13d7c8: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x13d7c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x13d7cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13d7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13d7d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13d7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d7d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d7d8: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x13d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x13d7dc: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x13d7dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x13d7e0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x13d7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x13d7e4: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x13D7E4u;
    {
        const bool branch_taken_0x13d7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7E4u;
        // 0x13d7e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7e4) {
            ctx->pc = 0x13D864u;
            goto label_13d864;
        }
    }
    ctx->pc = 0x13D7ECu;
    // 0x13d7ec: 0x92030090  lbu         $v1, 0x90($s0)
    ctx->pc = 0x13d7ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x13d7f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d7f4: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13D7F4u;
    {
        const bool branch_taken_0x13d7f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7F4u;
        // 0x13d7f8: 0x262274a0  addiu       $v0, $s1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7f4) {
            ctx->pc = 0x13D868u;
            goto label_13d868;
        }
    }
    ctx->pc = 0x13D7FCu;
    // 0x13d7fc: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x13d7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x13d800: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13d800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13d804: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13d804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13d808: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13d808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13d80c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d80cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d810: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13d810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13d814: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x13d814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x13d818: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x13D818u;
    SET_GPR_U32(ctx, 31, 0x13D820u);
    ctx->pc = 0x13D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D818u;
    // 0x13d81c: 0x8e0500a0  lw          $a1, 0xA0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x13D818u, 0x13D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D820u;
label_13d820:
    // 0x13d820: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x13d820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x13d824: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x13d824u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x13d828: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x13d828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x13d82c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d830: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13d834: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x13d834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x13d838: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x13d838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x13d83c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x13d83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d840: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x13d840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x13d844: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13d844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d848: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x13d848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x13d84c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x13d84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d850: 0xa2000090  sb          $zero, 0x90($s0)
    ctx->pc = 0x13d850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x13d854: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x13D854u;
    SET_GPR_U32(ctx, 31, 0x13D85Cu);
    ctx->pc = 0x13D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D854u;
    // 0x13d858: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x13D854u, 0x13D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D85Cu;
label_13d85c:
    // 0x13d85c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x13D85Cu;
    {
        const bool branch_taken_0x13d85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D85Cu;
        // 0x13d860: 0x262274a0  addiu       $v0, $s1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d85c) {
            ctx->pc = 0x13D900u;
            goto label_13d900;
        }
    }
    ctx->pc = 0x13D864u;
label_13d864:
    // 0x13d864: 0x262274a0  addiu       $v0, $s1, 0x74A0
    ctx->pc = 0x13d864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
label_13d868:
    // 0x13d868: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x13d868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13d86c: 0x425f8  dsll        $a0, $a0, 23
    ctx->pc = 0x13d86cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 23);
    // 0x13d870: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x13d870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x13d874: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x13d874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x13d878: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x13d878u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x13d87c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13d87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13d880: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x13D880u;
    {
        const bool branch_taken_0x13d880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D880u;
        // 0x13d884: 0x262274a0  addiu       $v0, $s1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d880) {
            ctx->pc = 0x13D900u;
            goto label_13d900;
        }
    }
    ctx->pc = 0x13D888u;
    // 0x13d888: 0x92020090  lbu         $v0, 0x90($s0)
    ctx->pc = 0x13d888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x13d88c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13D88Cu;
    {
        const bool branch_taken_0x13d88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D88Cu;
        // 0x13d890: 0x262274a0  addiu       $v0, $s1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d88c) {
            ctx->pc = 0x13D900u;
            goto label_13d900;
        }
    }
    ctx->pc = 0x13D894u;
    // 0x13d894: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x13d894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x13d898: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13d898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13d89c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13d89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13d8a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8a4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13d8a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13d8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13d8b0: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x13d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x13d8b4: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x13D8B4u;
    SET_GPR_U32(ctx, 31, 0x13D8BCu);
    ctx->pc = 0x13D8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D8B4u;
    // 0x13d8b8: 0x8e05009c  lw          $a1, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x13D8B4u, 0x13D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D8BCu;
label_13d8bc:
    // 0x13d8bc: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x13d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x13d8c0: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x13d8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x13d8c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x13d8c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d8c8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x13d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x13d8cc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13d8d0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x13d8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x13d8d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8d8: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x13d8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x13d8dc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x13d8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x13d8e0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x13d8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d8e4: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x13d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x13d8e8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x13d8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d8ec: 0xa2090090  sb          $t1, 0x90($s0)
    ctx->pc = 0x13d8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 144), (uint8_t)GPR_U32(ctx, 9));
    // 0x13d8f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13d8f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8f4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x13D8F4u;
    SET_GPR_U32(ctx, 31, 0x13D8FCu);
    ctx->pc = 0x13D8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D8F4u;
    // 0x13d8f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x13D8F4u, 0x13D8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D8FCu;
label_13d8fc:
    // 0x13d8fc: 0x262274a0  addiu       $v0, $s1, 0x74A0
    ctx->pc = 0x13d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
label_13d900:
    // 0x13d900: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x13d900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x13d904: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x13d904u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x13d908: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13d908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13d90c: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x13D90Cu;
    {
        const bool branch_taken_0x13d90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D90Cu;
        // 0x13d910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d90c) {
            ctx->pc = 0x13DA38u;
            goto label_13da38;
        }
    }
    ctx->pc = 0x13D914u;
    // 0x13d914: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x13d914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x13d918: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x13d918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x13d91c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x13d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x13d920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d924: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x13d924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x13d928: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x13d928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d92c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x13d92cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d930: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13d930u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d934: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x13D934u;
    SET_GPR_U32(ctx, 31, 0x13D93Cu);
    ctx->pc = 0x13D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D934u;
    // 0x13d938: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x13D934u, 0x13D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D93Cu;
label_13d93c:
    // 0x13d93c: 0x92030090  lbu         $v1, 0x90($s0)
    ctx->pc = 0x13d93cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x13d940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d944: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13D944u;
    {
        const bool branch_taken_0x13d944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d944) {
            ctx->pc = 0x13D948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D944u;
            // 0x13d948: 0x8e0500ac  lw          $a1, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D99Cu;
            goto label_13d99c;
        }
    }
    ctx->pc = 0x13D94Cu;
    // 0x13d94c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x13d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x13d950: 0xc07efc6  jal         func_1FBF18
    ctx->pc = 0x13D950u;
    SET_GPR_U32(ctx, 31, 0x13D958u);
    ctx->pc = 0x13D954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D950u;
    // 0x13d954: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF18u, 0x13D950u, 0x13D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D958u;
label_13d958:
    // 0x13d958: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x13d958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x13d95c: 0x3c07f7ff  lui         $a3, 0xF7FF
    ctx->pc = 0x13d95cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63487 << 16));
    // 0x13d960: 0x2463ac90  addiu       $v1, $v1, -0x5370
    ctx->pc = 0x13d960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945936));
    // 0x13d964: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x13d964u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x13d968: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x13d968u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAC94u));
    // 0x13d96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d970: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d974: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13d978: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13d978u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC94u, _value); } while (0);
    // 0x13d97c: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x13d97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x13d980: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13d984: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x13d984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x13d988: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x13d988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x13d98c: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x13D98Cu;
    SET_GPR_U32(ctx, 31, 0x13D994u);
    ctx->pc = 0x13D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D98Cu;
    // 0x13d990: 0x8e0500a8  lw          $a1, 0xA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x13D98Cu, 0x13D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D994u;
label_13d994:
    // 0x13d994: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13D994u;
    {
        const bool branch_taken_0x13d994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D994u;
        // 0x13d998: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d994) {
            ctx->pc = 0x13D9C4u;
            goto label_13d9c4;
        }
    }
    ctx->pc = 0x13D99Cu;
label_13d99c:
    // 0x13d99c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13d9a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13d9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13d9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d9a8: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13d9ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d9b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13d9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13d9b4: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x13d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x13d9b8: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x13D9B8u;
    SET_GPR_U32(ctx, 31, 0x13D9C0u);
    ctx->pc = 0x13D9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D9B8u;
    // 0x13d9bc: 0x8e0500ac  lw          $a1, 0xAC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x13D9B8u, 0x13D9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D9C0u;
label_13d9c0:
    // 0x13d9c0: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x13d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_13d9c4:
    // 0x13d9c4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x13d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x13d9c8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x13d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13d9cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13d9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13d9d0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x13d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x13d9d4: 0x8e070094  lw          $a3, 0x94($s0)
    ctx->pc = 0x13d9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x13d9d8: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13d9dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13d9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13d9e0: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x13d9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x13d9e4: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x13d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x13d9e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x13d9e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x13d9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d9f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d9f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13d9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13d9f8: 0xace2002c  sw          $v0, 0x2C($a3)
    ctx->pc = 0x13d9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 2));
    // 0x13d9fc: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x13d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x13da00: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13da00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13da04: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x13da04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x13da08: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x13da08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x13da0c: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x13DA0Cu;
    SET_GPR_U32(ctx, 31, 0x13DA14u);
    ctx->pc = 0x13DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA0Cu;
    // 0x13da10: 0x8e0500b8  lw          $a1, 0xB8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x13DA0Cu, 0x13DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DA14u;
label_13da14:
    // 0x13da14: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x13da14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x13da18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13da18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da1c: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x13DA1Cu;
    SET_GPR_U32(ctx, 31, 0x13DA24u);
    ctx->pc = 0x13DA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA1Cu;
    // 0x13da20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x13DA1Cu, 0x13DA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DA24u;
label_13da24:
    // 0x13da24: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13DA24u;
    SET_GPR_U32(ctx, 31, 0x13DA2Cu);
    ctx->pc = 0x13DA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA24u;
    // 0x13da28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13DA24u, 0x13DA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DA2Cu;
label_13da2c:
    // 0x13da2c: 0x96020092  lhu         $v0, 0x92($s0)
    ctx->pc = 0x13da2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x13da30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13da30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13da34: 0xa6020092  sh          $v0, 0x92($s0)
    ctx->pc = 0x13da34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 2));
label_13da38:
    // 0x13da38: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x13da38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x13da3c: 0x946200a8  lhu         $v0, 0xA8($v1)
    ctx->pc = 0x13da3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x13da40: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x13da40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13da44: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x13DA44u;
    {
        const bool branch_taken_0x13da44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13da44) {
            ctx->pc = 0x13DA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DA44u;
            // 0x13da48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DA84u;
            goto label_13da84;
        }
    }
    ctx->pc = 0x13DA4Cu;
    // 0x13da4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x13da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x13da50: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x13da50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x13da54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13da58: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13DA58u;
    {
        const bool branch_taken_0x13da58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13da58) {
            ctx->pc = 0x13DA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DA58u;
            // 0x13da5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DA84u;
            goto label_13da84;
        }
    }
    ctx->pc = 0x13DA60u;
    // 0x13da60: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x13da60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x13da64: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x13da64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x13da68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13da68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13da6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13da6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da70: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x13da70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x13da74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13da74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13da78: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13DA78u;
    SET_GPR_U32(ctx, 31, 0x13DA80u);
    ctx->pc = 0x13DA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA78u;
    // 0x13da7c: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13DA78u, 0x13DA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DA80u;
label_13da80:
    // 0x13da80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13da80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13da84:
    // 0x13da84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13da84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13da88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13da8c: 0x3e00008  jr          $ra
    ctx->pc = 0x13DA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA8Cu;
        // 0x13da90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DA94u;
    // 0x13da94: 0x0  nop
    ctx->pc = 0x13da94u;
    // NOP
    ctx->pc = 0x13da98u;
}
