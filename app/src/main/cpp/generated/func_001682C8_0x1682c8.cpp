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

// Function: func_001682C8
// Address: 0x1682c8 - 0x1684d8
void func_001682C8_0x1682c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001682C8_0x1682c8");
#endif

    switch (ctx->pc) {
        case 0x168344u: goto label_168344;
        case 0x1683d0u: goto label_1683d0;
        case 0x16841cu: goto label_16841c;
        case 0x168454u: goto label_168454;
        case 0x1684bcu: goto label_1684bc;
        default: break;
    }

    ctx->pc = 0x1682c8u;

    // 0x1682c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1682c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1682cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1682ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1682d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1682d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1682d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1682d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1682d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1682d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1682dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1682e0: 0x8211005a  lb          $s1, 0x5A($s0)
    ctx->pc = 0x1682e0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x1682e4: 0x56220078  bnel        $s1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1682E4u;
    {
        const bool branch_taken_0x1682e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1682e4) {
            ctx->pc = 0x1682E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1682E4u;
            // 0x1682e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1684C8u;
            goto label_1684c8;
        }
    }
    ctx->pc = 0x1682ECu;
    // 0x1682ec: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1682ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1682f0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1682f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1682f4: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x1682f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x1682f8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x1682f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x1682fc: 0x422f8  dsll        $a0, $a0, 11
    ctx->pc = 0x1682fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 11);
    // 0x168300: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168304: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x168304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x168308: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x168308u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x16830c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16830cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x168310: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x168310u;
    {
        const bool branch_taken_0x168310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168310u;
        // 0x168314: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168310) {
            ctx->pc = 0x16834Cu;
            goto label_16834c;
        }
    }
    ctx->pc = 0x168318u;
    // 0x168318: 0x82030091  lb          $v1, 0x91($s0)
    ctx->pc = 0x168318u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 145)));
    // 0x16831c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16831Cu;
    {
        const bool branch_taken_0x16831c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x168320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16831Cu;
        // 0x168320: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16831c) {
            ctx->pc = 0x16834Cu;
            goto label_16834c;
        }
    }
    ctx->pc = 0x168324u;
    // 0x168324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168328: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x168328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16832c: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x16832cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x168330: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x168330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168334: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x168334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168338: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x168338u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16833c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16833Cu;
    SET_GPR_U32(ctx, 31, 0x168344u);
    ctx->pc = 0x168340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16833Cu;
    // 0x168340: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16833Cu, 0x168344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168344u;
label_168344:
    // 0x168344: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x168344u;
    {
        const bool branch_taken_0x168344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168344u;
        // 0x168348: 0xa2110091  sb          $s1, 0x91($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 145), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168344) {
            ctx->pc = 0x1684C4u;
            goto label_1684c4;
        }
    }
    ctx->pc = 0x16834Cu;
label_16834c:
    // 0x16834c: 0x24a274a0  addiu       $v0, $a1, 0x74A0
    ctx->pc = 0x16834cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x168350: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x168350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x168354: 0x425f8  dsll        $a0, $a0, 23
    ctx->pc = 0x168354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 23);
    // 0x168358: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x168358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x16835c: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x16835cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x168360: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x168360u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x168364: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x168364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x168368: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x168368u;
    {
        const bool branch_taken_0x168368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168368u;
        // 0x16836c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168368) {
            ctx->pc = 0x16837Cu;
            goto label_16837c;
        }
    }
    ctx->pc = 0x168370u;
    // 0x168370: 0x82030091  lb          $v1, 0x91($s0)
    ctx->pc = 0x168370u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 145)));
    // 0x168374: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x168374u;
    {
        const bool branch_taken_0x168374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x168378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168374u;
        // 0x168378: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168374) {
            ctx->pc = 0x1683B0u;
            goto label_1683b0;
        }
    }
    ctx->pc = 0x16837Cu;
label_16837c:
    // 0x16837c: 0x24a274a0  addiu       $v0, $a1, 0x74A0
    ctx->pc = 0x16837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x168380: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x168380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x168384: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x168384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x168388: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x168388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x16838c: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x16838cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x168390: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x168390u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x168394: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x168394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x168398: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x168398u;
    {
        const bool branch_taken_0x168398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168398u;
        // 0x16839c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168398) {
            ctx->pc = 0x1683D8u;
            goto label_1683d8;
        }
    }
    ctx->pc = 0x1683A0u;
    // 0x1683a0: 0x82030091  lb          $v1, 0x91($s0)
    ctx->pc = 0x1683a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 145)));
    // 0x1683a4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1683A4u;
    {
        const bool branch_taken_0x1683a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1683A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683A4u;
        // 0x1683a8: 0x24a374a0  addiu       $v1, $a1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683a4) {
            ctx->pc = 0x1683DCu;
            goto label_1683dc;
        }
    }
    ctx->pc = 0x1683ACu;
    // 0x1683ac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1683acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1683b0:
    // 0x1683b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1683b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683b4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1683b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1683b8: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1683b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1683bc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1683bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1683c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1683c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1683c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1683c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683c8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1683C8u;
    SET_GPR_U32(ctx, 31, 0x1683D0u);
    ctx->pc = 0x1683CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1683C8u;
    // 0x1683cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1683C8u, 0x1683D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683D0u;
