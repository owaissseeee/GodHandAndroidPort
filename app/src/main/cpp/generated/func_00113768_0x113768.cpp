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

// Function: func_00113768
// Address: 0x113768 - 0x113a20
void func_00113768_0x113768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00113768_0x113768");
#endif

    switch (ctx->pc) {
        case 0x1137a8u: goto label_1137a8;
        case 0x1137b0u: goto label_1137b0;
        case 0x1137bcu: goto label_1137bc;
        case 0x1137ecu: goto label_1137ec;
        case 0x1137fcu: goto label_1137fc;
        case 0x113818u: goto label_113818;
        case 0x113834u: goto label_113834;
        case 0x113854u: goto label_113854;
        case 0x11385cu: goto label_11385c;
        case 0x113878u: goto label_113878;
        case 0x1138a4u: goto label_1138a4;
        case 0x1138c0u: goto label_1138c0;
        case 0x1138e0u: goto label_1138e0;
        case 0x1138e8u: goto label_1138e8;
        case 0x1138f8u: goto label_1138f8;
        case 0x113908u: goto label_113908;
        case 0x11392cu: goto label_11392c;
        case 0x113938u: goto label_113938;
        case 0x113978u: goto label_113978;
        case 0x113998u: goto label_113998;
        case 0x1139a0u: goto label_1139a0;
        case 0x1139acu: goto label_1139ac;
        case 0x1139bcu: goto label_1139bc;
        case 0x1139ccu: goto label_1139cc;
        case 0x1139e8u: goto label_1139e8;
        default: break;
    }

    ctx->pc = 0x113768u;

    // 0x113768: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x113768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11376c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x11376cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x113770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113774: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x113774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x113778: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x113778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11377c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11377cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x113780: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x113780u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x113784: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x113784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x113788: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x113788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11378c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11378cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113794: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x113794u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x113798: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x113798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x11379c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11379cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x1137a0: 0xc0a480c  jal         func_292030
    ctx->pc = 0x1137A0u;
    SET_GPR_U32(ctx, 31, 0x1137A8u);
    ctx->pc = 0x1137A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137A0u;
    // 0x1137a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x1137A0u, 0x1137A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137A8u;
label_1137a8:
    // 0x1137a8: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x1137A8u;
    SET_GPR_U32(ctx, 31, 0x1137B0u);
    ctx->pc = 0x1137ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137A8u;
    // 0x1137ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x1137A8u, 0x1137B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137B0u;
label_1137b0:
    // 0x1137b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1137b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137b4: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x1137B4u;
    SET_GPR_U32(ctx, 31, 0x1137BCu);
    ctx->pc = 0x1137B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137B4u;
    // 0x1137b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x1137B4u, 0x1137BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137BCu;
label_1137bc:
    // 0x1137bc: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x1137bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x1137c0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1137c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1137c4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1137c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x1137c8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1137C8u;
    {
        const bool branch_taken_0x1137c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1137CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137C8u;
        // 0x1137cc: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137c8) {
            ctx->pc = 0x1137E4u;
            goto label_1137e4;
        }
    }
    ctx->pc = 0x1137D0u;
    // 0x1137d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1137d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1137d4: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1137D4u;
    {
        const bool branch_taken_0x1137d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1137d4) {
            ctx->pc = 0x1138B8u;
            goto label_1138b8;
        }
    }
    ctx->pc = 0x1137DCu;
    // 0x1137dc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1137DCu;
    {
        const bool branch_taken_0x1137dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1137E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137DCu;
        // 0x1137e0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137dc) {
            ctx->pc = 0x11393Cu;
            goto label_11393c;
        }
    }
    ctx->pc = 0x1137E4u;
label_1137e4:
    // 0x1137e4: 0xc049396  jal         func_124E58
    ctx->pc = 0x1137E4u;
    SET_GPR_U32(ctx, 31, 0x1137ECu);
    ctx->pc = 0x1137E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137E4u;
    // 0x1137e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x1137E4u, 0x1137ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137ECu;
label_1137ec:
    // 0x1137ec: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x1137ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x1137f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1137f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137f4: 0xc04a55e  jal         func_129578
    ctx->pc = 0x1137F4u;
    SET_GPR_U32(ctx, 31, 0x1137FCu);
    ctx->pc = 0x1137F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137F4u;
    // 0x1137f8: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x1137F4u, 0x1137FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137FCu;
label_1137fc:
    // 0x1137fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1137fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113800: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x113800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x113804: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x113804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x113808: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x113808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11380c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11380cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113810: 0xc042902  jal         func_10A408
    ctx->pc = 0x113810u;
    SET_GPR_U32(ctx, 31, 0x113818u);
    ctx->pc = 0x113814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113810u;
    // 0x113814: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x113810u, 0x113818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113818u;
