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

// Function: func_0022B358
// Address: 0x22b358 - 0x22b790
void func_0022B358_0x22b358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022B358_0x22b358");
#endif

    switch (ctx->pc) {
        case 0x22b3f4u: goto label_22b3f4;
        case 0x22b420u: goto label_22b420;
        case 0x22b460u: goto label_22b460;
        case 0x22b468u: goto label_22b468;
        case 0x22b490u: goto label_22b490;
        case 0x22b49cu: goto label_22b49c;
        case 0x22b4c0u: goto label_22b4c0;
        case 0x22b4d0u: goto label_22b4d0;
        case 0x22b4e0u: goto label_22b4e0;
        case 0x22b548u: goto label_22b548;
        case 0x22b590u: goto label_22b590;
        case 0x22b5a0u: goto label_22b5a0;
        case 0x22b5acu: goto label_22b5ac;
        case 0x22b5b8u: goto label_22b5b8;
        case 0x22b5e8u: goto label_22b5e8;
        case 0x22b650u: goto label_22b650;
        case 0x22b698u: goto label_22b698;
        case 0x22b6a8u: goto label_22b6a8;
        case 0x22b6b4u: goto label_22b6b4;
        case 0x22b6c0u: goto label_22b6c0;
        case 0x22b6f0u: goto label_22b6f0;
        case 0x22b6f4u: goto label_22b6f4;
        case 0x22b718u: goto label_22b718;
        case 0x22b72cu: goto label_22b72c;
        case 0x22b73cu: goto label_22b73c;
        default: break;
    }

    ctx->pc = 0x22b358u;

    // 0x22b358: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22b358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22b35c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22b360: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22b360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22b364: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22b364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22b368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b36c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22b36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22b370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b374: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x22b374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22b378: 0xa202186a  sb          $v0, 0x186A($s0)
    ctx->pc = 0x22b378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x22b37c: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x22b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22b380: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x22b380u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22b384: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x22b384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x22b388: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x22B388u;
    {
        const bool branch_taken_0x22b388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B388u;
        // 0x22b38c: 0xae0316d4  sw          $v1, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b388) {
            ctx->pc = 0x22B3C4u;
            goto label_22b3c4;
        }
    }
    ctx->pc = 0x22B390u;
    // 0x22b390: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x22b390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x22b394: 0x2444fde6  addiu       $a0, $v0, -0x21A
    ctx->pc = 0x22b394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966758));
    // 0x22b398: 0x2c830041  sltiu       $v1, $a0, 0x41
    ctx->pc = 0x22b398u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x22b39c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22B39Cu;
    {
        const bool branch_taken_0x22b39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B39Cu;
        // 0x22b3a0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b39c) {
            ctx->pc = 0x22B3C4u;
            goto label_22b3c4;
        }
    }
    ctx->pc = 0x22B3A4u;
    // 0x22b3a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22b3a8: 0x244288e0  addiu       $v0, $v0, -0x7720
    ctx->pc = 0x22b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936800));
    // 0x22b3ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b3b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b3b4: 0x800008  jr          $a0
    ctx->pc = 0x22B3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B3BCu: goto label_22b3bc;
            case 0x22B3C4u: goto label_22b3c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B3B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22B3BCu;
label_22b3bc:
    // 0x22b3bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22b3c0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22b3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22b3c4:
    // 0x22b3c4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x22b3c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22b3c8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x22b3c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x22b3cc: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x22B3CCu;
    {
        const bool branch_taken_0x22b3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3CCu;
        // 0x22b3d0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3cc) {
            ctx->pc = 0x22B6E4u;
            goto label_22b6e4;
        }
    }
    ctx->pc = 0x22B3D4u;
    // 0x22b3d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22b3d8: 0x244289f0  addiu       $v0, $v0, -0x7610
    ctx->pc = 0x22b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937072));
    // 0x22b3dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b3e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22b3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b3e4: 0x800008  jr          $a0
    ctx->pc = 0x22B3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B3ECu: goto label_22b3ec;
            case 0x22B430u: goto label_22b430;
            case 0x22B4D8u: goto label_22b4d8;
            case 0x22B554u: goto label_22b554;
            case 0x22B5E0u: goto label_22b5e0;
            case 0x22B65Cu: goto label_22b65c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B3E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22B3ECu;
