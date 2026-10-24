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

// Function: func_002A67D0
// Address: 0x2a67d0 - 0x2a6c18
void func_002A67D0_0x2a67d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A67D0_0x2a67d0");
#endif

    switch (ctx->pc) {
        case 0x2a6840u: goto label_2a6840;
        case 0x2a6878u: goto label_2a6878;
        case 0x2a6884u: goto label_2a6884;
        case 0x2a6890u: goto label_2a6890;
        case 0x2a689cu: goto label_2a689c;
        case 0x2a68a8u: goto label_2a68a8;
        case 0x2a68fcu: goto label_2a68fc;
        case 0x2a6920u: goto label_2a6920;
        case 0x2a6930u: goto label_2a6930;
        case 0x2a693cu: goto label_2a693c;
        case 0x2a6948u: goto label_2a6948;
        case 0x2a6950u: goto label_2a6950;
        case 0x2a695cu: goto label_2a695c;
        case 0x2a6988u: goto label_2a6988;
        case 0x2a6990u: goto label_2a6990;
        case 0x2a6998u: goto label_2a6998;
        case 0x2a69a4u: goto label_2a69a4;
        case 0x2a69b0u: goto label_2a69b0;
        case 0x2a69bcu: goto label_2a69bc;
        case 0x2a69ccu: goto label_2a69cc;
        case 0x2a69d8u: goto label_2a69d8;
        case 0x2a69ecu: goto label_2a69ec;
        case 0x2a69f8u: goto label_2a69f8;
        case 0x2a6a28u: goto label_2a6a28;
        case 0x2a6a40u: goto label_2a6a40;
        case 0x2a6a4cu: goto label_2a6a4c;
        case 0x2a6a5cu: goto label_2a6a5c;
        case 0x2a6a88u: goto label_2a6a88;
        case 0x2a6a94u: goto label_2a6a94;
        case 0x2a6aa8u: goto label_2a6aa8;
        case 0x2a6ab0u: goto label_2a6ab0;
        case 0x2a6ab8u: goto label_2a6ab8;
        case 0x2a6ac0u: goto label_2a6ac0;
        case 0x2a6ac8u: goto label_2a6ac8;
        case 0x2a6ad0u: goto label_2a6ad0;
        case 0x2a6ad8u: goto label_2a6ad8;
        case 0x2a6ae0u: goto label_2a6ae0;
        default: break;
    }

    ctx->pc = 0x2a67d0u;

    // 0x2a67d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a67d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a67d4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2a67d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2a67d8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2a67d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2a67dc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2a67dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2a67e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a67e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67e4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2a67e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2a67e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a67e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a67ec: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2a67ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2a67f0: 0x2442ac90  addiu       $v0, $v0, -0x5370
    ctx->pc = 0x2a67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945936));
    // 0x2a67f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a67f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2a67f8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2a67f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2a67fc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2a67fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2a6800: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2a6800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2a6804: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2a6804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2a6808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a680c: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x2a680cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5CAC91u));
    // 0x2a6810: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x2a6810u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a6814: 0x106000f4  beqz        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x2A6814u;
    {
        const bool branch_taken_0x2a6814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6814u;
        // 0x2a6818: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6814) {
            ctx->pc = 0x2A6BE8u;
            goto label_2a6be8;
        }
    }
    ctx->pc = 0x2A681Cu;
    // 0x2a681c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2a681cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a6820: 0x2442adb0  addiu       $v0, $v0, -0x5250
    ctx->pc = 0x2a6820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946224));
    // 0x2a6824: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a6824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6828: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a6828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a682c: 0x800008  jr          $a0
    ctx->pc = 0x2A682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A6834u: goto label_2a6834;
            case 0x2A6848u: goto label_2a6848;
            case 0x2A69C4u: goto label_2a69c4;
            case 0x2A6A00u: goto label_2a6a00;
            case 0x2A6A14u: goto label_2a6a14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A682Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A6834u;
label_2a6834:
    // 0x2a6834: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a6834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a6838: 0xc0ad96c  jal         func_2B65B0
    ctx->pc = 0x2A6838u;
    SET_GPR_U32(ctx, 31, 0x2A6840u);
    ctx->pc = 0x2A683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6838u;
    // 0x2a683c: 0x8c442558  lw          $a0, 0x2558($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9560)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B65B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B65B0u, 0x2A6838u, 0x2A6840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6840u;
