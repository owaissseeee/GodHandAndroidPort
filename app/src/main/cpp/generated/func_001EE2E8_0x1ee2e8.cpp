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

// Function: func_001EE2E8
// Address: 0x1ee2e8 - 0x1ee5f0
void func_001EE2E8_0x1ee2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EE2E8_0x1ee2e8");
#endif

    switch (ctx->pc) {
        case 0x1ee324u: goto label_1ee324;
        case 0x1ee334u: goto label_1ee334;
        case 0x1ee344u: goto label_1ee344;
        case 0x1ee354u: goto label_1ee354;
        case 0x1ee364u: goto label_1ee364;
        case 0x1ee374u: goto label_1ee374;
        case 0x1ee384u: goto label_1ee384;
        case 0x1ee394u: goto label_1ee394;
        case 0x1ee3a4u: goto label_1ee3a4;
        case 0x1ee3b4u: goto label_1ee3b4;
        case 0x1ee3c4u: goto label_1ee3c4;
        case 0x1ee3d4u: goto label_1ee3d4;
        case 0x1ee3e4u: goto label_1ee3e4;
        case 0x1ee3f4u: goto label_1ee3f4;
        case 0x1ee404u: goto label_1ee404;
        case 0x1ee414u: goto label_1ee414;
        case 0x1ee424u: goto label_1ee424;
        case 0x1ee434u: goto label_1ee434;
        case 0x1ee444u: goto label_1ee444;
        case 0x1ee454u: goto label_1ee454;
        case 0x1ee464u: goto label_1ee464;
        case 0x1ee474u: goto label_1ee474;
        case 0x1ee484u: goto label_1ee484;
        case 0x1ee494u: goto label_1ee494;
        case 0x1ee4a4u: goto label_1ee4a4;
        case 0x1ee4b4u: goto label_1ee4b4;
        case 0x1ee52cu: goto label_1ee52c;
        case 0x1ee53cu: goto label_1ee53c;
        case 0x1ee5b4u: goto label_1ee5b4;
        case 0x1ee5c4u: goto label_1ee5c4;
        default: break;
    }

    ctx->pc = 0x1ee2e8u;

    // 0x1ee2e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ee2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ee2ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1ee2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1ee2f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1ee2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1ee2f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ee2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee2f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1ee2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1ee2fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee300: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ee300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee304: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ee304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ee308: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1ee308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1ee30c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1ee30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1ee310: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ee310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee314: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1ee314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1ee318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee31c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE31Cu;
    SET_GPR_U32(ctx, 31, 0x1EE324u);
    ctx->pc = 0x1EE320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE31Cu;
    // 0x1ee320: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE31Cu, 0x1EE324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE324u;
label_1ee324:
    // 0x1ee324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee328: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ee328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee32c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE32Cu;
    SET_GPR_U32(ctx, 31, 0x1EE334u);
    ctx->pc = 0x1EE330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE32Cu;
    // 0x1ee330: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE32Cu, 0x1EE334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE334u;
label_1ee334:
    // 0x1ee334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee338: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ee338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ee33c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE33Cu;
    SET_GPR_U32(ctx, 31, 0x1EE344u);
    ctx->pc = 0x1EE340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE33Cu;
    // 0x1ee340: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE33Cu, 0x1EE344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE344u;
label_1ee344:
    // 0x1ee344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee348: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ee348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ee34c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE34Cu;
    SET_GPR_U32(ctx, 31, 0x1EE354u);
    ctx->pc = 0x1EE350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE34Cu;
    // 0x1ee350: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE34Cu, 0x1EE354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE354u;
label_1ee354:
    // 0x1ee354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee358: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ee358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ee35c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE35Cu;
    SET_GPR_U32(ctx, 31, 0x1EE364u);
    ctx->pc = 0x1EE360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE35Cu;
    // 0x1ee360: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE35Cu, 0x1EE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE364u;
