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

// Function: func_00247320
// Address: 0x247320 - 0x247588
void func_00247320_0x247320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00247320_0x247320");
#endif

    switch (ctx->pc) {
        case 0x247358u: goto label_247358;
        case 0x247388u: goto label_247388;
        case 0x2473f0u: goto label_2473f0;
        case 0x247404u: goto label_247404;
        case 0x247430u: goto label_247430;
        case 0x247444u: goto label_247444;
        case 0x247450u: goto label_247450;
        case 0x247460u: goto label_247460;
        case 0x24748cu: goto label_24748c;
        case 0x2474a8u: goto label_2474a8;
        case 0x2474b4u: goto label_2474b4;
        case 0x2474c0u: goto label_2474c0;
        case 0x247504u: goto label_247504;
        case 0x247530u: goto label_247530;
        case 0x247544u: goto label_247544;
        case 0x247554u: goto label_247554;
        case 0x247568u: goto label_247568;
        case 0x247574u: goto label_247574;
        default: break;
    }

    ctx->pc = 0x247320u;

    // 0x247320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247324: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x247324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x247328: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x247328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24732c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24732cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247334: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247338: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x247338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24733c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x24733cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x247340: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x247340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x247344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247348: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x247348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24734c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x247350: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x247350u;
    SET_GPR_U32(ctx, 31, 0x247358u);
    ctx->pc = 0x247354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247350u;
    // 0x247354: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x247350u, 0x247358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247358u;
label_247358:
    // 0x247358: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x247358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24735c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x24735cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x247360: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x247360u;
    {
        const bool branch_taken_0x247360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247360u;
        // 0x247364: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247360) {
            ctx->pc = 0x247574u;
            goto label_247574;
        }
    }
    ctx->pc = 0x247368u;
    // 0x247368: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x247368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24736c: 0x2442d750  addiu       $v0, $v0, -0x28B0
    ctx->pc = 0x24736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956880));
    // 0x247370: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x247370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x247374: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x247374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x247378: 0x800008  jr          $a0
    ctx->pc = 0x247378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x247380u: goto label_247380;
            case 0x2473FCu: goto label_2473fc;
            case 0x247458u: goto label_247458;
            case 0x247498u: goto label_247498;
            case 0x2474FCu: goto label_2474fc;
            case 0x24753Cu: goto label_24753c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247378u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x247380u;
label_247380:
    // 0x247380: 0xc09d91a  jal         func_276468
    ctx->pc = 0x247380u;
    SET_GPR_U32(ctx, 31, 0x247388u);
    ctx->pc = 0x247384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247380u;
    // 0x247384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x247380u, 0x247388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247388u;
label_247388:
    // 0x247388: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x247388u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24738c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x24738cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x247390: 0x2402022c  addiu       $v0, $zero, 0x22C
    ctx->pc = 0x247390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x247394: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x247394u;
    {
        const bool branch_taken_0x247394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x247398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247394u;
        // 0x247398: 0x2862022d  slti        $v0, $v1, 0x22D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)557) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247394) {
            ctx->pc = 0x2473C8u;
            goto label_2473c8;
        }
    }
    ctx->pc = 0x24739Cu;
    // 0x24739c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24739Cu;
    {
        const bool branch_taken_0x24739c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2473A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24739Cu;
        // 0x2473a0: 0x2402021c  addiu       $v0, $zero, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24739c) {
            ctx->pc = 0x2473ACu;
            goto label_2473ac;
        }
    }
    ctx->pc = 0x2473A4u;
    // 0x2473a4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2473A4u;
    {
        const bool branch_taken_0x2473a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2473a4) {
            ctx->pc = 0x2473A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2473A4u;
            // 0x2473a8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2473BCu;
            goto label_2473bc;
        }
    }
    ctx->pc = 0x2473ACu;
label_2473ac:
    // 0x2473ac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2473acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2473b0: 0x8c4336f0  lw          $v1, 0x36F0($v0)
    ctx->pc = 0x2473b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14064)));
    // 0x2473b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2473B4u;
    {
        const bool branch_taken_0x2473b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2473B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473B4u;
        // 0x2473b8: 0x8c4436f4  lw          $a0, 0x36F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473b4) {
            ctx->pc = 0x2473D4u;
            goto label_2473d4;
        }
    }
    ctx->pc = 0x2473BCu;
