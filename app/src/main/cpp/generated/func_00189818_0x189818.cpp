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

// Function: func_00189818
// Address: 0x189818 - 0x18a110
void func_00189818_0x189818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00189818_0x189818");
#endif

    switch (ctx->pc) {
        case 0x1898a0u: goto label_1898a0;
        case 0x1898a8u: goto label_1898a8;
        case 0x1898d8u: goto label_1898d8;
        case 0x1898ecu: goto label_1898ec;
        case 0x189900u: goto label_189900;
        case 0x189928u: goto label_189928;
        case 0x189a40u: goto label_189a40;
        case 0x189a4cu: goto label_189a4c;
        case 0x189a58u: goto label_189a58;
        case 0x189a68u: goto label_189a68;
        case 0x189a74u: goto label_189a74;
        case 0x189a80u: goto label_189a80;
        case 0x189aa8u: goto label_189aa8;
        case 0x189ac4u: goto label_189ac4;
        case 0x189bd0u: goto label_189bd0;
        case 0x189bdcu: goto label_189bdc;
        case 0x189be8u: goto label_189be8;
        case 0x189bf8u: goto label_189bf8;
        case 0x189c04u: goto label_189c04;
        case 0x189c10u: goto label_189c10;
        case 0x189c3cu: goto label_189c3c;
        case 0x189d58u: goto label_189d58;
        case 0x189d64u: goto label_189d64;
        case 0x189d70u: goto label_189d70;
        case 0x189d80u: goto label_189d80;
        case 0x189d8cu: goto label_189d8c;
        case 0x189d98u: goto label_189d98;
        case 0x189db4u: goto label_189db4;
        case 0x189dc4u: goto label_189dc4;
        case 0x189decu: goto label_189dec;
        case 0x189e10u: goto label_189e10;
        case 0x189e44u: goto label_189e44;
        case 0x189e8cu: goto label_189e8c;
        case 0x189e9cu: goto label_189e9c;
        case 0x189eacu: goto label_189eac;
        case 0x189ebcu: goto label_189ebc;
        case 0x189eccu: goto label_189ecc;
        case 0x189f20u: goto label_189f20;
        case 0x189fb0u: goto label_189fb0;
        case 0x189fb8u: goto label_189fb8;
        case 0x189fd0u: goto label_189fd0;
        case 0x18a044u: goto label_18a044;
        case 0x18a054u: goto label_18a054;
        case 0x18a060u: goto label_18a060;
        case 0x18a070u: goto label_18a070;
        case 0x18a07cu: goto label_18a07c;
        case 0x18a0a8u: goto label_18a0a8;
        default: break;
    }

    ctx->pc = 0x189818u;

    // 0x189818: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x189818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x18981c: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x18981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x189820: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x189820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x189824: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x189824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189828: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x189828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x18982c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x18982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x189830: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x189830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x189834: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x189834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x189838: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x189838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x18983c: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x18983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x189840: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x189840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x189844: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x189844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x189848: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x189848u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x18984c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x18984cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x189850: 0x924302f5  lbu         $v1, 0x2F5($s2)
    ctx->pc = 0x189850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
    // 0x189854: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x189854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x189858: 0x104001c9  beqz        $v0, . + 4 + (0x1C9 << 2)
    ctx->pc = 0x189858u;
    {
        const bool branch_taken_0x189858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189858u;
        // 0x18985c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189858) {
            ctx->pc = 0x189F80u;
            goto label_189f80;
        }
    }
    ctx->pc = 0x189860u;
    // 0x189860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x189864: 0x244235f0  addiu       $v0, $v0, 0x35F0
    ctx->pc = 0x189864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13808));
    // 0x189868: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x189868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18986c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189870: 0x800008  jr          $a0
    ctx->pc = 0x189870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189878u: goto label_189878;
            case 0x189E54u: goto label_189e54;
            case 0x189E78u: goto label_189e78;
            case 0x189EE0u: goto label_189ee0;
            case 0x189F28u: goto label_189f28;
            case 0x189F6Cu: goto label_189f6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189870u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x189878u;
label_189878:
    // 0x189878: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x189878u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x18987c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18987cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189880: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x189880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x189884: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x189884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x189888: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x189888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18988c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18988cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189890: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x189890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189894: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x189894u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189898: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x189898u;
    SET_GPR_U32(ctx, 31, 0x1898A0u);
    ctx->pc = 0x18989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189898u;
    // 0x18989c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x189898u, 0x1898A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898A0u;
label_1898a0:
    // 0x1898a0: 0xc06de42  jal         func_1B7908
    ctx->pc = 0x1898A0u;
    SET_GPR_U32(ctx, 31, 0x1898A8u);
    ctx->pc = 0x1898A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898A0u;
    // 0x1898a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1898A0u, 0x1898A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898A8u;
label_1898a8:
    // 0x1898a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1898a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1898ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1898acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1898b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1898b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1898b4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1898b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1898b8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1898b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1898bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1898bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1898c0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1898c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1898c4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1898c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1898c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1898c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1898cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1898ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1898d0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1898D0u;
    SET_GPR_U32(ctx, 31, 0x1898D8u);
    ctx->pc = 0x1898D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898D0u;
    // 0x1898d4: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1898D0u, 0x1898D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898D8u;
label_1898d8:
    // 0x1898d8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1898d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1898dc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1898dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1898e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1898e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1898e4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1898E4u;
    SET_GPR_U32(ctx, 31, 0x1898ECu);
    ctx->pc = 0x1898E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898E4u;
    // 0x1898e8: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1898E4u, 0x1898ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898ECu;