label_1ee364:
    // 0x1ee364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee368: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ee368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ee36c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE36Cu;
    SET_GPR_U32(ctx, 31, 0x1EE374u);
    ctx->pc = 0x1EE370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE36Cu;
    // 0x1ee370: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE36Cu, 0x1EE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE374u;
label_1ee374:
    // 0x1ee374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee378: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ee378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee37c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE37Cu;
    SET_GPR_U32(ctx, 31, 0x1EE384u);
    ctx->pc = 0x1EE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE37Cu;
    // 0x1ee380: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE37Cu, 0x1EE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE384u;
label_1ee384:
    // 0x1ee384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee388: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ee388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ee38c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE38Cu;
    SET_GPR_U32(ctx, 31, 0x1EE394u);
    ctx->pc = 0x1EE390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE38Cu;
    // 0x1ee390: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE38Cu, 0x1EE394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE394u;
label_1ee394:
    // 0x1ee394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee398: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ee398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ee39c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE39Cu;
    SET_GPR_U32(ctx, 31, 0x1EE3A4u);
    ctx->pc = 0x1EE3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE39Cu;
    // 0x1ee3a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE39Cu, 0x1EE3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE3A4u;
label_1ee3a4:
    // 0x1ee3a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3a8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1ee3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ee3ac: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE3ACu;
    SET_GPR_U32(ctx, 31, 0x1EE3B4u);
    ctx->pc = 0x1EE3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE3ACu;
    // 0x1ee3b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE3ACu, 0x1EE3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE3B4u;
label_1ee3b4:
    // 0x1ee3b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3b8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ee3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ee3bc: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE3BCu;
    SET_GPR_U32(ctx, 31, 0x1EE3C4u);
    ctx->pc = 0x1EE3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE3BCu;
    // 0x1ee3c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE3BCu, 0x1EE3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE3C4u;
label_1ee3c4:
    // 0x1ee3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3c8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ee3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ee3cc: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE3CCu;
    SET_GPR_U32(ctx, 31, 0x1EE3D4u);
    ctx->pc = 0x1EE3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE3CCu;
    // 0x1ee3d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE3CCu, 0x1EE3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE3D4u;
label_1ee3d4:
    // 0x1ee3d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3d8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ee3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ee3dc: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE3DCu;
    SET_GPR_U32(ctx, 31, 0x1EE3E4u);
    ctx->pc = 0x1EE3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE3DCu;
    // 0x1ee3e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE3DCu, 0x1EE3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE3E4u;
label_1ee3e4:
    // 0x1ee3e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3e8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1ee3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ee3ec: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE3ECu;
    SET_GPR_U32(ctx, 31, 0x1EE3F4u);
    ctx->pc = 0x1EE3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE3ECu;
    // 0x1ee3f0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE3ECu, 0x1EE3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE3F4u;
label_1ee3f4:
    // 0x1ee3f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee3f8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ee3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ee3fc: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE3FCu;
    SET_GPR_U32(ctx, 31, 0x1EE404u);
    ctx->pc = 0x1EE400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE3FCu;
    // 0x1ee400: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE3FCu, 0x1EE404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE404u;
label_1ee404:
    // 0x1ee404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee408: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ee408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ee40c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE40Cu;
    SET_GPR_U32(ctx, 31, 0x1EE414u);
    ctx->pc = 0x1EE410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE40Cu;
    // 0x1ee410: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE40Cu, 0x1EE414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE414u;
label_1ee414:
    // 0x1ee414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee418: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1ee418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1ee41c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE41Cu;
    SET_GPR_U32(ctx, 31, 0x1EE424u);
    ctx->pc = 0x1EE420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE41Cu;
    // 0x1ee420: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE41Cu, 0x1EE424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE424u;
label_1ee424:
    // 0x1ee424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee428: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1ee428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ee42c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE42Cu;
    SET_GPR_U32(ctx, 31, 0x1EE434u);
    ctx->pc = 0x1EE430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE42Cu;
    // 0x1ee430: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE42Cu, 0x1EE434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE434u;