label_2473bc:
    // 0x2473bc: 0x8c433708  lw          $v1, 0x3708($v0)
    ctx->pc = 0x2473bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14088)));
    // 0x2473c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2473C0u;
    {
        const bool branch_taken_0x2473c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2473C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473C0u;
        // 0x2473c4: 0x8c44370c  lw          $a0, 0x370C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473c0) {
            ctx->pc = 0x2473D4u;
            goto label_2473d4;
        }
    }
    ctx->pc = 0x2473C8u;
label_2473c8:
    // 0x2473c8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2473c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2473cc: 0x8c433710  lw          $v1, 0x3710($v0)
    ctx->pc = 0x2473ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14096)));
    // 0x2473d0: 0x8c443714  lw          $a0, 0x3714($v0)
    ctx->pc = 0x2473d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14100)));
label_2473d4:
    // 0x2473d4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2473d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2473d8: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2473d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2473dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2473dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2473e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2473e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2473e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2473e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2473e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2473E8u;
    SET_GPR_U32(ctx, 31, 0x2473F0u);
    ctx->pc = 0x2473ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2473E8u;
    // 0x2473ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2473E8u, 0x2473F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2473F0u;
label_2473f0:
    // 0x2473f0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2473f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2473f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2473f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2473f8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2473f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2473fc:
    // 0x2473fc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2473FCu;
    SET_GPR_U32(ctx, 31, 0x247404u);
    ctx->pc = 0x247400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2473FCu;
    // 0x247400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2473FCu, 0x247404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247404u;
label_247404:
    // 0x247404: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x247404u;
    {
        const bool branch_taken_0x247404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247404u;
        // 0x247408: 0x24020244  addiu       $v0, $zero, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247404) {
            ctx->pc = 0x247430u;
            goto label_247430;
        }
    }
    ctx->pc = 0x24740Cu;
    // 0x24740c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x24740cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x247410: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x247410u;
    {
        const bool branch_taken_0x247410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x247410) {
            ctx->pc = 0x247428u;
            goto label_247428;
        }
    }
    ctx->pc = 0x247418u;
    // 0x247418: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x247418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24741c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247420: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x247420u;
    {
        const bool branch_taken_0x247420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247420u;
        // 0x247424: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247420) {
            ctx->pc = 0x247430u;
            goto label_247430;
        }
    }
    ctx->pc = 0x247428u;
label_247428:
    // 0x247428: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x247428u;
    SET_GPR_U32(ctx, 31, 0x247430u);
    ctx->pc = 0x24742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247428u;
    // 0x24742c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x247428u, 0x247430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247430u;
label_247430:
    // 0x247430: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x247434: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x247434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x247438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24743c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24743Cu;
    SET_GPR_U32(ctx, 31, 0x247444u);
    ctx->pc = 0x247440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24743Cu;
    // 0x247440: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24743Cu, 0x247444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247444u;
label_247444:
    // 0x247444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247448: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x247448u;
    SET_GPR_U32(ctx, 31, 0x247450u);
    ctx->pc = 0x24744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247448u;
    // 0x24744c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x247448u, 0x247450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247450u;
label_247450:
    // 0x247450: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x247450u;
    {
        const bool branch_taken_0x247450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247450u;
        // 0x247454: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247450) {
            ctx->pc = 0x247578u;
            goto label_247578;
        }
    }
    ctx->pc = 0x247458u;
label_247458:
    // 0x247458: 0xc09d91a  jal         func_276468
    ctx->pc = 0x247458u;
    SET_GPR_U32(ctx, 31, 0x247460u);
    ctx->pc = 0x24745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247458u;
    // 0x24745c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x247458u, 0x247460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247460u;
label_247460:
    // 0x247460: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x247460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x247464: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x247464u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x247468: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x247468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24746c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24746cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247470: 0x8c6536f8  lw          $a1, 0x36F8($v1)
    ctx->pc = 0x247470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14072)));
    // 0x247474: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x247474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x247478: 0x8c6636fc  lw          $a2, 0x36FC($v1)
    ctx->pc = 0x247478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14076)));
    // 0x24747c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24747cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247480: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x247480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x247484: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x247484u;
    SET_GPR_U32(ctx, 31, 0x24748Cu);
    ctx->pc = 0x247488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247484u;
    // 0x247488: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x247484u, 0x24748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24748Cu;
label_24748c:
    // 0x24748c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24748cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x247490: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247494: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x247494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_247498:
    // 0x247498: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24749c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24749cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2474a0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2474A0u;
    SET_GPR_U32(ctx, 31, 0x2474A8u);
    ctx->pc = 0x2474A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474A0u;
    // 0x2474a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2474A0u, 0x2474A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474A8u;
