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

// Function: System_initPools
// Address: 0x2a5d80 - 0x2a5ec0
void System_initPools_0x2a5d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("System_initPools_0x2a5d80");
#endif

    switch (ctx->pc) {
        case 0x2a5db4u: goto label_2a5db4;
        case 0x2a5dd0u: goto label_2a5dd0;
        case 0x2a5de0u: goto label_2a5de0;
        case 0x2a5df0u: goto label_2a5df0;
        case 0x2a5e00u: goto label_2a5e00;
        case 0x2a5e28u: goto label_2a5e28;
        case 0x2a5e3cu: goto label_2a5e3c;
        case 0x2a5e54u: goto label_2a5e54;
        case 0x2a5e68u: goto label_2a5e68;
        case 0x2a5e80u: goto label_2a5e80;
        case 0x2a5e94u: goto label_2a5e94;
        case 0x2a5e9cu: goto label_2a5e9c;
        case 0x2a5ea4u: goto label_2a5ea4;
        default: break;
    }

    ctx->pc = 0x2a5d80u;

    // 0x2a5d80: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a5d84: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a5d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a5d88: 0x8c447a4c  lw          $a0, 0x7A4C($v0)
    ctx->pc = 0x2a5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A4Cu));
    // 0x2a5d8c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2a5d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2a5d90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a5d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2a5d94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d98: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a5d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2a5d9c: 0x24a5ad60  addiu       $a1, $a1, -0x52A0
    ctx->pc = 0x2a5d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946144));
    // 0x2a5da0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a5da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a5da4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2a5da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2a5da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5dac: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A5DACu;
    SET_GPR_U32(ctx, 31, 0x2A5DB4u);
    ctx->pc = 0x2A5DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5DACu;
    // 0x2a5db0: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A5DACu, 0x2A5DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5DB4u;
label_2a5db4:
    // 0x2a5db4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a5db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5db8: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2a5db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2a5dbc: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x2a5dbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a5dc0: 0x24844c30  addiu       $a0, $a0, 0x4C30
    ctx->pc = 0x2a5dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
    // 0x2a5dc4: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2a5dc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2a5dc8: 0xc0c49ec  jal         func_3127B0
    ctx->pc = 0x2A5DC8u;
    SET_GPR_U32(ctx, 31, 0x2A5DD0u);
    ctx->pc = 0x2A5DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5DC8u;
    // 0x2a5dcc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3127B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127B0u, 0x2A5DC8u, 0x2A5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5DD0u;
label_2a5dd0:
    // 0x2a5dd0: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x2a5dd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a5dd4: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2a5dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2a5dd8: 0xc0c49ec  jal         func_3127B0
    ctx->pc = 0x2A5DD8u;
    SET_GPR_U32(ctx, 31, 0x2A5DE0u);
    ctx->pc = 0x2A5DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5DD8u;
    // 0x2a5ddc: 0x24844c38  addiu       $a0, $a0, 0x4C38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3127B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127B0u, 0x2A5DD8u, 0x2A5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5DE0u;
label_2a5de0:
    // 0x2a5de0: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2a5de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2a5de4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a5de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a5de8: 0xc0c49ec  jal         func_3127B0
    ctx->pc = 0x2A5DE8u;
    SET_GPR_U32(ctx, 31, 0x2A5DF0u);
    ctx->pc = 0x2A5DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5DE8u;
    // 0x2a5dec: 0x24844c50  addiu       $a0, $a0, 0x4C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3127B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127B0u, 0x2A5DE8u, 0x2A5DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5DF0u;
label_2a5df0:
    // 0x2a5df0: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2a5df0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2a5df4: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2a5df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2a5df8: 0xc0c49ec  jal         func_3127B0
    ctx->pc = 0x2A5DF8u;
    SET_GPR_U32(ctx, 31, 0x2A5E00u);
    ctx->pc = 0x2A5DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5DF8u;
    // 0x2a5dfc: 0x24844c58  addiu       $a0, $a0, 0x4C58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3127B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127B0u, 0x2A5DF8u, 0x2A5E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E00u;