label_2a6840:
    // 0x2a6840: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2A6840u;
    {
        const bool branch_taken_0x2a6840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6840u;
        // 0x2a6844: 0x2623ac90  addiu       $v1, $s1, -0x5370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6840) {
            ctx->pc = 0x2A6A04u;
            goto label_2a6a04;
        }
    }
    ctx->pc = 0x2A6848u;
label_2a6848:
    // 0x2a6848: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2a6848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2a684c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x2a684cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x2a6850: 0x8c837a84  lw          $v1, 0x7A84($a0)
    ctx->pc = 0x2a6850u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2a6854: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a6854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a6858: 0x24907a84  addiu       $s0, $a0, 0x7A84
    ctx->pc = 0x2a6858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 31364));
    // 0x2a685c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a685cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6860: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a6860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a6864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a6864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6868: 0xac837a84  sw          $v1, 0x7A84($a0)
    ctx->pc = 0x2a6868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31364), GPR_U32(ctx, 3));
    // 0x2a686c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a686cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6870: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x2A6870u;
    SET_GPR_U32(ctx, 31, 0x2A6878u);
    ctx->pc = 0x2A6874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6870u;
    // 0x2a6874: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x2A6870u, 0x2A6878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6878u;
label_2a6878:
    // 0x2a6878: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2a6878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2a687c: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x2A687Cu;
    SET_GPR_U32(ctx, 31, 0x2A6884u);
    ctx->pc = 0x2A6880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A687Cu;
    // 0x2a6880: 0x24847470  addiu       $a0, $a0, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x2A687Cu, 0x2A6884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6884u;
label_2a6884:
    // 0x2a6884: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2a6884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2a6888: 0xc0ad36a  jal         func_2B4DA8
    ctx->pc = 0x2A6888u;
    SET_GPR_U32(ctx, 31, 0x2A6890u);
    ctx->pc = 0x2A688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6888u;
    // 0x2a688c: 0x248479d0  addiu       $a0, $a0, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4DA8u, 0x2A6888u, 0x2A6890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6890u;
label_2a6890:
    // 0x2a6890: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2a6890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2a6894: 0xc0c16e4  jal         func_305B90
    ctx->pc = 0x2A6894u;
    SET_GPR_U32(ctx, 31, 0x2A689Cu);
    ctx->pc = 0x2A6898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6894u;
    // 0x2a6898: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305B90u, 0x2A6894u, 0x2A689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A689Cu;
label_2a689c:
    // 0x2a689c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a68a0: 0xc0b0e16  jal         func_2C3858
    ctx->pc = 0x2A68A0u;
    SET_GPR_U32(ctx, 31, 0x2A68A8u);
    ctx->pc = 0x2A68A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A68A0u;
    // 0x2a68a4: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3858u, 0x2A68A0u, 0x2A68A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A68A8u;
label_2a68a8:
    // 0x2a68a8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2a68a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2a68ac: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x2a68acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x2a68b0: 0x8c839b70  lw          $v1, -0x6490($a0)
    ctx->pc = 0x2a68b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x569B70u));
    // 0x2a68b4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a68b8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a68b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a68bc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A68BCu;
    {
        const bool branch_taken_0x2a68bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68BCu;
        // 0x2a68c0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68bc) {
            ctx->pc = 0x2A6904u;
            goto label_2a6904;
        }
    }
    ctx->pc = 0x2A68C4u;
    // 0x2a68c4: 0x9604ffcc  lhu         $a0, -0x34($s0)
    ctx->pc = 0x2a68c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967244)));
    // 0x2a68c8: 0x2482ffc0  addiu       $v0, $a0, -0x40
    ctx->pc = 0x2a68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x2a68cc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2a68ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2a68d0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A68D0u;
    {
        const bool branch_taken_0x2a68d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68D0u;
        // 0x2a68d4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68d0) {
            ctx->pc = 0x2A68F4u;
            goto label_2a68f4;
        }
    }
    ctx->pc = 0x2A68D8u;
    // 0x2a68d8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2a68d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a68dc: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x2a68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2a68e0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A68E0u;
    {
        const bool branch_taken_0x2a68e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68E0u;
        // 0x2a68e4: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68e0) {
            ctx->pc = 0x2A68F0u;
            goto label_2a68f0;
        }
    }
    ctx->pc = 0x2A68E8u;
    // 0x2a68e8: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A68E8u;
    {
        const bool branch_taken_0x2a68e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68E8u;
        // 0x2a68ec: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68e8) {
            ctx->pc = 0x2A6904u;
            goto label_2a6904;
        }
    }
    ctx->pc = 0x2A68F0u;