label_22b3ec:
    // 0x22b3ec: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22B3ECu;
    SET_GPR_U32(ctx, 31, 0x22B3F4u);
    ctx->pc = 0x22B3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B3ECu;
    // 0x22b3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22B3ECu, 0x22B3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3F4u;
label_22b3f4:
    // 0x22b3f4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22b3f8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22b3f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22b3fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22b3fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b404: 0x8c650ddc  lw          $a1, 0xDDC($v1)
    ctx->pc = 0x22b404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3548)));
    // 0x22b408: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22b408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22b40c: 0x8c660de0  lw          $a2, 0xDE0($v1)
    ctx->pc = 0x22b40cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3552)));
    // 0x22b410: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22b410u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b414: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22b414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22b418: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22B418u;
    SET_GPR_U32(ctx, 31, 0x22B420u);
    ctx->pc = 0x22B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B418u;
    // 0x22b41c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22B418u, 0x22B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B420u;
label_22b420:
    // 0x22b420: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22b420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22b424: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x22b424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x22b428: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22b428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22b42c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22b42cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22b430:
    // 0x22b430: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22b430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b434: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x22b434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x22b438: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x22b438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x22b43c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22b43cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22b440: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22b440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b444: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x22b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x22b448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b44c: 0xae0216dc  sw          $v0, 0x16DC($s0)
    ctx->pc = 0x22b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5852), GPR_U32(ctx, 2));
    // 0x22b450: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x22b450u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x22b454: 0xae0316e0  sw          $v1, 0x16E0($s0)
    ctx->pc = 0x22b454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5856), GPR_U32(ctx, 3));
    // 0x22b458: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22B458u;
    SET_GPR_U32(ctx, 31, 0x22B460u);
    ctx->pc = 0x22B45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B458u;
    // 0x22b45c: 0x260516a0  addiu       $a1, $s0, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22B458u, 0x22B460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B460u;
label_22b460:
    // 0x22b460: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22B460u;
    SET_GPR_U32(ctx, 31, 0x22B468u);
    ctx->pc = 0x22B464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B460u;
    // 0x22b464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22B460u, 0x22B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B468u;
label_22b468:
    // 0x22b468: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B468u;
    {
        const bool branch_taken_0x22b468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b468) {
            ctx->pc = 0x22B47Cu;
            goto label_22b47c;
        }
    }
    ctx->pc = 0x22B470u;
    // 0x22b470: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22b470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22b474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22b478: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22b478u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22b47c:
    // 0x22b47c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22b480: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22b480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22b484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b488: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22B488u;
    SET_GPR_U32(ctx, 31, 0x22B490u);
    ctx->pc = 0x22B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B488u;
    // 0x22b48c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22B488u, 0x22B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B490u;
label_22b490:
    // 0x22b490: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22b490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22b494: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22B494u;
    SET_GPR_U32(ctx, 31, 0x22B49Cu);
    ctx->pc = 0x22B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B494u;
    // 0x22b498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22B494u, 0x22B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B49Cu;
