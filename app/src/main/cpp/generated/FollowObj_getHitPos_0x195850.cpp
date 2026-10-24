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

// Function: FollowObj_getHitPos
// Address: 0x195850 - 0x195980
void FollowObj_getHitPos_0x195850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FollowObj_getHitPos_0x195850");
#endif

    switch (ctx->pc) {
        case 0x195850u: goto label_195850;
        case 0x195854u: goto label_195854;
        case 0x195858u: goto label_195858;
        case 0x19585cu: goto label_19585c;
        case 0x195860u: goto label_195860;
        case 0x195864u: goto label_195864;
        case 0x195868u: goto label_195868;
        case 0x19586cu: goto label_19586c;
        case 0x195870u: goto label_195870;
        case 0x195874u: goto label_195874;
        case 0x195878u: goto label_195878;
        case 0x19587cu: goto label_19587c;
        case 0x195880u: goto label_195880;
        case 0x195884u: goto label_195884;
        case 0x195888u: goto label_195888;
        case 0x19588cu: goto label_19588c;
        case 0x195890u: goto label_195890;
        case 0x195894u: goto label_195894;
        case 0x195898u: goto label_195898;
        case 0x19589cu: goto label_19589c;
        case 0x1958a0u: goto label_1958a0;
        case 0x1958a4u: goto label_1958a4;
        case 0x1958a8u: goto label_1958a8;
        case 0x1958acu: goto label_1958ac;
        case 0x1958b0u: goto label_1958b0;
        case 0x1958b4u: goto label_1958b4;
        case 0x1958b8u: goto label_1958b8;
        case 0x1958bcu: goto label_1958bc;
        case 0x1958c0u: goto label_1958c0;
        case 0x1958c4u: goto label_1958c4;
        case 0x1958c8u: goto label_1958c8;
        case 0x1958ccu: goto label_1958cc;
        case 0x1958d0u: goto label_1958d0;
        case 0x1958d4u: goto label_1958d4;
        case 0x1958d8u: goto label_1958d8;
        case 0x1958dcu: goto label_1958dc;
        case 0x1958e0u: goto label_1958e0;
        case 0x1958e4u: goto label_1958e4;
        case 0x1958e8u: goto label_1958e8;
        case 0x1958ecu: goto label_1958ec;
        case 0x1958f0u: goto label_1958f0;
        case 0x1958f4u: goto label_1958f4;
        case 0x1958f8u: goto label_1958f8;
        case 0x1958fcu: goto label_1958fc;
        case 0x195900u: goto label_195900;
        case 0x195904u: goto label_195904;
        case 0x195908u: goto label_195908;
        case 0x19590cu: goto label_19590c;
        case 0x195910u: goto label_195910;
        case 0x195914u: goto label_195914;
        case 0x195918u: goto label_195918;
        case 0x19591cu: goto label_19591c;
        case 0x195920u: goto label_195920;
        case 0x195924u: goto label_195924;
        case 0x195928u: goto label_195928;
        case 0x19592cu: goto label_19592c;
        case 0x195930u: goto label_195930;
        case 0x195934u: goto label_195934;
        case 0x195938u: goto label_195938;
        case 0x19593cu: goto label_19593c;
        case 0x195940u: goto label_195940;
        case 0x195944u: goto label_195944;
        case 0x195948u: goto label_195948;
        case 0x19594cu: goto label_19594c;
        case 0x195950u: goto label_195950;
        case 0x195954u: goto label_195954;
        case 0x195958u: goto label_195958;
        case 0x19595cu: goto label_19595c;
        case 0x195960u: goto label_195960;
        case 0x195964u: goto label_195964;
        case 0x195968u: goto label_195968;
        case 0x19596cu: goto label_19596c;
        case 0x195970u: goto label_195970;
        case 0x195974u: goto label_195974;
        case 0x195978u: goto label_195978;
        case 0x19597cu: goto label_19597c;
        default: break;
    }

    ctx->pc = 0x195850u;

label_195850:
    // 0x195850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_195854:
    // 0x195854: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x195854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_195858:
    // 0x195858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19585c:
    // 0x19585c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19585cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_195860:
    // 0x195860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_195864:
    // 0x195864: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x195864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_195868:
    // 0x195868: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x195868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
label_19586c:
    // 0x19586c: 0x5080003a  beql        $a0, $zero, . + 4 + (0x3A << 2)
label_195870:
    if (ctx->pc == 0x195870u) {
        ctx->pc = 0x195870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19586Cu;
        // 0x195870: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195874u;
        goto label_195874;
    }
    ctx->pc = 0x19586Cu;
    {
        const bool branch_taken_0x19586c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19586c) {
            ctx->pc = 0x195870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19586Cu;
            // 0x195870: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195958u;
            goto label_195958;
        }
    }
    ctx->pc = 0x195874u;
