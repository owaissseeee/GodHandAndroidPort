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

// Function: Slot2_blinkMarksAt4A2
// Address: 0x1e39d0 - 0x1e3a98
void Slot2_blinkMarksAt4A2_0x1e39d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_blinkMarksAt4A2_0x1e39d0");
#endif

    switch (ctx->pc) {
        case 0x1e3a28u: goto label_1e3a28;
        case 0x1e3a34u: goto label_1e3a34;
        case 0x1e3a40u: goto label_1e3a40;
        case 0x1e3a4cu: goto label_1e3a4c;
        case 0x1e3a60u: goto label_1e3a60;
        case 0x1e3a6cu: goto label_1e3a6c;
        case 0x1e3a78u: goto label_1e3a78;
        case 0x1e3a84u: goto label_1e3a84;
        default: break;
    }

    ctx->pc = 0x1e39d0u;

    // 0x1e39d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e39d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e39d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e39d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e39d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e39d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e39dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e39dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e39e0: 0x960304a2  lhu         $v1, 0x4A2($s0)
    ctx->pc = 0x1e39e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1186)));
    // 0x1e39e4: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1e39e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e39e8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E39E8u;
    {
        const bool branch_taken_0x1e39e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39E8u;
        // 0x1e39ec: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39e8) {
            ctx->pc = 0x1E3A84u;
            goto label_1e3a84;
        }
    }
    ctx->pc = 0x1E39F0u;
    // 0x1e39f0: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x1e39f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1e39f4: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1e39f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e39f8: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E39F8u;
    {
        const bool branch_taken_0x1e39f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39F8u;
        // 0x1e39fc: 0xa60304a2  sh          $v1, 0x4A2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1186), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39f8) {
            ctx->pc = 0x1E3A84u;
            goto label_1e3a84;
        }
    }
    ctx->pc = 0x1E3A00u;
    // 0x1e3a00: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x1e3a00u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1e3a04: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e3a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e3a08: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e3a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e3a0c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e3a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e3a10: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x1e3a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e3a14: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E3A14u;
    {
        const bool branch_taken_0x1e3a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A14u;
        // 0x1e3a18: 0xa60204a2  sh          $v0, 0x4A2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1186), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a14) {
            ctx->pc = 0x1E3A54u;
            goto label_1e3a54;
        }
    }
    ctx->pc = 0x1E3A1Cu;
    // 0x1e3a1c: 0x8e040430  lw          $a0, 0x430($s0)
    ctx->pc = 0x1e3a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x1e3a20: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3A20u;
    SET_GPR_U32(ctx, 31, 0x1E3A28u);
    ctx->pc = 0x1E3A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A20u;
    // 0x1e3a24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3A20u, 0x1E3A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A28u;
label_1e3a28:
    // 0x1e3a28: 0x8e04047c  lw          $a0, 0x47C($s0)
    ctx->pc = 0x1e3a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x1e3a2c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3A2Cu;
    SET_GPR_U32(ctx, 31, 0x1E3A34u);
    ctx->pc = 0x1E3A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A2Cu;
    // 0x1e3a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3A2Cu, 0x1E3A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A34u;
label_1e3a34:
    // 0x1e3a34: 0x8e040464  lw          $a0, 0x464($s0)
    ctx->pc = 0x1e3a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1124)));
    // 0x1e3a38: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3A38u;
    SET_GPR_U32(ctx, 31, 0x1E3A40u);
    ctx->pc = 0x1E3A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A38u;
    // 0x1e3a3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3A38u, 0x1E3A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A40u;
label_1e3a40:
    // 0x1e3a40: 0x8e040468  lw          $a0, 0x468($s0)
    ctx->pc = 0x1e3a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x1e3a44: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3A44u;
    SET_GPR_U32(ctx, 31, 0x1E3A4Cu);
    ctx->pc = 0x1E3A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A44u;
    // 0x1e3a48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3A44u, 0x1E3A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A4Cu;
label_1e3a4c:
    // 0x1e3a4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E3A4Cu;
    {
        const bool branch_taken_0x1e3a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A4Cu;
        // 0x1e3a50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a4c) {
            ctx->pc = 0x1E3A88u;
            goto label_1e3a88;
        }
    }
    ctx->pc = 0x1E3A54u;
label_1e3a54:
    // 0x1e3a54: 0x8e040430  lw          $a0, 0x430($s0)
    ctx->pc = 0x1e3a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x1e3a58: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3A58u;
    SET_GPR_U32(ctx, 31, 0x1E3A60u);
    ctx->pc = 0x1E3A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A58u;
    // 0x1e3a5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3A58u, 0x1E3A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A60u;
label_1e3a60:
    // 0x1e3a60: 0x8e04047c  lw          $a0, 0x47C($s0)
    ctx->pc = 0x1e3a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x1e3a64: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3A64u;
    SET_GPR_U32(ctx, 31, 0x1E3A6Cu);
    ctx->pc = 0x1E3A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A64u;
    // 0x1e3a68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3A64u, 0x1E3A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A6Cu;
label_1e3a6c:
    // 0x1e3a6c: 0x8e040464  lw          $a0, 0x464($s0)
    ctx->pc = 0x1e3a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1124)));
    // 0x1e3a70: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3A70u;
    SET_GPR_U32(ctx, 31, 0x1E3A78u);
    ctx->pc = 0x1E3A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A70u;
    // 0x1e3a74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3A70u, 0x1E3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A78u;
label_1e3a78:
    // 0x1e3a78: 0x8e040468  lw          $a0, 0x468($s0)
    ctx->pc = 0x1e3a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x1e3a7c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3A7Cu;
    SET_GPR_U32(ctx, 31, 0x1E3A84u);
    ctx->pc = 0x1E3A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A7Cu;
    // 0x1e3a80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3A7Cu, 0x1E3A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A84u;
label_1e3a84:
    // 0x1e3a84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3a88:
    // 0x1e3a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A8Cu;
        // 0x1e3a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3A94u;
    // 0x1e3a94: 0x0  nop
    ctx->pc = 0x1e3a94u;
    // NOP
    ctx->pc = 0x1e3a98u;
}
