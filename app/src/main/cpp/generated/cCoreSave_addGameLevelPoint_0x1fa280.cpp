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

// Function: cCoreSave_addGameLevelPoint
// Address: 0x1fa280 - 0x1fa558
void cCoreSave_addGameLevelPoint_0x1fa280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addGameLevelPoint_0x1fa280");
#endif

    switch (ctx->pc) {
        case 0x1fa2c4u: goto label_1fa2c4;
        case 0x1fa304u: goto label_1fa304;
        case 0x1fa314u: goto label_1fa314;
        case 0x1fa3b0u: goto label_1fa3b0;
        case 0x1fa458u: goto label_1fa458;
        case 0x1fa4c4u: goto label_1fa4c4;
        default: break;
    }

    ctx->pc = 0x1fa280u;

    // 0x1fa280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fa280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fa284: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fa284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fa288: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fa288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fa28c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa290: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fa290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fa294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fa298: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fa298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa29c: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1FA29Cu;
    {
        const bool branch_taken_0x1fa29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA29Cu;
        // 0x1fa2a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa29c) {
            ctx->pc = 0x1FA53Cu;
            goto label_1fa53c;
        }
    }
    ctx->pc = 0x1FA2A4u;
    // 0x1fa2a4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1fa2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1fa2a8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1fa2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1fa2ac: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x1fa2acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x1fa2b0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1fa2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1fa2b4: 0x546000a2  bnel        $v1, $zero, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1FA2B4u;
    {
        const bool branch_taken_0x1fa2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa2b4) {
            ctx->pc = 0x1FA2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA2B4u;
            // 0x1fa2b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA540u;
            goto label_1fa540;
        }
    }
    ctx->pc = 0x1FA2BCu;
    // 0x1fa2bc: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x1FA2BCu;
    SET_GPR_U32(ctx, 31, 0x1FA2C4u);
    ctx->pc = 0x1FA2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2BCu;
    // 0x1fa2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x1FA2BCu, 0x1FA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2C4u;
label_1fa2c4:
    // 0x1fa2c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fa2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa2c8: 0x1043009c  beq         $v0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x1FA2C8u;
    {
        const bool branch_taken_0x1fa2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2C8u;
        // 0x1fa2cc: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2c8) {
            ctx->pc = 0x1FA53Cu;
            goto label_1fa53c;
        }
    }
    ctx->pc = 0x1FA2D0u;
    // 0x1fa2d0: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1fa2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x1fa2d4: 0x8c839b70  lw          $v1, -0x6490($a0)
    ctx->pc = 0x1fa2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941552)));
    // 0x1fa2d8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1fa2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1fa2dc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1fa2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1fa2e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA2E0u;
    {
        const bool branch_taken_0x1fa2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2E0u;
        // 0x1fa2e4: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2e0) {
            ctx->pc = 0x1FA2FCu;
            goto label_1fa2fc;
        }
    }
    ctx->pc = 0x1FA2E8u;
    // 0x1fa2e8: 0x9c628240  lwu         $v0, -0x7DC0($v1)
    ctx->pc = 0x1fa2e8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294935104)));
    // 0x1fa2ec: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1fa2ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1fa2f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fa2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fa2f4: 0x50400092  beql        $v0, $zero, . + 4 + (0x92 << 2)
    ctx->pc = 0x1FA2F4u;
    {
        const bool branch_taken_0x1fa2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa2f4) {
            ctx->pc = 0x1FA2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA2F4u;
            // 0x1fa2f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA540u;
            goto label_1fa540;
        }
    }
    ctx->pc = 0x1FA2FCu;
label_1fa2fc:
    // 0x1fa2fc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1FA2FCu;
    SET_GPR_U32(ctx, 31, 0x1FA304u);
    ctx->pc = 0x1FA300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA2FCu;
    // 0x1fa300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1FA2FCu, 0x1FA304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA304u;