label_1683d0:
    // 0x1683d0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1683D0u;
    {
        const bool branch_taken_0x1683d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1683D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683D0u;
        // 0x1683d4: 0xa2000091  sb          $zero, 0x91($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 145), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683d0) {
            ctx->pc = 0x1684C4u;
            goto label_1684c4;
        }
    }
    ctx->pc = 0x1683D8u;
label_1683d8:
    // 0x1683d8: 0x24a374a0  addiu       $v1, $a1, 0x74A0
    ctx->pc = 0x1683d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
label_1683dc:
    // 0x1683dc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1683dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1683e0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1683e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1683e4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1683e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1683e8: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1683e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1683ec: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x1683ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x1683f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1683f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1683f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1683F4u;
    {
        const bool branch_taken_0x1683f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1683F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683F4u;
        // 0x1683f8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683f4) {
            ctx->pc = 0x168428u;
            goto label_168428;
        }
    }
    ctx->pc = 0x1683FCu;
    // 0x1683fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1683fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168400: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x168400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x168404: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x168404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x168408: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x168408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16840c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x16840cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168410: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x168410u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168414: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x168414u;
    SET_GPR_U32(ctx, 31, 0x16841Cu);
    ctx->pc = 0x168418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168414u;
    // 0x168418: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x168414u, 0x16841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16841Cu;
label_16841c:
    // 0x16841c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16841cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168420: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x168420u;
    {
        const bool branch_taken_0x168420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168420u;
        // 0x168424: 0xa2030091  sb          $v1, 0x91($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 145), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168420) {
            ctx->pc = 0x1684C4u;
            goto label_1684c4;
        }
    }
    ctx->pc = 0x168428u;
label_168428:
    // 0x168428: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x168428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x16842c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16842cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x168430: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x168430u;
    {
        const bool branch_taken_0x168430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168430u;
        // 0x168434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168430) {
            ctx->pc = 0x16848Cu;
            goto label_16848c;
        }
    }
    ctx->pc = 0x168438u;
    // 0x168438: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x168438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x16843c: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x16843cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x168440: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x168440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168444: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x168444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168448: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x168448u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16844c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x16844Cu;
    SET_GPR_U32(ctx, 31, 0x168454u);
    ctx->pc = 0x168450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16844Cu;
    // 0x168450: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x16844Cu, 0x168454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168454u;
label_168454:
    // 0x168454: 0x82030091  lb          $v1, 0x91($s0)
    ctx->pc = 0x168454u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 145)));
    // 0x168458: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16845c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16845Cu;
    {
        const bool branch_taken_0x16845c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x168460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16845Cu;
        // 0x168460: 0x2862ffff  slti        $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16845c) {
            ctx->pc = 0x168470u;
            goto label_168470;
        }
    }
    ctx->pc = 0x168464u;
    // 0x168464: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x168464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168468: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x168468u;
    {
        const bool branch_taken_0x168468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168468u;
        // 0x16846c: 0xa202005a  sb          $v0, 0x5A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168468) {
            ctx->pc = 0x1684C4u;
            goto label_1684c4;
        }
    }
    ctx->pc = 0x168470u;
label_168470:
    // 0x168470: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x168470u;
    {
        const bool branch_taken_0x168470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168470) {
            ctx->pc = 0x168474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168470u;
            // 0x168474: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1684C8u;
            goto label_1684c8;
        }
    }
    ctx->pc = 0x168478u;
    // 0x168478: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x168478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16847c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16847Cu;
    {
        const bool branch_taken_0x16847c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16847Cu;
        // 0x168480: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16847c) {
            ctx->pc = 0x1684C4u;
            goto label_1684c4;
        }
    }
    ctx->pc = 0x168484u;
    // 0x168484: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x168484u;
    {
        const bool branch_taken_0x168484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168484u;
        // 0x168488: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168484) {
            ctx->pc = 0x1684C4u;
            goto label_1684c4;
        }
    }
    ctx->pc = 0x16848Cu;
label_16848c:
    // 0x16848c: 0x3c022020  lui         $v0, 0x2020
    ctx->pc = 0x16848cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8224 << 16));
    // 0x168490: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x168490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x168494: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x168494u;
    {
        const bool branch_taken_0x168494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168494u;
        // 0x168498: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168494) {
            ctx->pc = 0x1684C4u;
            goto label_1684c4;
        }
    }
    ctx->pc = 0x16849Cu;
    // 0x16849c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16849cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684a0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1684a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1684a4: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1684a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1684a8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1684a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1684ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1684acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1684b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1684b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684b4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1684B4u;
    SET_GPR_U32(ctx, 31, 0x1684BCu);
    ctx->pc = 0x1684B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684B4u;
    // 0x1684b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1684B4u, 0x1684BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684BCu;
label_1684bc:
    // 0x1684bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1684bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1684c0: 0xa203005a  sb          $v1, 0x5A($s0)
    ctx->pc = 0x1684c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 3));
label_1684c4:
    // 0x1684c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1684c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1684c8:
    // 0x1684c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1684c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1684cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1684ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1684d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1684D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1684D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684D0u;
        // 0x1684d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1684D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1684D8u;
}