label_113818:
    // 0x113818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11381c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11381cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x113820: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x113820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x113824: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x113824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x113828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11382c: 0xc042908  jal         func_10A420
    ctx->pc = 0x11382Cu;
    SET_GPR_U32(ctx, 31, 0x113834u);
    ctx->pc = 0x113830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11382Cu;
    // 0x113830: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x11382Cu, 0x113834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113834u;
label_113834:
    // 0x113834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113838: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x113838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x11383c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x11383Cu;
    {
        const bool branch_taken_0x11383c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11383Cu;
        // 0x113840: 0xa2221684  sb          $v0, 0x1684($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11383c) {
            ctx->pc = 0x11386Cu;
            goto label_11386c;
        }
    }
    ctx->pc = 0x113844u;
    // 0x113844: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x113844u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x113848: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x113848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x11384c: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x11384Cu;
    SET_GPR_U32(ctx, 31, 0x113854u);
    ctx->pc = 0x113850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11384Cu;
    // 0x113850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x11384Cu, 0x113854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113854u;
label_113854:
    // 0x113854: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x113854u;
    SET_GPR_U32(ctx, 31, 0x11385Cu);
    ctx->pc = 0x113858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113854u;
    // 0x113858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x113854u, 0x11385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11385Cu;
label_11385c:
    // 0x11385c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x11385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x113860: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x113860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x113864: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x113864u;
    {
        const bool branch_taken_0x113864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113864u;
        // 0x113868: 0x8c440078  lw          $a0, 0x78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113864) {
            ctx->pc = 0x113884u;
            goto label_113884;
        }
    }
    ctx->pc = 0x11386Cu;
label_11386c:
    // 0x11386c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11386cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x113870: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x113870u;
    SET_GPR_U32(ctx, 31, 0x113878u);
    ctx->pc = 0x113874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113870u;
    // 0x113874: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x113870u, 0x113878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113878u;
label_113878:
    // 0x113878: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x113878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x11387c: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x11387cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x113880: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x113880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_113884:
    // 0x113884: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x113884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x113888: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x113888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11388c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11388cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x113890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113894: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x113894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x113898: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11389c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x11389Cu;
    SET_GPR_U32(ctx, 31, 0x1138A4u);
    ctx->pc = 0x1138A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11389Cu;
    // 0x1138a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x11389Cu, 0x1138A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138A4u;
label_1138a4:
    // 0x1138a4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1138a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1138a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1138a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1138ac: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x1138acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x1138b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1138b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1138b4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1138b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1138b8:
    // 0x1138b8: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1138B8u;
    SET_GPR_U32(ctx, 31, 0x1138C0u);
    ctx->pc = 0x1138BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138B8u;
    // 0x1138bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1138B8u, 0x1138C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138C0u;
label_1138c0:
    // 0x1138c0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1138c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x1138c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1138c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1138c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1138C8u;
    {
        const bool branch_taken_0x1138c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1138CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138C8u;
        // 0x1138cc: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138c8) {
            ctx->pc = 0x1138E0u;
            goto label_1138e0;
        }
    }
    ctx->pc = 0x1138D0u;
    // 0x1138d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1138d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138d4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1138d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x1138d8: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x1138D8u;
    SET_GPR_U32(ctx, 31, 0x1138E0u);
    ctx->pc = 0x1138DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138D8u;
    // 0x1138dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1138D8u, 0x1138E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138E0u;
label_1138e0:
    // 0x1138e0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1138E0u;
    SET_GPR_U32(ctx, 31, 0x1138E8u);
    ctx->pc = 0x1138E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138E0u;
    // 0x1138e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1138E0u, 0x1138E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138E8u;
label_1138e8:
    // 0x1138e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1138E8u;
    {
        const bool branch_taken_0x1138e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1138e8) {
            ctx->pc = 0x113918u;
            goto label_113918;
        }
    }
    ctx->pc = 0x1138F0u;
    // 0x1138f0: 0xc04a58c  jal         func_129630
    ctx->pc = 0x1138F0u;
    SET_GPR_U32(ctx, 31, 0x1138F8u);
    ctx->pc = 0x1138F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138F0u;
    // 0x1138f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x1138F0u, 0x1138F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138F8u;
label_1138f8:
    // 0x1138f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1138f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1138fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113900: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x113900u;
    SET_GPR_U32(ctx, 31, 0x113908u);
    ctx->pc = 0x113904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113900u;
    // 0x113904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x113900u, 0x113908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113908u;
label_113908:
    // 0x113908: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x113908u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11390c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11390cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x113910: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x113910u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x113914: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x113914u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_113918:
    // 0x113918: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11391c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11391cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x113920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113924: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x113924u;
    SET_GPR_U32(ctx, 31, 0x11392Cu);
    ctx->pc = 0x113928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113924u;
    // 0x113928: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x113924u, 0x11392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11392Cu;