label_1fa304:
    // 0x1fa304: 0x1a200028  blez        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FA304u;
    {
        const bool branch_taken_0x1fa304 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x1FA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA304u;
        // 0x1fa308: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa304) {
            ctx->pc = 0x1FA3A8u;
            goto label_1fa3a8;
        }
    }
    ctx->pc = 0x1FA30Cu;
    // 0x1fa30c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1FA30Cu;
    SET_GPR_U32(ctx, 31, 0x1FA314u);
    ctx->pc = 0x1FA310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA30Cu;
    // 0x1fa310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1FA30Cu, 0x1FA314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA314u;
label_1fa314:
    // 0x1fa314: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1fa314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fa318: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1fa318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fa31c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA31Cu;
    {
        const bool branch_taken_0x1fa31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA31Cu;
        // 0x1fa320: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa31c) {
            ctx->pc = 0x1FA33Cu;
            goto label_1fa33c;
        }
    }
    ctx->pc = 0x1FA324u;
    // 0x1fa324: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fa324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa328: 0x2442c410  addiu       $v0, $v0, -0x3BF0
    ctx->pc = 0x1fa328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951952));
    // 0x1fa32c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fa32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa330: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fa330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa334: 0x800008  jr          $a0
    ctx->pc = 0x1FA334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA33Cu: goto label_1fa33c;
            case 0x1FA34Cu: goto label_1fa34c;
            case 0x1FA360u: goto label_1fa360;
            case 0x1FA370u: goto label_1fa370;
            case 0x1FA384u: goto label_1fa384;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA334u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FA33Cu;
label_1fa33c:
    // 0x1fa33c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1fa33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1fa340: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa344: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FA344u;
    {
        const bool branch_taken_0x1fa344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA344u;
        // 0x1fa348: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa344) {
            ctx->pc = 0x1FA390u;
            goto label_1fa390;
        }
    }
    ctx->pc = 0x1FA34Cu;
label_1fa34c:
    // 0x1fa34c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1fa34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1fa350: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1fa350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1fa354: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa358: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1FA358u;
    {
        const bool branch_taken_0x1fa358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA358u;
        // 0x1fa35c: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa358) {
            ctx->pc = 0x1FA390u;
            goto label_1fa390;
        }
    }
    ctx->pc = 0x1FA360u;
label_1fa360:
    // 0x1fa360: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fa360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fa364: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa368: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA368u;
    {
        const bool branch_taken_0x1fa368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA368u;
        // 0x1fa36c: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa368) {
            ctx->pc = 0x1FA390u;
            goto label_1fa390;
        }
    }
    ctx->pc = 0x1FA370u;
label_1fa370:
    // 0x1fa370: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1fa370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1fa374: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1fa374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1fa378: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa37c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA37Cu;
    {
        const bool branch_taken_0x1fa37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA37Cu;
        // 0x1fa380: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa37c) {
            ctx->pc = 0x1FA390u;
            goto label_1fa390;
        }
    }
    ctx->pc = 0x1FA384u;
label_1fa384:
    // 0x1fa384: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fa384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fa388: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa38c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1fa38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1fa390:
    // 0x1fa390: 0x9462ac94  lhu         $v0, -0x536C($v1)
    ctx->pc = 0x1fa390u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294945940)));
    // 0x1fa394: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1fa394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fa398: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FA398u;
    {
        const bool branch_taken_0x1fa398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa398) {
            ctx->pc = 0x1FA408u;
            goto label_1fa408;
        }
    }
    ctx->pc = 0x1FA3A0u;
    // 0x1fa3a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FA3A0u;
    {
        const bool branch_taken_0x1fa3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa3a0) {
            ctx->pc = 0x1FA3F4u;
            goto label_1fa3f4;
        }
    }
    ctx->pc = 0x1FA3A8u;
label_1fa3a8:
    // 0x1fa3a8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1FA3A8u;
    SET_GPR_U32(ctx, 31, 0x1FA3B0u);
    ctx->pc = 0x1FA3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA3A8u;
    // 0x1fa3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1FA3A8u, 0x1FA3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA3B0u;