label_195874:
    // 0x195874: 0xc07f636  jal         func_1FD8D8
label_195878:
    if (ctx->pc == 0x195878u) {
        ctx->pc = 0x195878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195874u;
        // 0x195878: 0x8e05060c  lw          $a1, 0x60C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19587Cu;
        goto label_19587c;
    }
    ctx->pc = 0x195874u;
    SET_GPR_U32(ctx, 31, 0x19587Cu);
    ctx->pc = 0x195878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195874u;
    // 0x195878: 0x8e05060c  lw          $a1, 0x60C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8D8u, 0x195874u, 0x19587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19587Cu;
label_19587c:
    // 0x19587c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19587cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195880:
    // 0x195880: 0x50600035  beql        $v1, $zero, . + 4 + (0x35 << 2)
label_195884:
    if (ctx->pc == 0x195884u) {
        ctx->pc = 0x195884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195880u;
        // 0x195884: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195888u;
        goto label_195888;
    }
    ctx->pc = 0x195880u;
    {
        const bool branch_taken_0x195880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195880) {
            ctx->pc = 0x195884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195880u;
            // 0x195884: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195958u;
            goto label_195958;
        }
    }
    ctx->pc = 0x195888u;
label_195888:
    // 0x195888: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x195888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19588c:
    // 0x19588c: 0x30420203  andi        $v0, $v0, 0x203
    ctx->pc = 0x19588cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)515);
label_195890:
    // 0x195890: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x195890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_195894:
    // 0x195894: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_195898:
    if (ctx->pc == 0x195898u) {
        ctx->pc = 0x195898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195894u;
        // 0x195898: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19589Cu;
        goto label_19589c;
    }
    ctx->pc = 0x195894u;
    {
        const bool branch_taken_0x195894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195894) {
            ctx->pc = 0x195898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195894u;
            // 0x195898: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195958u;
            goto label_195958;
        }
    }
    ctx->pc = 0x19589Cu;
label_19589c:
    // 0x19589c: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x19589cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1958a0:
    // 0x1958a0: 0x26110620  addiu       $s1, $s0, 0x620
    ctx->pc = 0x1958a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
label_1958a4:
    // 0x1958a4: 0x8ca30100  lw          $v1, 0x100($a1)
    ctx->pc = 0x1958a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
label_1958a8:
    // 0x1958a8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1958a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1958ac:
    // 0x1958ac: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1958acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1958b0:
    // 0x1958b0: 0x40f809  jalr        $v0
label_1958b4:
    if (ctx->pc == 0x1958B4u) {
        ctx->pc = 0x1958B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958B0u;
        // 0x1958b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1958B8u;
        goto label_1958b8;
    }
    ctx->pc = 0x1958B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1958B8u);
        ctx->pc = 0x1958B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958B0u;
        // 0x1958b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1958B0u, 0x1958B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1958B8u;
label_1958b8:
    // 0x1958b8: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_1958bc:
    if (ctx->pc == 0x1958BCu) {
        ctx->pc = 0x1958C0u;
        goto label_1958c0;
    }
    ctx->pc = 0x1958B8u;
    {
        const bool branch_taken_0x1958b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1958b8) {
            ctx->pc = 0x1958D8u;
            goto label_1958d8;
        }
    }
    ctx->pc = 0x1958C0u;
label_1958c0:
    // 0x1958c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1958c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1958c4:
    // 0x1958c4: 0xe6000620  swc1        $f0, 0x620($s0)
    ctx->pc = 0x1958c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
label_1958c8:
    // 0x1958c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1958c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1958cc:
    // 0x1958cc: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1958ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1958d0:
    // 0x1958d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1958d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1958d4:
    // 0x1958d4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1958d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1958d8:
    // 0x1958d8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1958d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1958dc:
    // 0x1958dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1958dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1958e0:
    // 0x1958e0: 0xc6000624  lwc1        $f0, 0x624($s0)
    ctx->pc = 0x1958e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1958e4:
    // 0x1958e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1958e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1958e8:
    // 0x1958e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1958e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1958ec:
    // 0x1958ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1958ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1958f0:
    // 0x1958f0: 0xc0b6dac  jal         func_2DB6B0