label_2a68f0:
    // 0x2a68f0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2a68f4:
    // 0x2a68f4: 0xc0b000e  jal         func_2C0038
    ctx->pc = 0x2A68F4u;
    SET_GPR_U32(ctx, 31, 0x2A68FCu);
    ctx->pc = 0x2A68F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A68F4u;
    // 0x2a68f8: 0x8c44264c  lw          $a0, 0x264C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0038u, 0x2A68F4u, 0x2A68FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A68FCu;
label_2a68fc:
    // 0x2a68fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A68FCu;
    {
        const bool branch_taken_0x2a68fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A68FCu;
        // 0x2a6900: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a68fc) {
            ctx->pc = 0x2A6924u;
            goto label_2a6924;
        }
    }
    ctx->pc = 0x2A6904u;
label_2a6904:
    // 0x2a6904: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x2a6904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x2a6908: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x2a6908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31268)));
    // 0x2a690c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a6910: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6910u;
    {
        const bool branch_taken_0x2a6910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6910u;
        // 0x2a6914: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6910) {
            ctx->pc = 0x2A6920u;
            goto label_2a6920;
        }
    }
    ctx->pc = 0x2A6918u;
    // 0x2a6918: 0xc0afe52  jal         func_2BF948
    ctx->pc = 0x2A6918u;
    SET_GPR_U32(ctx, 31, 0x2A6920u);
    ctx->pc = 0x2A691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6918u;
    // 0x2a691c: 0x8c44264c  lw          $a0, 0x264C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF948u, 0x2A6918u, 0x2A6920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6920u;
label_2a6920:
    // 0x2a6920: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2a6920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2a6924:
    // 0x2a6924: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2a6924u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2a6928: 0xc0a58d4  jal         func_296350
    ctx->pc = 0x2A6928u;
    SET_GPR_U32(ctx, 31, 0x2A6930u);
    ctx->pc = 0x2A692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6928u;
    // 0x2a692c: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296350u, 0x2A6928u, 0x2A6930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6930u;
label_2a6930:
    // 0x2a6930: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2a6930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2a6934: 0xc0b2a80  jal         func_2CAA00
    ctx->pc = 0x2A6934u;
    SET_GPR_U32(ctx, 31, 0x2A693Cu);
    ctx->pc = 0x2A6938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6934u;
    // 0x2a6938: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAA00u, 0x2A6934u, 0x2A693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A693Cu;
label_2a693c:
    // 0x2a693c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x2a693cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2a6940: 0xc0afa06  jal         func_2BE818
    ctx->pc = 0x2A6940u;
    SET_GPR_U32(ctx, 31, 0x2A6948u);
    ctx->pc = 0x2A6944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6940u;
    // 0x2a6944: 0x24848640  addiu       $a0, $a0, -0x79C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE818u, 0x2A6940u, 0x2A6948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6948u;
label_2a6948:
    // 0x2a6948: 0xc0c3e2c  jal         func_30F8B0
    ctx->pc = 0x2A6948u;
    SET_GPR_U32(ctx, 31, 0x2A6950u);
    ctx->pc = 0x30F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F8B0u, 0x2A6948u, 0x2A6950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6950u;
label_2a6950:
    // 0x2a6950: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2a6950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2a6954: 0xc04ba00  jal         func_12E800
    ctx->pc = 0x2A6954u;
    SET_GPR_U32(ctx, 31, 0x2A695Cu);
    ctx->pc = 0x2A6958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6954u;
    // 0x2a6958: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E800u, 0x2A6954u, 0x2A695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A695Cu;
