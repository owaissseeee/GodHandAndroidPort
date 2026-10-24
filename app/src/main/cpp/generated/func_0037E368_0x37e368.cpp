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

// Function: func_0037E368
// Address: 0x37e368 - 0x37e488
void func_0037E368_0x37e368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037E368_0x37e368");
#endif

    switch (ctx->pc) {
        case 0x37e368u: goto label_37e368;
        case 0x37e36cu: goto label_37e36c;
        case 0x37e370u: goto label_37e370;
        case 0x37e374u: goto label_37e374;
        case 0x37e378u: goto label_37e378;
        case 0x37e37cu: goto label_37e37c;
        case 0x37e380u: goto label_37e380;
        case 0x37e384u: goto label_37e384;
        case 0x37e388u: goto label_37e388;
        case 0x37e38cu: goto label_37e38c;
        case 0x37e390u: goto label_37e390;
        case 0x37e394u: goto label_37e394;
        case 0x37e398u: goto label_37e398;
        case 0x37e39cu: goto label_37e39c;
        case 0x37e3a0u: goto label_37e3a0;
        case 0x37e3a4u: goto label_37e3a4;
        case 0x37e3a8u: goto label_37e3a8;
        case 0x37e3acu: goto label_37e3ac;
        case 0x37e3b0u: goto label_37e3b0;
        case 0x37e3b4u: goto label_37e3b4;
        case 0x37e3b8u: goto label_37e3b8;
        case 0x37e3bcu: goto label_37e3bc;
        case 0x37e3c0u: goto label_37e3c0;
        case 0x37e3c4u: goto label_37e3c4;
        case 0x37e3c8u: goto label_37e3c8;
        case 0x37e3ccu: goto label_37e3cc;
        case 0x37e3d0u: goto label_37e3d0;
        case 0x37e3d4u: goto label_37e3d4;
        case 0x37e3d8u: goto label_37e3d8;
        case 0x37e3dcu: goto label_37e3dc;
        case 0x37e3e0u: goto label_37e3e0;
        case 0x37e3e4u: goto label_37e3e4;
        case 0x37e3e8u: goto label_37e3e8;
        case 0x37e3ecu: goto label_37e3ec;
        case 0x37e3f0u: goto label_37e3f0;
        case 0x37e3f4u: goto label_37e3f4;
        case 0x37e3f8u: goto label_37e3f8;
        case 0x37e3fcu: goto label_37e3fc;
        case 0x37e400u: goto label_37e400;
        case 0x37e404u: goto label_37e404;
        case 0x37e408u: goto label_37e408;
        case 0x37e40cu: goto label_37e40c;
        case 0x37e410u: goto label_37e410;
        case 0x37e414u: goto label_37e414;
        case 0x37e418u: goto label_37e418;
        case 0x37e41cu: goto label_37e41c;
        case 0x37e420u: goto label_37e420;
        case 0x37e424u: goto label_37e424;
        case 0x37e428u: goto label_37e428;
        case 0x37e42cu: goto label_37e42c;
        case 0x37e430u: goto label_37e430;
        case 0x37e434u: goto label_37e434;
        case 0x37e438u: goto label_37e438;
        case 0x37e43cu: goto label_37e43c;
        case 0x37e440u: goto label_37e440;
        case 0x37e444u: goto label_37e444;
        case 0x37e448u: goto label_37e448;
        case 0x37e44cu: goto label_37e44c;
        case 0x37e450u: goto label_37e450;
        case 0x37e454u: goto label_37e454;
        case 0x37e458u: goto label_37e458;
        case 0x37e45cu: goto label_37e45c;
        case 0x37e460u: goto label_37e460;
        case 0x37e464u: goto label_37e464;
        case 0x37e468u: goto label_37e468;
        case 0x37e46cu: goto label_37e46c;
        case 0x37e470u: goto label_37e470;
        case 0x37e474u: goto label_37e474;
        case 0x37e478u: goto label_37e478;
        case 0x37e47cu: goto label_37e47c;
        case 0x37e480u: goto label_37e480;
        case 0x37e484u: goto label_37e484;
        default: break;
    }

    ctx->pc = 0x37e368u;

label_37e368:
    // 0x37e368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37e368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37e36c:
    // 0x37e36c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37e36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37e370:
    // 0x37e370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37e370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37e374:
    // 0x37e374: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x37e374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_37e378:
    // 0x37e378: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x37e378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_37e37c:
    // 0x37e37c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_37e380:
    if (ctx->pc == 0x37E380u) {
        ctx->pc = 0x37E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E37Cu;
        // 0x37e380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E384u;
        goto label_37e384;
    }
    ctx->pc = 0x37E37Cu;
    {
        const bool branch_taken_0x37e37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E37Cu;
        // 0x37e380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e37c) {
            ctx->pc = 0x37E3A0u;
            goto label_37e3a0;
        }
    }
    ctx->pc = 0x37E384u;