label_1898ec:
    // 0x1898ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1898ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1898f0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1898f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1898f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1898f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1898f8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1898F8u;
    SET_GPR_U32(ctx, 31, 0x189900u);
    ctx->pc = 0x1898FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898F8u;
    // 0x1898fc: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1898F8u, 0x189900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189900u;
label_189900:
    // 0x189900: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x189900u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x189904: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x189904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189908: 0x82420cd6  lb          $v0, 0xCD6($s2)
    ctx->pc = 0x189908u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3286)));
    // 0x18990c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18990cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x189910: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x189910u;
    {
        const bool branch_taken_0x189910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189910u;
        // 0x189914: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189910) {
            ctx->pc = 0x189AB4u;
            goto label_189ab4;
        }
    }
    ctx->pc = 0x189918u;
    // 0x189918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18991c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18991cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189920: 0xc0628fa  jal         func_18A3E8
    ctx->pc = 0x189920u;
    SET_GPR_U32(ctx, 31, 0x189928u);
    ctx->pc = 0x189924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189920u;
    // 0x189924: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3E8u, 0x189920u, 0x189928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189928u;
label_189928:
    // 0x189928: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x189928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18992c: 0x924502b4  lbu         $a1, 0x2B4($s2)
    ctx->pc = 0x18992cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x189930: 0x244336c0  addiu       $v1, $v0, 0x36C0
    ctx->pc = 0x189930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 14016));
    // 0x189934: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x189934u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189938: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x189938u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x4236C2u));
    // 0x18993c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18993cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189940: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x189940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x189944: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189944u;
    {
        const bool branch_taken_0x189944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189944u;
        // 0x189948: 0xafa50020  sw          $a1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189944) {
            ctx->pc = 0x189954u;
            goto label_189954;
        }
    }
    ctx->pc = 0x18994Cu;
    // 0x18994c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x18994cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x189950: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x189950u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189954:
    // 0x189954: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x189954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x189958: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189958u;
    {
        const bool branch_taken_0x189958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189958u;
        // 0x18995c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189958) {
            ctx->pc = 0x189970u;
            goto label_189970;
        }
    }
    ctx->pc = 0x189960u;
    // 0x189960: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x189960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x189964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189968: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189968u;
    {
        const bool branch_taken_0x189968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189968u;
        // 0x18996c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189968) {
            ctx->pc = 0x189974u;
            goto label_189974;
        }
    }
    ctx->pc = 0x189970u;
label_189970:
    // 0x189970: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x189970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189974:
    // 0x189974: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x189974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x189978: 0x268336c0  addiu       $v1, $s4, 0x36C0
    ctx->pc = 0x189978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 14016));
    // 0x18997c: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x18997cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x189980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189984: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x189984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x189988: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x189988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18998c: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x18998cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x189990: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x189990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x189994: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x189994u;
    {
        const bool branch_taken_0x189994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189994u;
        // 0x189998: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189994) {
            ctx->pc = 0x1899A4u;
            goto label_1899a4;
        }
    }
    ctx->pc = 0x18999Cu;
    // 0x18999c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18999cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1899a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1899a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1899a4:
    // 0x1899a4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1899a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1899a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1899A8u;
    {
        const bool branch_taken_0x1899a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899A8u;
        // 0x1899ac: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899a8) {
            ctx->pc = 0x1899C0u;
            goto label_1899c0;
        }
    }
    ctx->pc = 0x1899B0u;
    // 0x1899b0: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1899b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1899b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1899b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1899b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1899B8u;
    {
        const bool branch_taken_0x1899b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899B8u;
        // 0x1899bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899b8) {
            ctx->pc = 0x1899C4u;
            goto label_1899c4;
        }
    }
    ctx->pc = 0x1899C0u;
label_1899c0:
    // 0x1899c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1899c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1899c4:
    // 0x1899c4: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1899c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1899c8: 0x268336c0  addiu       $v1, $s4, 0x36C0
    ctx->pc = 0x1899c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 14016));
    // 0x1899cc: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x1899ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1899d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1899d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1899d4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1899d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1899d8: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1899d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1899dc: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1899dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1899e0: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1899e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1899e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1899E4u;
    {
        const bool branch_taken_0x1899e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1899E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899E4u;
        // 0x1899e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899e4) {
            ctx->pc = 0x1899F4u;
            goto label_1899f4;
        }
    }
    ctx->pc = 0x1899ECu;
    // 0x1899ec: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1899ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1899f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1899f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1899f4:
    // 0x1899f4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1899f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1899f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1899F8u;
    {
        const bool branch_taken_0x1899f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899F8u;
        // 0x1899fc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899f8) {
            ctx->pc = 0x189A10u;
            goto label_189a10;
        }
    }
    ctx->pc = 0x189A00u;
    // 0x189a00: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x189a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x189a04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189a08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189A08u;
    {
        const bool branch_taken_0x189a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A08u;
        // 0x189a0c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a08) {
            ctx->pc = 0x189A14u;
            goto label_189a14;
        }
    }
    ctx->pc = 0x189A10u;
label_189a10:
    // 0x189a10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x189a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189a14:
    // 0x189a14: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x189a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x189a18: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x189a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x189a1c: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x189a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x189a20: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x189a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x189a24: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x189a24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x189a28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x189a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x189a2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189a30: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x189a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x189a34: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x189a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x189a38: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x189A38u;
    SET_GPR_U32(ctx, 31, 0x189A40u);
    ctx->pc = 0x189A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A38u;
    // 0x189a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x189A38u, 0x189A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A40u;