label_2a695c:
    // 0x2a695c: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x2a695cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x2a6960: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x2a6960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x2a6964: 0x24c67a2c  addiu       $a2, $a2, 0x7A2C
    ctx->pc = 0x2a6964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31276));
    // 0x2a6968: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a6968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a696c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2a696cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A38u));
    // 0x2a6970: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2a6970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2a6974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6978: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x2a6978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x2a697c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a697cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a6980: 0xc04e350  jal         func_138D40
    ctx->pc = 0x2A6980u;
    SET_GPR_U32(ctx, 31, 0x2A6988u);
    ctx->pc = 0x2A6984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6980u;
    // 0x2a6984: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D40u, 0x2A6980u, 0x2A6988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6988u;
label_2a6988:
    // 0x2a6988: 0xc050588  jal         func_141620
    ctx->pc = 0x2A6988u;
    SET_GPR_U32(ctx, 31, 0x2A6990u);
    ctx->pc = 0x2A698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6988u;
    // 0x2a698c: 0x8e04d6e8  lw          $a0, -0x2918($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141620u, 0x2A6988u, 0x2A6990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6990u;
label_2a6990:
    // 0x2a6990: 0xc05058a  jal         func_141628
    ctx->pc = 0x2A6990u;
    SET_GPR_U32(ctx, 31, 0x2A6998u);
    ctx->pc = 0x2A6994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6990u;
    // 0x2a6994: 0x8e04d6e8  lw          $a0, -0x2918($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141628u, 0x2A6990u, 0x2A6998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6998u;
label_2a6998:
    // 0x2a6998: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a6998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a699c: 0xc0584aa  jal         func_1612A8
    ctx->pc = 0x2A699Cu;
    SET_GPR_U32(ctx, 31, 0x2A69A4u);
    ctx->pc = 0x2A69A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A699Cu;
    // 0x2a69a0: 0x8c44d930  lw          $a0, -0x26D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1612A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1612A8u, 0x2A699Cu, 0x2A69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69A4u;
label_2a69a4:
    // 0x2a69a4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2a69a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2a69a8: 0xc0b049c  jal         func_2C1270
    ctx->pc = 0x2A69A8u;
    SET_GPR_U32(ctx, 31, 0x2A69B0u);
    ctx->pc = 0x2A69ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69A8u;
    // 0x2a69ac: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1270u, 0x2A69A8u, 0x2A69B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69B0u;
label_2a69b0:
    // 0x2a69b0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a69b4: 0xc0ab442  jal         func_2AD108
    ctx->pc = 0x2A69B4u;
    SET_GPR_U32(ctx, 31, 0x2A69BCu);
    ctx->pc = 0x2A69B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69B4u;
    // 0x2a69b8: 0x8c442388  lw          $a0, 0x2388($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD108u, 0x2A69B4u, 0x2A69BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69BCu;
label_2a69bc:
    // 0x2a69bc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A69BCu;
    {
        const bool branch_taken_0x2a69bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A69C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69BCu;
        // 0x2a69c0: 0x2623ac90  addiu       $v1, $s1, -0x5370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69bc) {
            ctx->pc = 0x2A6A04u;
            goto label_2a6a04;
        }
    }
    ctx->pc = 0x2A69C4u;
label_2a69c4:
    // 0x2a69c4: 0xc0c3e2c  jal         func_30F8B0
    ctx->pc = 0x2A69C4u;
    SET_GPR_U32(ctx, 31, 0x2A69CCu);
    ctx->pc = 0x30F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F8B0u, 0x2A69C4u, 0x2A69CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69CCu;
label_2a69cc:
    // 0x2a69cc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2a69ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2a69d0: 0xc0b2ad6  jal         func_2CAB58
    ctx->pc = 0x2A69D0u;
    SET_GPR_U32(ctx, 31, 0x2A69D8u);
    ctx->pc = 0x2A69D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69D0u;
    // 0x2a69d4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAB58u, 0x2A69D0u, 0x2A69D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69D8u;
label_2a69d8:
    // 0x2a69d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a69dc: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A69DCu;
    {
        const bool branch_taken_0x2a69dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69DCu;
        // 0x2a69e0: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69dc) {
            ctx->pc = 0x2A6A00u;
            goto label_2a6a00;
        }
    }
    ctx->pc = 0x2A69E4u;
    // 0x2a69e4: 0xc07f9d2  jal         func_1FE748
    ctx->pc = 0x2A69E4u;
    SET_GPR_U32(ctx, 31, 0x2A69ECu);
    ctx->pc = 0x2A69E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69E4u;
    // 0x2a69e8: 0x24840d20  addiu       $a0, $a0, 0xD20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE748u, 0x2A69E4u, 0x2A69ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69ECu;