label_1ee434:
    // 0x1ee434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee438: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1ee438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1ee43c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE43Cu;
    SET_GPR_U32(ctx, 31, 0x1EE444u);
    ctx->pc = 0x1EE440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE43Cu;
    // 0x1ee440: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE43Cu, 0x1EE444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE444u;
label_1ee444:
    // 0x1ee444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee448: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1ee448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1ee44c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE44Cu;
    SET_GPR_U32(ctx, 31, 0x1EE454u);
    ctx->pc = 0x1EE450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE44Cu;
    // 0x1ee450: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE44Cu, 0x1EE454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE454u;
label_1ee454:
    // 0x1ee454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee458: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1ee458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ee45c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE45Cu;
    SET_GPR_U32(ctx, 31, 0x1EE464u);
    ctx->pc = 0x1EE460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE45Cu;
    // 0x1ee460: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE45Cu, 0x1EE464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE464u;
label_1ee464:
    // 0x1ee464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee468: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1ee468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ee46c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE46Cu;
    SET_GPR_U32(ctx, 31, 0x1EE474u);
    ctx->pc = 0x1EE470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE46Cu;
    // 0x1ee470: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE46Cu, 0x1EE474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE474u;
label_1ee474:
    // 0x1ee474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee478: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1ee478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ee47c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE47Cu;
    SET_GPR_U32(ctx, 31, 0x1EE484u);
    ctx->pc = 0x1EE480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE47Cu;
    // 0x1ee480: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE47Cu, 0x1EE484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE484u;
label_1ee484:
    // 0x1ee484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee488: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1ee488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ee48c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE48Cu;
    SET_GPR_U32(ctx, 31, 0x1EE494u);
    ctx->pc = 0x1EE490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE48Cu;
    // 0x1ee490: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE48Cu, 0x1EE494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE494u;
label_1ee494:
    // 0x1ee494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee498: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1ee498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ee49c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE49Cu;
    SET_GPR_U32(ctx, 31, 0x1EE4A4u);
    ctx->pc = 0x1EE4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE49Cu;
    // 0x1ee4a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE49Cu, 0x1EE4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE4A4u;
label_1ee4a4:
    // 0x1ee4a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee4a8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1ee4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ee4ac: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE4ACu;
    SET_GPR_U32(ctx, 31, 0x1EE4B4u);
    ctx->pc = 0x1EE4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE4ACu;
    // 0x1ee4b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE4ACu, 0x1EE4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE4B4u;
label_1ee4b4:
    // 0x1ee4b4: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EE4B4u;
    {
        const bool branch_taken_0x1ee4b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4B4u;
        // 0x1ee4b8: 0x2409ff00  addiu       $t1, $zero, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee4b4) {
            ctx->pc = 0x1EE544u;
            goto label_1ee544;
        }
    }
    ctx->pc = 0x1EE4BCu;
    // 0x1ee4bc: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x1ee4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x1ee4c0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1ee4c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1ee4c4: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1ee4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee4c8: 0x2672824  and         $a1, $s3, $a3
    ctx->pc = 0x1ee4c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 7));
    // 0x1ee4cc: 0x2893024  and         $a2, $s4, $t1
    ctx->pc = 0x1ee4ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & GPR_U64(ctx, 9));
    // 0x1ee4d0: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1ee4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1ee4d4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1ee4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1ee4d8: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x1ee4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x1ee4dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ee4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ee4e0: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x1ee4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x1ee4e4: 0x34c600d0  ori         $a2, $a2, 0xD0
    ctx->pc = 0x1ee4e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)208);
    // 0x1ee4e8: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1ee4e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1ee4ec: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1ee4ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ee4f0: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1ee4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1ee4f4: 0x34c6d000  ori         $a2, $a2, 0xD000
    ctx->pc = 0x1ee4f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53248);
    // 0x1ee4f8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ee4f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1ee4fc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1ee4fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ee500: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x1ee500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1ee504: 0x3c0200d0  lui         $v0, 0xD0
    ctx->pc = 0x1ee504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)208 << 16));
    // 0x1ee508: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ee508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1ee50c: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1ee50cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1ee510: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x1ee510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x1ee514: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x1ee514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x1ee518: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x1ee518u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x1ee51c: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1ee51cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1ee520: 0x26240a8c  addiu       $a0, $s1, 0xA8C
    ctx->pc = 0x1ee520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2700));
    // 0x1ee524: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1EE524u;
    SET_GPR_U32(ctx, 31, 0x1EE52Cu);
    ctx->pc = 0x1EE528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE524u;
    // 0x1ee528: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1EE524u, 0x1EE52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE52Cu;
