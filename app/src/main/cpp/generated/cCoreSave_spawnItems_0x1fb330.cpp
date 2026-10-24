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

// Function: cCoreSave_spawnItems
// Address: 0x1fb330 - 0x1fb4d8
void cCoreSave_spawnItems_0x1fb330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_spawnItems_0x1fb330");
#endif

    switch (ctx->pc) {
        case 0x1fb330u: goto label_1fb330;
        case 0x1fb334u: goto label_1fb334;
        case 0x1fb338u: goto label_1fb338;
        case 0x1fb33cu: goto label_1fb33c;
        case 0x1fb340u: goto label_1fb340;
        case 0x1fb344u: goto label_1fb344;
        case 0x1fb348u: goto label_1fb348;
        case 0x1fb34cu: goto label_1fb34c;
        case 0x1fb350u: goto label_1fb350;
        case 0x1fb354u: goto label_1fb354;
        case 0x1fb358u: goto label_1fb358;
        case 0x1fb35cu: goto label_1fb35c;
        case 0x1fb360u: goto label_1fb360;
        case 0x1fb364u: goto label_1fb364;
        case 0x1fb368u: goto label_1fb368;
        case 0x1fb36cu: goto label_1fb36c;
        case 0x1fb370u: goto label_1fb370;
        case 0x1fb374u: goto label_1fb374;
        case 0x1fb378u: goto label_1fb378;
        case 0x1fb37cu: goto label_1fb37c;
        case 0x1fb380u: goto label_1fb380;
        case 0x1fb384u: goto label_1fb384;
        case 0x1fb388u: goto label_1fb388;
        case 0x1fb38cu: goto label_1fb38c;
        case 0x1fb390u: goto label_1fb390;
        case 0x1fb394u: goto label_1fb394;
        case 0x1fb398u: goto label_1fb398;
        case 0x1fb39cu: goto label_1fb39c;
        case 0x1fb3a0u: goto label_1fb3a0;
        case 0x1fb3a4u: goto label_1fb3a4;
        case 0x1fb3a8u: goto label_1fb3a8;
        case 0x1fb3acu: goto label_1fb3ac;
        case 0x1fb3b0u: goto label_1fb3b0;
        case 0x1fb3b4u: goto label_1fb3b4;
        case 0x1fb3b8u: goto label_1fb3b8;
        case 0x1fb3bcu: goto label_1fb3bc;
        case 0x1fb3c0u: goto label_1fb3c0;
        case 0x1fb3c4u: goto label_1fb3c4;
        case 0x1fb3c8u: goto label_1fb3c8;
        case 0x1fb3ccu: goto label_1fb3cc;
        case 0x1fb3d0u: goto label_1fb3d0;
        case 0x1fb3d4u: goto label_1fb3d4;
        case 0x1fb3d8u: goto label_1fb3d8;
        case 0x1fb3dcu: goto label_1fb3dc;
        case 0x1fb3e0u: goto label_1fb3e0;
        case 0x1fb3e4u: goto label_1fb3e4;
        case 0x1fb3e8u: goto label_1fb3e8;
        case 0x1fb3ecu: goto label_1fb3ec;
        case 0x1fb3f0u: goto label_1fb3f0;
        case 0x1fb3f4u: goto label_1fb3f4;
        case 0x1fb3f8u: goto label_1fb3f8;
        case 0x1fb3fcu: goto label_1fb3fc;
        case 0x1fb400u: goto label_1fb400;
        case 0x1fb404u: goto label_1fb404;
        case 0x1fb408u: goto label_1fb408;
        case 0x1fb40cu: goto label_1fb40c;
        case 0x1fb410u: goto label_1fb410;
        case 0x1fb414u: goto label_1fb414;
        case 0x1fb418u: goto label_1fb418;
        case 0x1fb41cu: goto label_1fb41c;
        case 0x1fb420u: goto label_1fb420;
        case 0x1fb424u: goto label_1fb424;
        case 0x1fb428u: goto label_1fb428;
        case 0x1fb42cu: goto label_1fb42c;
        case 0x1fb430u: goto label_1fb430;
        case 0x1fb434u: goto label_1fb434;
        case 0x1fb438u: goto label_1fb438;
        case 0x1fb43cu: goto label_1fb43c;
        case 0x1fb440u: goto label_1fb440;
        case 0x1fb444u: goto label_1fb444;
        case 0x1fb448u: goto label_1fb448;
        case 0x1fb44cu: goto label_1fb44c;
        case 0x1fb450u: goto label_1fb450;
        case 0x1fb454u: goto label_1fb454;
        case 0x1fb458u: goto label_1fb458;
        case 0x1fb45cu: goto label_1fb45c;
        case 0x1fb460u: goto label_1fb460;
        case 0x1fb464u: goto label_1fb464;
        case 0x1fb468u: goto label_1fb468;
        case 0x1fb46cu: goto label_1fb46c;
        case 0x1fb470u: goto label_1fb470;
        case 0x1fb474u: goto label_1fb474;
        case 0x1fb478u: goto label_1fb478;
        case 0x1fb47cu: goto label_1fb47c;
        case 0x1fb480u: goto label_1fb480;
        case 0x1fb484u: goto label_1fb484;
        case 0x1fb488u: goto label_1fb488;
        case 0x1fb48cu: goto label_1fb48c;
        case 0x1fb490u: goto label_1fb490;
        case 0x1fb494u: goto label_1fb494;
        case 0x1fb498u: goto label_1fb498;
        case 0x1fb49cu: goto label_1fb49c;
        case 0x1fb4a0u: goto label_1fb4a0;
        case 0x1fb4a4u: goto label_1fb4a4;
        case 0x1fb4a8u: goto label_1fb4a8;
        case 0x1fb4acu: goto label_1fb4ac;
        case 0x1fb4b0u: goto label_1fb4b0;
        case 0x1fb4b4u: goto label_1fb4b4;
        case 0x1fb4b8u: goto label_1fb4b8;
        case 0x1fb4bcu: goto label_1fb4bc;
        case 0x1fb4c0u: goto label_1fb4c0;
        case 0x1fb4c4u: goto label_1fb4c4;
        case 0x1fb4c8u: goto label_1fb4c8;
        case 0x1fb4ccu: goto label_1fb4cc;
        case 0x1fb4d0u: goto label_1fb4d0;
        case 0x1fb4d4u: goto label_1fb4d4;
        default: break;
    }

    ctx->pc = 0x1fb330u;

