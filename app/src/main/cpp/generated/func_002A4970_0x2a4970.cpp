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

// Function: func_002A4970
// Address: 0x2a4970 - 0x2a4b20
void func_002A4970_0x2a4970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A4970_0x2a4970");
#endif

    switch (ctx->pc) {
        case 0x2a49b8u: goto label_2a49b8;
        case 0x2a49d4u: goto label_2a49d4;
        case 0x2a49e8u: goto label_2a49e8;
        case 0x2a49f8u: goto label_2a49f8;
        case 0x2a4a0cu: goto label_2a4a0c;
        case 0x2a4a20u: goto label_2a4a20;
        case 0x2a4a30u: goto label_2a4a30;
        case 0x2a4a44u: goto label_2a4a44;
        case 0x2a4a58u: goto label_2a4a58;
        case 0x2a4a84u: goto label_2a4a84;
        case 0x2a4aa0u: goto label_2a4aa0;
        case 0x2a4ab4u: goto label_2a4ab4;
        case 0x2a4ac4u: goto label_2a4ac4;
        case 0x2a4ad8u: goto label_2a4ad8;
        case 0x2a4aecu: goto label_2a4aec;
        default: break;
    }

    ctx->pc = 0x2a4970u;

    // 0x2a4970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a4970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a4974: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a4974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a4978: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2a4978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2a497c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2a497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2a4980: 0x245374a0  addiu       $s3, $v0, 0x74A0
    ctx->pc = 0x2a4980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2a4984: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2a4984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2a4988: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2a4988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2a498c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a498cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a4990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a4990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a4994: 0x8e62056c  lw          $v0, 0x56C($s3)
    ctx->pc = 0x2a4994u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2a4998: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2A4998u;
    {
        const bool branch_taken_0x2a4998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4998u;
        // 0x2a499c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4998) {
            ctx->pc = 0x2A4A60u;
            goto label_2a4a60;
        }
    }
    ctx->pc = 0x2A49A0u;
    // 0x2a49a0: 0x3c120045  lui         $s2, 0x45
    ctx->pc = 0x2a49a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)69 << 16));
    // 0x2a49a4: 0x8e640558  lw          $a0, 0x558($s3)
    ctx->pc = 0x2a49a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1368)));
    // 0x2a49a8: 0x2652ace0  addiu       $s2, $s2, -0x5320
    ctx->pc = 0x2a49a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946016));
    // 0x2a49ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a49acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49b0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A49B0u;
    SET_GPR_U32(ctx, 31, 0x2A49B8u);
    ctx->pc = 0x2A49B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A49B0u;
    // 0x2a49b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A49B0u, 0x2A49B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49B8u;
label_2a49b8:
    // 0x2a49b8: 0x3c110045  lui         $s1, 0x45
    ctx->pc = 0x2a49b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
    // 0x2a49bc: 0x8e640558  lw          $a0, 0x558($s3)
    ctx->pc = 0x2a49bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1368)));
    // 0x2a49c0: 0x2631ace8  addiu       $s1, $s1, -0x5318
    ctx->pc = 0x2a49c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946024));
    // 0x2a49c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a49c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a49c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49cc: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A49CCu;
    SET_GPR_U32(ctx, 31, 0x2A49D4u);
    ctx->pc = 0x2A49D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A49CCu;
    // 0x2a49d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A49CCu, 0x2A49D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49D4u;
label_2a49d4:
    // 0x2a49d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a49d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a49d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a49dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49e0: 0xc0a932c  jal         func_2A4CB0
    ctx->pc = 0x2A49E0u;
    SET_GPR_U32(ctx, 31, 0x2A49E8u);
    ctx->pc = 0x2A49E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A49E0u;
    // 0x2a49e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CB0u, 0x2A49E0u, 0x2A49E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49E8u;
label_2a49e8:
    // 0x2a49e8: 0x8e640558  lw          $a0, 0x558($s3)
    ctx->pc = 0x2a49e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1368)));
    // 0x2a49ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a49ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49f0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A49F0u;
    SET_GPR_U32(ctx, 31, 0x2A49F8u);
    ctx->pc = 0x2A49F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A49F0u;
    // 0x2a49f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A49F0u, 0x2A49F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49F8u;
label_2a49f8:
    // 0x2a49f8: 0x8e640558  lw          $a0, 0x558($s3)
    ctx->pc = 0x2a49f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1368)));
    // 0x2a49fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a49fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a4a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a04: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A4A04u;
    SET_GPR_U32(ctx, 31, 0x2A4A0Cu);
    ctx->pc = 0x2A4A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A04u;
    // 0x2a4a08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A4A04u, 0x2A4A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A0Cu;
label_2a4a0c:
    // 0x2a4a0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a4a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a4a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a4a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a18: 0xc0a932c  jal         func_2A4CB0
    ctx->pc = 0x2A4A18u;
    SET_GPR_U32(ctx, 31, 0x2A4A20u);
    ctx->pc = 0x2A4A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A18u;
    // 0x2a4a1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CB0u, 0x2A4A18u, 0x2A4A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A20u;
label_2a4a20:
    // 0x2a4a20: 0x8e640558  lw          $a0, 0x558($s3)
    ctx->pc = 0x2a4a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1368)));
    // 0x2a4a24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a4a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a28: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A4A28u;
    SET_GPR_U32(ctx, 31, 0x2A4A30u);
    ctx->pc = 0x2A4A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A28u;
    // 0x2a4a2c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A4A28u, 0x2A4A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A30u;