label_11392c:
    // 0x11392c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11392cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x113930: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x113930u;
    SET_GPR_U32(ctx, 31, 0x113938u);
    ctx->pc = 0x113934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113930u;
    // 0x113934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x113930u, 0x113938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113938u;
label_113938:
    // 0x113938: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x113938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_11393c:
    // 0x11393c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11393cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x113940: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x113940u;
    {
        const bool branch_taken_0x113940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113940) {
            ctx->pc = 0x113998u;
            goto label_113998;
        }
    }
    ctx->pc = 0x113948u;
    // 0x113948: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x113948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11394c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11394Cu;
    {
        const bool branch_taken_0x11394c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11394c) {
            ctx->pc = 0x113998u;
            goto label_113998;
        }
    }
    ctx->pc = 0x113954u;
    // 0x113954: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x113954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x113958: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x113958u;
    {
        const bool branch_taken_0x113958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113958u;
        // 0x11395c: 0xae2015b0  sw          $zero, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113958) {
            ctx->pc = 0x113980u;
            goto label_113980;
        }
    }
    ctx->pc = 0x113960u;
    // 0x113960: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x113960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x113964: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x113964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x113968: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11396c: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x11396cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    // 0x113970: 0xc0aa65e  jal         func_2A9978
    ctx->pc = 0x113970u;
    SET_GPR_U32(ctx, 31, 0x113978u);
    ctx->pc = 0x113974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113970u;
    // 0x113974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x113970u, 0x113978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113978u;
label_113978:
    // 0x113978: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x113978u;
    {
        const bool branch_taken_0x113978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113978) {
            ctx->pc = 0x113998u;
            goto label_113998;
        }
    }
    ctx->pc = 0x113980u;
label_113980:
    // 0x113980: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x113980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x113984: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x113984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x113988: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11398c: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x11398cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    // 0x113990: 0xc0aa65e  jal         func_2A9978
    ctx->pc = 0x113990u;
    SET_GPR_U32(ctx, 31, 0x113998u);
    ctx->pc = 0x113994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113990u;
    // 0x113994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x113990u, 0x113998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113998u;
label_113998:
    // 0x113998: 0xc04290e  jal         func_10A438
    ctx->pc = 0x113998u;
    SET_GPR_U32(ctx, 31, 0x1139A0u);
    ctx->pc = 0x11399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113998u;
    // 0x11399c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x113998u, 0x1139A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139A0u;
label_1139a0:
    // 0x1139a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1139a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139a4: 0xc048e4e  jal         func_123938
    ctx->pc = 0x1139A4u;
    SET_GPR_U32(ctx, 31, 0x1139ACu);
    ctx->pc = 0x1139A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139A4u;
    // 0x1139a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x1139A4u, 0x1139ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139ACu;
label_1139ac:
    // 0x1139ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1139ACu;
    {
        const bool branch_taken_0x1139ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1139ac) {
            ctx->pc = 0x1139D4u;
            goto label_1139d4;
        }
    }
    ctx->pc = 0x1139B4u;
    // 0x1139b4: 0xc04a58c  jal         func_129630
    ctx->pc = 0x1139B4u;
    SET_GPR_U32(ctx, 31, 0x1139BCu);
    ctx->pc = 0x1139B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139B4u;
    // 0x1139b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x1139B4u, 0x1139BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139BCu;
label_1139bc:
    // 0x1139bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1139bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1139c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139c4: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x1139C4u;
    SET_GPR_U32(ctx, 31, 0x1139CCu);
    ctx->pc = 0x1139C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139C4u;
    // 0x1139c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1139C4u, 0x1139CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139CCu;
label_1139cc:
    // 0x1139cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1139CCu;
    {
        const bool branch_taken_0x1139cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1139D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139CCu;
        // 0x1139d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139cc) {
            ctx->pc = 0x113A08u;
            goto label_113a08;
        }
    }
    ctx->pc = 0x1139D4u;
label_1139d4:
    // 0x1139d4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1139d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1139d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1139d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1139dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1139dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1139e0: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x1139E0u;
    SET_GPR_U32(ctx, 31, 0x1139E8u);
    ctx->pc = 0x1139E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139E0u;
    // 0x1139e4: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x1139E0u, 0x1139E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139E8u;
label_1139e8:
    // 0x1139e8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1139e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x1139ec: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1139ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1139f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1139f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1139f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1139f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1139f8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1139f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1139fc: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x1139fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x113a00: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x113a00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x113a04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x113a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_113a08:
    // 0x113a08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x113a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113a0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x113a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113a14: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x113a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x113a18: 0x3e00008  jr          $ra
    ctx->pc = 0x113A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A18u;
        // 0x113a1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113A20u;
}
