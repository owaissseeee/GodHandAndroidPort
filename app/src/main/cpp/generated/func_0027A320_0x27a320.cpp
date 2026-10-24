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

// Function: func_0027A320
// Address: 0x27a320 - 0x27a600
void func_0027A320_0x27a320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027A320_0x27a320");
#endif

    switch (ctx->pc) {
        case 0x27a320u: goto label_27a320;
        case 0x27a324u: goto label_27a324;
        case 0x27a328u: goto label_27a328;
        case 0x27a32cu: goto label_27a32c;
        case 0x27a330u: goto label_27a330;
        case 0x27a334u: goto label_27a334;
        case 0x27a338u: goto label_27a338;
        case 0x27a33cu: goto label_27a33c;
        case 0x27a340u: goto label_27a340;
        case 0x27a344u: goto label_27a344;
        case 0x27a348u: goto label_27a348;
        case 0x27a34cu: goto label_27a34c;
        case 0x27a350u: goto label_27a350;
        case 0x27a354u: goto label_27a354;
        case 0x27a358u: goto label_27a358;
        case 0x27a35cu: goto label_27a35c;
        case 0x27a360u: goto label_27a360;
        case 0x27a364u: goto label_27a364;
        case 0x27a368u: goto label_27a368;
        case 0x27a36cu: goto label_27a36c;
        case 0x27a370u: goto label_27a370;
        case 0x27a374u: goto label_27a374;
        case 0x27a378u: goto label_27a378;
        case 0x27a37cu: goto label_27a37c;
        case 0x27a380u: goto label_27a380;
        case 0x27a384u: goto label_27a384;
        case 0x27a388u: goto label_27a388;
        case 0x27a38cu: goto label_27a38c;
        case 0x27a390u: goto label_27a390;
        case 0x27a394u: goto label_27a394;
        case 0x27a398u: goto label_27a398;
        case 0x27a39cu: goto label_27a39c;
        case 0x27a3a0u: goto label_27a3a0;
        case 0x27a3a4u: goto label_27a3a4;
        case 0x27a3a8u: goto label_27a3a8;
        case 0x27a3acu: goto label_27a3ac;
        case 0x27a3b0u: goto label_27a3b0;
        case 0x27a3b4u: goto label_27a3b4;
        case 0x27a3b8u: goto label_27a3b8;
        case 0x27a3bcu: goto label_27a3bc;
        case 0x27a3c0u: goto label_27a3c0;
        case 0x27a3c4u: goto label_27a3c4;
        case 0x27a3c8u: goto label_27a3c8;
        case 0x27a3ccu: goto label_27a3cc;
        case 0x27a3d0u: goto label_27a3d0;
        case 0x27a3d4u: goto label_27a3d4;
        case 0x27a3d8u: goto label_27a3d8;
        case 0x27a3dcu: goto label_27a3dc;
        case 0x27a3e0u: goto label_27a3e0;
        case 0x27a3e4u: goto label_27a3e4;
        case 0x27a3e8u: goto label_27a3e8;
        case 0x27a3ecu: goto label_27a3ec;
        case 0x27a3f0u: goto label_27a3f0;
        case 0x27a3f4u: goto label_27a3f4;
        case 0x27a3f8u: goto label_27a3f8;
        case 0x27a3fcu: goto label_27a3fc;
        case 0x27a400u: goto label_27a400;
        case 0x27a404u: goto label_27a404;
        case 0x27a408u: goto label_27a408;
        case 0x27a40cu: goto label_27a40c;
        case 0x27a410u: goto label_27a410;
        case 0x27a414u: goto label_27a414;
        case 0x27a418u: goto label_27a418;
        case 0x27a41cu: goto label_27a41c;
        case 0x27a420u: goto label_27a420;
        case 0x27a424u: goto label_27a424;
        case 0x27a428u: goto label_27a428;
        case 0x27a42cu: goto label_27a42c;
        case 0x27a430u: goto label_27a430;
        case 0x27a434u: goto label_27a434;
        case 0x27a438u: goto label_27a438;
        case 0x27a43cu: goto label_27a43c;
        case 0x27a440u: goto label_27a440;
        case 0x27a444u: goto label_27a444;
        case 0x27a448u: goto label_27a448;
        case 0x27a44cu: goto label_27a44c;
        case 0x27a450u: goto label_27a450;
        case 0x27a454u: goto label_27a454;
        case 0x27a458u: goto label_27a458;
        case 0x27a45cu: goto label_27a45c;
        case 0x27a460u: goto label_27a460;
        case 0x27a464u: goto label_27a464;
        case 0x27a468u: goto label_27a468;
        case 0x27a46cu: goto label_27a46c;
        case 0x27a470u: goto label_27a470;
        case 0x27a474u: goto label_27a474;
        case 0x27a478u: goto label_27a478;
        case 0x27a47cu: goto label_27a47c;
        case 0x27a480u: goto label_27a480;
        case 0x27a484u: goto label_27a484;
        case 0x27a488u: goto label_27a488;
        case 0x27a48cu: goto label_27a48c;
        case 0x27a490u: goto label_27a490;
        case 0x27a494u: goto label_27a494;
        case 0x27a498u: goto label_27a498;
        case 0x27a49cu: goto label_27a49c;
        case 0x27a4a0u: goto label_27a4a0;
        case 0x27a4a4u: goto label_27a4a4;
        case 0x27a4a8u: goto label_27a4a8;
        case 0x27a4acu: goto label_27a4ac;
        case 0x27a4b0u: goto label_27a4b0;
        case 0x27a4b4u: goto label_27a4b4;
        case 0x27a4b8u: goto label_27a4b8;
        case 0x27a4bcu: goto label_27a4bc;
        case 0x27a4c0u: goto label_27a4c0;
        case 0x27a4c4u: goto label_27a4c4;
        case 0x27a4c8u: goto label_27a4c8;
        case 0x27a4ccu: goto label_27a4cc;
        case 0x27a4d0u: goto label_27a4d0;
        case 0x27a4d4u: goto label_27a4d4;
        case 0x27a4d8u: goto label_27a4d8;
        case 0x27a4dcu: goto label_27a4dc;
        case 0x27a4e0u: goto label_27a4e0;
        case 0x27a4e4u: goto label_27a4e4;
        case 0x27a4e8u: goto label_27a4e8;
        case 0x27a4ecu: goto label_27a4ec;
        case 0x27a4f0u: goto label_27a4f0;
        case 0x27a4f4u: goto label_27a4f4;
        case 0x27a4f8u: goto label_27a4f8;
        case 0x27a4fcu: goto label_27a4fc;
        case 0x27a500u: goto label_27a500;
        case 0x27a504u: goto label_27a504;
        case 0x27a508u: goto label_27a508;
        case 0x27a50cu: goto label_27a50c;
        case 0x27a510u: goto label_27a510;
        case 0x27a514u: goto label_27a514;
        case 0x27a518u: goto label_27a518;
        case 0x27a51cu: goto label_27a51c;
        case 0x27a520u: goto label_27a520;
        case 0x27a524u: goto label_27a524;
        case 0x27a528u: goto label_27a528;
        case 0x27a52cu: goto label_27a52c;
        case 0x27a530u: goto label_27a530;
        case 0x27a534u: goto label_27a534;
        case 0x27a538u: goto label_27a538;
        case 0x27a53cu: goto label_27a53c;
        case 0x27a540u: goto label_27a540;
        case 0x27a544u: goto label_27a544;
        case 0x27a548u: goto label_27a548;
        case 0x27a54cu: goto label_27a54c;
        case 0x27a550u: goto label_27a550;
        case 0x27a554u: goto label_27a554;
        case 0x27a558u: goto label_27a558;
        case 0x27a55cu: goto label_27a55c;
        case 0x27a560u: goto label_27a560;
        case 0x27a564u: goto label_27a564;
        case 0x27a568u: goto label_27a568;
        case 0x27a56cu: goto label_27a56c;
        case 0x27a570u: goto label_27a570;
        case 0x27a574u: goto label_27a574;
        case 0x27a578u: goto label_27a578;
        case 0x27a57cu: goto label_27a57c;
        case 0x27a580u: goto label_27a580;
        case 0x27a584u: goto label_27a584;
        case 0x27a588u: goto label_27a588;
        case 0x27a58cu: goto label_27a58c;
        case 0x27a590u: goto label_27a590;
        case 0x27a594u: goto label_27a594;
        case 0x27a598u: goto label_27a598;
        case 0x27a59cu: goto label_27a59c;
        case 0x27a5a0u: goto label_27a5a0;
        case 0x27a5a4u: goto label_27a5a4;
        case 0x27a5a8u: goto label_27a5a8;
        case 0x27a5acu: goto label_27a5ac;
        case 0x27a5b0u: goto label_27a5b0;
        case 0x27a5b4u: goto label_27a5b4;
        case 0x27a5b8u: goto label_27a5b8;
        case 0x27a5bcu: goto label_27a5bc;
        case 0x27a5c0u: goto label_27a5c0;
        case 0x27a5c4u: goto label_27a5c4;
        case 0x27a5c8u: goto label_27a5c8;
        case 0x27a5ccu: goto label_27a5cc;
        case 0x27a5d0u: goto label_27a5d0;
        case 0x27a5d4u: goto label_27a5d4;
        case 0x27a5d8u: goto label_27a5d8;
        case 0x27a5dcu: goto label_27a5dc;
        case 0x27a5e0u: goto label_27a5e0;
        case 0x27a5e4u: goto label_27a5e4;
        case 0x27a5e8u: goto label_27a5e8;
        case 0x27a5ecu: goto label_27a5ec;
        case 0x27a5f0u: goto label_27a5f0;
        case 0x27a5f4u: goto label_27a5f4;
        case 0x27a5f8u: goto label_27a5f8;
        case 0x27a5fcu: goto label_27a5fc;
        default: break;
    }

    ctx->pc = 0x27a320u;