label_1958f4:
    if (ctx->pc == 0x1958F4u) {
        ctx->pc = 0x1958F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958F0u;
        // 0x1958f4: 0xe6000624  swc1        $f0, 0x624($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1572), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1958F8u;
        goto label_1958f8;
    }
    ctx->pc = 0x1958F0u;
    SET_GPR_U32(ctx, 31, 0x1958F8u);
    ctx->pc = 0x1958F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1958F0u;
    // 0x1958f4: 0xe6000624  swc1        $f0, 0x624($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1572), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1958F0u, 0x1958F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1958F8u;
label_1958f8:
    // 0x1958f8: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1958f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1958fc:
    // 0x1958fc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1958fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_195900:
    // 0x195900: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x195900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_195904:
    // 0x195904: 0xa0f809  jalr        $a1
label_195908:
    if (ctx->pc == 0x195908u) {
        ctx->pc = 0x195908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195904u;
        // 0x195908: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19590Cu;
        goto label_19590c;
    }
    ctx->pc = 0x195904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x19590Cu);
        ctx->pc = 0x195908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195904u;
        // 0x195908: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195904u, 0x19590Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19590Cu;
label_19590c:
    // 0x19590c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_195910:
    // 0x195910: 0xc6010624  lwc1        $f1, 0x624($s0)
    ctx->pc = 0x195910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_195914:
    // 0x195914: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x195914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_195918:
    // 0x195918: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x195918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19591c:
    // 0x19591c: 0x0  nop
    ctx->pc = 0x19591cu;
    // NOP
label_195920:
    // 0x195920: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_195924:
    if (ctx->pc == 0x195924u) {
        ctx->pc = 0x195924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195920u;
        // 0x195924: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195928u;
        goto label_195928;
    }
    ctx->pc = 0x195920u;
    {
        const bool branch_taken_0x195920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195920) {
            ctx->pc = 0x195924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195920u;
            // 0x195924: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195968u;
            goto label_195968;
        }
    }
    ctx->pc = 0x195928u;
label_195928:
    // 0x195928: 0xc0b6dac  jal         func_2DB6B0
label_19592c:
    if (ctx->pc == 0x19592Cu) {
        ctx->pc = 0x195930u;
        goto label_195930;
    }
    ctx->pc = 0x195928u;
    SET_GPR_U32(ctx, 31, 0x195930u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x195928u, 0x195930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195930u;
label_195930:
    // 0x195930: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x195930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_195934:
    // 0x195934: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x195934u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_195938:
    // 0x195938: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x195938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_19593c:
    // 0x19593c: 0xa0f809  jalr        $a1
label_195940:
    if (ctx->pc == 0x195940u) {
        ctx->pc = 0x195940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19593Cu;
        // 0x195940: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195944u;
        goto label_195944;
    }
    ctx->pc = 0x19593Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x195944u);
        ctx->pc = 0x195940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19593Cu;
        // 0x195940: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19593Cu, 0x195944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195944u;
label_195944:
    // 0x195944: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x195944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_195948:
    // 0x195948: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x195948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_19594c:
    // 0x19594c: 0xe6000624  swc1        $f0, 0x624($s0)
    ctx->pc = 0x19594cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1572), bits); }
label_195950:
    // 0x195950: 0x10000005  b           . + 4 + (0x5 << 2)
label_195954:
    if (ctx->pc == 0x195954u) {
        ctx->pc = 0x195954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195950u;
        // 0x195954: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195958u;
        goto label_195958;
    }
    ctx->pc = 0x195950u;
    {
        const bool branch_taken_0x195950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195950u;
        // 0x195954: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195950) {
            ctx->pc = 0x195968u;
            goto label_195968;
        }
    }
    ctx->pc = 0x195958u;
label_195958:
    // 0x195958: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x195958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_19595c:
    // 0x19595c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x19595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_195960:
    // 0x195960: 0x40f809  jalr        $v0
label_195964:
    if (ctx->pc == 0x195964u) {
        ctx->pc = 0x195964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195960u;
        // 0x195964: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195968u;
        goto label_195968;
    }
    ctx->pc = 0x195960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x195968u);
        ctx->pc = 0x195964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195960u;
        // 0x195964: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195960u, 0x195968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195968u;
label_195968:
    // 0x195968: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x195968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19596c:
    // 0x19596c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19596cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195970:
    // 0x195970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195974:
    // 0x195974: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x195974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_195978:
    // 0x195978: 0x3e00008  jr          $ra
label_19597c:
    if (ctx->pc == 0x19597Cu) {
        ctx->pc = 0x19597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195978u;
        // 0x19597c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195980u;
        goto label_fallthrough_0x195978;
    }
    ctx->pc = 0x195978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195978u;
        // 0x19597c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x195978:
    ctx->pc = 0x195980u;
}