label_37e384:
    // 0x37e384: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x37e384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_37e388:
    // 0x37e388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37e388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37e38c:
    // 0x37e38c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_37e390:
    if (ctx->pc == 0x37E390u) {
        ctx->pc = 0x37E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E38Cu;
        // 0x37e390: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E394u;
        goto label_37e394;
    }
    ctx->pc = 0x37E38Cu;
    {
        const bool branch_taken_0x37e38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x37e38c) {
            ctx->pc = 0x37E390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E38Cu;
            // 0x37e390: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E3A4u;
            goto label_37e3a4;
        }
    }
    ctx->pc = 0x37E394u;
label_37e394:
    // 0x37e394: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x37e394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_37e398:
    // 0x37e398: 0x10000037  b           . + 4 + (0x37 << 2)
label_37e39c:
    if (ctx->pc == 0x37E39Cu) {
        ctx->pc = 0x37E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E398u;
        // 0x37e39c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E3A0u;
        goto label_37e3a0;
    }
    ctx->pc = 0x37E398u;
    {
        const bool branch_taken_0x37e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E398u;
        // 0x37e39c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e398) {
            ctx->pc = 0x37E478u;
            goto label_37e478;
        }
    }
    ctx->pc = 0x37E3A0u;
label_37e3a0:
    // 0x37e3a0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x37e3a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_37e3a4:
    // 0x37e3a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x37e3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e3a8:
    // 0x37e3a8: 0x2c42000d  sltiu       $v0, $v0, 0xD
    ctx->pc = 0x37e3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_37e3ac:
    // 0x37e3ac: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_37e3b0:
    if (ctx->pc == 0x37E3B0u) {
        ctx->pc = 0x37E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E3ACu;
        // 0x37e3b0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E3B4u;
        goto label_37e3b4;
    }
    ctx->pc = 0x37E3ACu;
    {
        const bool branch_taken_0x37e3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E3ACu;
        // 0x37e3b0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e3ac) {
            ctx->pc = 0x37E464u;
            goto label_37e464;
        }
    }
    ctx->pc = 0x37E3B4u;
label_37e3b4:
    // 0x37e3b4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x37e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_37e3b8:
    // 0x37e3b8: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x37e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
label_37e3bc:
    // 0x37e3bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37e3c0:
    // 0x37e3c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x37e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37e3c4:
    // 0x37e3c4: 0x800008  jr          $a0
label_37e3c8:
    if (ctx->pc == 0x37E3C8u) {
        ctx->pc = 0x37E3CCu;
        goto label_37e3cc;
    }
    ctx->pc = 0x37E3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E3C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37E3CCu;
label_37e3cc:
    // 0x37e3cc: 0xc0df922  jal         func_37E488
label_37e3d0:
    if (ctx->pc == 0x37E3D0u) {
        ctx->pc = 0x37E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E3CCu;
        // 0x37e3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E3D4u;
        goto label_37e3d4;
    }
    ctx->pc = 0x37E3CCu;
    SET_GPR_U32(ctx, 31, 0x37E3D4u);
    ctx->pc = 0x37E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E3CCu;
    // 0x37e3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E488u, 0x37E3CCu, 0x37E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E3D4u;
label_37e3d4:
    // 0x37e3d4: 0x10000023  b           . + 4 + (0x23 << 2)
label_37e3d8:
    if (ctx->pc == 0x37E3D8u) {
        ctx->pc = 0x37E3DCu;
        goto label_37e3dc;
    }
    ctx->pc = 0x37E3D4u;
    {
        const bool branch_taken_0x37e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e3d4) {
            ctx->pc = 0x37E464u;
            goto label_37e464;
        }
    }
    ctx->pc = 0x37E3DCu;
label_37e3dc:
    // 0x37e3dc: 0xc0df930  jal         func_37E4C0
label_37e3e0:
    if (ctx->pc == 0x37E3E0u) {
        ctx->pc = 0x37E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E3DCu;
        // 0x37e3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E3E4u;
        goto label_37e3e4;
    }
    ctx->pc = 0x37E3DCu;
    SET_GPR_U32(ctx, 31, 0x37E3E4u);
    ctx->pc = 0x37E3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E3DCu;
    // 0x37e3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E4C0u, 0x37E3DCu, 0x37E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E3E4u;
label_37e3e4:
    // 0x37e3e4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_37e3e8:
    if (ctx->pc == 0x37E3E8u) {
        ctx->pc = 0x37E3ECu;
        goto label_37e3ec;
    }
    ctx->pc = 0x37E3E4u;
    {
        const bool branch_taken_0x37e3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e3e4) {
            ctx->pc = 0x37E464u;
            goto label_37e464;
        }
    }
    ctx->pc = 0x37E3ECu;