label_27a320:
    // 0x27a320: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x27a320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_27a324:
    // 0x27a324: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27a324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_27a328:
    // 0x27a328: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x27a328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_27a32c:
    // 0x27a32c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x27a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_27a330:
    // 0x27a330: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x27a330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_27a334:
    // 0x27a334: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_27a338:
    // 0x27a338: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x27a338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_27a33c:
    // 0x27a33c: 0x146000ac  bnez        $v1, . + 4 + (0xAC << 2)
label_27a340:
    if (ctx->pc == 0x27A340u) {
        ctx->pc = 0x27A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A33Cu;
        // 0x27a340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A344u;
        goto label_27a344;
    }
    ctx->pc = 0x27A33Cu;
    {
        const bool branch_taken_0x27a33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A33Cu;
        // 0x27a340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a33c) {
            ctx->pc = 0x27A5F0u;
            goto label_27a5f0;
        }
    }
    ctx->pc = 0x27A344u;
label_27a344:
    // 0x27a344: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x27a344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_27a348:
    // 0x27a348: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
label_27a34c:
    if (ctx->pc == 0x27A34Cu) {
        ctx->pc = 0x27A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A348u;
        // 0x27a34c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A350u;
        goto label_27a350;
    }
    ctx->pc = 0x27A348u;
    {
        const bool branch_taken_0x27a348 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x27A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A348u;
        // 0x27a34c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a348) {
            ctx->pc = 0x27A378u;
            goto label_27a378;
        }
    }
    ctx->pc = 0x27A350u;
