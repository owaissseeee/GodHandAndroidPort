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

// Function: func_00260278
// Address: 0x260278 - 0x260438
void func_00260278_0x260278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00260278_0x260278");
#endif

    switch (ctx->pc) {
        case 0x260320u: goto label_260320;
        case 0x260340u: goto label_260340;
        case 0x26034cu: goto label_26034c;
        case 0x260360u: goto label_260360;
        case 0x2603c0u: goto label_2603c0;
        case 0x260414u: goto label_260414;
        default: break;
    }

    ctx->pc = 0x260278u;

    // 0x260278: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x260278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x26027c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x26027cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x260280: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x260280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x260284: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x260284u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260288: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x260288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x26028c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x26028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x260290: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x260290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x260294: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x260294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x260298: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x260298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26029c: 0x8ea20564  lw          $v0, 0x564($s5)
    ctx->pc = 0x26029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1380)));
    // 0x2602a0: 0x3842026a  xori        $v0, $v0, 0x26A
    ctx->pc = 0x2602a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)618);
    // 0x2602a4: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2602A4u;
    {
        const bool branch_taken_0x2602a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2602A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602A4u;
        // 0x2602a8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602a4) {
            ctx->pc = 0x260418u;
            goto label_260418;
        }
    }
    ctx->pc = 0x2602ACu;
    // 0x2602ac: 0x8ea40748  lw          $a0, 0x748($s5)
    ctx->pc = 0x2602acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1864)));
    // 0x2602b0: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2602B0u;
    {
        const bool branch_taken_0x2602b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2602B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602B0u;
        // 0x2602b4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602b0) {
            ctx->pc = 0x260418u;
            goto label_260418;
        }
    }
    ctx->pc = 0x2602B8u;
    // 0x2602b8: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x2602b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2602bc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2602bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2602c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2602C0u;
    {
        const bool branch_taken_0x2602c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2602C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602C0u;
        // 0x2602c4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602c0) {
            ctx->pc = 0x2602D4u;
            goto label_2602d4;
        }
    }
    ctx->pc = 0x2602C8u;
    // 0x2602c8: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2602c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2602cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2602CCu;
    {
        const bool branch_taken_0x2602cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2602D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602CCu;
        // 0x2602d0: 0x8c450028  lw          $a1, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602cc) {
            ctx->pc = 0x2602D8u;
            goto label_2602d8;
        }
    }
    ctx->pc = 0x2602D4u;
label_2602d4:
    // 0x2602d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2602d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2602d8:
    // 0x2602d8: 0x10a0004f  beqz        $a1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2602D8u;
    {
        const bool branch_taken_0x2602d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2602DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602D8u;
        // 0x2602dc: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602d8) {
            ctx->pc = 0x260418u;
            goto label_260418;
        }
    }
    ctx->pc = 0x2602E0u;
    // 0x2602e0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2602e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2602e4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2602e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2602e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2602e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2602ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2602ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2602f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2602f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2602f4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2602f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2602f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2602f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2602fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2602fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260300: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x260300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x260304: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x260304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x260308: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x260308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26030c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x26030cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x260310: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x260310u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x260314: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x260314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x260318: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x260318u;
    SET_GPR_U32(ctx, 31, 0x260320u);
    ctx->pc = 0x26031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260318u;
    // 0x26031c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x260318u, 0x260320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260320u;
label_260320:
    // 0x260320: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x260320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260324: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x260324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x260328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x260328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26032c: 0x0  nop
    ctx->pc = 0x26032cu;
    // NOP
    // 0x260330: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x260330u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x260334: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x260334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x260338: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x260338u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x26033c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x26033cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_260340:
    // 0x260340: 0x265064e0  addiu       $s0, $s2, 0x64E0
    ctx->pc = 0x260340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25824));
    // 0x260344: 0xc0a3f96  jal         func_28FE58
    ctx->pc = 0x260344u;
    SET_GPR_U32(ctx, 31, 0x26034Cu);
    ctx->pc = 0x260348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260344u;
    // 0x260348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE58u, 0x260344u, 0x26034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26034Cu;
label_26034c:
    // 0x26034c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x26034cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x260350: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x260350u;
    {
        const bool branch_taken_0x260350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260350u;
        // 0x260354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260350) {
            ctx->pc = 0x260370u;
            goto label_260370;
        }
    }
    ctx->pc = 0x260358u;
    // 0x260358: 0xc0a3fb6  jal         func_28FED8
    ctx->pc = 0x260358u;
    SET_GPR_U32(ctx, 31, 0x260360u);
    ctx->pc = 0x26035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260358u;
    // 0x26035c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FED8u, 0x260358u, 0x260360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260360u;