label_1fb330:
    // 0x1fb330: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fb330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1fb334:
    // 0x1fb334: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1fb334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1fb338:
    // 0x1fb338: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1fb338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1fb33c:
    // 0x1fb33c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fb33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1fb340:
    // 0x1fb340: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1fb340u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb344:
    // 0x1fb344: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1fb344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1fb348:
    // 0x1fb348: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1fb348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
label_1fb34c:
    // 0x1fb34c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1fb34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1fb350:
    // 0x1fb350: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1fb350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1fb354:
    // 0x1fb354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fb358:
    // 0x1fb358: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1fb358u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1fb35c:
    // 0x1fb35c: 0x904305b1  lbu         $v1, 0x5B1($v0)
    ctx->pc = 0x1fb35cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1457)));
label_1fb360:
    // 0x1fb360: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
label_1fb364:
    if (ctx->pc == 0x1FB364u) {
        ctx->pc = 0x1FB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB360u;
        // 0x1fb364: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB368u;
        goto label_1fb368;
    }
    ctx->pc = 0x1FB360u;
    {
        const bool branch_taken_0x1fb360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB360u;
        // 0x1fb364: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb360) {
            ctx->pc = 0x1FB4B4u;
            goto label_1fb4b4;
        }
    }
    ctx->pc = 0x1FB368u;
label_1fb368:
    // 0x1fb368: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fb368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb36c:
    // 0x1fb36c: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_1fb370:
    if (ctx->pc == 0x1FB370u) {
        ctx->pc = 0x1FB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB36Cu;
        // 0x1fb370: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB374u;
        goto label_1fb374;
    }
    ctx->pc = 0x1FB36Cu;
    {
        const bool branch_taken_0x1fb36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB36Cu;
        // 0x1fb370: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb36c) {
            ctx->pc = 0x1FB4B4u;
            goto label_1fb4b4;
        }
    }
    ctx->pc = 0x1FB374u;
label_1fb374:
    // 0x1fb374: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1fb374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1fb378:
    // 0x1fb378: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1fb378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1fb37c:
    // 0x1fb37c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1fb37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1fb380:
    // 0x1fb380: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1fb380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb384:
    // 0x1fb384: 0x0  nop
    ctx->pc = 0x1fb384u;
    // NOP
label_1fb388:
    // 0x1fb388: 0x138900  sll         $s1, $s3, 4
    ctx->pc = 0x1fb388u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1fb38c:
    // 0x1fb38c: 0x268374a0  addiu       $v1, $s4, 0x74A0
    ctx->pc = 0x1fb38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 29856));
label_1fb390:
    // 0x1fb390: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x1fb390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_1fb394:
    // 0x1fb394: 0x946505b0  lhu         $a1, 0x5B0($v1)
    ctx->pc = 0x1fb394u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1456)));