label_37e3ec:
    // 0x37e3ec: 0xc0dfeb2  jal         func_37FAC8
label_37e3f0:
    if (ctx->pc == 0x37E3F0u) {
        ctx->pc = 0x37E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E3ECu;
        // 0x37e3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E3F4u;
        goto label_37e3f4;
    }
    ctx->pc = 0x37E3ECu;
    SET_GPR_U32(ctx, 31, 0x37E3F4u);
    ctx->pc = 0x37E3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E3ECu;
    // 0x37e3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FAC8u, 0x37E3ECu, 0x37E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E3F4u;
label_37e3f4:
    // 0x37e3f4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_37e3f8:
    if (ctx->pc == 0x37E3F8u) {
        ctx->pc = 0x37E3FCu;
        goto label_37e3fc;
    }
    ctx->pc = 0x37E3F4u;
    {
        const bool branch_taken_0x37e3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e3f4) {
            ctx->pc = 0x37E464u;
            goto label_37e464;
        }
    }
    ctx->pc = 0x37E3FCu;
label_37e3fc:
    // 0x37e3fc: 0xc0dfedc  jal         func_37FB70
label_37e400:
    if (ctx->pc == 0x37E400u) {
        ctx->pc = 0x37E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E3FCu;
        // 0x37e400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E404u;
        goto label_37e404;
    }
    ctx->pc = 0x37E3FCu;
    SET_GPR_U32(ctx, 31, 0x37E404u);
    ctx->pc = 0x37E400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E3FCu;
    // 0x37e400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FB70u, 0x37E3FCu, 0x37E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E404u;
label_37e404:
    // 0x37e404: 0x10000017  b           . + 4 + (0x17 << 2)
label_37e408:
    if (ctx->pc == 0x37E408u) {
        ctx->pc = 0x37E40Cu;
        goto label_37e40c;
    }
    ctx->pc = 0x37E404u;
    {
        const bool branch_taken_0x37e404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e404) {
            ctx->pc = 0x37E464u;
            goto label_37e464;
        }
    }
    ctx->pc = 0x37E40Cu;
label_37e40c:
    // 0x37e40c: 0xc0dff0a  jal         func_37FC28
label_37e410:
    if (ctx->pc == 0x37E410u) {
        ctx->pc = 0x37E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E40Cu;
        // 0x37e410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E414u;
        goto label_37e414;
    }
    ctx->pc = 0x37E40Cu;
    SET_GPR_U32(ctx, 31, 0x37E414u);
    ctx->pc = 0x37E410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E40Cu;
    // 0x37e410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FC28u, 0x37E40Cu, 0x37E414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E414u;
label_37e414:
    // 0x37e414: 0x10000013  b           . + 4 + (0x13 << 2)
label_37e418:
    if (ctx->pc == 0x37E418u) {
        ctx->pc = 0x37E41Cu;
        goto label_37e41c;
    }
    ctx->pc = 0x37E414u;
    {
        const bool branch_taken_0x37e414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e414) {
            ctx->pc = 0x37E464u;
            goto label_37e464;
        }
    }
    ctx->pc = 0x37E41Cu;
label_37e41c:
    // 0x37e41c: 0xc0dff32  jal         func_37FCC8
label_37e420:
    if (ctx->pc == 0x37E420u) {
        ctx->pc = 0x37E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E41Cu;
        // 0x37e420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E424u;
        goto label_37e424;
    }
    ctx->pc = 0x37E41Cu;
    SET_GPR_U32(ctx, 31, 0x37E424u);
    ctx->pc = 0x37E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E41Cu;
    // 0x37e420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FCC8u, 0x37E41Cu, 0x37E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E424u;
label_37e424:
    // 0x37e424: 0x1000000f  b           . + 4 + (0xF << 2)
label_37e428:
    if (ctx->pc == 0x37E428u) {
        ctx->pc = 0x37E42Cu;
        goto label_37e42c;
    }
    ctx->pc = 0x37E424u;
    {
        const bool branch_taken_0x37e424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e424) {
            ctx->pc = 0x37E464u;
            goto label_37e464;
        }
    }
    ctx->pc = 0x37E42Cu;
label_37e42c:
    // 0x37e42c: 0xc0dff90  jal         func_37FE40
label_37e430:
    if (ctx->pc == 0x37E430u) {
        ctx->pc = 0x37E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E42Cu;
        // 0x37e430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E434u;
        goto label_37e434;
    }
    ctx->pc = 0x37E42Cu;
    SET_GPR_U32(ctx, 31, 0x37E434u);
    ctx->pc = 0x37E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E42Cu;
    // 0x37e430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FE40u, 0x37E42Cu, 0x37E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E434u;