label_22b49c:
    // 0x22b49c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22b49cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x22b4a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22b4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22b4a4: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x22B4A4u;
    {
        const bool branch_taken_0x22b4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4A4u;
        // 0x22b4a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4a4) {
            ctx->pc = 0x22B6E8u;
            goto label_22b6e8;
        }
    }
    ctx->pc = 0x22B4ACu;
    // 0x22b4ac: 0x920217c3  lbu         $v0, 0x17C3($s0)
    ctx->pc = 0x22b4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
    // 0x22b4b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B4B0u;
    {
        const bool branch_taken_0x22b4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4B0u;
        // 0x22b4b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4b0) {
            ctx->pc = 0x22B4C8u;
            goto label_22b4c8;
        }
    }
    ctx->pc = 0x22B4B8u;
    // 0x22b4b8: 0xc09a98e  jal         func_26A638
    ctx->pc = 0x22B4B8u;
    SET_GPR_U32(ctx, 31, 0x22B4C0u);
    ctx->pc = 0x22B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B4B8u;
    // 0x22b4bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A638u, 0x22B4B8u, 0x22B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B4C0u;
label_22b4c0:
    // 0x22b4c0: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x22B4C0u;
    {
        const bool branch_taken_0x22b4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4C0u;
        // 0x22b4c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4c0) {
            ctx->pc = 0x22B6E8u;
            goto label_22b6e8;
        }
    }
    ctx->pc = 0x22B4C8u;
label_22b4c8:
    // 0x22b4c8: 0xc09a98e  jal         func_26A638
    ctx->pc = 0x22B4C8u;
    SET_GPR_U32(ctx, 31, 0x22B4D0u);
    ctx->pc = 0x22B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B4C8u;
    // 0x22b4cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A638u, 0x22B4C8u, 0x22B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B4D0u;
label_22b4d0:
    // 0x22b4d0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x22B4D0u;
    {
        const bool branch_taken_0x22b4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4D0u;
        // 0x22b4d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4d0) {
            ctx->pc = 0x22B6E8u;
            goto label_22b6e8;
        }
    }
    ctx->pc = 0x22B4D8u;
label_22b4d8:
    // 0x22b4d8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22B4D8u;
    SET_GPR_U32(ctx, 31, 0x22B4E0u);
    ctx->pc = 0x22B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B4D8u;
    // 0x22b4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22B4D8u, 0x22B4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B4E0u;
label_22b4e0:
    // 0x22b4e0: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x22b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x22b4e4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22b4e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22b4e8: 0x2463fde6  addiu       $v1, $v1, -0x21A
    ctx->pc = 0x22b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966758));
    // 0x22b4ec: 0x2c620041  sltiu       $v0, $v1, 0x41
    ctx->pc = 0x22b4ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x22b4f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B4F0u;
    {
        const bool branch_taken_0x22b4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4F0u;
        // 0x22b4f4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4f0) {
            ctx->pc = 0x22B510u;
            goto label_22b510;
        }
    }
    ctx->pc = 0x22B4F8u;
    // 0x22b4f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22b4fc: 0x24428a10  addiu       $v0, $v0, -0x75F0
    ctx->pc = 0x22b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937104));
    // 0x22b500: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22b500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b504: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22b504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b508: 0x800008  jr          $a0
    ctx->pc = 0x22B508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B510u: goto label_22b510;
            case 0x22B520u: goto label_22b520;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B508u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22B510u;
label_22b510:
    // 0x22b510: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x22b510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22b514: 0x8c430de4  lw          $v1, 0xDE4($v0)
    ctx->pc = 0x22b514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3556)));
    // 0x22b518: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22B518u;
    {
        const bool branch_taken_0x22b518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B518u;
        // 0x22b51c: 0x8c440de8  lw          $a0, 0xDE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b518) {
            ctx->pc = 0x22B52Cu;
            goto label_22b52c;
        }
    }
    ctx->pc = 0x22B520u;
label_22b520:
    // 0x22b520: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x22b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22b524: 0x8c43152c  lw          $v1, 0x152C($v0)
    ctx->pc = 0x22b524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5420)));
    // 0x22b528: 0x8c441530  lw          $a0, 0x1530($v0)
    ctx->pc = 0x22b528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5424)));
label_22b52c:
    // 0x22b52c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x22b52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b530: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x22b530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22b534: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22b534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b53c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22b53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22b540: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22B540u;
    SET_GPR_U32(ctx, 31, 0x22B548u);
    ctx->pc = 0x22B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B540u;
    // 0x22b544: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22B540u, 0x22B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B548u;