label_27a350:
    // 0x27a350: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_27a354:
    if (ctx->pc == 0x27A354u) {
        ctx->pc = 0x27A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A350u;
        // 0x27a354: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A358u;
        goto label_27a358;
    }
    ctx->pc = 0x27A350u;
    {
        const bool branch_taken_0x27a350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a350) {
            ctx->pc = 0x27A354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A350u;
            // 0x27a354: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A37Cu;
            goto label_27a37c;
        }
    }
    ctx->pc = 0x27A358u;
label_27a358:
    // 0x27a358: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27a35c:
    // 0x27a35c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_27a360:
    if (ctx->pc == 0x27A360u) {
        ctx->pc = 0x27A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A35Cu;
        // 0x27a360: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A364u;
        goto label_27a364;
    }
    ctx->pc = 0x27A35Cu;
    {
        const bool branch_taken_0x27a35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27a35c) {
            ctx->pc = 0x27A360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A35Cu;
            // 0x27a360: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A37Cu;
            goto label_27a37c;
        }
    }
    ctx->pc = 0x27A364u;
label_27a364:
    // 0x27a364: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x27a364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_27a368:
    // 0x27a368: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x27a368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_27a36c:
    // 0x27a36c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x27a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_27a370:
    // 0x27a370: 0x60f809  jalr        $v1
label_27a374:
    if (ctx->pc == 0x27A374u) {
        ctx->pc = 0x27A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A370u;
        // 0x27a374: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A378u;
        goto label_27a378;
    }
    ctx->pc = 0x27A370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27A378u);
        ctx->pc = 0x27A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A370u;
        // 0x27a374: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A370u, 0x27A378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A378u;