label_189a40:
    // 0x189a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a44: 0xc05ce66  jal         func_173998
    ctx->pc = 0x189A44u;
    SET_GPR_U32(ctx, 31, 0x189A4Cu);
    ctx->pc = 0x189A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A44u;
    // 0x189a48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x189A44u, 0x189A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A4Cu;
label_189a4c:
    // 0x189a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a50: 0xc051f18  jal         func_147C60
    ctx->pc = 0x189A50u;
    SET_GPR_U32(ctx, 31, 0x189A58u);
    ctx->pc = 0x189A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A50u;
    // 0x189a54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x189A50u, 0x189A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A58u;
label_189a58:
    // 0x189a58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a60: 0xc051f22  jal         func_147C88
    ctx->pc = 0x189A60u;
    SET_GPR_U32(ctx, 31, 0x189A68u);
    ctx->pc = 0x189A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A60u;
    // 0x189a64: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x189A60u, 0x189A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A68u;
label_189a68:
    // 0x189a68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x189a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a6c: 0xc05ce42  jal         func_173908
    ctx->pc = 0x189A6Cu;
    SET_GPR_U32(ctx, 31, 0x189A74u);
    ctx->pc = 0x189A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A6Cu;
    // 0x189a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x189A6Cu, 0x189A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A74u;
label_189a74:
    // 0x189a74: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x189a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x189a78: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x189A78u;
    SET_GPR_U32(ctx, 31, 0x189A80u);
    ctx->pc = 0x189A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A78u;
    // 0x189a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x189A78u, 0x189A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A80u;
label_189a80:
    // 0x189a80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189a84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189a88: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x189a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x189a8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a94: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x189a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x189a98: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x189a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x189a9c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x189a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x189aa0: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x189AA0u;
    SET_GPR_U32(ctx, 31, 0x189AA8u);
    ctx->pc = 0x189AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189AA0u;
    // 0x189aa4: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x189AA0u, 0x189AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189AA8u;
label_189aa8:
    // 0x189aa8: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x189aa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x189aac: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x189AACu;
    {
        const bool branch_taken_0x189aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AACu;
        // 0x189ab0: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189aac) {
            ctx->pc = 0x189C40u;
            goto label_189c40;
        }
    }
    ctx->pc = 0x189AB4u;
label_189ab4:
    // 0x189ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189abc: 0xc0628fa  jal         func_18A3E8
    ctx->pc = 0x189ABCu;
    SET_GPR_U32(ctx, 31, 0x189AC4u);
    ctx->pc = 0x189AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189ABCu;
    // 0x189ac0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3E8u, 0x189ABCu, 0x189AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189AC4u;
label_189ac4:
    // 0x189ac4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x189ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x189ac8: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x189ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x189acc: 0x904436c0  lbu         $a0, 0x36C0($v0)
    ctx->pc = 0x189accu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x4236C0u));
    // 0x189ad0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x189ad0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ad4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x189ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x189ad8: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x189ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x189adc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189ADCu;
    {
        const bool branch_taken_0x189adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189ADCu;
        // 0x189ae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189adc) {
            ctx->pc = 0x189AECu;
            goto label_189aec;
        }
    }
    ctx->pc = 0x189AE4u;
    // 0x189ae4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x189ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x189ae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189aec:
    // 0x189aec: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x189aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x189af0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189AF0u;
    {
        const bool branch_taken_0x189af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AF0u;
        // 0x189af4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189af0) {
            ctx->pc = 0x189B08u;
            goto label_189b08;
        }
    }
    ctx->pc = 0x189AF8u;
    // 0x189af8: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x189af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x189afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189b00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189B00u;
    {
        const bool branch_taken_0x189b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B00u;
        // 0x189b04: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b00) {
            ctx->pc = 0x189B0Cu;
            goto label_189b0c;
        }
    }
    ctx->pc = 0x189B08u;
label_189b08:
    // 0x189b08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x189b08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189b0c:
    // 0x189b0c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x189b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x189b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b14: 0x928436c0  lbu         $a0, 0x36C0($s4)
    ctx->pc = 0x189b14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14016)));
    // 0x189b18: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x189b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x189b1c: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x189b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x189b20: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x189b20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x189b24: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x189b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x189b28: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x189B28u;
    {
        const bool branch_taken_0x189b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B28u;
        // 0x189b2c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b28) {
            ctx->pc = 0x189B38u;
            goto label_189b38;
        }
    }
    ctx->pc = 0x189B30u;
    // 0x189b30: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x189b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x189b34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189b38:
    // 0x189b38: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x189b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x189b3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189B3Cu;
    {
        const bool branch_taken_0x189b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B3Cu;
        // 0x189b40: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b3c) {
            ctx->pc = 0x189B54u;
            goto label_189b54;
        }
    }
    ctx->pc = 0x189B44u;
    // 0x189b44: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x189b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x189b48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189b4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189B4Cu;
    {
        const bool branch_taken_0x189b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B4Cu;
        // 0x189b50: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b4c) {
            ctx->pc = 0x189B58u;
            goto label_189b58;
        }
    }
    ctx->pc = 0x189B54u;
