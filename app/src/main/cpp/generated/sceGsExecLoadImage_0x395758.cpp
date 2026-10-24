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

// Function: sceGsExecLoadImage
// Address: 0x395758 - 0x3958d8
void sceGsExecLoadImage_0x395758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsExecLoadImage_0x395758");
#endif

    switch (ctx->pc) {
        case 0x395790u: goto label_395790;
        case 0x395828u: goto label_395828;
        case 0x395898u: goto label_395898;
        default: break;
    }

    ctx->pc = 0x395758u;

    // 0x395758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39575c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39575cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x395760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x395764: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x395764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x395768: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x395768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39576c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x39576cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395770: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x395770u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x395774: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x395774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x395778: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x395778u;
    {
        const bool branch_taken_0x395778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395778u;
        // 0x39577c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395778) {
            ctx->pc = 0x3957ACu;
            goto label_3957ac;
        }
    }
    ctx->pc = 0x395780u;
    // 0x395780: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x395780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x395784: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x395784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x395788: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x395788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x39578c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x39578cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_395790:
    // 0x395790: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x395790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x395794: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x395794u;
    {
        const bool branch_taken_0x395794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395794u;
        // 0x395798: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395794) {
            ctx->pc = 0x39588Cu;
            goto label_39588c;
        }
    }
    ctx->pc = 0x39579Cu;
    // 0x39579c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3957a0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3957a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3957a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3957A4u;
    {
        const bool branch_taken_0x3957a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3957A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957A4u;
        // 0x3957a8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3957a4) {
            ctx->pc = 0x395790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395790;
        }
    }
    ctx->pc = 0x3957ACu;
label_3957ac:
    // 0x3957ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3957acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3957b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3957b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3957b4: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x3957b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
    // 0x3957b8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3957b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x3957bc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3957bcu;
    runtime->Store32(rdram, ctx, 0x1000A020u, GPR_U32(ctx, 5));
    // 0x3957c0: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x3957c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x3957c4: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3957C4u;
    {
        const bool branch_taken_0x3957c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3957C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957C4u;
        // 0x3957c8: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3957c4) {
            ctx->pc = 0x3957E8u;
            goto label_3957e8;
        }
    }
    ctx->pc = 0x3957CCu;
    // 0x3957cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3957ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3957d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3957d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3957d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3957d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3957d8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x3957d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x3957dc: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x3957dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x3957e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3957E0u;
    {
        const bool branch_taken_0x3957e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3957E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957E0u;
        // 0x3957e4: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3957e0) {
            ctx->pc = 0x3957F8u;
            goto label_3957f8;
        }
    }
    ctx->pc = 0x3957E8u;
label_3957e8:
    // 0x3957e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3957e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3957ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3957ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3957f0: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x3957f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x3957f4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x3957f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_3957f8:
    // 0x3957f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3957f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3957fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3957fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x395800: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x395800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x395804: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x395804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x395808: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x395808u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4));
    // 0x39580c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39580cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x395810: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x395810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x395814: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x395814u;
    {
        const bool branch_taken_0x395814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395814u;
        // 0x395818: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395814) {
            ctx->pc = 0x395844u;
            goto label_395844;
        }
    }
    ctx->pc = 0x39581Cu;
    // 0x39581c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x39581cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x395820: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x395820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x395824: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x395824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_395828:
    // 0x395828: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x395828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39582c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x39582Cu;
    {
        const bool branch_taken_0x39582c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39582Cu;
        // 0x395830: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39582c) {
            ctx->pc = 0x39588Cu;
            goto label_39588c;
        }
    }
    ctx->pc = 0x395834u;
    // 0x395834: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x395834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395838: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x395838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x39583c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39583Cu;
    {
        const bool branch_taken_0x39583c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39583Cu;
        // 0x395840: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39583c) {
            ctx->pc = 0x395828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395828;
        }
    }
    ctx->pc = 0x395844u;
label_395844:
    // 0x395844: 0xdce20050  ld          $v0, 0x50($a3)
    ctx->pc = 0x395844u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x395848: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x395848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39584c: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x39584cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x395850: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x395850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x395854: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x395854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x395858: 0x1052024  and         $a0, $t0, $a1
    ctx->pc = 0x395858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x39585c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x39585cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x395860: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x395860u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x395864: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x395864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x395868: 0x1485000d  bne         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x395868u;
    {
        const bool branch_taken_0x395868 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x39586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395868u;
        // 0x39586c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395868) {
            ctx->pc = 0x3958A0u;
            goto label_3958a0;
        }
    }
    ctx->pc = 0x395870u;
    // 0x395870: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x395870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x395874: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x395874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x395878: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x395878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x39587c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x39587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x395880: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x395880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x395884: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x395884u;
    {
        const bool branch_taken_0x395884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395884u;
        // 0x395888: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395884) {
            ctx->pc = 0x3958B0u;
            goto label_3958b0;
        }
    }
    ctx->pc = 0x39588Cu;
label_39588c:
    // 0x39588c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x39588cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x395890: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x395890u;
    SET_GPR_U32(ctx, 31, 0x395898u);
    ctx->pc = 0x395894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395890u;
    // 0x395894: 0x2484dd40  addiu       $a0, $a0, -0x22C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x395890u, 0x395898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395898u;
label_395898:
    // 0x395898: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x395898u;
    {
        const bool branch_taken_0x395898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395898u;
        // 0x39589c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395898) {
            ctx->pc = 0x3958C8u;
            goto label_3958c8;
        }
    }
    ctx->pc = 0x3958A0u;
label_3958a0:
    // 0x3958a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3958a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3958a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3958a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3958a8: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x3958a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x3958ac: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x3958acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_3958b0:
    // 0x3958b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3958b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3958b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3958b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3958b8: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x3958b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x3958bc: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x3958bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x3958c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3958c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3958c4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3958c4u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4));
label_3958c8:
    // 0x3958c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3958c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3958cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3958CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3958D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958CCu;
        // 0x3958d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3958CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3958D4u;
    // 0x3958d4: 0x0  nop
    ctx->pc = 0x3958d4u;
    // NOP
    ctx->pc = 0x3958d8u;
}
