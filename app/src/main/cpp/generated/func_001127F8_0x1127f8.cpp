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

// Function: func_001127F8
// Address: 0x1127f8 - 0x112a48
void func_001127F8_0x1127f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001127F8_0x1127f8");
#endif

    switch (ctx->pc) {
        case 0x112838u: goto label_112838;
        case 0x112840u: goto label_112840;
        case 0x11284cu: goto label_11284c;
        case 0x11287cu: goto label_11287c;
        case 0x1128a0u: goto label_1128a0;
        case 0x1128bcu: goto label_1128bc;
        case 0x1128d0u: goto label_1128d0;
        case 0x1128d8u: goto label_1128d8;
        case 0x112904u: goto label_112904;
        case 0x112918u: goto label_112918;
        case 0x112934u: goto label_112934;
        case 0x11293cu: goto label_11293c;
        case 0x11294cu: goto label_11294c;
        case 0x11295cu: goto label_11295c;
        case 0x112980u: goto label_112980;
        case 0x11298cu: goto label_11298c;
        case 0x112994u: goto label_112994;
        case 0x1129b8u: goto label_1129b8;
        case 0x1129e0u: goto label_1129e0;
        case 0x1129ecu: goto label_1129ec;
        case 0x1129fcu: goto label_1129fc;
        case 0x112a0cu: goto label_112a0c;
        default: break;
    }

    ctx->pc = 0x1127f8u;

    // 0x1127f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1127f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1127fc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1127fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x112800: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x112800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x112804: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x112804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x112808: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x112808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11280c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11280cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112810: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x112810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x112814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112818: 0x245164f0  addiu       $s1, $v0, 0x64F0
    ctx->pc = 0x112818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x11281c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11281cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x112820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112828: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11282c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11282cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x112830: 0xc0a480c  jal         func_292030
    ctx->pc = 0x112830u;
    SET_GPR_U32(ctx, 31, 0x112838u);
    ctx->pc = 0x112834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112830u;
    // 0x112834: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x112830u, 0x112838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112838u;
label_112838:
    // 0x112838: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x112838u;
    SET_GPR_U32(ctx, 31, 0x112840u);
    ctx->pc = 0x11283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112838u;
    // 0x11283c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x112838u, 0x112840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112840u;
label_112840:
    // 0x112840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112844: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x112844u;
    SET_GPR_U32(ctx, 31, 0x11284Cu);
    ctx->pc = 0x112848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112844u;
    // 0x112848: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x112844u, 0x11284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11284Cu;
label_11284c:
    // 0x11284c: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x11284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x112850: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x112850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x112854: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x112854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x112858: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x112858u;
    {
        const bool branch_taken_0x112858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112858u;
        // 0x11285c: 0xae0215f4  sw          $v0, 0x15F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112858) {
            ctx->pc = 0x112874u;
            goto label_112874;
        }
    }
    ctx->pc = 0x112860u;
    // 0x112860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112864: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x112864u;
    {
        const bool branch_taken_0x112864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x112864) {
            ctx->pc = 0x11292Cu;
            goto label_11292c;
        }
    }
    ctx->pc = 0x11286Cu;
    // 0x11286c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x11286Cu;
    {
        const bool branch_taken_0x11286c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11286c) {
            ctx->pc = 0x11298Cu;
            goto label_11298c;
        }
    }
    ctx->pc = 0x112874u;
label_112874:
    // 0x112874: 0xc049396  jal         func_124E58
    ctx->pc = 0x112874u;
    SET_GPR_U32(ctx, 31, 0x11287Cu);
    ctx->pc = 0x112878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112874u;
    // 0x112878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x112874u, 0x11287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11287Cu;
label_11287c:
    // 0x11287c: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x11287cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x112880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112884: 0xa60005e2  sh          $zero, 0x5E2($s0)
    ctx->pc = 0x112884u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x112888: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x112888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x11288c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x11288cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x112890: 0x24070025  addiu       $a3, $zero, 0x25
    ctx->pc = 0x112890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x112894: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112894u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112898: 0xc042902  jal         func_10A408
    ctx->pc = 0x112898u;
    SET_GPR_U32(ctx, 31, 0x1128A0u);
    ctx->pc = 0x11289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112898u;
    // 0x11289c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x112898u, 0x1128A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128A0u;