label_27a378:
    // 0x27a378: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x27a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_27a37c:
    // 0x27a37c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x27a37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_27a380:
    // 0x27a380: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
label_27a384:
    if (ctx->pc == 0x27A384u) {
        ctx->pc = 0x27A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A380u;
        // 0x27a384: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A388u;
        goto label_27a388;
    }
    ctx->pc = 0x27A380u;
    {
        const bool branch_taken_0x27a380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a380) {
            ctx->pc = 0x27A384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A380u;
            // 0x27a384: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A4B0u;
            goto label_27a4b0;
        }
    }
    ctx->pc = 0x27A388u;
label_27a388:
    // 0x27a388: 0x8e0221b0  lw          $v0, 0x21B0($s0)
    ctx->pc = 0x27a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_27a38c:
    // 0x27a38c: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_27a390:
    if (ctx->pc == 0x27A390u) {
        ctx->pc = 0x27A394u;
        goto label_27a394;
    }
    ctx->pc = 0x27A38Cu;
    {
        const bool branch_taken_0x27a38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a38c) {
            ctx->pc = 0x27A5E0u;
            goto label_27a5e0;
        }
    }
    ctx->pc = 0x27A394u;
label_27a394:
    // 0x27a394: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x27a394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_27a398:
    // 0x27a398: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x27a398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_27a39c:
    // 0x27a39c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27a3a0:
    if (ctx->pc == 0x27A3A0u) {
        ctx->pc = 0x27A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A39Cu;
        // 0x27a3a0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A3A4u;
        goto label_27a3a4;
    }
    ctx->pc = 0x27A39Cu;
    {
        const bool branch_taken_0x27a39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A39Cu;
        // 0x27a3a0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a39c) {
            ctx->pc = 0x27A3B0u;
            goto label_27a3b0;
        }
    }
    ctx->pc = 0x27A3A4u;
label_27a3a4:
    // 0x27a3a4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_27a3a8:
    // 0x27a3a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_27a3ac:
    if (ctx->pc == 0x27A3ACu) {
        ctx->pc = 0x27A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3A8u;
        // 0x27a3ac: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A3B0u;
        goto label_27a3b0;
    }
    ctx->pc = 0x27A3A8u;
    {
        const bool branch_taken_0x27a3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3A8u;
        // 0x27a3ac: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3a8) {
            ctx->pc = 0x27A3B4u;
            goto label_27a3b4;
        }
    }
    ctx->pc = 0x27A3B0u;
label_27a3b0:
    // 0x27a3b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27a3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a3b4:
    // 0x27a3b4: 0x8e0521b0  lw          $a1, 0x21B0($s0)
    ctx->pc = 0x27a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_27a3b8:
    // 0x27a3b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a3b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a3bc:
    // 0x27a3bc: 0x8e0421b4  lw          $a0, 0x21B4($s0)
    ctx->pc = 0x27a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8628)));
label_27a3c0:
    // 0x27a3c0: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x27a3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
label_27a3c4:
    // 0x27a3c4: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_27a3c8:
    if (ctx->pc == 0x27A3C8u) {
        ctx->pc = 0x27A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3C4u;
        // 0x27a3c8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A3CCu;
        goto label_27a3cc;
    }
    ctx->pc = 0x27A3C4u;
    {
        const bool branch_taken_0x27a3c4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3C4u;
        // 0x27a3c8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3c4) {
            ctx->pc = 0x27A3D0u;
            goto label_27a3d0;
        }
    }
    ctx->pc = 0x27A3CCu;
label_27a3cc:
    // 0x27a3cc: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x27a3ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27a3d0:
    // 0x27a3d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27a3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27a3d4:
    // 0x27a3d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27a3d8:
    if (ctx->pc == 0x27A3D8u) {
        ctx->pc = 0x27A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3D4u;
        // 0x27a3d8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A3DCu;
        goto label_27a3dc;
    }
    ctx->pc = 0x27A3D4u;
    {
        const bool branch_taken_0x27a3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3D4u;
        // 0x27a3d8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3d4) {
            ctx->pc = 0x27A3ECu;
            goto label_27a3ec;
        }
    }
    ctx->pc = 0x27A3DCu;
label_27a3dc:
    // 0x27a3dc: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x27a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
