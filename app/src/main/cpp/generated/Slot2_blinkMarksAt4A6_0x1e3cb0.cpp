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

// Function: Slot2_blinkMarksAt4A6
// Address: 0x1e3cb0 - 0x1e3d78
void Slot2_blinkMarksAt4A6_0x1e3cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_blinkMarksAt4A6_0x1e3cb0");
#endif

    switch (ctx->pc) {
        case 0x1e3d08u: goto label_1e3d08;
        case 0x1e3d14u: goto label_1e3d14;
        case 0x1e3d20u: goto label_1e3d20;
        case 0x1e3d2cu: goto label_1e3d2c;
        case 0x1e3d40u: goto label_1e3d40;
        case 0x1e3d4cu: goto label_1e3d4c;
        case 0x1e3d58u: goto label_1e3d58;
        case 0x1e3d64u: goto label_1e3d64;
        default: break;
    }

    ctx->pc = 0x1e3cb0u;

    // 0x1e3cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3cb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e3cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e3cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3cbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3cc0: 0x960304a6  lhu         $v1, 0x4A6($s0)
    ctx->pc = 0x1e3cc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1190)));
    // 0x1e3cc4: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1e3cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e3cc8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E3CC8u;
    {
        const bool branch_taken_0x1e3cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CC8u;
        // 0x1e3ccc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cc8) {
            ctx->pc = 0x1E3D64u;
            goto label_1e3d64;
        }
    }
    ctx->pc = 0x1E3CD0u;
    // 0x1e3cd0: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x1e3cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1e3cd4: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1e3cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e3cd8: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E3CD8u;
    {
        const bool branch_taken_0x1e3cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CD8u;
        // 0x1e3cdc: 0xa60304a6  sh          $v1, 0x4A6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1190), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cd8) {
            ctx->pc = 0x1E3D64u;
            goto label_1e3d64;
        }
    }
    ctx->pc = 0x1E3CE0u;
    // 0x1e3ce0: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x1e3ce0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1e3ce4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e3ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e3ce8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e3ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e3cec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e3cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e3cf0: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x1e3cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e3cf4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E3CF4u;
    {
        const bool branch_taken_0x1e3cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CF4u;
        // 0x1e3cf8: 0xa60204a6  sh          $v0, 0x4A6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1190), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cf4) {
            ctx->pc = 0x1E3D34u;
            goto label_1e3d34;
        }
    }
    ctx->pc = 0x1E3CFCu;
    // 0x1e3cfc: 0x8e040430  lw          $a0, 0x430($s0)
    ctx->pc = 0x1e3cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x1e3d00: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3D00u;
    SET_GPR_U32(ctx, 31, 0x1E3D08u);
    ctx->pc = 0x1E3D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D00u;
    // 0x1e3d04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3D00u, 0x1E3D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D08u;
label_1e3d08:
    // 0x1e3d08: 0x8e04047c  lw          $a0, 0x47C($s0)
    ctx->pc = 0x1e3d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x1e3d0c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3D0Cu;
    SET_GPR_U32(ctx, 31, 0x1E3D14u);
    ctx->pc = 0x1E3D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D0Cu;
    // 0x1e3d10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3D0Cu, 0x1E3D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D14u;
label_1e3d14:
    // 0x1e3d14: 0x8e040474  lw          $a0, 0x474($s0)
    ctx->pc = 0x1e3d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
    // 0x1e3d18: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3D18u;
    SET_GPR_U32(ctx, 31, 0x1E3D20u);
    ctx->pc = 0x1E3D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D18u;
    // 0x1e3d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3D18u, 0x1E3D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D20u;
label_1e3d20:
    // 0x1e3d20: 0x8e040478  lw          $a0, 0x478($s0)
    ctx->pc = 0x1e3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1144)));
    // 0x1e3d24: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3D24u;
    SET_GPR_U32(ctx, 31, 0x1E3D2Cu);
    ctx->pc = 0x1E3D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D24u;
    // 0x1e3d28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3D24u, 0x1E3D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D2Cu;
label_1e3d2c:
    // 0x1e3d2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E3D2Cu;
    {
        const bool branch_taken_0x1e3d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D2Cu;
        // 0x1e3d30: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d2c) {
            ctx->pc = 0x1E3D68u;
            goto label_1e3d68;
        }
    }
    ctx->pc = 0x1E3D34u;
label_1e3d34:
    // 0x1e3d34: 0x8e040430  lw          $a0, 0x430($s0)
    ctx->pc = 0x1e3d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x1e3d38: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3D38u;
    SET_GPR_U32(ctx, 31, 0x1E3D40u);
    ctx->pc = 0x1E3D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D38u;
    // 0x1e3d3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3D38u, 0x1E3D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D40u;
label_1e3d40:
    // 0x1e3d40: 0x8e04047c  lw          $a0, 0x47C($s0)
    ctx->pc = 0x1e3d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x1e3d44: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3D44u;
    SET_GPR_U32(ctx, 31, 0x1E3D4Cu);
    ctx->pc = 0x1E3D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D44u;
    // 0x1e3d48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3D44u, 0x1E3D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D4Cu;
label_1e3d4c:
    // 0x1e3d4c: 0x8e040474  lw          $a0, 0x474($s0)
    ctx->pc = 0x1e3d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
    // 0x1e3d50: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3D50u;
    SET_GPR_U32(ctx, 31, 0x1E3D58u);
    ctx->pc = 0x1E3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D50u;
    // 0x1e3d54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3D50u, 0x1E3D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D58u;
label_1e3d58:
    // 0x1e3d58: 0x8e040478  lw          $a0, 0x478($s0)
    ctx->pc = 0x1e3d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1144)));
    // 0x1e3d5c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3D5Cu;
    SET_GPR_U32(ctx, 31, 0x1E3D64u);
    ctx->pc = 0x1E3D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3D5Cu;
    // 0x1e3d60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3D5Cu, 0x1E3D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3D64u;
label_1e3d64:
    // 0x1e3d64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3d68:
    // 0x1e3d68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D6Cu;
        // 0x1e3d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3D74u;
    // 0x1e3d74: 0x0  nop
    ctx->pc = 0x1e3d74u;
    // NOP
    ctx->pc = 0x1e3d78u;
}