label_22b548:
    // 0x22b548: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22b548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22b54c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22b550: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22b550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22b554:
    // 0x22b554: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22b554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b558: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x22b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x22b55c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x22b55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x22b560: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22b560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22b564: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22b564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b568: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x22b568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x22b56c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x22b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x22b570: 0x260516a0  addiu       $a1, $s0, 0x16A0
    ctx->pc = 0x22b570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5792));
    // 0x22b574: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x22b574u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x22b578: 0xae0416e0  sw          $a0, 0x16E0($s0)
    ctx->pc = 0x22b578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5856), GPR_U32(ctx, 4));
    // 0x22b57c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x22b57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x22b580: 0xae0316dc  sw          $v1, 0x16DC($s0)
    ctx->pc = 0x22b580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5852), GPR_U32(ctx, 3));
    // 0x22b584: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x22b584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x22b588: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22B588u;
    SET_GPR_U32(ctx, 31, 0x22B590u);
    ctx->pc = 0x22B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B588u;
    // 0x22b58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22B588u, 0x22B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B590u;
label_22b590:
    // 0x22b590: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22b594: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22b594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22b598: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22B598u;
    SET_GPR_U32(ctx, 31, 0x22B5A0u);
    ctx->pc = 0x22B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B598u;
    // 0x22b59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22B598u, 0x22B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5A0u;
label_22b5a0:
    // 0x22b5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b5a4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22B5A4u;
    SET_GPR_U32(ctx, 31, 0x22B5ACu);
    ctx->pc = 0x22B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5A4u;
    // 0x22b5a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22B5A4u, 0x22B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5ACu;
label_22b5ac:
    // 0x22b5ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22b5acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22b5b0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22B5B0u;
    SET_GPR_U32(ctx, 31, 0x22B5B8u);
    ctx->pc = 0x22B5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5B0u;
    // 0x22b5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22B5B0u, 0x22B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5B8u;
label_22b5b8:
    // 0x22b5b8: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x22b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b5bc: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x22b5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x22b5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22b5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b5c4: 0x0  nop
    ctx->pc = 0x22b5c4u;
    // NOP
    // 0x22b5c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b5c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b5cc: 0x0  nop
    ctx->pc = 0x22b5ccu;
    // NOP
    // 0x22b5d0: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x22B5D0u;
    {
        const bool branch_taken_0x22b5d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5D0u;
        // 0x22b5d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b5d0) {
            ctx->pc = 0x22B6E4u;
            goto label_22b6e4;
        }
    }
    ctx->pc = 0x22B5D8u;
    // 0x22b5d8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x22B5D8u;
    {
        const bool branch_taken_0x22b5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5D8u;
        // 0x22b5dc: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b5d8) {
            ctx->pc = 0x22B6E4u;
            goto label_22b6e4;
        }
    }
    ctx->pc = 0x22B5E0u;
label_22b5e0:
    // 0x22b5e0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22B5E0u;
    SET_GPR_U32(ctx, 31, 0x22B5E8u);
    ctx->pc = 0x22B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5E0u;
    // 0x22b5e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22B5E0u, 0x22B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5E8u;
label_22b5e8:
    // 0x22b5e8: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x22b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x22b5ec: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22b5ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22b5f0: 0x2463fde6  addiu       $v1, $v1, -0x21A
    ctx->pc = 0x22b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966758));
    // 0x22b5f4: 0x2c620041  sltiu       $v0, $v1, 0x41
    ctx->pc = 0x22b5f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x22b5f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B5F8u;
    {
        const bool branch_taken_0x22b5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5F8u;
        // 0x22b5fc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b5f8) {
            ctx->pc = 0x22B618u;
            goto label_22b618;
        }
    }
    ctx->pc = 0x22B600u;
    // 0x22b600: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22b600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22b604: 0x24428b20  addiu       $v0, $v0, -0x74E0
    ctx->pc = 0x22b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937376));
    // 0x22b608: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22b608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b60c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22b610: 0x800008  jr          $a0
    ctx->pc = 0x22B610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B618u: goto label_22b618;
            case 0x22B628u: goto label_22b628;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B610u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22B618u;