label_189b54:
    // 0x189b54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x189b54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189b58:
    // 0x189b58: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x189b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x189b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b60: 0x928436c0  lbu         $a0, 0x36C0($s4)
    ctx->pc = 0x189b60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14016)));
    // 0x189b64: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x189b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x189b68: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x189b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x189b6c: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x189b6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x189b70: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x189b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x189b74: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x189B74u;
    {
        const bool branch_taken_0x189b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B74u;
        // 0x189b78: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b74) {
            ctx->pc = 0x189B84u;
            goto label_189b84;
        }
    }
    ctx->pc = 0x189B7Cu;
    // 0x189b7c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x189b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x189b80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189b84:
    // 0x189b84: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x189b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x189b88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189B88u;
    {
        const bool branch_taken_0x189b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B88u;
        // 0x189b8c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b88) {
            ctx->pc = 0x189BA0u;
            goto label_189ba0;
        }
    }
    ctx->pc = 0x189B90u;
    // 0x189b90: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x189b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x189b94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189b98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189B98u;
    {
        const bool branch_taken_0x189b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B98u;
        // 0x189b9c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b98) {
            ctx->pc = 0x189BA4u;
            goto label_189ba4;
        }
    }
    ctx->pc = 0x189BA0u;
label_189ba0:
    // 0x189ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x189ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189ba4:
    // 0x189ba4: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x189ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x189ba8: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x189ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x189bac: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x189bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x189bb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189bb4: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x189bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x189bb8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x189bb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x189bbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x189bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x189bc0: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x189bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x189bc4: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x189bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x189bc8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x189BC8u;
    SET_GPR_U32(ctx, 31, 0x189BD0u);
    ctx->pc = 0x189BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BC8u;
    // 0x189bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x189BC8u, 0x189BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BD0u;
label_189bd0:
    // 0x189bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bd4: 0xc05ce66  jal         func_173998
    ctx->pc = 0x189BD4u;
    SET_GPR_U32(ctx, 31, 0x189BDCu);
    ctx->pc = 0x189BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BD4u;
    // 0x189bd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x189BD4u, 0x189BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BDCu;
label_189bdc:
    // 0x189bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189be0: 0xc051f18  jal         func_147C60
    ctx->pc = 0x189BE0u;
    SET_GPR_U32(ctx, 31, 0x189BE8u);
    ctx->pc = 0x189BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BE0u;
    // 0x189be4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x189BE0u, 0x189BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BE8u;
label_189be8:
    // 0x189be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bf0: 0xc051f22  jal         func_147C88
    ctx->pc = 0x189BF0u;
    SET_GPR_U32(ctx, 31, 0x189BF8u);
    ctx->pc = 0x189BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BF0u;
    // 0x189bf4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x189BF0u, 0x189BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BF8u;
label_189bf8:
    // 0x189bf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x189bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bfc: 0xc05ce42  jal         func_173908
    ctx->pc = 0x189BFCu;
    SET_GPR_U32(ctx, 31, 0x189C04u);
    ctx->pc = 0x189C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BFCu;
    // 0x189c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x189BFCu, 0x189C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C04u;
label_189c04:
    // 0x189c04: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x189c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x189c08: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x189C08u;
    SET_GPR_U32(ctx, 31, 0x189C10u);
    ctx->pc = 0x189C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C08u;
    // 0x189c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x189C08u, 0x189C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C10u;
label_189c10:
    // 0x189c10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189c14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189c18: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x189c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c24: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x189c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x189c28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x189c28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c2c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x189c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x189c30: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x189c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x189c34: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x189C34u;
    SET_GPR_U32(ctx, 31, 0x189C3Cu);
    ctx->pc = 0x189C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C34u;
    // 0x189c38: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x189C34u, 0x189C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C3Cu;
label_189c3c:
    // 0x189c3c: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x189c3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_189c40:
    // 0x189c40: 0x268236c0  addiu       $v0, $s4, 0x36C0
    ctx->pc = 0x189c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 14016));
    // 0x189c44: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x189c44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x189c48: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x189c48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x189c4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c50: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x189c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x189c54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189C54u;
    {
        const bool branch_taken_0x189c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C54u;
        // 0x189c58: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c54) {
            ctx->pc = 0x189C64u;
            goto label_189c64;
        }
    }
    ctx->pc = 0x189C5Cu;
    // 0x189c5c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x189c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x189c60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189c64:
    // 0x189c64: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x189c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x189c68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189C68u;
    {
        const bool branch_taken_0x189c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C68u;
        // 0x189c6c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c68) {
            ctx->pc = 0x189C80u;
            goto label_189c80;
        }
    }
    ctx->pc = 0x189C70u;
    // 0x189c70: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x189c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x189c74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189c78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189C78u;
    {
        const bool branch_taken_0x189c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C78u;
        // 0x189c7c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c78) {
            ctx->pc = 0x189C84u;
            goto label_189c84;
        }
    }
    ctx->pc = 0x189C80u;
label_189c80:
    // 0x189c80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x189c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189c84:
    // 0x189c84: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x189c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x189c88: 0x268336c0  addiu       $v1, $s4, 0x36C0
    ctx->pc = 0x189c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 14016));
    // 0x189c8c: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x189c8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x189c90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c94: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x189c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x189c98: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x189c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x189c9c: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x189c9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x189ca0: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x189ca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x189ca4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x189CA4u;
    {
        const bool branch_taken_0x189ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CA4u;
        // 0x189ca8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ca4) {
            ctx->pc = 0x189CB4u;
            goto label_189cb4;
        }
    }
    ctx->pc = 0x189CACu;
    // 0x189cac: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x189cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x189cb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x189cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189cb4:
    // 0x189cb4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x189cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x189cb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189CB8u;
    {
        const bool branch_taken_0x189cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CB8u;
        // 0x189cbc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cb8) {
            ctx->pc = 0x189CD0u;
            goto label_189cd0;
        }
    }
    ctx->pc = 0x189CC0u;
    // 0x189cc0: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x189cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x189cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189CC8u;
    {
        const bool branch_taken_0x189cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CC8u;
        // 0x189ccc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cc8) {
            ctx->pc = 0x189CD4u;
            goto label_189cd4;
        }
    }
    ctx->pc = 0x189CD0u;