label_37e434:
    // 0x37e434: 0x1000000b  b           . + 4 + (0xB << 2)
label_37e438:
    if (ctx->pc == 0x37E438u) {
        ctx->pc = 0x37E43Cu;
        goto label_37e43c;
    }
    ctx->pc = 0x37E434u;
    {
        const bool branch_taken_0x37e434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e434) {
            ctx->pc = 0x37E464u;
            goto label_37e464;
        }
    }
    ctx->pc = 0x37E43Cu;
label_37e43c:
    // 0x37e43c: 0xc0dffe6  jal         func_37FF98
label_37e440:
    if (ctx->pc == 0x37E440u) {
        ctx->pc = 0x37E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E43Cu;
        // 0x37e440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E444u;
        goto label_37e444;
    }
    ctx->pc = 0x37E43Cu;
    SET_GPR_U32(ctx, 31, 0x37E444u);
    ctx->pc = 0x37E440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E43Cu;
    // 0x37e440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FF98u, 0x37E43Cu, 0x37E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E444u;
label_37e444:
    // 0x37e444: 0x10000007  b           . + 4 + (0x7 << 2)
label_37e448:
    if (ctx->pc == 0x37E448u) {
        ctx->pc = 0x37E44Cu;
        goto label_37e44c;
    }
    ctx->pc = 0x37E444u;
    {
        const bool branch_taken_0x37e444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e444) {
            ctx->pc = 0x37E464u;
            goto label_37e464;
        }
    }
    ctx->pc = 0x37E44Cu;
label_37e44c:
    // 0x37e44c: 0xc0e0012  jal         func_380048
label_37e450:
    if (ctx->pc == 0x37E450u) {
        ctx->pc = 0x37E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E44Cu;
        // 0x37e450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E454u;
        goto label_37e454;
    }
    ctx->pc = 0x37E44Cu;
    SET_GPR_U32(ctx, 31, 0x37E454u);
    ctx->pc = 0x37E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E44Cu;
    // 0x37e450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380048u, 0x37E44Cu, 0x37E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E454u;
label_37e454:
    // 0x37e454: 0x10000003  b           . + 4 + (0x3 << 2)
label_37e458:
    if (ctx->pc == 0x37E458u) {
        ctx->pc = 0x37E45Cu;
        goto label_37e45c;
    }
    ctx->pc = 0x37E454u;
    {
        const bool branch_taken_0x37e454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e454) {
            ctx->pc = 0x37E464u;
            goto label_37e464;
        }
    }
    ctx->pc = 0x37E45Cu;
label_37e45c:
    // 0x37e45c: 0xc0e004e  jal         func_380138
label_37e460:
    if (ctx->pc == 0x37E460u) {
        ctx->pc = 0x37E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E45Cu;
        // 0x37e460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E464u;
        goto label_37e464;
    }
    ctx->pc = 0x37E45Cu;
    SET_GPR_U32(ctx, 31, 0x37E464u);
    ctx->pc = 0x37E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E45Cu;
    // 0x37e460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380138u, 0x37E45Cu, 0x37E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E464u;
label_37e464:
    // 0x37e464: 0xc0e00a0  jal         func_380280
label_37e468:
    if (ctx->pc == 0x37E468u) {
        ctx->pc = 0x37E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E464u;
        // 0x37e468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E46Cu;
        goto label_37e46c;
    }
    ctx->pc = 0x37E464u;
    SET_GPR_U32(ctx, 31, 0x37E46Cu);
    ctx->pc = 0x37E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E464u;
    // 0x37e468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380280u, 0x37E464u, 0x37E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E46Cu;
label_37e46c:
    // 0x37e46c: 0xc0e018e  jal         func_380638
label_37e470:
    if (ctx->pc == 0x37E470u) {
        ctx->pc = 0x37E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E46Cu;
        // 0x37e470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E474u;
        goto label_37e474;
    }
    ctx->pc = 0x37E46Cu;
    SET_GPR_U32(ctx, 31, 0x37E474u);
    ctx->pc = 0x37E470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E46Cu;
    // 0x37e470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380638u, 0x37E46Cu, 0x37E474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E474u;
label_37e474:
    // 0x37e474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37e474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37e478:
    // 0x37e478: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37e478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37e47c:
    // 0x37e47c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37e47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37e480:
    // 0x37e480: 0x3e00008  jr          $ra
label_37e484:
    if (ctx->pc == 0x37E484u) {
        ctx->pc = 0x37E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E480u;
        // 0x37e484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E488u;
        goto label_fallthrough_0x37e480;
    }
    ctx->pc = 0x37E480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E480u;
        // 0x37e484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37e480:
    ctx->pc = 0x37E488u;
}
