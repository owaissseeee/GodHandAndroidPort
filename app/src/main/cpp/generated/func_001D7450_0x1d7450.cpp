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

// Function: func_001D7450
// Address: 0x1d7450 - 0x1d7560
void func_001D7450_0x1d7450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D7450_0x1d7450");
#endif

    switch (ctx->pc) {
        case 0x1d746cu: goto label_1d746c;
        case 0x1d7474u: goto label_1d7474;
        case 0x1d7480u: goto label_1d7480;
        case 0x1d748cu: goto label_1d748c;
        case 0x1d7498u: goto label_1d7498;
        case 0x1d74a8u: goto label_1d74a8;
        case 0x1d74b8u: goto label_1d74b8;
        case 0x1d74c8u: goto label_1d74c8;
        case 0x1d74d8u: goto label_1d74d8;
        case 0x1d74e8u: goto label_1d74e8;
        case 0x1d74f8u: goto label_1d74f8;
        case 0x1d7508u: goto label_1d7508;
        case 0x1d7518u: goto label_1d7518;
        case 0x1d7528u: goto label_1d7528;
        default: break;
    }

    ctx->pc = 0x1d7450u;

    // 0x1d7450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7454: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d7458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d745c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7460: 0xae003034  sw          $zero, 0x3034($s0)
    ctx->pc = 0x1d7460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12340), GPR_U32(ctx, 0));
    // 0x1d7464: 0xc076fac  jal         func_1DBEB0
    ctx->pc = 0x1D7464u;
    SET_GPR_U32(ctx, 31, 0x1D746Cu);
    ctx->pc = 0x1D7468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7464u;
    // 0x1d7468: 0xae003038  sw          $zero, 0x3038($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBEB0u, 0x1D7464u, 0x1D746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D746Cu;
label_1d746c:
    // 0x1d746c: 0xc0774d0  jal         func_1DD340
    ctx->pc = 0x1D746Cu;
    SET_GPR_U32(ctx, 31, 0x1D7474u);
    ctx->pc = 0x1D7470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D746Cu;
    // 0x1d7470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD340u, 0x1D746Cu, 0x1D7474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7474u;
label_1d7474:
    // 0x1d7474: 0x8e053034  lw          $a1, 0x3034($s0)
    ctx->pc = 0x1d7474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12340)));
    // 0x1d7478: 0xc077486  jal         func_1DD218
    ctx->pc = 0x1D7478u;
    SET_GPR_U32(ctx, 31, 0x1D7480u);
    ctx->pc = 0x1D747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7478u;
    // 0x1d747c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD218u, 0x1D7478u, 0x1D7480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7480u;
label_1d7480:
    // 0x1d7480: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d7480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d7484: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1D7484u;
    SET_GPR_U32(ctx, 31, 0x1D748Cu);
    ctx->pc = 0x1D7488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7484u;
    // 0x1d7488: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1D7484u, 0x1D748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D748Cu;
label_1d748c:
    // 0x1d748c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d748cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7490: 0xc07748e  jal         func_1DD238
    ctx->pc = 0x1D7490u;
    SET_GPR_U32(ctx, 31, 0x1D7498u);
    ctx->pc = 0x1D7494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7490u;
    // 0x1d7494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD238u, 0x1D7490u, 0x1D7498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7498u;
label_1d7498:
    // 0x1d7498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d749c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d749cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d74a0: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D74A0u;
    SET_GPR_U32(ctx, 31, 0x1D74A8u);
    ctx->pc = 0x1D74A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74A0u;
    // 0x1d74a4: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D74A0u, 0x1D74A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74A8u;
label_1d74a8:
    // 0x1d74a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d74a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d74ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d74acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d74b0: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D74B0u;
    SET_GPR_U32(ctx, 31, 0x1D74B8u);
    ctx->pc = 0x1D74B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74B0u;
    // 0x1d74b4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D74B0u, 0x1D74B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74B8u;
label_1d74b8:
    // 0x1d74b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d74b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d74bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d74bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d74c0: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D74C0u;
    SET_GPR_U32(ctx, 31, 0x1D74C8u);
    ctx->pc = 0x1D74C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74C0u;
    // 0x1d74c4: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D74C0u, 0x1D74C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74C8u;
label_1d74c8:
    // 0x1d74c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d74c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d74cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d74ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d74d0: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D74D0u;
    SET_GPR_U32(ctx, 31, 0x1D74D8u);
    ctx->pc = 0x1D74D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74D0u;
    // 0x1d74d4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D74D0u, 0x1D74D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74D8u;
label_1d74d8:
    // 0x1d74d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d74d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d74dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d74dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d74e0: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D74E0u;
    SET_GPR_U32(ctx, 31, 0x1D74E8u);
    ctx->pc = 0x1D74E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74E0u;
    // 0x1d74e4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D74E0u, 0x1D74E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74E8u;
label_1d74e8:
    // 0x1d74e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d74e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d74ec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d74ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d74f0: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D74F0u;
    SET_GPR_U32(ctx, 31, 0x1D74F8u);
    ctx->pc = 0x1D74F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74F0u;
    // 0x1d74f4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D74F0u, 0x1D74F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74F8u;
label_1d74f8:
    // 0x1d74f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d74f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d74fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d74fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d7500: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D7500u;
    SET_GPR_U32(ctx, 31, 0x1D7508u);
    ctx->pc = 0x1D7504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7500u;
    // 0x1d7504: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D7500u, 0x1D7508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7508u;
label_1d7508:
    // 0x1d7508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d750c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d750cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d7510: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D7510u;
    SET_GPR_U32(ctx, 31, 0x1D7518u);
    ctx->pc = 0x1D7514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7510u;
    // 0x1d7514: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D7510u, 0x1D7518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7518u;
label_1d7518:
    // 0x1d7518: 0x260425b0  addiu       $a0, $s0, 0x25B0
    ctx->pc = 0x1d7518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9648));
    // 0x1d751c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1d751cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1d7520: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1D7520u;
    SET_GPR_U32(ctx, 31, 0x1D7528u);
    ctx->pc = 0x1D7524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7520u;
    // 0x1d7524: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1D7520u, 0x1D7528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7528u;
label_1d7528:
    // 0x1d7528: 0x9e023020  lwu         $v0, 0x3020($s0)
    ctx->pc = 0x1d7528u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12320)));
    // 0x1d752c: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x1d752cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
    // 0x1d7530: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d7530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d7534: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7534u;
    {
        const bool branch_taken_0x1d7534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7534u;
        // 0x1d7538: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7534) {
            ctx->pc = 0x1D7540u;
            goto label_1d7540;
        }
    }
    ctx->pc = 0x1D753Cu;
    // 0x1d753c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7540:
    // 0x1d7540: 0xa2003025  sb          $zero, 0x3025($s0)
    ctx->pc = 0x1d7540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d7544: 0xa2023024  sb          $v0, 0x3024($s0)
    ctx->pc = 0x1d7544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d7548: 0xae003020  sw          $zero, 0x3020($s0)
    ctx->pc = 0x1d7548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12320), GPR_U32(ctx, 0));
    // 0x1d754c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d754cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7554: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7554u;
        // 0x1d7558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D755Cu;
    // 0x1d755c: 0x0  nop
    ctx->pc = 0x1d755cu;
    // NOP
    ctx->pc = 0x1d7560u;
}