label_189cd0:
    // 0x189cd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x189cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189cd4:
    // 0x189cd4: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x189cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x189cd8: 0x268336c0  addiu       $v1, $s4, 0x36C0
    ctx->pc = 0x189cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 14016));
    // 0x189cdc: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x189cdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x189ce0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ce4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x189ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x189ce8: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x189ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x189cec: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x189cecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x189cf0: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x189cf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x189cf4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x189CF4u;
    {
        const bool branch_taken_0x189cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CF4u;
        // 0x189cf8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cf4) {
            ctx->pc = 0x189D04u;
            goto label_189d04;
        }
    }
    ctx->pc = 0x189CFCu;
    // 0x189cfc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x189cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x189d00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x189d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189d04:
    // 0x189d04: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x189d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x189d08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189D08u;
    {
        const bool branch_taken_0x189d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D08u;
        // 0x189d0c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d08) {
            ctx->pc = 0x189D20u;
            goto label_189d20;
        }
    }
    ctx->pc = 0x189D10u;
    // 0x189d10: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x189d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x189d14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189d18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x189D18u;
    {
        const bool branch_taken_0x189d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D18u;
        // 0x189d1c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d18) {
            ctx->pc = 0x189D24u;
            goto label_189d24;
        }
    }
    ctx->pc = 0x189D20u;
label_189d20:
    // 0x189d20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x189d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189d24:
    // 0x189d24: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x189d24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x189d28: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x189d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x189d2c: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x189d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x189d30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189d34: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x189d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x189d38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189d3c: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x189d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x189d40: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x189d40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x189d44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x189d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x189d48: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x189d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x189d4c: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x189d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x189d50: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x189D50u;
    SET_GPR_U32(ctx, 31, 0x189D58u);
    ctx->pc = 0x189D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D50u;
    // 0x189d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x189D50u, 0x189D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D58u;
label_189d58:
    // 0x189d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d5c: 0xc05ce66  jal         func_173998
    ctx->pc = 0x189D5Cu;
    SET_GPR_U32(ctx, 31, 0x189D64u);
    ctx->pc = 0x189D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D5Cu;
    // 0x189d60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x189D5Cu, 0x189D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D64u;
label_189d64:
    // 0x189d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d68: 0xc051f18  jal         func_147C60
    ctx->pc = 0x189D68u;
    SET_GPR_U32(ctx, 31, 0x189D70u);
    ctx->pc = 0x189D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D68u;
    // 0x189d6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x189D68u, 0x189D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D70u;
label_189d70:
    // 0x189d70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x189d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d78: 0xc051f22  jal         func_147C88
    ctx->pc = 0x189D78u;
    SET_GPR_U32(ctx, 31, 0x189D80u);
    ctx->pc = 0x189D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D78u;
    // 0x189d7c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x189D78u, 0x189D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D80u;
label_189d80:
    // 0x189d80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x189d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d84: 0xc05ce42  jal         func_173908
    ctx->pc = 0x189D84u;
    SET_GPR_U32(ctx, 31, 0x189D8Cu);
    ctx->pc = 0x189D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D84u;
    // 0x189d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x189D84u, 0x189D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D8Cu;
label_189d8c:
    // 0x189d8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x189d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x189d90: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x189D90u;
    SET_GPR_U32(ctx, 31, 0x189D98u);
    ctx->pc = 0x189D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D90u;
    // 0x189d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x189D90u, 0x189D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D98u;
label_189d98:
    // 0x189d98: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x189d98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x189d9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x189d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189da0: 0xe6750004  swc1        $f21, 0x4($s3)
    ctx->pc = 0x189da0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x189da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189da8: 0xe6750008  swc1        $f21, 0x8($s3)
    ctx->pc = 0x189da8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x189dac: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x189DACu;
    SET_GPR_U32(ctx, 31, 0x189DB4u);
    ctx->pc = 0x189DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189DACu;
    // 0x189db0: 0xe675000c  swc1        $f21, 0xC($s3) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x189DACu, 0x189DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189DB4u;
label_189db4:
    // 0x189db4: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x189db4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x189db8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189dbc: 0xc0628ee  jal         func_18A3B8
    ctx->pc = 0x189DBCu;
    SET_GPR_U32(ctx, 31, 0x189DC4u);
    ctx->pc = 0x189DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189DBCu;
    // 0x189dc0: 0x82450cd6  lb          $a1, 0xCD6($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3286)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3B8u, 0x189DBCu, 0x189DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189DC4u;
