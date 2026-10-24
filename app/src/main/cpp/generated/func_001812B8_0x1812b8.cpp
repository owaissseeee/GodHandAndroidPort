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

// Function: func_001812B8
// Address: 0x1812b8 - 0x1815a8
void func_001812B8_0x1812b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001812B8_0x1812b8");
#endif

    switch (ctx->pc) {
        case 0x181374u: goto label_181374;
        case 0x1813bcu: goto label_1813bc;
        case 0x1813d0u: goto label_1813d0;
        case 0x181420u: goto label_181420;
        case 0x18143cu: goto label_18143c;
        case 0x18148cu: goto label_18148c;
        case 0x1814d4u: goto label_1814d4;
        case 0x181518u: goto label_181518;
        case 0x181538u: goto label_181538;
        case 0x181560u: goto label_181560;
        default: break;
    }

    ctx->pc = 0x1812b8u;

    // 0x1812b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1812b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1812bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1812bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1812c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1812c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1812c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1812c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1812c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1812cc: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1812ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x1812d0: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1812d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1812d4: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x1812D4u;
    {
        const bool branch_taken_0x1812d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1812D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812D4u;
        // 0x1812d8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1812d4) {
            ctx->pc = 0x181594u;
            goto label_181594;
        }
    }
    ctx->pc = 0x1812DCu;
    // 0x1812dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1812dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1812e0: 0x24422690  addiu       $v0, $v0, 0x2690
    ctx->pc = 0x1812e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9872));
    // 0x1812e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1812e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1812e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1812e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1812ec: 0x800008  jr          $a0
    ctx->pc = 0x1812ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1812F4u: goto label_1812f4;
            case 0x181320u: goto label_181320;
            case 0x1813C4u: goto label_1813c4;
            case 0x181430u: goto label_181430;
            case 0x181558u: goto label_181558;
            case 0x181580u: goto label_181580;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1812ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1812F4u;
label_1812f4:
    // 0x1812f4: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x1812f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x1812f8: 0x2404feff  addiu       $a0, $zero, -0x101
    ctx->pc = 0x1812f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x1812fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1812fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181300: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x181300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x181304: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x181304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x181308: 0xa6230608  sh          $v1, 0x608($s1)
    ctx->pc = 0x181308u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1544), (uint16_t)GPR_U32(ctx, 3));
    // 0x18130c: 0xae2205b8  sw          $v0, 0x5B8($s1)
    ctx->pc = 0x18130cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 2));
    // 0x181310: 0xa22502f5  sb          $a1, 0x2F5($s1)
    ctx->pc = 0x181310u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 5));
    // 0x181314: 0xa2250770  sb          $a1, 0x770($s1)
    ctx->pc = 0x181314u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1904), (uint8_t)GPR_U32(ctx, 5));
    // 0x181318: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x181318u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18131c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x18131cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_181320:
    // 0x181320: 0x86220608  lh          $v0, 0x608($s1)
    ctx->pc = 0x181320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x181324: 0x4430089  bgezl       $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x181324u;
    {
        const bool branch_taken_0x181324 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x181324) {
            ctx->pc = 0x181328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181324u;
            // 0x181328: 0x96220608  lhu         $v0, 0x608($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18154Cu;
            goto label_18154c;
        }
    }
    ctx->pc = 0x18132Cu;
    // 0x18132c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x18132cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x181330: 0x26240610  addiu       $a0, $s1, 0x610
    ctx->pc = 0x181330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    // 0x181334: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x181334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
    // 0x181338: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x181338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x18133c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18133cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x181340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181344: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x181344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x181348: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18134c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18134cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x181350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x181350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181354: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x181354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x181358: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x181358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18135c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x18135cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181360: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x181360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x181364: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x181364u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x181368: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x181368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x18136c: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x18136Cu;
    SET_GPR_U32(ctx, 31, 0x181374u);
    ctx->pc = 0x181370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18136Cu;
    // 0x181370: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x18136Cu, 0x181374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181374u;
label_181374:
    // 0x181374: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x181374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x181378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18137c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x18137cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x181380: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x181380u;
    {
        const bool branch_taken_0x181380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181380u;
        // 0x181384: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181380) {
            ctx->pc = 0x181394u;
            goto label_181394;
        }
    }
    ctx->pc = 0x181388u;
    // 0x181388: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x181388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18138c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18138Cu;
    {
        const bool branch_taken_0x18138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18138Cu;
        // 0x181390: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18138c) {
            ctx->pc = 0x181398u;
            goto label_181398;
        }
    }
    ctx->pc = 0x181394u;