label_22b618:
    // 0x22b618: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x22b618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22b61c: 0x8c430dec  lw          $v1, 0xDEC($v0)
    ctx->pc = 0x22b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3564)));
    // 0x22b620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22B620u;
    {
        const bool branch_taken_0x22b620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B620u;
        // 0x22b624: 0x8c440df0  lw          $a0, 0xDF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b620) {
            ctx->pc = 0x22B634u;
            goto label_22b634;
        }
    }
    ctx->pc = 0x22B628u;
label_22b628:
    // 0x22b628: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x22b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22b62c: 0x8c431534  lw          $v1, 0x1534($v0)
    ctx->pc = 0x22b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5428)));
    // 0x22b630: 0x8c441538  lw          $a0, 0x1538($v0)
    ctx->pc = 0x22b630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5432)));
label_22b634:
    // 0x22b634: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x22b634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22b638: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x22b638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22b63c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22b63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b644: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22b644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22b648: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22B648u;
    SET_GPR_U32(ctx, 31, 0x22B650u);
    ctx->pc = 0x22B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B648u;
    // 0x22b64c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22B648u, 0x22B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B650u;
label_22b650:
    // 0x22b650: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22b650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22b654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22b658: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22b658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22b65c:
    // 0x22b65c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22b65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b660: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x22b660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x22b664: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x22b664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x22b668: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22b668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22b66c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22b66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b670: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x22b670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x22b674: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x22b674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x22b678: 0x260516a0  addiu       $a1, $s0, 0x16A0
    ctx->pc = 0x22b678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5792));
    // 0x22b67c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x22b67cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x22b680: 0xae0416e0  sw          $a0, 0x16E0($s0)
    ctx->pc = 0x22b680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5856), GPR_U32(ctx, 4));
    // 0x22b684: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x22b684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x22b688: 0xae0316dc  sw          $v1, 0x16DC($s0)
    ctx->pc = 0x22b688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5852), GPR_U32(ctx, 3));
    // 0x22b68c: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x22b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x22b690: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22B690u;
    SET_GPR_U32(ctx, 31, 0x22B698u);
    ctx->pc = 0x22B694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B690u;
    // 0x22b694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22B690u, 0x22B698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B698u;
label_22b698:
    // 0x22b698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22b698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22b69c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22b69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22b6a0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22B6A0u;
    SET_GPR_U32(ctx, 31, 0x22B6A8u);
    ctx->pc = 0x22B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6A0u;
    // 0x22b6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22B6A0u, 0x22B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6A8u;
label_22b6a8:
    // 0x22b6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6ac: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22B6ACu;
    SET_GPR_U32(ctx, 31, 0x22B6B4u);
    ctx->pc = 0x22B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6ACu;
    // 0x22b6b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22B6ACu, 0x22B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6B4u;
label_22b6b4:
    // 0x22b6b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22b6b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22b6b8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22B6B8u;
    SET_GPR_U32(ctx, 31, 0x22B6C0u);
    ctx->pc = 0x22B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6B8u;
    // 0x22b6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22B6B8u, 0x22B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6C0u;