label_27a3e0:
    // 0x27a3e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27a3e4:
    // 0x27a3e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_27a3e8:
    if (ctx->pc == 0x27A3E8u) {
        ctx->pc = 0x27A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3E4u;
        // 0x27a3e8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A3ECu;
        goto label_27a3ec;
    }
    ctx->pc = 0x27A3E4u;
    {
        const bool branch_taken_0x27a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3E4u;
        // 0x27a3e8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3e4) {
            ctx->pc = 0x27A3F0u;
            goto label_27a3f0;
        }
    }
    ctx->pc = 0x27A3ECu;
label_27a3ec:
    // 0x27a3ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a3f0:
    // 0x27a3f0: 0x50c0002f  beql        $a2, $zero, . + 4 + (0x2F << 2)
label_27a3f4:
    if (ctx->pc == 0x27A3F4u) {
        ctx->pc = 0x27A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3F0u;
        // 0x27a3f4: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A3F8u;
        goto label_27a3f8;
    }
    ctx->pc = 0x27A3F0u;
    {
        const bool branch_taken_0x27a3f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a3f0) {
            ctx->pc = 0x27A3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A3F0u;
            // 0x27a3f4: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A4B0u;
            goto label_27a4b0;
        }
    }
    ctx->pc = 0x27A3F8u;
label_27a3f8:
    // 0x27a3f8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_27a3fc:
    if (ctx->pc == 0x27A3FCu) {
        ctx->pc = 0x27A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3F8u;
        // 0x27a3fc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A400u;
        goto label_27a400;
    }
    ctx->pc = 0x27A3F8u;
    {
        const bool branch_taken_0x27a3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3F8u;
        // 0x27a3fc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3f8) {
            ctx->pc = 0x27A4ACu;
            goto label_27a4ac;
        }
    }
    ctx->pc = 0x27A400u;
label_27a400:
    // 0x27a400: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x27a400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_27a404:
    // 0x27a404: 0x8cc300f0  lw          $v1, 0xF0($a2)
    ctx->pc = 0x27a404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_27a408:
    // 0x27a408: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x27a408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_27a40c:
    // 0x27a40c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x27a40cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_27a410:
    // 0x27a410: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x27a410u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_27a414:
    // 0x27a414: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x27a414u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_27a418:
    // 0x27a418: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x27a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_27a41c:
    // 0x27a41c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x27a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27a420:
    // 0x27a420: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x27a420u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_27a424:
    // 0x27a424: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x27a424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_27a428:
    // 0x27a428: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
label_27a42c:
    if (ctx->pc == 0x27A42Cu) {
        ctx->pc = 0x27A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A428u;
        // 0x27a42c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A430u;
        goto label_27a430;
    }
    ctx->pc = 0x27A428u;
    {
        const bool branch_taken_0x27a428 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x27A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A428u;
        // 0x27a42c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a428) {
            ctx->pc = 0x27A444u;
            goto label_27a444;
        }
    }
    ctx->pc = 0x27A430u;
label_27a430:
    // 0x27a430: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x27a430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a434:
    // 0x27a434: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x27a434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a438:
    // 0x27a438: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x27a438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27a43c:
    // 0x27a43c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x27a43cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27a440:
    // 0x27a440: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x27a440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27a444:
    // 0x27a444: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x27a444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_27a448:
    // 0x27a448: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27a448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a44c:
    // 0x27a44c: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x27a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_27a450:
    // 0x27a450: 0x26052130  addiu       $a1, $s0, 0x2130
    ctx->pc = 0x27a450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8496));
label_27a454:
    // 0x27a454: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_27a458:
    if (ctx->pc == 0x27A458u) {
        ctx->pc = 0x27A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A454u;
        // 0x27a458: 0x260605b0  addiu       $a2, $s0, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A45Cu;
        goto label_27a45c;
    }
    ctx->pc = 0x27A454u;
    {
        const bool branch_taken_0x27a454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A454u;
        // 0x27a458: 0x260605b0  addiu       $a2, $s0, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a454) {
            ctx->pc = 0x27A4A4u;
            goto label_27a4a4;
        }
    }
    ctx->pc = 0x27A45Cu;
label_27a45c:
    // 0x27a45c: 0x0  nop
    ctx->pc = 0x27a45cu;
    // NOP
