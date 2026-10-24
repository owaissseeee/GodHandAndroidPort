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

// Function: func_001177F8
// Address: 0x1177f8 - 0x1179c8
void func_001177F8_0x1177f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001177F8_0x1177f8");
#endif

    switch (ctx->pc) {
        case 0x117848u: goto label_117848;
        case 0x117858u: goto label_117858;
        case 0x117864u: goto label_117864;
        case 0x117898u: goto label_117898;
        case 0x1178a0u: goto label_1178a0;
        case 0x1178ecu: goto label_1178ec;
        case 0x117900u: goto label_117900;
        case 0x117910u: goto label_117910;
        case 0x11795cu: goto label_11795c;
        case 0x117964u: goto label_117964;
        case 0x117978u: goto label_117978;
        case 0x11799cu: goto label_11799c;
        case 0x1179a8u: goto label_1179a8;
        default: break;
    }

    ctx->pc = 0x1177f8u;

    // 0x1177f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1177f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1177fc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1177fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x117800: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x117800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x117804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117808: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x117808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11780c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11780cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x117810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x117810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117818: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x117818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11781c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11781cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x117820: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117824: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x117824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x117828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11782c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x117830: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x117830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x117834: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x117834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x117838: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11783c: 0x8e320694  lw          $s2, 0x694($s1)
    ctx->pc = 0x11783cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x117840: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x117840u;
    SET_GPR_U32(ctx, 31, 0x117848u);
    ctx->pc = 0x117844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117840u;
    // 0x117844: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x117840u, 0x117848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117848u;
label_117848:
    // 0x117848: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x117848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x11784c: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x11784cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x117850: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x117850u;
    SET_GPR_U32(ctx, 31, 0x117858u);
    ctx->pc = 0x117854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117850u;
    // 0x117854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x117850u, 0x117858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117858u;
label_117858:
    // 0x117858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11785c: 0xc0a480c  jal         func_292030
    ctx->pc = 0x11785Cu;
    SET_GPR_U32(ctx, 31, 0x117864u);
    ctx->pc = 0x117860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11785Cu;
    // 0x117860: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x11785Cu, 0x117864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117864u;
label_117864:
    // 0x117864: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x117864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x117868: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x117868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x11786c: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x11786cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x117870: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117874: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117874u;
    {
        const bool branch_taken_0x117874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x117878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117874u;
        // 0x117878: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117874) {
            ctx->pc = 0x117890u;
            goto label_117890;
        }
    }
    ctx->pc = 0x11787Cu;
    // 0x11787c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117880: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x117880u;
    {
        const bool branch_taken_0x117880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x117884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117880u;
        // 0x117884: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117880) {
            ctx->pc = 0x117924u;
            goto label_117924;
        }
    }
    ctx->pc = 0x117888u;
    // 0x117888: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x117888u;
    {
        const bool branch_taken_0x117888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117888u;
        // 0x11788c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117888) {
            ctx->pc = 0x1179B0u;
            goto label_1179b0;
        }
    }
    ctx->pc = 0x117890u;
label_117890:
    // 0x117890: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x117890u;
    SET_GPR_U32(ctx, 31, 0x117898u);
    ctx->pc = 0x117894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117890u;
    // 0x117894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x117890u, 0x117898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117898u;
label_117898:
    // 0x117898: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x117898u;
    SET_GPR_U32(ctx, 31, 0x1178A0u);
    ctx->pc = 0x11789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117898u;
    // 0x11789c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x117898u, 0x1178A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1178A0u;
label_1178a0:
    // 0x1178a0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1178a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1178a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1178a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178a8: 0x3c01bea8  lui         $at, 0xBEA8
    ctx->pc = 0x1178a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48808 << 16));
    // 0x1178ac: 0x34219a02  ori         $at, $at, 0x9A02
    ctx->pc = 0x1178acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39426);
    // 0x1178b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1178b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1178b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1178b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178b8: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x1178b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1178bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1178bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178c0: 0x3c013fd5  lui         $at, 0x3FD5
    ctx->pc = 0x1178c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16341 << 16));
    // 0x1178c4: 0x3421119d  ori         $at, $at, 0x119D
    ctx->pc = 0x1178c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4509);
    // 0x1178c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1178c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1178cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1178ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1178d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1178d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1178d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1178d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1178d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1178dc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1178dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1178e0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1178e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1178e4: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x1178E4u;
    SET_GPR_U32(ctx, 31, 0x1178ECu);
    ctx->pc = 0x1178E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1178E4u;
    // 0x1178e8: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x1178E4u, 0x1178ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1178ECu;