label_22b6c0:
    // 0x22b6c0: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x22b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b6c4: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x22b6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x22b6c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22b6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b6cc: 0x0  nop
    ctx->pc = 0x22b6ccu;
    // NOP
    // 0x22b6d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22b6d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b6d4: 0x0  nop
    ctx->pc = 0x22b6d4u;
    // NOP
    // 0x22b6d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22B6D8u;
    {
        const bool branch_taken_0x22b6d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6D8u;
        // 0x22b6dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6d8) {
            ctx->pc = 0x22B6E4u;
            goto label_22b6e4;
        }
    }
    ctx->pc = 0x22B6E0u;
    // 0x22b6e0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22b6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22b6e4:
    // 0x22b6e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22b6e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b6e8:
    // 0x22b6e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22B6E8u;
    {
        const bool branch_taken_0x22b6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6E8u;
        // 0x22b6ec: 0x261106e4  addiu       $s1, $s0, 0x6E4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1764));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6e8) {
            ctx->pc = 0x22B6F8u;
            goto label_22b6f8;
        }
    }
    ctx->pc = 0x22B6F0u;
label_22b6f0:
    // 0x22b6f0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x22b6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_22b6f4:
    // 0x22b6f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22b6f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22b6f8:
    // 0x22b6f8: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x22b6f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22b6fc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x22B6FCu;
    {
        const bool branch_taken_0x22b6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b6fc) {
            ctx->pc = 0x22B700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B6FCu;
            // 0x22b700: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B740u;
            goto label_22b740;
        }
    }
    ctx->pc = 0x22B704u;
    // 0x22b704: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22b704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22b708: 0x5080fffa  beql        $a0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22B708u;
    {
        const bool branch_taken_0x22b708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b708) {
            ctx->pc = 0x22B70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B708u;
            // 0x22b70c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B6F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b6f4;
        }
    }
    ctx->pc = 0x22B710u;
    // 0x22b710: 0xc06c6a0  jal         func_1B1A80
    ctx->pc = 0x22B710u;
    SET_GPR_U32(ctx, 31, 0x22B718u);
    ctx->pc = 0x1B1A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A80u, 0x22B710u, 0x22B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B718u;
label_22b718:
    // 0x22b718: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x22B718u;
    {
        const bool branch_taken_0x22b718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B718u;
        // 0x22b71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b718) {
            ctx->pc = 0x22B6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b6f0;
        }
    }
    ctx->pc = 0x22B720u;
    // 0x22b720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22b720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b724: 0xc09aa4e  jal         func_26A938
    ctx->pc = 0x22B724u;
    SET_GPR_U32(ctx, 31, 0x22B72Cu);
    ctx->pc = 0x22B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B724u;
    // 0x22b728: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A938u, 0x22B724u, 0x22B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B72Cu;
label_22b72c:
    // 0x22b72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22b72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22b730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b734: 0xc09aa4e  jal         func_26A938
    ctx->pc = 0x22B734u;
    SET_GPR_U32(ctx, 31, 0x22B73Cu);
    ctx->pc = 0x22B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B734u;
    // 0x22b738: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A938u, 0x22B734u, 0x22B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B73Cu;
label_22b73c:
    // 0x22b73c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22b73cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_22b740:
    // 0x22b740: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22b740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22b744: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B744u;
    {
        const bool branch_taken_0x22b744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B744u;
        // 0x22b748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b744) {
            ctx->pc = 0x22B750u;
            goto label_22b750;
        }
    }
    ctx->pc = 0x22B74Cu;
    // 0x22b74c: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x22b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_22b750:
    // 0x22b750: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x22b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x22b754: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B754u;
    {
        const bool branch_taken_0x22b754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b754) {
            ctx->pc = 0x22B758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B754u;
            // 0x22b758: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B774u;
            goto label_22b774;
        }
    }
    ctx->pc = 0x22B75Cu;
    // 0x22b75c: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x22b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22b760: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22b760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22b764: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x22b764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x22b768: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22b768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22b76c: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x22b76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x22b770: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22b770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22b774:
    // 0x22b774: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22b774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b778: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22b778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b780: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x22b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22b784: 0x3e00008  jr          $ra
    ctx->pc = 0x22B784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B784u;
        // 0x22b788: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B78Cu;
    // 0x22b78c: 0x0  nop
    ctx->pc = 0x22b78cu;
    // NOP
    ctx->pc = 0x22b790u;
}