label_27a460:
    // 0x27a460: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x27a460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a464:
    // 0x27a464: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27a464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_27a468:
    // 0x27a468: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x27a468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a46c:
    // 0x27a46c: 0xc46200b4  lwc1        $f2, 0xB4($v1)
    ctx->pc = 0x27a46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a470:
    // 0x27a470: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27a470u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27a474:
    // 0x27a474: 0xc46300b8  lwc1        $f3, 0xB8($v1)
    ctx->pc = 0x27a474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27a478:
    // 0x27a478: 0xe46100b0  swc1        $f1, 0xB0($v1)
    ctx->pc = 0x27a478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
label_27a47c:
    // 0x27a47c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x27a47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a480:
    // 0x27a480: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x27a480u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27a484:
    // 0x27a484: 0xe46200b4  swc1        $f2, 0xB4($v1)
    ctx->pc = 0x27a484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
label_27a488:
    // 0x27a488: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x27a488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a48c:
    // 0x27a48c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x27a48cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_27a490:
    // 0x27a490: 0xe46300b8  swc1        $f3, 0xB8($v1)
    ctx->pc = 0x27a490u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
label_27a494:
    // 0x27a494: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x27a494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_27a498:
    // 0x27a498: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x27a498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27a49c:
    // 0x27a49c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_27a4a0:
    if (ctx->pc == 0x27A4A0u) {
        ctx->pc = 0x27A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A49Cu;
        // 0x27a4a0: 0x8c630144  lw          $v1, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4A4u;
        goto label_27a4a4;
    }
    ctx->pc = 0x27A49Cu;
    {
        const bool branch_taken_0x27a49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A49Cu;
        // 0x27a4a0: 0x8c630144  lw          $v1, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a49c) {
            ctx->pc = 0x27A460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a460;
        }
    }
    ctx->pc = 0x27A4A4u;
label_27a4a4:
    // 0x27a4a4: 0xc041f1a  jal         func_107C68
label_27a4a8:
    if (ctx->pc == 0x27A4A8u) {
        ctx->pc = 0x27A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4A4u;
        // 0x27a4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4ACu;
        goto label_27a4ac;
    }
    ctx->pc = 0x27A4A4u;
    SET_GPR_U32(ctx, 31, 0x27A4ACu);
    ctx->pc = 0x27A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A4A4u;
    // 0x27a4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C68u, 0x27A4A4u, 0x27A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4ACu;
label_27a4ac:
    // 0x27a4ac: 0x8e0321b0  lw          $v1, 0x21B0($s0)
    ctx->pc = 0x27a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_27a4b0:
    // 0x27a4b0: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
label_27a4b4:
    if (ctx->pc == 0x27A4B4u) {
        ctx->pc = 0x27A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4B0u;
        // 0x27a4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4B8u;
        goto label_27a4b8;
    }
    ctx->pc = 0x27A4B0u;
    {
        const bool branch_taken_0x27a4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4B0u;
        // 0x27a4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4b0) {
            ctx->pc = 0x27A5E0u;
            goto label_27a5e0;
        }
    }
    ctx->pc = 0x27A4B8u;
label_27a4b8:
    // 0x27a4b8: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x27a4b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
label_27a4bc:
    // 0x27a4bc: 0x8e0421b4  lw          $a0, 0x21B4($s0)
    ctx->pc = 0x27a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8628)));
label_27a4c0:
    // 0x27a4c0: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_27a4c4:
    if (ctx->pc == 0x27A4C4u) {
        ctx->pc = 0x27A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4C0u;
        // 0x27a4c4: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4C8u;
        goto label_27a4c8;
    }
    ctx->pc = 0x27A4C0u;
    {
        const bool branch_taken_0x27a4c0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x27A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4C0u;
        // 0x27a4c4: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4c0) {
            ctx->pc = 0x27A4CCu;
            goto label_27a4cc;
        }
    }
    ctx->pc = 0x27A4C8u;
label_27a4c8:
    // 0x27a4c8: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x27a4c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_27a4cc:
    // 0x27a4cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27a4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27a4d0:
    // 0x27a4d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27a4d4:
    if (ctx->pc == 0x27A4D4u) {
        ctx->pc = 0x27A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4D0u;
        // 0x27a4d4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4D8u;
        goto label_27a4d8;
    }
    ctx->pc = 0x27A4D0u;
    {
        const bool branch_taken_0x27a4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4D0u;
        // 0x27a4d4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4d0) {
            ctx->pc = 0x27A4E8u;
            goto label_27a4e8;
        }
    }
    ctx->pc = 0x27A4D8u;