label_2a69ec:
    // 0x2a69ec: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2a69ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2a69f0: 0xc07f9d2  jal         func_1FE748
    ctx->pc = 0x2A69F0u;
    SET_GPR_U32(ctx, 31, 0x2A69F8u);
    ctx->pc = 0x2A69F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A69F0u;
    // 0x2a69f4: 0x248464e0  addiu       $a0, $a0, 0x64E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE748u, 0x2A69F0u, 0x2A69F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A69F8u;
label_2a69f8:
    // 0x2a69f8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2A69F8u;
    {
        const bool branch_taken_0x2a69f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A69FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A69F8u;
        // 0x2a69fc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a69f8) {
            ctx->pc = 0x2A6BECu;
            goto label_2a6bec;
        }
    }
    ctx->pc = 0x2A6A00u;
label_2a6a00:
    // 0x2a6a00: 0x2623ac90  addiu       $v1, $s1, -0x5370
    ctx->pc = 0x2a6a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945936));
label_2a6a04:
    // 0x2a6a04: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2a6a04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2a6a08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a6a0c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2A6A0Cu;
    {
        const bool branch_taken_0x2a6a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A0Cu;
        // 0x2a6a10: 0xa0620001  sb          $v0, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6a0c) {
            ctx->pc = 0x2A6BE8u;
            goto label_2a6be8;
        }
    }
    ctx->pc = 0x2A6A14u;
label_2a6a14:
    // 0x2a6a14: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2a6a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2a6a18: 0x3c160075  lui         $s6, 0x75
    ctx->pc = 0x2a6a18u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)117 << 16));
    // 0x2a6a1c: 0x24843f20  addiu       $a0, $a0, 0x3F20
    ctx->pc = 0x2a6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    // 0x2a6a20: 0xc080406  jal         func_201018
    ctx->pc = 0x2A6A20u;
    SET_GPR_U32(ctx, 31, 0x2A6A28u);
    ctx->pc = 0x2A6A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A20u;
    // 0x2a6a24: 0x3c150057  lui         $s5, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201018u, 0x2A6A20u, 0x2A6A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A28u;
label_2a6a28:
    // 0x2a6a28: 0x3c14005f  lui         $s4, 0x5F
    ctx->pc = 0x2a6a28u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)95 << 16));
    // 0x2a6a2c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2a6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2a6a30: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x2a6a30u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    // 0x2a6a34: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2a6a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2a6a38: 0xc0b2a44  jal         func_2CA910
    ctx->pc = 0x2A6A38u;
    SET_GPR_U32(ctx, 31, 0x2A6A40u);
    ctx->pc = 0x2A6A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A38u;
    // 0x2a6a3c: 0x3c1e0074  lui         $fp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA910u, 0x2A6A38u, 0x2A6A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A40u;
label_2a6a40:
    // 0x2a6a40: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2a6a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2a6a44: 0xc07fbcc  jal         func_1FEF30
    ctx->pc = 0x2A6A44u;
    SET_GPR_U32(ctx, 31, 0x2A6A4Cu);
    ctx->pc = 0x2A6A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A44u;
    // 0x2a6a48: 0x24840d20  addiu       $a0, $a0, 0xD20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEF30u, 0x2A6A44u, 0x2A6A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A4Cu;
label_2a6a4c:
    // 0x2a6a4c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2a6a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2a6a50: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x2a6a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x2a6a54: 0xc07fbcc  jal         func_1FEF30
    ctx->pc = 0x2A6A54u;
    SET_GPR_U32(ctx, 31, 0x2A6A5Cu);
    ctx->pc = 0x2A6A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A54u;
    // 0x2a6a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEF30u, 0x2A6A54u, 0x2A6A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A5Cu;