label_181394:
    // 0x181394: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x181394u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181398:
    // 0x181398: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x181398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x18139c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18139cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1813a0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1813a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1813a4: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x1813a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1813a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1813a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1813acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1813b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813b4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1813B4u;
    SET_GPR_U32(ctx, 31, 0x1813BCu);
    ctx->pc = 0x1813B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1813B4u;
    // 0x1813b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1813B4u, 0x1813BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1813BCu;
label_1813bc:
    // 0x1813bc: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1813BCu;
    {
        const bool branch_taken_0x1813bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1813C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813BCu;
        // 0x1813c0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813bc) {
            ctx->pc = 0x18153Cu;
            goto label_18153c;
        }
    }
    ctx->pc = 0x1813C4u;
label_1813c4:
    // 0x1813c4: 0x26300610  addiu       $s0, $s1, 0x610
    ctx->pc = 0x1813c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    // 0x1813c8: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x1813C8u;
    SET_GPR_U32(ctx, 31, 0x1813D0u);
    ctx->pc = 0x1813CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1813C8u;
    // 0x1813cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x1813C8u, 0x1813D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1813D0u;
label_1813d0:
    // 0x1813d0: 0x54400071  bnel        $v0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x1813D0u;
    {
        const bool branch_taken_0x1813d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1813d0) {
            ctx->pc = 0x1813D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1813D0u;
            // 0x1813d4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181598u;
            goto label_181598;
        }
    }
    ctx->pc = 0x1813D8u;
    // 0x1813d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1813d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1813dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1813dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813e0: 0x3c01be32  lui         $at, 0xBE32
    ctx->pc = 0x1813e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48690 << 16));
    // 0x1813e4: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1813e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1813e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1813e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1813ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1813ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813f0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1813f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1813f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1813f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1813f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1813f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1813fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1813fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181400: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x181400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181404: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x181404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x181408: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x181408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18140c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x18140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x181410: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x181410u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x181414: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x181414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x181418: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x181418u;
    SET_GPR_U32(ctx, 31, 0x181420u);
    ctx->pc = 0x18141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181418u;
    // 0x18141c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x181418u, 0x181420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181420u;
label_181420:
    // 0x181420: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x181420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181424: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x181424u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x181428: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x181428u;
    {
        const bool branch_taken_0x181428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181428u;
        // 0x18142c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181428) {
            ctx->pc = 0x181590u;
            goto label_181590;
        }
    }
    ctx->pc = 0x181430u;
label_181430:
    // 0x181430: 0x26300610  addiu       $s0, $s1, 0x610
    ctx->pc = 0x181430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    // 0x181434: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x181434u;
    SET_GPR_U32(ctx, 31, 0x18143Cu);
    ctx->pc = 0x181438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181434u;
    // 0x181438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x181434u, 0x18143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18143Cu;
label_18143c:
    // 0x18143c: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x18143Cu;
    {
        const bool branch_taken_0x18143c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18143c) {
            ctx->pc = 0x181440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18143Cu;
            // 0x181440: 0x96220608  lhu         $v0, 0x608($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18154Cu;
            goto label_18154c;
        }
    }
    ctx->pc = 0x181444u;
    // 0x181444: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x181444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x181448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18144c: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x18144cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x181450: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x181450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x181454: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x181454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181458: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x181458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18145c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x18145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x181460: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x181460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181464: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x181464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x181468: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x181468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18146c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x18146cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x181470: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x181470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x181474: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x181474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181478: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x181478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18147c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18147cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x181480: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x181480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x181484: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x181484u;
    SET_GPR_U32(ctx, 31, 0x18148Cu);
    ctx->pc = 0x181488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181484u;
    // 0x181488: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x181484u, 0x18148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18148Cu;
label_18148c:
    // 0x18148c: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x18148cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x181490: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x181490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181494: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x181494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x181498: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x181498u;
    {
        const bool branch_taken_0x181498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181498u;
        // 0x18149c: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181498) {
            ctx->pc = 0x1814ACu;
            goto label_1814ac;
        }
    }
    ctx->pc = 0x1814A0u;
    // 0x1814a0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1814a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1814a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1814A4u;
    {
        const bool branch_taken_0x1814a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1814A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814A4u;
        // 0x1814a8: 0x8c490008  lw          $t1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814a4) {
            ctx->pc = 0x1814B0u;
            goto label_1814b0;
        }
    }
    ctx->pc = 0x1814ACu;