label_189dc4:
    // 0x189dc4: 0x8e4505ec  lw          $a1, 0x5EC($s2)
    ctx->pc = 0x189dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1516)));
    // 0x189dc8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x189DC8u;
    {
        const bool branch_taken_0x189dc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x189DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189DC8u;
        // 0x189dcc: 0x26a4ee00  addiu       $a0, $s5, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189dc8) {
            ctx->pc = 0x189DF0u;
            goto label_189df0;
        }
    }
    ctx->pc = 0x189DD0u;
    // 0x189dd0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x189dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x189dd4: 0x8e4405f0  lw          $a0, 0x5F0($s2)
    ctx->pc = 0x189dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x189dd8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x189dd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x189ddc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x189ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189de0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x189de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189de4: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x189DE4u;
    SET_GPR_U32(ctx, 31, 0x189DECu);
    ctx->pc = 0x189DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189DE4u;
    // 0x189de8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x189DE4u, 0x189DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189DECu;
label_189dec:
    // 0x189dec: 0x26a4ee00  addiu       $a0, $s5, -0x1200
    ctx->pc = 0x189decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962688));
label_189df0:
    // 0x189df0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x189df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189df4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x189df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x189df8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x189df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189dfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x189dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x189e00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x189e04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e08: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x189E08u;
    SET_GPR_U32(ctx, 31, 0x189E10u);
    ctx->pc = 0x189E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E08u;
    // 0x189e0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x189E08u, 0x189E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E10u;
label_189e10:
    // 0x189e10: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x189e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x189e14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189e18: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x189e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x189e1c: 0xae4005c0  sw          $zero, 0x5C0($s2)
    ctx->pc = 0x189e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1472), GPR_U32(ctx, 0));
    // 0x189e20: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x189e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x189e24: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x189e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x189e28: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x189e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x189e2c: 0xa6430cd0  sh          $v1, 0xCD0($s2)
    ctx->pc = 0x189e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3280), (uint16_t)GPR_U32(ctx, 3));
    // 0x189e30: 0x8e440608  lw          $a0, 0x608($s2)
    ctx->pc = 0x189e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x189e34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189E34u;
    {
        const bool branch_taken_0x189e34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E34u;
        // 0x189e38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e34) {
            ctx->pc = 0x189E48u;
            goto label_189e48;
        }
    }
    ctx->pc = 0x189E3Cu;
    // 0x189e3c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x189E3Cu;
    SET_GPR_U32(ctx, 31, 0x189E44u);
    ctx->pc = 0x189E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E3Cu;
    // 0x189e40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x189E3Cu, 0x189E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E44u;
label_189e44:
    // 0x189e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189e48:
    // 0x189e48: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x189e48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x189e4c: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x189e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x189e50: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x189e50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_189e54:
    // 0x189e54: 0x96420cd0  lhu         $v0, 0xCD0($s2)
    ctx->pc = 0x189e54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3280)));
    // 0x189e58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x189e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189e5c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x189e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x189e60: 0x1c600047  bgtz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x189E60u;
    {
        const bool branch_taken_0x189e60 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x189E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E60u;
        // 0x189e64: 0xa6420cd0  sh          $v0, 0xCD0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3280), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e60) {
            ctx->pc = 0x189F80u;
            goto label_189f80;
        }
    }
    ctx->pc = 0x189E68u;
    // 0x189e68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x189e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189e6c: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x189e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x189e70: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x189E70u;
    {
        const bool branch_taken_0x189e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E70u;
        // 0x189e74: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e70) {
            ctx->pc = 0x189F7Cu;
            goto label_189f7c;
        }
    }
    ctx->pc = 0x189E78u;
label_189e78:
    // 0x189e78: 0x82420cd6  lb          $v0, 0xCD6($s2)
    ctx->pc = 0x189e78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3286)));
    // 0x189e7c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x189E7Cu;
    {
        const bool branch_taken_0x189e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E7Cu;
        // 0x189e80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e7c) {
            ctx->pc = 0x189EA4u;
            goto label_189ea4;
        }
    }
    ctx->pc = 0x189E84u;
    // 0x189e84: 0xc0628ee  jal         func_18A3B8
    ctx->pc = 0x189E84u;
    SET_GPR_U32(ctx, 31, 0x189E8Cu);
    ctx->pc = 0x189E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E84u;
    // 0x189e88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3B8u, 0x189E84u, 0x189E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E8Cu;
label_189e8c:
    // 0x189e8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189e90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x189e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189e94: 0xc0628fa  jal         func_18A3E8
    ctx->pc = 0x189E94u;
    SET_GPR_U32(ctx, 31, 0x189E9Cu);
    ctx->pc = 0x189E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E94u;
    // 0x189e98: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3E8u, 0x189E94u, 0x189E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E9Cu;
label_189e9c:
    // 0x189e9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x189E9Cu;
    {
        const bool branch_taken_0x189e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E9Cu;
        // 0x189ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e9c) {
            ctx->pc = 0x189EC0u;
            goto label_189ec0;
        }
    }
    ctx->pc = 0x189EA4u;
label_189ea4:
    // 0x189ea4: 0xc0628ee  jal         func_18A3B8
    ctx->pc = 0x189EA4u;
    SET_GPR_U32(ctx, 31, 0x189EACu);
    ctx->pc = 0x189EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189EA4u;
    // 0x189ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3B8u, 0x189EA4u, 0x189EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EACu;
label_189eac:
    // 0x189eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189eb4: 0xc0628fa  jal         func_18A3E8
    ctx->pc = 0x189EB4u;
    SET_GPR_U32(ctx, 31, 0x189EBCu);
    ctx->pc = 0x189EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189EB4u;
    // 0x189eb8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3E8u, 0x189EB4u, 0x189EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EBCu;