label_1fa3b0:
    // 0x1fa3b0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1fa3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fa3b4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1fa3b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fa3b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA3B8u;
    {
        const bool branch_taken_0x1fa3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3B8u;
        // 0x1fa3bc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3b8) {
            ctx->pc = 0x1FA3D8u;
            goto label_1fa3d8;
        }
    }
    ctx->pc = 0x1FA3C0u;
    // 0x1fa3c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fa3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa3c4: 0x2442c430  addiu       $v0, $v0, -0x3BD0
    ctx->pc = 0x1fa3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x1fa3c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fa3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa3cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fa3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa3d0: 0x800008  jr          $a0
    ctx->pc = 0x1FA3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA3D8u: goto label_1fa3d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA3D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FA3D8u;
label_1fa3d8:
    // 0x1fa3d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fa3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fa3dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa3dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa3e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1fa3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1fa3e4: 0x24040801  addiu       $a0, $zero, 0x801
    ctx->pc = 0x1fa3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x1fa3e8: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x1fa3e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x1fa3ec: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA3ECu;
    {
        const bool branch_taken_0x1fa3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1fa3ec) {
            ctx->pc = 0x1FA408u;
            goto label_1fa408;
        }
    }
    ctx->pc = 0x1FA3F4u;
label_1fa3f4:
    // 0x1fa3f4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1fa3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1fa3f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1fa3f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1fa3fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa400: 0x0  nop
    ctx->pc = 0x1fa400u;
    // NOP
    // 0x1fa404: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fa404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1fa408:
    // 0x1fa408: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1fa408u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa40c: 0x0  nop
    ctx->pc = 0x1fa40cu;
    // NOP
    // 0x1fa410: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fa414: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1fa414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa418: 0x2402fc17  addiu       $v0, $zero, -0x3E9
    ctx->pc = 0x1fa418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
    // 0x1fa41c: 0x2404fc18  addiu       $a0, $zero, -0x3E8
    ctx->pc = 0x1fa41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x1fa420: 0x94a3001c  lhu         $v1, 0x1C($a1)
    ctx->pc = 0x1fa420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1fa424: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fa424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fa428: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1fa42c: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1fa42cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1fa430: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1fa430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1fa434: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x1fa434u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x1fa438: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1fa438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1fa43c: 0xa4a3001c  sh          $v1, 0x1C($a1)
    ctx->pc = 0x1fa43cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa440: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fa440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa444: 0x8462001c  lh          $v0, 0x1C($v1)
    ctx->pc = 0x1fa444u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1fa448: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA448u;
    {
        const bool branch_taken_0x1fa448 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1fa448) {
            ctx->pc = 0x1FA44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA448u;
            // 0x1fa44c: 0xa460001c  sh          $zero, 0x1C($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA450u;
            goto label_1fa450;
        }
    }
    ctx->pc = 0x1FA450u;
label_1fa450:
    // 0x1fa450: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x1FA450u;
    SET_GPR_U32(ctx, 31, 0x1FA458u);
    ctx->pc = 0x1FA454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA450u;
    // 0x1fa454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x1FA450u, 0x1FA458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA458u;
label_1fa458:
    // 0x1fa458: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FA458u;
    {
        const bool branch_taken_0x1fa458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA458u;
        // 0x1fa45c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa458) {
            ctx->pc = 0x1FA48Cu;
            goto label_1fa48c;
        }
    }
    ctx->pc = 0x1FA460u;
    // 0x1fa460: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fa460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa464: 0x2445f160  addiu       $a1, $v0, -0xEA0
    ctx->pc = 0x1fa464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963552));
    // 0x1fa468: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fa468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa46c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1fa46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fa470: 0x8482001c  lh          $v0, 0x1C($a0)
    ctx->pc = 0x1fa470u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1fa474: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fa474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fa478: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1fa478u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fa47c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FA47Cu;
    {
        const bool branch_taken_0x1fa47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa47c) {
            ctx->pc = 0x1FA4BCu;
            goto label_1fa4bc;
        }
    }
    ctx->pc = 0x1FA484u;
    // 0x1fa484: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FA484u;
    {
        const bool branch_taken_0x1fa484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA484u;
        // 0x1fa488: 0x94a20004  lhu         $v0, 0x4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa484) {
            ctx->pc = 0x1FA4B4u;
            goto label_1fa4b4;
        }
    }
    ctx->pc = 0x1FA48Cu;