label_1ee52c:
    // 0x1ee52c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee530: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ee530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee534: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE534u;
    SET_GPR_U32(ctx, 31, 0x1EE53Cu);
    ctx->pc = 0x1EE538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE534u;
    // 0x1ee538: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE534u, 0x1EE53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE53Cu;
label_1ee53c:
    // 0x1ee53c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1EE53Cu;
    {
        const bool branch_taken_0x1ee53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE53Cu;
        // 0x1ee540: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee53c) {
            ctx->pc = 0x1EE5C8u;
            goto label_1ee5c8;
        }
    }
    ctx->pc = 0x1EE544u;
label_1ee544:
    // 0x1ee544: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x1ee544u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
    // 0x1ee548: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1ee548u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1ee54c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1ee54cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee550: 0x2a72824  and         $a1, $s5, $a3
    ctx->pc = 0x1ee550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 7));
    // 0x1ee554: 0x2c93024  and         $a2, $s6, $t1
    ctx->pc = 0x1ee554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & GPR_U64(ctx, 9));
    // 0x1ee558: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1ee558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1ee55c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1ee55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1ee560: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x1ee560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x1ee564: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ee564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ee568: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x1ee568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x1ee56c: 0x34c600d0  ori         $a2, $a2, 0xD0
    ctx->pc = 0x1ee56cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)208);
    // 0x1ee570: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1ee570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1ee574: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1ee574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ee578: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1ee578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1ee57c: 0x34c6d000  ori         $a2, $a2, 0xD000
    ctx->pc = 0x1ee57cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53248);
    // 0x1ee580: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1ee580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1ee584: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1ee584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1ee588: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x1ee588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1ee58c: 0x3c0200d0  lui         $v0, 0xD0
    ctx->pc = 0x1ee58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)208 << 16));
    // 0x1ee590: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ee590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1ee594: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1ee594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1ee598: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x1ee598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x1ee59c: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x1ee59cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x1ee5a0: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x1ee5a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x1ee5a4: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1ee5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1ee5a8: 0x26240b08  addiu       $a0, $s1, 0xB08
    ctx->pc = 0x1ee5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2824));
    // 0x1ee5ac: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1EE5ACu;
    SET_GPR_U32(ctx, 31, 0x1EE5B4u);
    ctx->pc = 0x1EE5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE5ACu;
    // 0x1ee5b0: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1EE5ACu, 0x1EE5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE5B4u;
label_1ee5b4:
    // 0x1ee5b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ee5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5bc: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EE5BCu;
    SET_GPR_U32(ctx, 31, 0x1EE5C4u);
    ctx->pc = 0x1EE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE5BCu;
    // 0x1ee5c0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EE5BCu, 0x1EE5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE5C4u;
label_1ee5c4:
    // 0x1ee5c4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1ee5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ee5c8:
    // 0x1ee5c8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1ee5c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ee5cc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1ee5ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ee5d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ee5d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee5d4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1ee5d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee5d8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1ee5d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee5dc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1ee5dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE5E4u;
        // 0x1ee5e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE5ECu;
    // 0x1ee5ec: 0x0  nop
    ctx->pc = 0x1ee5ecu;
    // NOP
    ctx->pc = 0x1ee5f0u;
}