label_2a5e00:
    // 0x2a5e00: 0x86500000  lh          $s0, 0x0($s2)
    ctx->pc = 0x2a5e00u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a5e04: 0x24020380  addiu       $v0, $zero, 0x380
    ctx->pc = 0x2a5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
    // 0x2a5e08: 0x8e663cf0  lw          $a2, 0x3CF0($s3)
    ctx->pc = 0x2a5e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15600)));
    // 0x2a5e0c: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x2a5e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
    // 0x2a5e10: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x2a5e10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2a5e14: 0x26314c20  addiu       $s1, $s1, 0x4C20
    ctx->pc = 0x2a5e14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19488));
    // 0x2a5e18: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a5e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a5e1c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2a5e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2a5e20: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2A5E20u;
    SET_GPR_U32(ctx, 31, 0x2A5E28u);
    ctx->pc = 0x2A5E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E20u;
    // 0x2a5e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2A5E20u, 0x2A5E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E28u;
label_2a5e28:
    // 0x2a5e28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a5e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a5e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e34: 0xc0aa526  jal         func_2A9498
    ctx->pc = 0x2A5E34u;
    SET_GPR_U32(ctx, 31, 0x2A5E3Cu);
    ctx->pc = 0x2A5E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E34u;
    // 0x2a5e38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9498u, 0x2A5E34u, 0x2A5E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E3Cu;
label_2a5e3c:
    // 0x2a5e3c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2a5e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2a5e40: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x2a5e40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x2a5e44: 0x8e663cf0  lw          $a2, 0x3CF0($s3)
    ctx->pc = 0x2a5e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15600)));
    // 0x2a5e48: 0x26104240  addiu       $s0, $s0, 0x4240
    ctx->pc = 0x2a5e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16960));
    // 0x2a5e4c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2A5E4Cu;
    SET_GPR_U32(ctx, 31, 0x2A5E54u);
    ctx->pc = 0x2A5E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E4Cu;
    // 0x2a5e50: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2A5E4Cu, 0x2A5E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E54u;
label_2a5e54:
    // 0x2a5e54: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x2a5e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2a5e58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e60: 0xc0aa526  jal         func_2A9498
    ctx->pc = 0x2A5E60u;
    SET_GPR_U32(ctx, 31, 0x2A5E68u);
    ctx->pc = 0x2A5E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E60u;
    // 0x2a5e64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9498u, 0x2A5E60u, 0x2A5E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E68u;
label_2a5e68:
    // 0x2a5e68: 0x8e663cf0  lw          $a2, 0x3CF0($s3)
    ctx->pc = 0x2a5e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15600)));
    // 0x2a5e6c: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x2a5e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x2a5e70: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2a5e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a5e74: 0x26104c10  addiu       $s0, $s0, 0x4C10
    ctx->pc = 0x2a5e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19472));
    // 0x2a5e78: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2A5E78u;
    SET_GPR_U32(ctx, 31, 0x2A5E80u);
    ctx->pc = 0x2A5E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E78u;
    // 0x2a5e7c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2A5E78u, 0x2A5E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E80u;
label_2a5e80:
    // 0x2a5e80: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2a5e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a5e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5e8c: 0xc0aa526  jal         func_2A9498
    ctx->pc = 0x2A5E8Cu;
    SET_GPR_U32(ctx, 31, 0x2A5E94u);
    ctx->pc = 0x2A5E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E8Cu;
    // 0x2a5e90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9498u, 0x2A5E8Cu, 0x2A5E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E94u;
label_2a5e94:
    // 0x2a5e94: 0xc054026  jal         func_150098
    ctx->pc = 0x2A5E94u;
    SET_GPR_U32(ctx, 31, 0x2A5E9Cu);
    ctx->pc = 0x2A5E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E94u;
    // 0x2a5e98: 0x86440010  lh          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150098u, 0x2A5E94u, 0x2A5E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5E9Cu;
label_2a5e9c:
    // 0x2a5e9c: 0xc0524ba  jal         func_1492E8
    ctx->pc = 0x2A5E9Cu;
    SET_GPR_U32(ctx, 31, 0x2A5EA4u);
    ctx->pc = 0x2A5EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5E9Cu;
    // 0x2a5ea0: 0x86440012  lh          $a0, 0x12($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1492E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1492E8u, 0x2A5E9Cu, 0x2A5EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5EA4u;
label_2a5ea4:
    // 0x2a5ea4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a5ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a5ea8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a5ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5eac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a5eacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5eb0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2a5eb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5EB8u;
        // 0x2a5ebc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5EC0u;
}