label_189ebc:
    // 0x189ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_189ec0:
    // 0x189ec0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x189ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189ec4: 0xc0628fa  jal         func_18A3E8
    ctx->pc = 0x189EC4u;
    SET_GPR_U32(ctx, 31, 0x189ECCu);
    ctx->pc = 0x189EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189EC4u;
    // 0x189ec8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3E8u, 0x189EC4u, 0x189ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189ECCu;
label_189ecc:
    // 0x189ecc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x189eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x189ed0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x189ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x189ed4: 0xa6420cd0  sh          $v0, 0xCD0($s2)
    ctx->pc = 0x189ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3280), (uint16_t)GPR_U32(ctx, 2));
    // 0x189ed8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x189ED8u;
    {
        const bool branch_taken_0x189ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189ED8u;
        // 0x189edc: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ed8) {
            ctx->pc = 0x189F78u;
            goto label_189f78;
        }
    }
    ctx->pc = 0x189EE0u;
label_189ee0:
    // 0x189ee0: 0x96420cd0  lhu         $v0, 0xCD0($s2)
    ctx->pc = 0x189ee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3280)));
    // 0x189ee4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x189ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189ee8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x189ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x189eec: 0x1c600024  bgtz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x189EECu;
    {
        const bool branch_taken_0x189eec = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x189EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EECu;
        // 0x189ef0: 0xa6420cd0  sh          $v0, 0xCD0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3280), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189eec) {
            ctx->pc = 0x189F80u;
            goto label_189f80;
        }
    }
    ctx->pc = 0x189EF4u;
    // 0x189ef4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x189ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x189ef8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x189ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x189efc: 0x8e450608  lw          $a1, 0x608($s2)
    ctx->pc = 0x189efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x189f00: 0xa6420cd0  sh          $v0, 0xCD0($s2)
    ctx->pc = 0x189f00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3280), (uint16_t)GPR_U32(ctx, 2));
    // 0x189f04: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x189f04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x189f08: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x189f08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x189f0c: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x189F0Cu;
    {
        const bool branch_taken_0x189f0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F0Cu;
        // 0x189f10: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f0c) {
            ctx->pc = 0x189F80u;
            goto label_189f80;
        }
    }
    ctx->pc = 0x189F14u;
    // 0x189f14: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x189f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x189f18: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x189F18u;
    SET_GPR_U32(ctx, 31, 0x189F20u);
    ctx->pc = 0x189F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F18u;
    // 0x189f1c: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x189F18u, 0x189F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F20u;
label_189f20:
    // 0x189f20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x189F20u;
    {
        const bool branch_taken_0x189f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F20u;
        // 0x189f24: 0xae400608  sw          $zero, 0x608($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f20) {
            ctx->pc = 0x189F80u;
            goto label_189f80;
        }
    }
    ctx->pc = 0x189F28u;
label_189f28:
    // 0x189f28: 0x96420cd0  lhu         $v0, 0xCD0($s2)
    ctx->pc = 0x189f28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3280)));
    // 0x189f2c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x189f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x189f30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x189f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189f34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x189f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189f38: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x189f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x189f3c: 0xa6420cd0  sh          $v0, 0xCD0($s2)
    ctx->pc = 0x189f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3280), (uint16_t)GPR_U32(ctx, 2));
    // 0x189f40: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x189f40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x189f44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x189f44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189f48: 0x0  nop
    ctx->pc = 0x189f48u;
    // NOP
    // 0x189f4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x189f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x189f50: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x189f50u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x189f54: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x189F54u;
    {
        const bool branch_taken_0x189f54 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x189F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F54u;
        // 0x189f58: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f54) {
            ctx->pc = 0x189F80u;
            goto label_189f80;
        }
    }
    ctx->pc = 0x189F5Cu;
    // 0x189f5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x189f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x189f60: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x189f60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x189f64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x189F64u;
    {
        const bool branch_taken_0x189f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F64u;
        // 0x189f68: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f64) {
            ctx->pc = 0x189F7Cu;
            goto label_189f7c;
        }
    }
    ctx->pc = 0x189F6Cu;
label_189f6c:
    // 0x189f6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x189f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x189f70: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x189f70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x189f74: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x189f74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
label_189f78:
    // 0x189f78: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x189f78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_189f7c:
    // 0x189f7c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x189f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_189f80:
    // 0x189f80: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x189f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x189f84: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x189F84u;
    {
        const bool branch_taken_0x189f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F84u;
        // 0x189f88: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f84) {
            ctx->pc = 0x18A0D4u;
            goto label_18a0d4;
        }
    }
    ctx->pc = 0x189F8Cu;
    // 0x189f8c: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x189f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x189f90: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x189f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x189f94: 0x27be0050  addiu       $fp, $sp, 0x50
    ctx->pc = 0x189f94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x189f98: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x189f98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x189f9c: 0x26550650  addiu       $s5, $s2, 0x650
    ctx->pc = 0x189f9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
    // 0x189fa0: 0x26500620  addiu       $s0, $s2, 0x620
    ctx->pc = 0x189fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
    // 0x189fa4: 0x26540640  addiu       $s4, $s2, 0x640
    ctx->pc = 0x189fa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
    // 0x189fa8: 0x26530630  addiu       $s3, $s2, 0x630
    ctx->pc = 0x189fa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
    // 0x189fac: 0x26510610  addiu       $s1, $s2, 0x610
    ctx->pc = 0x189facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
label_189fb0:
    // 0x189fb0: 0xc05ce40  jal         func_173900
    ctx->pc = 0x189FB0u;
    SET_GPR_U32(ctx, 31, 0x189FB8u);
    ctx->pc = 0x189FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FB0u;
    // 0x189fb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x189FB0u, 0x189FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FB8u;
