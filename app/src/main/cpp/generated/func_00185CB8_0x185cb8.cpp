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

// Function: func_00185CB8
// Address: 0x185cb8 - 0x185e68
void func_00185CB8_0x185cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00185CB8_0x185cb8");
#endif

    switch (ctx->pc) {
        case 0x185cdcu: goto label_185cdc;
        case 0x185cecu: goto label_185cec;
        case 0x185cfcu: goto label_185cfc;
        case 0x185d0cu: goto label_185d0c;
        case 0x185d64u: goto label_185d64;
        case 0x185d98u: goto label_185d98;
        case 0x185dccu: goto label_185dcc;
        case 0x185ddcu: goto label_185ddc;
        case 0x185e04u: goto label_185e04;
        case 0x185e2cu: goto label_185e2c;
        case 0x185e3cu: goto label_185e3c;
        case 0x185e48u: goto label_185e48;
        case 0x185e54u: goto label_185e54;
        default: break;
    }

    ctx->pc = 0x185cb8u;

    // 0x185cb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185cbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cc0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x185cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x185cc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185cc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ccc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x185cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185cd4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185CD4u;
    SET_GPR_U32(ctx, 31, 0x185CDCu);
    ctx->pc = 0x185CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185CD4u;
    // 0x185cd8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185CD4u, 0x185CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185CDCu;
label_185cdc:
    // 0x185cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ce0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x185ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x185ce4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185CE4u;
    SET_GPR_U32(ctx, 31, 0x185CECu);
    ctx->pc = 0x185CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185CE4u;
    // 0x185ce8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185CE4u, 0x185CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185CECu;
label_185cec:
    // 0x185cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185cf0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x185cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x185cf4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185CF4u;
    SET_GPR_U32(ctx, 31, 0x185CFCu);
    ctx->pc = 0x185CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185CF4u;
    // 0x185cf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185CF4u, 0x185CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185CFCu;
label_185cfc:
    // 0x185cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d00: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x185d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x185d04: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185D04u;
    SET_GPR_U32(ctx, 31, 0x185D0Cu);
    ctx->pc = 0x185D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D04u;
    // 0x185d08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185D04u, 0x185D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D0Cu;
label_185d0c:
    // 0x185d0c: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x185d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x185d10: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x185D10u;
    {
        const bool branch_taken_0x185d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D10u;
        // 0x185d14: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d10) {
            ctx->pc = 0x185E54u;
            goto label_185e54;
        }
    }
    ctx->pc = 0x185D18u;
    // 0x185d18: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x185d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x185d1c: 0x24422e40  addiu       $v0, $v0, 0x2E40
    ctx->pc = 0x185d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11840));
    // 0x185d20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x185d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x185d24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x185d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185d28: 0x800008  jr          $a0
    ctx->pc = 0x185D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185D30u: goto label_185d30;
            case 0x185D3Cu: goto label_185d3c;
            case 0x185D70u: goto label_185d70;
            case 0x185DA4u: goto label_185da4;
            case 0x185DE4u: goto label_185de4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185D28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x185D30u;
label_185d30:
    // 0x185d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d34: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x185D34u;
    {
        const bool branch_taken_0x185d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D34u;
        // 0x185d38: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d34) {
            ctx->pc = 0x185DD4u;
            goto label_185dd4;
        }
    }
    ctx->pc = 0x185D3Cu;
label_185d3c:
    // 0x185d3c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185d40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185d44: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x185d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x185d48: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x185d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x185d4c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x185d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185d54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185d58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d5c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185D5Cu;
    SET_GPR_U32(ctx, 31, 0x185D64u);
    ctx->pc = 0x185D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D5Cu;
    // 0x185d60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185D5Cu, 0x185D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D64u;
label_185d64:
    // 0x185d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d68: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x185D68u;
    {
        const bool branch_taken_0x185d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D68u;
        // 0x185d6c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d68) {
            ctx->pc = 0x185DD4u;
            goto label_185dd4;
        }
    }
    ctx->pc = 0x185D70u;
label_185d70:
    // 0x185d70: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185d74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185d78: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x185d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x185d7c: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x185d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x185d80: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x185d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185d88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185d8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d90: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185D90u;
    SET_GPR_U32(ctx, 31, 0x185D98u);
    ctx->pc = 0x185D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185D90u;
    // 0x185d94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185D90u, 0x185D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185D98u;
label_185d98:
    // 0x185d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d9c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x185D9Cu;
    {
        const bool branch_taken_0x185d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D9Cu;
        // 0x185da0: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d9c) {
            ctx->pc = 0x185DD4u;
            goto label_185dd4;
        }
    }
    ctx->pc = 0x185DA4u;
label_185da4:
    // 0x185da4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185da8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185dac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x185dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x185db0: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x185db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x185db4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x185db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185db8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185dbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185dbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185dc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185dc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185dc4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185DC4u;
    SET_GPR_U32(ctx, 31, 0x185DCCu);
    ctx->pc = 0x185DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DC4u;
    // 0x185dc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185DC4u, 0x185DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185DCCu;
label_185dcc:
    // 0x185dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185dd0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x185dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_185dd4:
    // 0x185dd4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185DD4u;
    SET_GPR_U32(ctx, 31, 0x185DDCu);
    ctx->pc = 0x185DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DD4u;
    // 0x185dd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185DD4u, 0x185DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185DDCu;
label_185ddc:
    // 0x185ddc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x185DDCu;
    {
        const bool branch_taken_0x185ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185DDCu;
        // 0x185de0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ddc) {
            ctx->pc = 0x185E58u;
            goto label_185e58;
        }
    }
    ctx->pc = 0x185DE4u;
label_185de4:
    // 0x185de4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x185de4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x185de8: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x185de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x185dec: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x185decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x185df0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x185df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185df4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185df8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x185df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185dfc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x185DFCu;
    SET_GPR_U32(ctx, 31, 0x185E04u);
    ctx->pc = 0x185E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185DFCu;
    // 0x185e00: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x185DFCu, 0x185E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E04u;
label_185e04:
    // 0x185e04: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185e08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x185e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185e0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185e10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185e14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x185e18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e1c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x185e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x185e20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185e24: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185E24u;
    SET_GPR_U32(ctx, 31, 0x185E2Cu);
    ctx->pc = 0x185E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E24u;
    // 0x185e28: 0x24060112  addiu       $a2, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185E24u, 0x185E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E2Cu;
label_185e2c:
    // 0x185e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e30: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x185e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x185e34: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185E34u;
    SET_GPR_U32(ctx, 31, 0x185E3Cu);
    ctx->pc = 0x185E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E34u;
    // 0x185e38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185E34u, 0x185E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E3Cu;
label_185e3c:
    // 0x185e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e40: 0xc06180e  jal         func_186038
    ctx->pc = 0x185E40u;
    SET_GPR_U32(ctx, 31, 0x185E48u);
    ctx->pc = 0x185E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E40u;
    // 0x185e44: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x185E40u, 0x185E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E48u;
label_185e48:
    // 0x185e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185e4c: 0xc06180e  jal         func_186038
    ctx->pc = 0x185E4Cu;
    SET_GPR_U32(ctx, 31, 0x185E54u);
    ctx->pc = 0x185E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E4Cu;
    // 0x185e50: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x185E4Cu, 0x185E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185E54u;
label_185e54:
    // 0x185e54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x185e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185e58:
    // 0x185e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185e60: 0x3e00008  jr          $ra
    ctx->pc = 0x185E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E60u;
        // 0x185e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185E68u;
}