label_2a6a5c:
    // 0x2a6a5c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2a6a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a6a60: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A6A60u;
    {
        const bool branch_taken_0x2a6a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A60u;
        // 0x2a6a64: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6a60) {
            ctx->pc = 0x2A6AA0u;
            goto label_2a6aa0;
        }
    }
    ctx->pc = 0x2A6A68u;
    // 0x2a6a68: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2a6a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2a6a6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a6a70: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A6A70u;
    {
        const bool branch_taken_0x2a6a70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A70u;
        // 0x2a6a74: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6a70) {
            ctx->pc = 0x2A6AA0u;
            goto label_2a6aa0;
        }
    }
    ctx->pc = 0x2A6A78u;
    // 0x2a6a78: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2a6a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a6a7c: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x2a6a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a6a80: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2a6a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a6a84: 0x0  nop
    ctx->pc = 0x2a6a84u;
    // NOP
label_2a6a88:
    // 0x2a6a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6a8c: 0xc07fc0a  jal         func_1FF028
    ctx->pc = 0x2A6A8Cu;
    SET_GPR_U32(ctx, 31, 0x2A6A94u);
    ctx->pc = 0x2A6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6A8Cu;
    // 0x2a6a90: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF028u, 0x2A6A8Cu, 0x2A6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A94u;
label_2a6a94:
    // 0x2a6a94: 0x0  nop
    ctx->pc = 0x2a6a94u;
    // NOP
    // 0x2a6a98: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A6A98u;
    {
        const bool branch_taken_0x2a6a98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2A6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A98u;
        // 0x2a6a9c: 0x2610ffa4  addiu       $s0, $s0, -0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6a98) {
            ctx->pc = 0x2A6A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6a88;
        }
    }
    ctx->pc = 0x2A6AA0u;
label_2a6aa0:
    // 0x2a6aa0: 0xc0c3d7c  jal         func_30F5F0
    ctx->pc = 0x2A6AA0u;
    SET_GPR_U32(ctx, 31, 0x2A6AA8u);
    ctx->pc = 0x2A6AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6AA0u;
    // 0x2a6aa4: 0x26908040  addiu       $s0, $s4, -0x7FC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294934592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5F0u, 0x2A6AA0u, 0x2A6AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AA8u;
label_2a6aa8:
    // 0x2a6aa8: 0xc05401e  jal         func_150078
    ctx->pc = 0x2A6AA8u;
    SET_GPR_U32(ctx, 31, 0x2A6AB0u);
    ctx->pc = 0x150078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150078u, 0x2A6AA8u, 0x2A6AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AB0u;
label_2a6ab0:
    // 0x2a6ab0: 0xc0524b2  jal         func_1492C8
    ctx->pc = 0x2A6AB0u;
    SET_GPR_U32(ctx, 31, 0x2A6AB8u);
    ctx->pc = 0x1492C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1492C8u, 0x2A6AB0u, 0x2A6AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AB8u;
label_2a6ab8:
    // 0x2a6ab8: 0xc0aa54a  jal         func_2A9528
    ctx->pc = 0x2A6AB8u;
    SET_GPR_U32(ctx, 31, 0x2A6AC0u);
    ctx->pc = 0x2A6ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6AB8u;
    // 0x2a6abc: 0x26c44240  addiu       $a0, $s6, 0x4240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9528u, 0x2A6AB8u, 0x2A6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AC0u;
label_2a6ac0:
    // 0x2a6ac0: 0xc07f7ea  jal         func_1FDFA8
    ctx->pc = 0x2A6AC0u;
    SET_GPR_U32(ctx, 31, 0x2A6AC8u);
    ctx->pc = 0x2A6AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6AC0u;
    // 0x2a6ac4: 0x26a44380  addiu       $a0, $s5, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFA8u, 0x2A6AC0u, 0x2A6AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AC8u;
label_2a6ac8:
    // 0x2a6ac8: 0xc0a9c7c  jal         func_2A71F0
    ctx->pc = 0x2A6AC8u;
    SET_GPR_U32(ctx, 31, 0x2A6AD0u);
    ctx->pc = 0x2A6ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6AC8u;
    // 0x2a6acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A71F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A71F0u, 0x2A6AC8u, 0x2A6AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AD0u;
label_2a6ad0:
    // 0x2a6ad0: 0xc0a9ca0  jal         func_2A7280
    ctx->pc = 0x2A6AD0u;
    SET_GPR_U32(ctx, 31, 0x2A6AD8u);
    ctx->pc = 0x2A6AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6AD0u;
    // 0x2a6ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7280u, 0x2A6AD0u, 0x2A6AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AD8u;