label_189fb8:
    // 0x189fb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x189fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189fbc: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x189FBCu;
    {
        const bool branch_taken_0x189fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x189fbc) {
            ctx->pc = 0x189FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189FBCu;
            // 0x189fc0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A0ACu;
            goto label_18a0ac;
        }
    }
    ctx->pc = 0x189FC4u;
    // 0x189fc4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x189fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x189fc8: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x189FC8u;
    SET_GPR_U32(ctx, 31, 0x189FD0u);
    ctx->pc = 0x189FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FC8u;
    // 0x189fcc: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x189FC8u, 0x189FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FD0u;
label_189fd0:
    // 0x189fd0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x189fd0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x189fd4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x189fd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x189fd8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x189fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x189fdc: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x189fdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189fe0: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x189fe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x189fe4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x189fe4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x189fe8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x189fe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x189fec: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x189fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x189ff0: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x189ff0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x189ff4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x189ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x189ff8: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x189ff8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x189ffc: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x189ffcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x18a000: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18a000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18a004: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18a004u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18a008: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x18a008u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18a00c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x18a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18a010: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x18a010u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a014: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18a014u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x18a018: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18a018u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18a01c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18a01cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18a020: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x18a020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18a024: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18a024u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x18a028: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x18a028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18a02c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18a02cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a030: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18a030u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x18a034: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18a034u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18a038: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18a038u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18a03c: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x18A03Cu;
    SET_GPR_U32(ctx, 31, 0x18A044u);
    ctx->pc = 0x18A040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A03Cu;
    // 0x18a040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x18A03Cu, 0x18A044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A044u;
label_18a044:
    // 0x18a044: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18a044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18a048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18a048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a04c: 0xc051dca  jal         func_147728
    ctx->pc = 0x18A04Cu;
    SET_GPR_U32(ctx, 31, 0x18A054u);
    ctx->pc = 0x18A050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A04Cu;
    // 0x18a050: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x18A04Cu, 0x18A054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A054u;
label_18a054:
    // 0x18a054: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18a054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18a058: 0xc051f10  jal         func_147C40
    ctx->pc = 0x18A058u;
    SET_GPR_U32(ctx, 31, 0x18A060u);
    ctx->pc = 0x18A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A058u;
    // 0x18a05c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x18A058u, 0x18A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A060u;
label_18a060:
    // 0x18a060: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18a060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18a064: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18a064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a068: 0xc051efe  jal         func_147BF8
    ctx->pc = 0x18A068u;
    SET_GPR_U32(ctx, 31, 0x18A070u);
    ctx->pc = 0x18A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A068u;
    // 0x18a06c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x18A068u, 0x18A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A070u;
label_18a070:
    // 0x18a070: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x18a070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18a074: 0xc051d4a  jal         func_147528
    ctx->pc = 0x18A074u;
    SET_GPR_U32(ctx, 31, 0x18A07Cu);
    ctx->pc = 0x18A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A074u;
    // 0x18a078: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x18A074u, 0x18A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A07Cu;
label_18a07c:
    // 0x18a07c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x18a07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a080: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x18a080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a084: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18a084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18a088: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18a088u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18a08c: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x18a08cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a090: 0x0  nop
    ctx->pc = 0x18a090u;
    // NOP
    // 0x18a094: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x18A094u;
    {
        const bool branch_taken_0x18a094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A094u;
        // 0x18a098: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a094) {
            ctx->pc = 0x18A0A8u;
            goto label_18a0a8;
        }
    }
    ctx->pc = 0x18A09Cu;
    // 0x18a09c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a0a0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18A0A0u;
    SET_GPR_U32(ctx, 31, 0x18A0A8u);
    ctx->pc = 0x18A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A0A0u;
    // 0x18a0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18A0A0u, 0x18A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A0A8u;
label_18a0a8:
    // 0x18a0a8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18a0a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_18a0ac:
    // 0x18a0ac: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x18a0acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x18a0b0: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x18a0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x18a0b4: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x18a0b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x18a0b8: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x18a0b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x18a0bc: 0x2ac20012  slti        $v0, $s6, 0x12
    ctx->pc = 0x18a0bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x18a0c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A0C0u;
    {
        const bool branch_taken_0x18a0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0C0u;
        // 0x18a0c4: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0c0) {
            ctx->pc = 0x18A0D4u;
            goto label_18a0d4;
        }
    }
    ctx->pc = 0x18A0C8u;
    // 0x18a0c8: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x18a0c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x18a0cc: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
    ctx->pc = 0x18A0CCu;
    {
        const bool branch_taken_0x18a0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x18a0cc) {
            ctx->pc = 0x189FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189fb0;
        }
    }
    ctx->pc = 0x18A0D4u;
label_18a0d4:
    // 0x18a0d4: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x18a0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18a0d8: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x18a0d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x18a0dc: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x18a0dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x18a0e0: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x18a0e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18a0e4: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x18a0e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x18a0e8: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x18a0e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18a0ec: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x18a0ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18a0f0: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x18a0f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a0f4: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x18a0f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a0f8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x18a0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18a0fc: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x18a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18a100: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x18a100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18a104: 0x3e00008  jr          $ra
    ctx->pc = 0x18A104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A104u;
        // 0x18a108: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A10Cu;
    // 0x18a10c: 0x0  nop
    ctx->pc = 0x18a10cu;
    // NOP
    ctx->pc = 0x18a110u;
}