label_1fb398:
    // 0x1fb398: 0x9482028a  lhu         $v0, 0x28A($a0)
    ctx->pc = 0x1fb398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 650)));
label_1fb39c:
    // 0x1fb39c: 0x54450042  bnel        $v0, $a1, . + 4 + (0x42 << 2)
label_1fb3a0:
    if (ctx->pc == 0x1FB3A0u) {
        ctx->pc = 0x1FB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB39Cu;
        // 0x1fb3a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB3A4u;
        goto label_1fb3a4;
    }
    ctx->pc = 0x1FB39Cu;
    {
        const bool branch_taken_0x1fb39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fb39c) {
            ctx->pc = 0x1FB3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB39Cu;
            // 0x1fb3a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB4A8u;
            goto label_1fb4a8;
        }
    }
    ctx->pc = 0x1FB3A4u;
label_1fb3a4:
    // 0x1fb3a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fb3a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb3a8:
    // 0x1fb3a8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1fb3a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1fb3ac:
    // 0x1fb3ac: 0xc0c3ea6  jal         func_30FA98
label_1fb3b0:
    if (ctx->pc == 0x1FB3B0u) {
        ctx->pc = 0x1FB3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3ACu;
        // 0x1fb3b0: 0x9444028c  lhu         $a0, 0x28C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB3B4u;
        goto label_1fb3b4;
    }
    ctx->pc = 0x1FB3ACu;
    SET_GPR_U32(ctx, 31, 0x1FB3B4u);
    ctx->pc = 0x1FB3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB3ACu;
    // 0x1fb3b0: 0x9444028c  lhu         $a0, 0x28C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x1FB3ACu, 0x1FB3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB3B4u;
label_1fb3b4:
    // 0x1fb3b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fb3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb3b8:
    // 0x1fb3b8: 0x5200003b  beql        $s0, $zero, . + 4 + (0x3B << 2)
label_1fb3bc:
    if (ctx->pc == 0x1FB3BCu) {
        ctx->pc = 0x1FB3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3B8u;
        // 0x1fb3bc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB3C0u;
        goto label_1fb3c0;
    }
    ctx->pc = 0x1FB3B8u;
    {
        const bool branch_taken_0x1fb3b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb3b8) {
            ctx->pc = 0x1FB3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB3B8u;
            // 0x1fb3bc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB4A8u;
            goto label_1fb4a8;
        }
    }
    ctx->pc = 0x1FB3C0u;
label_1fb3c0:
    // 0x1fb3c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fb3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb3c4:
    // 0x1fb3c4: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x1fb3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1fb3c8:
    // 0x1fb3c8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fb3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1fb3cc:
    // 0x1fb3cc: 0x94430290  lhu         $v1, 0x290($v0)
    ctx->pc = 0x1fb3ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 656)));
label_1fb3d0:
    // 0x1fb3d0: 0xa6030662  sh          $v1, 0x662($s0)
    ctx->pc = 0x1fb3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1634), (uint16_t)GPR_U32(ctx, 3));
label_1fb3d4:
    // 0x1fb3d4: 0x84a40040  lh          $a0, 0x40($a1)
    ctx->pc = 0x1fb3d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
label_1fb3d8:
    // 0x1fb3d8: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1fb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_1fb3dc:
    // 0x1fb3dc: 0x40f809  jalr        $v0
label_1fb3e0:
    if (ctx->pc == 0x1FB3E0u) {
        ctx->pc = 0x1FB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3DCu;
        // 0x1fb3e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB3E4u;
        goto label_1fb3e4;
    }
    ctx->pc = 0x1FB3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FB3E4u);
        ctx->pc = 0x1FB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3DCu;
        // 0x1fb3e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB3DCu, 0x1FB3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB3E4u;
label_1fb3e4:
    // 0x1fb3e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1fb3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb3e8:
    // 0x1fb3e8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1fb3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1fb3ec:
    // 0x1fb3ec: 0x94640298  lhu         $a0, 0x298($v1)
    ctx->pc = 0x1fb3ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 664)));
label_1fb3f0:
    // 0x1fb3f0: 0xae040560  sw          $a0, 0x560($s0)
    ctx->pc = 0x1fb3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 4));
label_1fb3f4:
    // 0x1fb3f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fb3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb3f8:
    // 0x1fb3f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1fb3fc:
    // 0x1fb3fc: 0x84430292  lh          $v1, 0x292($v0)
    ctx->pc = 0x1fb3fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 658)));
label_1fb400:
    // 0x1fb400: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb404:
    // 0x1fb404: 0x0  nop
    ctx->pc = 0x1fb404u;
    // NOP