label_1fa48c:
    // 0x1fa48c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fa48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa490: 0x2445f160  addiu       $a1, $v0, -0xEA0
    ctx->pc = 0x1fa490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963552));
    // 0x1fa494: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fa494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa498: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1fa498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1fa49c: 0x8482001c  lh          $v0, 0x1C($a0)
    ctx->pc = 0x1fa49cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1fa4a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fa4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fa4a4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1fa4a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fa4a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA4A8u;
    {
        const bool branch_taken_0x1fa4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa4a8) {
            ctx->pc = 0x1FA4BCu;
            goto label_1fa4bc;
        }
    }
    ctx->pc = 0x1FA4B0u;
    // 0x1fa4b0: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x1fa4b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_1fa4b4:
    // 0x1fa4b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fa4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fa4b8: 0xa482001c  sh          $v0, 0x1C($a0)
    ctx->pc = 0x1fa4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 2));
label_1fa4bc:
    // 0x1fa4bc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1FA4BCu;
    SET_GPR_U32(ctx, 31, 0x1FA4C4u);
    ctx->pc = 0x1FA4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA4BCu;
    // 0x1fa4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1FA4BCu, 0x1FA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA4C4u;
label_1fa4c4:
    // 0x1fa4c4: 0x2644ffff  addiu       $a0, $s2, -0x1
    ctx->pc = 0x1fa4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1fa4c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fa4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fa4cc: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1fa4ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fa4d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1fa4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4d4: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1fa4d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1fa4d8: 0x38c20004  xori        $v0, $a2, 0x4
    ctx->pc = 0x1fa4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
    // 0x1fa4dc: 0xa2300a  movz        $a2, $a1, $v0
    ctx->pc = 0x1fa4dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x1fa4e0: 0x246182a  slt         $v1, $s2, $a2
    ctx->pc = 0x1fa4e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fa4e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA4E4u;
    {
        const bool branch_taken_0x1fa4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4E4u;
        // 0x1fa4e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4e4) {
            ctx->pc = 0x1FA4F4u;
            goto label_1fa4f4;
        }
    }
    ctx->pc = 0x1FA4ECu;
    // 0x1fa4ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fa4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa4f0: 0xa062001e  sb          $v0, 0x1E($v1)
    ctx->pc = 0x1fa4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 2));
label_1fa4f4:
    // 0x1fa4f4: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x1fa4f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1fa4f8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FA4F8u;
    {
        const bool branch_taken_0x1fa4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4F8u;
        // 0x1fa4fc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4f8) {
            ctx->pc = 0x1FA53Cu;
            goto label_1fa53c;
        }
    }
    ctx->pc = 0x1FA500u;
    // 0x1fa500: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fa500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa504: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fa504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fa508: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1fa508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fa50c: 0x8083001e  lb          $v1, 0x1E($a0)
    ctx->pc = 0x1fa50cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x1fa510: 0x9085001e  lbu         $a1, 0x1E($a0)
    ctx->pc = 0x1fa510u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x1fa514: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA514u;
    {
        const bool branch_taken_0x1fa514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA514u;
        // 0x1fa518: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa514) {
            ctx->pc = 0x1FA53Cu;
            goto label_1fa53c;
        }
    }
    ctx->pc = 0x1FA51Cu;
    // 0x1fa51c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1fa51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1fa520: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fa520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fa524: 0xa083001e  sb          $v1, 0x1E($a0)
    ctx->pc = 0x1fa524u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa528: 0x2625f160  addiu       $a1, $s1, -0xEA0
    ctx->pc = 0x1fa528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963552));
    // 0x1fa52c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fa52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fa530: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fa530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fa534: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1fa534u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa538: 0xa483001c  sh          $v1, 0x1C($a0)
    ctx->pc = 0x1fa538u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 3));
label_1fa53c:
    // 0x1fa53c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fa53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fa540:
    // 0x1fa540: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fa540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa544: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fa544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa54c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA54Cu;
        // 0x1fa550: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA554u;
    // 0x1fa554: 0x0  nop
    ctx->pc = 0x1fa554u;
    // NOP
    ctx->pc = 0x1fa558u;
}