label_260360:
    // 0x260360: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x260360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260364: 0x24020220  addiu       $v0, $zero, 0x220
    ctx->pc = 0x260364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x260368: 0x5662fff5  bnel        $s3, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x260368u;
    {
        const bool branch_taken_0x260368 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x260368) {
            ctx->pc = 0x26036Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260368u;
            // 0x26036c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260340;
        }
    }
    ctx->pc = 0x260370u;
label_260370:
    // 0x260370: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x260370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x260374: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x260374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x260378: 0x24020220  addiu       $v0, $zero, 0x220
    ctx->pc = 0x260378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x26037c: 0x16620025  bne         $s3, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x26037Cu;
    {
        const bool branch_taken_0x26037c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x260380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26037Cu;
        // 0x260380: 0xa2830031  sb          $v1, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26037c) {
            ctx->pc = 0x260414u;
            goto label_260414;
        }
    }
    ctx->pc = 0x260384u;
    // 0x260384: 0xc6a20104  lwc1        $f2, 0x104($s5)
    ctx->pc = 0x260384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x260388: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x260388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x26038c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x26038cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x260390: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x260390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260394: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x260394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260398: 0xa3a30051  sb          $v1, 0x51($sp)
    ctx->pc = 0x260398u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 3));
    // 0x26039c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x26039cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2603a0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2603a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2603a4: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2603a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2603a8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2603a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2603ac: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x2603acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x2603b0: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x2603b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x2603b4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2603b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2603b8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2603B8u;
    SET_GPR_U32(ctx, 31, 0x2603C0u);
    ctx->pc = 0x2603BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2603B8u;
    // 0x2603bc: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2603B8u, 0x2603C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603C0u;
label_2603c0:
    // 0x2603c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2603c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2603c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2603c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2603c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2603c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2603cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2603CCu;
    {
        const bool branch_taken_0x2603cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2603cc) {
            ctx->pc = 0x2603D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2603CCu;
            // 0x2603d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2603D4u;
            goto label_2603d4;
        }
    }
    ctx->pc = 0x2603D4u;
label_2603d4:
    // 0x2603d4: 0x2810  mfhi        $a1
    ctx->pc = 0x2603d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2603d8: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2603D8u;
    {
        const bool branch_taken_0x2603d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2603DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603D8u;
        // 0x2603dc: 0x24020221  addiu       $v0, $zero, 0x221 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603d8) {
            ctx->pc = 0x2603F8u;
            goto label_2603f8;
        }
    }
    ctx->pc = 0x2603E0u;
    // 0x2603e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2603E0u;
    {
        const bool branch_taken_0x2603e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2603E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603E0u;
        // 0x2603e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603e0) {
            ctx->pc = 0x2603F0u;
            goto label_2603f0;
        }
    }
    ctx->pc = 0x2603E8u;
    // 0x2603e8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2603E8u;
    {
        const bool branch_taken_0x2603e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2603ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603E8u;
        // 0x2603ec: 0x24020222  addiu       $v0, $zero, 0x222 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603e8) {
            ctx->pc = 0x2603F8u;
            goto label_2603f8;
        }
    }
    ctx->pc = 0x2603F0u;
label_2603f0:
    // 0x2603f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2603F0u;
    {
        const bool branch_taken_0x2603f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2603F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603F0u;
        // 0x2603f4: 0xafb30048  sw          $s3, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603f0) {
            ctx->pc = 0x2603FCu;
            goto label_2603fc;
        }
    }
    ctx->pc = 0x2603F8u;
label_2603f8:
    // 0x2603f8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2603f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_2603fc:
    // 0x2603fc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2603fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x260400: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x260400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260404: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x260404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x260408: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x260408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26040c: 0xc0a4174  jal         func_2905D0
    ctx->pc = 0x26040Cu;
    SET_GPR_U32(ctx, 31, 0x260414u);
    ctx->pc = 0x260410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26040Cu;
    // 0x260410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2905D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2905D0u, 0x26040Cu, 0x260414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260414u;
label_260414:
    // 0x260414: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x260414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_260418:
    // 0x260418: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x260418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26041c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x26041cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x260420: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x260420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x260424: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x260424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x260428: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x260428u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26042c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26042cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260430: 0x3e00008  jr          $ra
    ctx->pc = 0x260430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260430u;
        // 0x260434: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260438u;
}