label_27a4d8:
    // 0x27a4d8: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x27a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
label_27a4dc:
    // 0x27a4dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27a4e0:
    // 0x27a4e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_27a4e4:
    if (ctx->pc == 0x27A4E4u) {
        ctx->pc = 0x27A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4E0u;
        // 0x27a4e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4E8u;
        goto label_27a4e8;
    }
    ctx->pc = 0x27A4E0u;
    {
        const bool branch_taken_0x27a4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4E0u;
        // 0x27a4e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4e0) {
            ctx->pc = 0x27A4ECu;
            goto label_27a4ec;
        }
    }
    ctx->pc = 0x27A4E8u;
label_27a4e8:
    // 0x27a4e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27a4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a4ec:
    // 0x27a4ec: 0x8e0221b0  lw          $v0, 0x21B0($s0)
    ctx->pc = 0x27a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_27a4f0:
    // 0x27a4f0: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x27a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_27a4f4:
    // 0x27a4f4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x27a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_27a4f8:
    // 0x27a4f8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_27a4fc:
    if (ctx->pc == 0x27A4FCu) {
        ctx->pc = 0x27A500u;
        goto label_27a500;
    }
    ctx->pc = 0x27A4F8u;
    {
        const bool branch_taken_0x27a4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a4f8) {
            ctx->pc = 0x27A518u;
            goto label_27a518;
        }
    }
    ctx->pc = 0x27A500u;
label_27a500:
    // 0x27a500: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27a500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a504:
    // 0x27a504: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x27a504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27a508:
    // 0x27a508: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27a508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a50c:
    // 0x27a50c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27a50cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27a510:
    // 0x27a510: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27a510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a514:
    // 0x27a514: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27a514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27a518:
    // 0x27a518: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_27a51c:
    if (ctx->pc == 0x27A51Cu) {
        ctx->pc = 0x27A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A518u;
        // 0x27a51c: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A520u;
        goto label_27a520;
    }
    ctx->pc = 0x27A518u;
    {
        const bool branch_taken_0x27a518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A518u;
        // 0x27a51c: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a518) {
            ctx->pc = 0x27A568u;
            goto label_27a568;
        }
    }
    ctx->pc = 0x27A520u;
label_27a520:
    // 0x27a520: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x27a520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_27a524:
    // 0x27a524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27a528:
    if (ctx->pc == 0x27A528u) {
        ctx->pc = 0x27A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A524u;
        // 0x27a528: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A52Cu;
        goto label_27a52c;
    }
    ctx->pc = 0x27A524u;
    {
        const bool branch_taken_0x27a524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A524u;
        // 0x27a528: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a524) {
            ctx->pc = 0x27A538u;
            goto label_27a538;
        }
    }
    ctx->pc = 0x27A52Cu;
label_27a52c:
    // 0x27a52c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x27a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_27a530:
    // 0x27a530: 0x10000002  b           . + 4 + (0x2 << 2)
label_27a534:
    if (ctx->pc == 0x27A534u) {
        ctx->pc = 0x27A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A530u;
        // 0x27a534: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A538u;
        goto label_27a538;
    }
    ctx->pc = 0x27A530u;
    {
        const bool branch_taken_0x27a530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A530u;
        // 0x27a534: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a530) {
            ctx->pc = 0x27A53Cu;
            goto label_27a53c;
        }
    }
    ctx->pc = 0x27A538u;
label_27a538:
    // 0x27a538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a53c:
    // 0x27a53c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x27a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_27a540:
    // 0x27a540: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x27a540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_27a544:
    // 0x27a544: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_27a548:
    if (ctx->pc == 0x27A548u) {
        ctx->pc = 0x27A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A544u;
        // 0x27a548: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A54Cu;
        goto label_27a54c;
    }
    ctx->pc = 0x27A544u;
    {
        const bool branch_taken_0x27a544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27a544) {
            ctx->pc = 0x27A548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A544u;
            // 0x27a548: 0x26030100  addiu       $v1, $s0, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A568u;
            goto label_27a568;
        }
    }
    ctx->pc = 0x27A54Cu;