label_2a6ad8:
    // 0x2a6ad8: 0xc0b5cf8  jal         func_2D73E0
    ctx->pc = 0x2A6AD8u;
    SET_GPR_U32(ctx, 31, 0x2A6AE0u);
    ctx->pc = 0x2A6ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6AD8u;
    // 0x2a6adc: 0x26e44700  addiu       $a0, $s7, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D73E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D73E0u, 0x2A6AD8u, 0x2A6AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6AE0u;
label_2a6ae0:
    // 0x2a6ae0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2a6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2a6ae4: 0x27c374a0  addiu       $v1, $fp, 0x74A0
    ctx->pc = 0x2a6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 29856));
    // 0x2a6ae8: 0x8c479b70  lw          $a3, -0x6490($v0)
    ctx->pc = 0x2a6ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x569B70u));
    // 0x2a6aec: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x2a6aecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x2a6af0: 0x946405b0  lhu         $a0, 0x5B0($v1)
    ctx->pc = 0x2a6af0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1456)));
    // 0x2a6af4: 0x906505b9  lbu         $a1, 0x5B9($v1)
    ctx->pc = 0x2a6af4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1465)));
    // 0x2a6af8: 0x906205ba  lbu         $v0, 0x5BA($v1)
    ctx->pc = 0x2a6af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1466)));
    // 0x2a6afc: 0x946805b4  lhu         $t0, 0x5B4($v1)
    ctx->pc = 0x2a6afcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1460)));
    // 0x2a6b00: 0xa46405b6  sh          $a0, 0x5B6($v1)
    ctx->pc = 0x2a6b00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1462), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a6b04: 0xa06205b9  sb          $v0, 0x5B9($v1)
    ctx->pc = 0x2a6b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1465), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a6b08: 0xa06505bb  sb          $a1, 0x5BB($v1)
    ctx->pc = 0x2a6b08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1467), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a6b0c: 0xa46805b0  sh          $t0, 0x5B0($v1)
    ctx->pc = 0x2a6b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1456), (uint16_t)GPR_U32(ctx, 8));
    // 0x2a6b10: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2a6b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2a6b14: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2a6b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2a6b18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6B18u;
    {
        const bool branch_taken_0x2a6b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B18u;
        // 0x2a6b1c: 0x3102ffff  andi        $v0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b18) {
            ctx->pc = 0x2A6B38u;
            goto label_2a6b38;
        }
    }
    ctx->pc = 0x2A6B20u;
    // 0x2a6b20: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6B20u;
    {
        const bool branch_taken_0x2a6b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B20u;
        // 0x2a6b24: 0x27c474a0  addiu       $a0, $fp, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b20) {
            ctx->pc = 0x2A6B3Cu;
            goto label_2a6b3c;
        }
    }
    ctx->pc = 0x2A6B28u;
    // 0x2a6b28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a6b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a6b2c: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x2a6b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a6b30: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2A6B30u;
    {
        const bool branch_taken_0x2a6b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B30u;
        // 0x2a6b34: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b30) {
            ctx->pc = 0x2A6BE0u;
            goto label_2a6be0;
        }
    }
    ctx->pc = 0x2A6B38u;
label_2a6b38:
    // 0x2a6b38: 0x27c474a0  addiu       $a0, $fp, 0x74A0
    ctx->pc = 0x2a6b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 29856));
label_2a6b3c:
    // 0x2a6b3c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2a6b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a6b40: 0x948205b0  lhu         $v0, 0x5B0($a0)
    ctx->pc = 0x2a6b40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1456)));
    // 0x2a6b44: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6B44u;
    {
        const bool branch_taken_0x2a6b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a6b44) {
            ctx->pc = 0x2A6B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6B44u;
            // 0x2a6b48: 0x8c820598  lw          $v0, 0x598($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6B5Cu;
            goto label_2a6b5c;
        }
    }
    ctx->pc = 0x2A6B4Cu;
    // 0x2a6b4c: 0x8c820584  lw          $v0, 0x584($a0)
    ctx->pc = 0x2a6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1412)));
    // 0x2a6b50: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a6b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a6b54: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2A6B54u;
    {
        const bool branch_taken_0x2a6b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B54u;
        // 0x2a6b58: 0xac820584  sw          $v0, 0x584($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b54) {
            ctx->pc = 0x2A6BE8u;
            goto label_2a6be8;
        }
    }
    ctx->pc = 0x2A6B5Cu;