label_1128a0:
    // 0x1128a0: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x1128a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x1128a4: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1128a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1128a8: 0x24070025  addiu       $a3, $zero, 0x25
    ctx->pc = 0x1128a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1128ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1128acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128b0: 0x24090123  addiu       $t1, $zero, 0x123
    ctx->pc = 0x1128b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x1128b4: 0xc042908  jal         func_10A420
    ctx->pc = 0x1128B4u;
    SET_GPR_U32(ctx, 31, 0x1128BCu);
    ctx->pc = 0x1128B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128B4u;
    // 0x1128b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x1128B4u, 0x1128BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128BCu;
label_1128bc:
    // 0x1128bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1128bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1128c0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1128c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1128c4: 0xa2021684  sb          $v0, 0x1684($s0)
    ctx->pc = 0x1128c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5764), (uint8_t)GPR_U32(ctx, 2));
    // 0x1128c8: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x1128C8u;
    SET_GPR_U32(ctx, 31, 0x1128D0u);
    ctx->pc = 0x1128CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128C8u;
    // 0x1128cc: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x1128C8u, 0x1128D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128D0u;
label_1128d0:
    // 0x1128d0: 0xc04a55e  jal         func_129578
    ctx->pc = 0x1128D0u;
    SET_GPR_U32(ctx, 31, 0x1128D8u);
    ctx->pc = 0x1128D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128D0u;
    // 0x1128d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x1128D0u, 0x1128D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128D8u;
label_1128d8:
    // 0x1128d8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1128d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1128dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1128dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1128e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1128e4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1128e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1128e8: 0x8c4504a4  lw          $a1, 0x4A4($v0)
    ctx->pc = 0x1128e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1188)));
    // 0x1128ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1128ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128f0: 0x8c4604a8  lw          $a2, 0x4A8($v0)
    ctx->pc = 0x1128f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1192)));
    // 0x1128f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1128f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128f8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1128f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1128fc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1128FCu;
    SET_GPR_U32(ctx, 31, 0x112904u);
    ctx->pc = 0x112900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128FCu;
    // 0x112900: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1128FCu, 0x112904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112904u;
label_112904:
    // 0x112904: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x112904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x112908: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x112908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11290c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11290cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x112910: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x112910u;
    SET_GPR_U32(ctx, 31, 0x112918u);
    ctx->pc = 0x112914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112910u;
    // 0x112914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x112910u, 0x112918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112918u;
label_112918:
    // 0x112918: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x112918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11291c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112920: 0xae0315b0  sw          $v1, 0x15B0($s0)
    ctx->pc = 0x112920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
    // 0x112924: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x112924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x112928: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x112928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11292c:
    // 0x11292c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11292Cu;
    SET_GPR_U32(ctx, 31, 0x112934u);
    ctx->pc = 0x112930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11292Cu;
    // 0x112930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11292Cu, 0x112934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112934u;
label_112934:
    // 0x112934: 0xc055f06  jal         func_157C18
    ctx->pc = 0x112934u;
    SET_GPR_U32(ctx, 31, 0x11293Cu);
    ctx->pc = 0x112938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112934u;
    // 0x112938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x112934u, 0x11293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11293Cu;
label_11293c:
    // 0x11293c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11293Cu;
    {
        const bool branch_taken_0x11293c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11293c) {
            ctx->pc = 0x11296Cu;
            goto label_11296c;
        }
    }
    ctx->pc = 0x112944u;
    // 0x112944: 0xc04a58c  jal         func_129630
    ctx->pc = 0x112944u;
    SET_GPR_U32(ctx, 31, 0x11294Cu);
    ctx->pc = 0x112948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112944u;
    // 0x112948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x112944u, 0x11294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11294Cu;
label_11294c:
    // 0x11294c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11294cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112950: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112954: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x112954u;
    SET_GPR_U32(ctx, 31, 0x11295Cu);
    ctx->pc = 0x112958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112954u;
    // 0x112958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x112954u, 0x11295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11295Cu;
label_11295c:
    // 0x11295c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x11295cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x112960: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x112960u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x112964: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x112964u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x112968: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x112968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_11296c:
    // 0x11296c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11296cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x112970: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x112970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x112974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112978: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x112978u;
    SET_GPR_U32(ctx, 31, 0x112980u);
    ctx->pc = 0x11297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112978u;
    // 0x11297c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x112978u, 0x112980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112980u;
label_112980:
    // 0x112980: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x112980u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x112984: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x112984u;
    SET_GPR_U32(ctx, 31, 0x11298Cu);
    ctx->pc = 0x112988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112984u;
    // 0x112988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x112984u, 0x11298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11298Cu;