label_1178ec:
    // 0x1178ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1178ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1178f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1178f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1178f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1178f8: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x1178F8u;
    SET_GPR_U32(ctx, 31, 0x117900u);
    ctx->pc = 0x1178FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1178F8u;
    // 0x1178fc: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x1178F8u, 0x117900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117900u;
label_117900:
    // 0x117900: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x117900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x117904: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x117904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x117908: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x117908u;
    SET_GPR_U32(ctx, 31, 0x117910u);
    ctx->pc = 0x11790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117908u;
    // 0x11790c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x117908u, 0x117910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117910u;
label_117910:
    // 0x117910: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x117910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x117914: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x117914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x117918: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x117918u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x11791c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x117920: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x117920u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_117924:
    // 0x117924: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x117924u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x117928: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x117928u;
    {
        const bool branch_taken_0x117928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117928u;
        // 0x11792c: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117928) {
            ctx->pc = 0x117954u;
            goto label_117954;
        }
    }
    ctx->pc = 0x117930u;
    // 0x117930: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x117930u;
    {
        const bool branch_taken_0x117930 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x117934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117930u;
        // 0x117934: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117930) {
            ctx->pc = 0x117954u;
            goto label_117954;
        }
    }
    ctx->pc = 0x117938u;
    // 0x117938: 0x26440550  addiu       $a0, $s2, 0x550
    ctx->pc = 0x117938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x11793c: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11793cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x117940: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x117940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x117944: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x117944u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117948: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x117948u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11794c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11794cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x117950: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x117950u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_117954:
    // 0x117954: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x117954u;
    SET_GPR_U32(ctx, 31, 0x11795Cu);
    ctx->pc = 0x117958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117954u;
    // 0x117958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x117954u, 0x11795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11795Cu;
label_11795c:
    // 0x11795c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11795Cu;
    SET_GPR_U32(ctx, 31, 0x117964u);
    ctx->pc = 0x117960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11795Cu;
    // 0x117960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11795Cu, 0x117964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117964u;
label_117964:
    // 0x117964: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x117964u;
    {
        const bool branch_taken_0x117964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117964u;
        // 0x117968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117964) {
            ctx->pc = 0x117988u;
            goto label_117988;
        }
    }
    ctx->pc = 0x11796Cu;
    // 0x11796c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11796cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117970: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x117970u;
    SET_GPR_U32(ctx, 31, 0x117978u);
    ctx->pc = 0x117974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117970u;
    // 0x117974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x117970u, 0x117978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117978u;
label_117978:
    // 0x117978: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x117978u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11797c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11797cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x117980: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x117980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x117984: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x117984u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_117988:
    // 0x117988: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11798c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11798cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x117990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117994: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x117994u;
    SET_GPR_U32(ctx, 31, 0x11799Cu);
    ctx->pc = 0x117998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117994u;
    // 0x117998: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x117994u, 0x11799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11799Cu;
label_11799c:
    // 0x11799c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11799cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179a0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1179A0u;
    SET_GPR_U32(ctx, 31, 0x1179A8u);
    ctx->pc = 0x1179A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179A0u;
    // 0x1179a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1179A0u, 0x1179A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179A8u;
label_1179a8:
    // 0x1179a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1179a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1179ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1179acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1179b0:
    // 0x1179b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1179b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1179b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1179b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1179b8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1179b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1179bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1179BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1179C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179BCu;
        // 0x1179c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1179BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1179C4u;
    // 0x1179c4: 0x0  nop
    ctx->pc = 0x1179c4u;
    // NOP
    ctx->pc = 0x1179c8u;
}