label_1814ac:
    // 0x1814ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1814acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1814b0:
    // 0x1814b0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1814b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1814b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1814b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1814b8: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1814b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1814bc: 0x240600dd  addiu       $a2, $zero, 0xDD
    ctx->pc = 0x1814bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x1814c0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1814c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1814c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1814c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1814cc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1814CCu;
    SET_GPR_U32(ctx, 31, 0x1814D4u);
    ctx->pc = 0x1814D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814CCu;
    // 0x1814d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1814CCu, 0x1814D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1814D4u;
label_1814d4:
    // 0x1814d4: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1814d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1814d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1814d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1814dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1814dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1814e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1814E0u;
    {
        const bool branch_taken_0x1814e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1814E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814E0u;
        // 0x1814e4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814e0) {
            ctx->pc = 0x1814F4u;
            goto label_1814f4;
        }
    }
    ctx->pc = 0x1814E8u;
    // 0x1814e8: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1814e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1814ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1814ECu;
    {
        const bool branch_taken_0x1814ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1814F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814ECu;
        // 0x1814f0: 0x8c490008  lw          $t1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814ec) {
            ctx->pc = 0x1814F8u;
            goto label_1814f8;
        }
    }
    ctx->pc = 0x1814F4u;
label_1814f4:
    // 0x1814f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1814f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1814f8:
    // 0x1814f8: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1814f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1814fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1814fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181500: 0x240600de  addiu       $a2, $zero, 0xDE
    ctx->pc = 0x181500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x181504: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x181504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181508: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x181508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18150c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18150cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181510: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x181510u;
    SET_GPR_U32(ctx, 31, 0x181518u);
    ctx->pc = 0x181514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181510u;
    // 0x181514: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x181510u, 0x181518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181518u;
label_181518:
    // 0x181518: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x181518u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x18151c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18151cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181520: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x181520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181524: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181528: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x181528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18152c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x18152cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181530: 0xc0c194a  jal         func_306528
    ctx->pc = 0x181530u;
    SET_GPR_U32(ctx, 31, 0x181538u);
    ctx->pc = 0x181534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181530u;
    // 0x181534: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x181530u, 0x181538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181538u;
label_181538:
    // 0x181538: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x181538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18153c:
    // 0x18153c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18153cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x181540: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x181540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x181544: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x181544u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x181548: 0x96220608  lhu         $v0, 0x608($s1)
    ctx->pc = 0x181548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1544)));
label_18154c:
    // 0x18154c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18154cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x181550: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x181550u;
    {
        const bool branch_taken_0x181550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181550u;
        // 0x181554: 0xa6220608  sh          $v0, 0x608($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181550) {
            ctx->pc = 0x181594u;
            goto label_181594;
        }
    }
    ctx->pc = 0x181558u;
label_181558:
    // 0x181558: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x181558u;
    SET_GPR_U32(ctx, 31, 0x181560u);
    ctx->pc = 0x18155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181558u;
    // 0x18155c: 0x26240610  addiu       $a0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x181558u, 0x181560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181560u;
label_181560:
    // 0x181560: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x181560u;
    {
        const bool branch_taken_0x181560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181560u;
        // 0x181564: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181560) {
            ctx->pc = 0x181598u;
            goto label_181598;
        }
    }
    ctx->pc = 0x181568u;
    // 0x181568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18156c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18156cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x181570: 0xa2220771  sb          $v0, 0x771($s1)
    ctx->pc = 0x181570u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1905), (uint8_t)GPR_U32(ctx, 2));
    // 0x181574: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x181574u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x181578: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x181578u;
    {
        const bool branch_taken_0x181578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181578u;
        // 0x18157c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181578) {
            ctx->pc = 0x181590u;
            goto label_181590;
        }
    }
    ctx->pc = 0x181580u;
label_181580:
    // 0x181580: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x181580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x181584: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x181584u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x181588: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x181588u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x18158c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x18158cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_181590:
    // 0x181590: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x181590u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_181594:
    // 0x181594: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x181594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_181598:
    // 0x181598: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x181598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18159c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18159cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1815a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1815A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1815A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1815A0u;
        // 0x1815a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1815A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1815A8u;
}