label_11298c:
    // 0x11298c: 0xc04290e  jal         func_10A438
    ctx->pc = 0x11298Cu;
    SET_GPR_U32(ctx, 31, 0x112994u);
    ctx->pc = 0x112990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11298Cu;
    // 0x112990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x11298Cu, 0x112994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112994u;
label_112994:
    // 0x112994: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x112994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x112998: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x112998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x11299c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11299Cu;
    {
        const bool branch_taken_0x11299c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11299c) {
            ctx->pc = 0x1129A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11299Cu;
            // 0x1129a0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1129BCu;
            goto label_1129bc;
        }
    }
    ctx->pc = 0x1129A4u;
    // 0x1129a4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1129a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1129a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1129a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1129ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1129acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1129b0: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x1129B0u;
    SET_GPR_U32(ctx, 31, 0x1129B8u);
    ctx->pc = 0x1129B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129B0u;
    // 0x1129b4: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x1129B0u, 0x1129B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129B8u;
label_1129b8:
    // 0x1129b8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x1129b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_1129bc:
    // 0x1129bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1129bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1129c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1129C0u;
    {
        const bool branch_taken_0x1129c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129C0u;
        // 0x1129c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129c0) {
            ctx->pc = 0x1129E4u;
            goto label_1129e4;
        }
    }
    ctx->pc = 0x1129C8u;
    // 0x1129c8: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x1129c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1129cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1129CCu;
    {
        const bool branch_taken_0x1129cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129CCu;
        // 0x1129d0: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129cc) {
            ctx->pc = 0x1129E4u;
            goto label_1129e4;
        }
    }
    ctx->pc = 0x1129D4u;
    // 0x1129d4: 0xae0015b0  sw          $zero, 0x15B0($s0)
    ctx->pc = 0x1129d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
    // 0x1129d8: 0xc04af00  jal         func_12BC00
    ctx->pc = 0x1129D8u;
    SET_GPR_U32(ctx, 31, 0x1129E0u);
    ctx->pc = 0x1129DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129D8u;
    // 0x1129dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC00u, 0x1129D8u, 0x1129E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129E0u;
label_1129e0:
    // 0x1129e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1129e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1129e4:
    // 0x1129e4: 0xc048e4e  jal         func_123938
    ctx->pc = 0x1129E4u;
    SET_GPR_U32(ctx, 31, 0x1129ECu);
    ctx->pc = 0x1129E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129E4u;
    // 0x1129e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x1129E4u, 0x1129ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129ECu;
label_1129ec:
    // 0x1129ec: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1129ECu;
    {
        const bool branch_taken_0x1129ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1129ec) {
            ctx->pc = 0x1129F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1129ECu;
            // 0x1129f0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112A14u;
            goto label_112a14;
        }
    }
    ctx->pc = 0x1129F4u;
    // 0x1129f4: 0xc04a58c  jal         func_129630
    ctx->pc = 0x1129F4u;
    SET_GPR_U32(ctx, 31, 0x1129FCu);
    ctx->pc = 0x1129F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1129F4u;
    // 0x1129f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x1129F4u, 0x1129FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1129FCu;
label_1129fc:
    // 0x1129fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1129fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112a04: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x112A04u;
    SET_GPR_U32(ctx, 31, 0x112A0Cu);
    ctx->pc = 0x112A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A04u;
    // 0x112a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x112A04u, 0x112A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A0Cu;
label_112a0c:
    // 0x112a0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x112A0Cu;
    {
        const bool branch_taken_0x112a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A0Cu;
        // 0x112a10: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a0c) {
            ctx->pc = 0x112A30u;
            goto label_112a30;
        }
    }
    ctx->pc = 0x112A14u;
label_112a14:
    // 0x112a14: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x112a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x112a18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x112a18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x112a1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112a20: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x112a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x112a24: 0xe6000674  swc1        $f0, 0x674($s0)
    ctx->pc = 0x112a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
    // 0x112a28: 0xa60203ac  sh          $v0, 0x3AC($s0)
    ctx->pc = 0x112a28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x112a2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x112a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_112a30:
    // 0x112a30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x112a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112a34: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x112a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112a3c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x112a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x112a40: 0x3e00008  jr          $ra
    ctx->pc = 0x112A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A40u;
        // 0x112a44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112A48u;
}