label_27a54c:
    // 0x27a54c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27a54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a550:
    // 0x27a550: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x27a550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_27a554:
    // 0x27a554: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x27a554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a558:
    // 0x27a558: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x27a558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_27a55c:
    // 0x27a55c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x27a55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a560:
    // 0x27a560: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x27a560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27a564:
    // 0x27a564: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x27a564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_27a568:
    // 0x27a568: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x27a568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_27a56c:
    // 0x27a56c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_27a570:
    if (ctx->pc == 0x27A570u) {
        ctx->pc = 0x27A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A56Cu;
        // 0x27a570: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A574u;
        goto label_27a574;
    }
    ctx->pc = 0x27A56Cu;
    {
        const bool branch_taken_0x27a56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a56c) {
            ctx->pc = 0x27A570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A56Cu;
            // 0x27a570: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A590u;
            goto label_27a590;
        }
    }
    ctx->pc = 0x27A574u;
label_27a574:
    // 0x27a574: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x27a574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a578:
    // 0x27a578: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x27a578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_27a57c:
    // 0x27a57c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27a57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a580:
    // 0x27a580: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27a580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27a584:
    // 0x27a584: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27a584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a588:
    // 0x27a588: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27a588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27a58c:
    // 0x27a58c: 0x8e0421b0  lw          $a0, 0x21B0($s0)
    ctx->pc = 0x27a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_27a590:
    // 0x27a590: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27a590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_27a594:
    // 0x27a594: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x27a594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_27a598:
    // 0x27a598: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x27a598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_27a59c:
    // 0x27a59c: 0xc480024c  lwc1        $f0, 0x24C($a0)
    ctx->pc = 0x27a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a5a0:
    // 0x27a5a0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x27a5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_27a5a4:
    // 0x27a5a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27a5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27a5a8:
    // 0x27a5a8: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x27a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_27a5ac:
    // 0x27a5ac: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x27a5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
label_27a5b0:
    // 0x27a5b0: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x27a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_27a5b4:
    // 0x27a5b4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x27a5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_27a5b8:
    // 0x27a5b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27a5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_27a5bc:
    // 0x27a5bc: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x27a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_27a5c0:
    // 0x27a5c0: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x27a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_27a5c4:
    // 0x27a5c4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x27a5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_27a5c8:
    // 0x27a5c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_27a5cc:
    if (ctx->pc == 0x27A5CCu) {
        ctx->pc = 0x27A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5C8u;
        // 0x27a5cc: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A5D0u;
        goto label_27a5d0;
    }
    ctx->pc = 0x27A5C8u;
    {
        const bool branch_taken_0x27a5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5C8u;
        // 0x27a5cc: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5c8) {
            ctx->pc = 0x27A5DCu;
            goto label_27a5dc;
        }
    }
    ctx->pc = 0x27A5D0u;
label_27a5d0:
    // 0x27a5d0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x27a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_27a5d4:
    // 0x27a5d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27a5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_27a5d8:
    // 0x27a5d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27a5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27a5dc:
    // 0x27a5dc: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x27a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_27a5e0:
    // 0x27a5e0: 0xc0527ae  jal         func_149EB8
label_27a5e4:
    if (ctx->pc == 0x27A5E4u) {
        ctx->pc = 0x27A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5E0u;
        // 0x27a5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A5E8u;
        goto label_27a5e8;
    }
    ctx->pc = 0x27A5E0u;
    SET_GPR_U32(ctx, 31, 0x27A5E8u);
    ctx->pc = 0x27A5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A5E0u;
    // 0x27a5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x27A5E0u, 0x27A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5E8u;
label_27a5e8:
    // 0x27a5e8: 0xc09e9d2  jal         func_27A748
label_27a5ec:
    if (ctx->pc == 0x27A5ECu) {
        ctx->pc = 0x27A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5E8u;
        // 0x27a5ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A5F0u;
        goto label_27a5f0;
    }
    ctx->pc = 0x27A5E8u;
    SET_GPR_U32(ctx, 31, 0x27A5F0u);
    ctx->pc = 0x27A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A5E8u;
    // 0x27a5ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A748u, 0x27A5E8u, 0x27A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5F0u;
label_27a5f0:
    // 0x27a5f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x27a5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27a5f4:
    // 0x27a5f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27a5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27a5f8:
    // 0x27a5f8: 0x3e00008  jr          $ra
label_27a5fc:
    if (ctx->pc == 0x27A5FCu) {
        ctx->pc = 0x27A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5F8u;
        // 0x27a5fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A600u;
        goto label_fallthrough_0x27a5f8;
    }
    ctx->pc = 0x27A5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5F8u;
        // 0x27a5fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27a5f8:
    ctx->pc = 0x27A600u;
}