label_2474a8:
    // 0x2474a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2474a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2474ac: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2474ACu;
    SET_GPR_U32(ctx, 31, 0x2474B4u);
    ctx->pc = 0x2474B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474ACu;
    // 0x2474b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2474ACu, 0x2474B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474B4u;
label_2474b4:
    // 0x2474b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2474b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2474b8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2474B8u;
    SET_GPR_U32(ctx, 31, 0x2474C0u);
    ctx->pc = 0x2474BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474B8u;
    // 0x2474bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2474B8u, 0x2474C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2474C0u;
label_2474c0:
    // 0x2474c0: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2474c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x2474c4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2474c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2474c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2474c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2474cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2474CCu;
    {
        const bool branch_taken_0x2474cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474CCu;
        // 0x2474d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474cc) {
            ctx->pc = 0x2474D8u;
            goto label_2474d8;
        }
    }
    ctx->pc = 0x2474D4u;
    // 0x2474d4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2474d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2474d8:
    // 0x2474d8: 0xc60116c0  lwc1        $f1, 0x16C0($s0)
    ctx->pc = 0x2474d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2474dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2474dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2474e0: 0x0  nop
    ctx->pc = 0x2474e0u;
    // NOP
    // 0x2474e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2474e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2474e8: 0x0  nop
    ctx->pc = 0x2474e8u;
    // NOP
    // 0x2474ec: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2474ECu;
    {
        const bool branch_taken_0x2474ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2474F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474ECu;
        // 0x2474f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474ec) {
            ctx->pc = 0x247574u;
            goto label_247574;
        }
    }
    ctx->pc = 0x2474F4u;
    // 0x2474f4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2474F4u;
    {
        const bool branch_taken_0x2474f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2474F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2474F4u;
        // 0x2474f8: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2474f4) {
            ctx->pc = 0x247574u;
            goto label_247574;
        }
    }
    ctx->pc = 0x2474FCu;
label_2474fc:
    // 0x2474fc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2474FCu;
    SET_GPR_U32(ctx, 31, 0x247504u);
    ctx->pc = 0x247500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2474FCu;
    // 0x247500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2474FCu, 0x247504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247504u;
label_247504:
    // 0x247504: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x247504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x247508: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x247508u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24750c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24750cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247514: 0x8c653700  lw          $a1, 0x3700($v1)
    ctx->pc = 0x247514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14080)));
    // 0x247518: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x247518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24751c: 0x8c663704  lw          $a2, 0x3704($v1)
    ctx->pc = 0x24751cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14084)));
    // 0x247520: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x247520u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247524: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x247524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x247528: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x247528u;
    SET_GPR_U32(ctx, 31, 0x247530u);
    ctx->pc = 0x24752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247528u;
    // 0x24752c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x247528u, 0x247530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247530u;
label_247530:
    // 0x247530: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x247530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x247534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247538: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x247538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24753c:
    // 0x24753c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24753Cu;
    SET_GPR_U32(ctx, 31, 0x247544u);
    ctx->pc = 0x247540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24753Cu;
    // 0x247540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24753Cu, 0x247544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247544u;
label_247544:
    // 0x247544: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247544u;
    {
        const bool branch_taken_0x247544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247544) {
            ctx->pc = 0x247554u;
            goto label_247554;
        }
    }
    ctx->pc = 0x24754Cu;
    // 0x24754c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x24754Cu;
    SET_GPR_U32(ctx, 31, 0x247554u);
    ctx->pc = 0x247550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24754Cu;
    // 0x247550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x24754Cu, 0x247554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247554u;
label_247554:
    // 0x247554: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x247558: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x247558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24755c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24755cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247560: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x247560u;
    SET_GPR_U32(ctx, 31, 0x247568u);
    ctx->pc = 0x247564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247560u;
    // 0x247564: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x247560u, 0x247568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247568u;
label_247568:
    // 0x247568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24756c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24756Cu;
    SET_GPR_U32(ctx, 31, 0x247574u);
    ctx->pc = 0x247570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24756Cu;
    // 0x247570: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24756Cu, 0x247574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247574u;
label_247574:
    // 0x247574: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x247574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247578:
    // 0x247578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24757c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x24757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x247580: 0x3e00008  jr          $ra
    ctx->pc = 0x247580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247580u;
        // 0x247584: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247588u;
}