label_2a6b5c:
    // 0x2a6b5c: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2a6b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x2a6b60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a6b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a6b64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A6B64u;
    {
        const bool branch_taken_0x2a6b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B64u;
        // 0x2a6b68: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b64) {
            ctx->pc = 0x2A6B9Cu;
            goto label_2a6b9c;
        }
    }
    ctx->pc = 0x2A6B6Cu;
    // 0x2a6b6c: 0x908205b1  lbu         $v0, 0x5B1($a0)
    ctx->pc = 0x2a6b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1457)));
    // 0x2a6b70: 0x908305b7  lbu         $v1, 0x5B7($a0)
    ctx->pc = 0x2a6b70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1463)));
    // 0x2a6b74: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A6B74u;
    {
        const bool branch_taken_0x2a6b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a6b74) {
            ctx->pc = 0x2A6B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6B74u;
            // 0x2a6b78: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6B9Cu;
            goto label_2a6b9c;
        }
    }
    ctx->pc = 0x2A6B7Cu;
    // 0x2a6b7c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6B7Cu;
    {
        const bool branch_taken_0x2a6b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6b7c) {
            ctx->pc = 0x2A6B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6B7Cu;
            // 0x2a6b80: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6B9Cu;
            goto label_2a6b9c;
        }
    }
    ctx->pc = 0x2A6B84u;
    // 0x2a6b84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6B84u;
    {
        const bool branch_taken_0x2a6b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B84u;
        // 0x2a6b88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b84) {
            ctx->pc = 0x2A6B98u;
            goto label_2a6b98;
        }
    }
    ctx->pc = 0x2A6B8Cu;
    // 0x2a6b8c: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x2a6b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a6b90: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A6B90u;
    {
        const bool branch_taken_0x2a6b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6B90u;
        // 0x2a6b94: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b90) {
            ctx->pc = 0x2A6BE0u;
            goto label_2a6be0;
        }
    }
    ctx->pc = 0x2A6B98u;
label_2a6b98:
    // 0x2a6b98: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2a6b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_2a6b9c:
    // 0x2a6b9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6ba0: 0x8c629b70  lw          $v0, -0x6490($v1)
    ctx->pc = 0x2a6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941552)));
    // 0x2a6ba4: 0x9c430b8c  lwu         $v1, 0xB8C($v0)
    ctx->pc = 0x2a6ba4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 2956)));
    // 0x2a6ba8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a6ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a6bac: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A6BACu;
    {
        const bool branch_taken_0x2a6bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A6BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6BACu;
        // 0x2a6bb0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6bac) {
            ctx->pc = 0x2A6BD8u;
            goto label_2a6bd8;
        }
    }
    ctx->pc = 0x2A6BB4u;
    // 0x2a6bb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6bb8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2a6bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2a6bbc: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2a6bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a6bc0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2a6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2a6bc4: 0x8c439b70  lw          $v1, -0x6490($v0)
    ctx->pc = 0x2a6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x569B70u));
    // 0x2a6bc8: 0x8c620b8c  lw          $v0, 0xB8C($v1)
    ctx->pc = 0x2a6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2956)));
    // 0x2a6bcc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a6bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a6bd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A6BD0u;
    {
        const bool branch_taken_0x2a6bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6BD0u;
        // 0x2a6bd4: 0xac620b8c  sw          $v0, 0xB8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6bd0) {
            ctx->pc = 0x2A6BDCu;
            goto label_2a6bdc;
        }
    }
    ctx->pc = 0x2A6BD8u;
label_2a6bd8:
    // 0x2a6bd8: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2a6bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_2a6bdc:
    // 0x2a6bdc: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x2a6bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
label_2a6be0:
    // 0x2a6be0: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x2a6be0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a6be4: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x2a6be4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_2a6be8:
    // 0x2a6be8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2a6be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a6bec:
    // 0x2a6bec: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2a6becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a6bf0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2a6bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a6bf4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2a6bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a6bf8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a6bf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a6bfc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2a6bfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6c00: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2a6c00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a6c04: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2a6c04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6c08: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2a6c08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a6c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6c10: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C10u;
        // 0x2a6c14: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6C18u;
}