label_2a4a30:
    // 0x2a4a30: 0x8e640558  lw          $a0, 0x558($s3)
    ctx->pc = 0x2a4a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1368)));
    // 0x2a4a34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a4a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a4a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a3c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A4A3Cu;
    SET_GPR_U32(ctx, 31, 0x2A4A44u);
    ctx->pc = 0x2A4A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A3Cu;
    // 0x2a4a40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A4A3Cu, 0x2A4A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A44u;
label_2a4a44:
    // 0x2a4a44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a4a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a48: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a4a48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a4a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a50: 0xc0a932c  jal         func_2A4CB0
    ctx->pc = 0x2A4A50u;
    SET_GPR_U32(ctx, 31, 0x2A4A58u);
    ctx->pc = 0x2A4A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A50u;
    // 0x2a4a54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CB0u, 0x2A4A50u, 0x2A4A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A58u;
label_2a4a58:
    // 0x2a4a58: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2A4A58u;
    {
        const bool branch_taken_0x2a4a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A58u;
        // 0x2a4a5c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a58) {
            ctx->pc = 0x2A4AF0u;
            goto label_2a4af0;
        }
    }
    ctx->pc = 0x2A4A60u;
label_2a4a60:
    // 0x2a4a60: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A4A60u;
    {
        const bool branch_taken_0x2a4a60 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2A4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A60u;
        // 0x2a4a64: 0x28420007  slti        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a60) {
            ctx->pc = 0x2A4AECu;
            goto label_2a4aec;
        }
    }
    ctx->pc = 0x2A4A68u;
    // 0x2a4a68: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A4A68u;
    {
        const bool branch_taken_0x2a4a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4A68u;
        // 0x2a4a6c: 0x3c110045  lui         $s1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4a68) {
            ctx->pc = 0x2A4AECu;
            goto label_2a4aec;
        }
    }
    ctx->pc = 0x2A4A70u;
    // 0x2a4a70: 0x8e640558  lw          $a0, 0x558($s3)
    ctx->pc = 0x2a4a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1368)));
    // 0x2a4a74: 0x2631ace0  addiu       $s1, $s1, -0x5320
    ctx->pc = 0x2a4a74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946016));
    // 0x2a4a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a7c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A4A7Cu;
    SET_GPR_U32(ctx, 31, 0x2A4A84u);
    ctx->pc = 0x2A4A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A7Cu;
    // 0x2a4a80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A4A7Cu, 0x2A4A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A84u;
label_2a4a84:
    // 0x2a4a84: 0x3c100045  lui         $s0, 0x45
    ctx->pc = 0x2a4a84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
    // 0x2a4a88: 0x8e640558  lw          $a0, 0x558($s3)
    ctx->pc = 0x2a4a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1368)));
    // 0x2a4a8c: 0x2610ace8  addiu       $s0, $s0, -0x5318
    ctx->pc = 0x2a4a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946024));
    // 0x2a4a90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a4a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a4a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a98: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A4A98u;
    SET_GPR_U32(ctx, 31, 0x2A4AA0u);
    ctx->pc = 0x2A4A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4A98u;
    // 0x2a4a9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A4A98u, 0x2A4AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AA0u;
label_2a4aa0:
    // 0x2a4aa0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a4aa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4aa4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a4aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4aa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a4aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4aac: 0xc0a932c  jal         func_2A4CB0
    ctx->pc = 0x2A4AACu;
    SET_GPR_U32(ctx, 31, 0x2A4AB4u);
    ctx->pc = 0x2A4AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4AACu;
    // 0x2a4ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CB0u, 0x2A4AACu, 0x2A4AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AB4u;
label_2a4ab4:
    // 0x2a4ab4: 0x8e640558  lw          $a0, 0x558($s3)
    ctx->pc = 0x2a4ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1368)));
    // 0x2a4ab8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a4ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4abc: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A4ABCu;
    SET_GPR_U32(ctx, 31, 0x2A4AC4u);
    ctx->pc = 0x2A4AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4ABCu;
    // 0x2a4ac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A4ABCu, 0x2A4AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AC4u;
label_2a4ac4:
    // 0x2a4ac4: 0x8e640558  lw          $a0, 0x558($s3)
    ctx->pc = 0x2a4ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1368)));
    // 0x2a4ac8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a4ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4acc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a4accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ad0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A4AD0u;
    SET_GPR_U32(ctx, 31, 0x2A4AD8u);
    ctx->pc = 0x2A4AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4AD0u;
    // 0x2a4ad4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A4AD0u, 0x2A4AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AD8u;
label_2a4ad8:
    // 0x2a4ad8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a4ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4adc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a4adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ae0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a4ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ae4: 0xc0a932c  jal         func_2A4CB0
    ctx->pc = 0x2A4AE4u;
    SET_GPR_U32(ctx, 31, 0x2A4AECu);
    ctx->pc = 0x2A4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4AE4u;
    // 0x2a4ae8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CB0u, 0x2A4AE4u, 0x2A4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AECu;
label_2a4aec:
    // 0x2a4aec: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2a4af0:
    // 0x2a4af0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2a4af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a4af4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2a4af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2a4af8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2a4af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a4afc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2a4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2a4b00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a4b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4b04: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2a4b04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4b08: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2a4b08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a4b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4b10: 0xac40208c  sw          $zero, 0x208C($v0)
    ctx->pc = 0x2a4b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8332), GPR_U32(ctx, 0));
    // 0x2a4b14: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4B14u;
        // 0x2a4b18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4B1Cu;
    // 0x2a4b1c: 0x0  nop
    ctx->pc = 0x2a4b1cu;
    // NOP
    ctx->pc = 0x2a4b20u;
}