label_1fb408:
    // 0x1fb408: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fb408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fb40c:
    // 0x1fb40c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1fb40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1fb410:
    // 0x1fb410: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1fb410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1fb414:
    // 0x1fb414: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1fb414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1fb418:
    // 0x1fb418: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fb418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb41c:
    // 0x1fb41c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fb41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1fb420:
    // 0x1fb420: 0x84430294  lh          $v1, 0x294($v0)
    ctx->pc = 0x1fb420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 660)));
label_1fb424:
    // 0x1fb424: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb428:
    // 0x1fb428: 0x0  nop
    ctx->pc = 0x1fb428u;
    // NOP
label_1fb42c:
    // 0x1fb42c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fb42cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fb430:
    // 0x1fb430: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1fb430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1fb434:
    // 0x1fb434: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1fb434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1fb438:
    // 0x1fb438: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1fb438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1fb43c:
    // 0x1fb43c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb440:
    // 0x1fb440: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fb440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1fb444:
    // 0x1fb444: 0x84430296  lh          $v1, 0x296($v0)
    ctx->pc = 0x1fb444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 662)));
label_1fb448:
    // 0x1fb448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb44c:
    // 0x1fb44c: 0x0  nop
    ctx->pc = 0x1fb44cu;
    // NOP
label_1fb450:
    // 0x1fb450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fb450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fb454:
    // 0x1fb454: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1fb454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1fb458:
    // 0x1fb458: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1fb458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1fb45c:
    // 0x1fb45c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1fb45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1fb460:
    // 0x1fb460: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fb460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb464:
    // 0x1fb464: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fb464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1fb468:
    // 0x1fb468: 0x8043028f  lb          $v1, 0x28F($v0)
    ctx->pc = 0x1fb468u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 655)));
label_1fb46c:
    // 0x1fb46c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fb46cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fb470:
    // 0x1fb470: 0x0  nop
    ctx->pc = 0x1fb470u;
    // NOP
label_1fb474:
    // 0x1fb474: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fb474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fb478:
    // 0x1fb478: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fb478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1fb47c:
    // 0x1fb47c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1fb47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_1fb480:
    // 0x1fb480: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1fb480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
label_1fb484:
    // 0x1fb484: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fb488:
    // 0x1fb488: 0x0  nop
    ctx->pc = 0x1fb488u;
    // NOP
label_1fb48c:
    // 0x1fb48c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1fb490:
    // 0x1fb490: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1fb490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_1fb494:
    // 0x1fb494: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1fb494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fb498:
    // 0x1fb498: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fb498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1fb49c:
    // 0x1fb49c: 0x9043028e  lbu         $v1, 0x28E($v0)
    ctx->pc = 0x1fb49cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 654)));
label_1fb4a0:
    // 0x1fb4a0: 0xa2030676  sb          $v1, 0x676($s0)
    ctx->pc = 0x1fb4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1654), (uint8_t)GPR_U32(ctx, 3));
label_1fb4a4:
    // 0x1fb4a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fb4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1fb4a8:
    // 0x1fb4a8: 0x2e620080  sltiu       $v0, $s3, 0x80
    ctx->pc = 0x1fb4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_1fb4ac:
    // 0x1fb4ac: 0x5440ffb6  bnel        $v0, $zero, . + 4 + (-0x4A << 2)
label_1fb4b0:
    if (ctx->pc == 0x1FB4B0u) {
        ctx->pc = 0x1FB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4ACu;
        // 0x1fb4b0: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB4B4u;
        goto label_1fb4b4;
    }
    ctx->pc = 0x1FB4ACu;
    {
        const bool branch_taken_0x1fb4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb4ac) {
            ctx->pc = 0x1FB4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB4ACu;
            // 0x1fb4b0: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb388;
        }
    }
    ctx->pc = 0x1FB4B4u;
label_1fb4b4:
    // 0x1fb4b4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1fb4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb4b8:
    // 0x1fb4b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1fb4b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fb4bc:
    // 0x1fb4bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fb4bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb4c0:
    // 0x1fb4c0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1fb4c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb4c4:
    // 0x1fb4c4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1fb4c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb4c8:
    // 0x1fb4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb4cc:
    // 0x1fb4cc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1fb4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1fb4d0:
    // 0x1fb4d0: 0x3e00008  jr          $ra
label_1fb4d4:
    if (ctx->pc == 0x1FB4D4u) {
        ctx->pc = 0x1FB4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4D0u;
        // 0x1fb4d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB4D8u;
        goto label_fallthrough_0x1fb4d0;
    }
    ctx->pc = 0x1FB4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4D0u;
        // 0x1fb4d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fb4d0:
    ctx->pc = 0x1FB4D8u;
}
