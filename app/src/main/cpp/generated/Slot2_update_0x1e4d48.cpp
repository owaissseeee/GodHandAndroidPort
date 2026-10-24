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

// Function: Slot2_update
// Address: 0x1e4d48 - 0x1e4e28
void Slot2_update_0x1e4d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_update_0x1e4d48");
#endif

    switch (ctx->pc) {
        case 0x1e4d48u: goto label_1e4d48;
        case 0x1e4d4cu: goto label_1e4d4c;
        case 0x1e4d50u: goto label_1e4d50;
        case 0x1e4d54u: goto label_1e4d54;
        case 0x1e4d58u: goto label_1e4d58;
        case 0x1e4d5cu: goto label_1e4d5c;
        case 0x1e4d60u: goto label_1e4d60;
        case 0x1e4d64u: goto label_1e4d64;
        case 0x1e4d68u: goto label_1e4d68;
        case 0x1e4d6cu: goto label_1e4d6c;
        case 0x1e4d70u: goto label_1e4d70;
        case 0x1e4d74u: goto label_1e4d74;
        case 0x1e4d78u: goto label_1e4d78;
        case 0x1e4d7cu: goto label_1e4d7c;
        case 0x1e4d80u: goto label_1e4d80;
        case 0x1e4d84u: goto label_1e4d84;
        case 0x1e4d88u: goto label_1e4d88;
        case 0x1e4d8cu: goto label_1e4d8c;
        case 0x1e4d90u: goto label_1e4d90;
        case 0x1e4d94u: goto label_1e4d94;
        case 0x1e4d98u: goto label_1e4d98;
        case 0x1e4d9cu: goto label_1e4d9c;
        case 0x1e4da0u: goto label_1e4da0;
        case 0x1e4da4u: goto label_1e4da4;
        case 0x1e4da8u: goto label_1e4da8;
        case 0x1e4dacu: goto label_1e4dac;
        case 0x1e4db0u: goto label_1e4db0;
        case 0x1e4db4u: goto label_1e4db4;
        case 0x1e4db8u: goto label_1e4db8;
        case 0x1e4dbcu: goto label_1e4dbc;
        case 0x1e4dc0u: goto label_1e4dc0;
        case 0x1e4dc4u: goto label_1e4dc4;
        case 0x1e4dc8u: goto label_1e4dc8;
        case 0x1e4dccu: goto label_1e4dcc;
        case 0x1e4dd0u: goto label_1e4dd0;
        case 0x1e4dd4u: goto label_1e4dd4;
        case 0x1e4dd8u: goto label_1e4dd8;
        case 0x1e4ddcu: goto label_1e4ddc;
        case 0x1e4de0u: goto label_1e4de0;
        case 0x1e4de4u: goto label_1e4de4;
        case 0x1e4de8u: goto label_1e4de8;
        case 0x1e4decu: goto label_1e4dec;
        case 0x1e4df0u: goto label_1e4df0;
        case 0x1e4df4u: goto label_1e4df4;
        case 0x1e4df8u: goto label_1e4df8;
        case 0x1e4dfcu: goto label_1e4dfc;
        case 0x1e4e00u: goto label_1e4e00;
        case 0x1e4e04u: goto label_1e4e04;
        case 0x1e4e08u: goto label_1e4e08;
        case 0x1e4e0cu: goto label_1e4e0c;
        case 0x1e4e10u: goto label_1e4e10;
        case 0x1e4e14u: goto label_1e4e14;
        case 0x1e4e18u: goto label_1e4e18;
        case 0x1e4e1cu: goto label_1e4e1c;
        case 0x1e4e20u: goto label_1e4e20;
        case 0x1e4e24u: goto label_1e4e24;
        default: break;
    }

    ctx->pc = 0x1e4d48u;

label_1e4d48:
    // 0x1e4d48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e4d4c:
    // 0x1e4d4c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1e4d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1e4d50:
    // 0x1e4d50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e4d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e4d54:
    // 0x1e4d54: 0x2463e140  addiu       $v1, $v1, -0x1EC0
    ctx->pc = 0x1e4d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959424));
label_1e4d58:
    // 0x1e4d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4d5c:
    // 0x1e4d5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e4d60:
    // 0x1e4d60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d64:
    // 0x1e4d64: 0x26300400  addiu       $s0, $s1, 0x400
    ctx->pc = 0x1e4d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_1e4d68:
    // 0x1e4d68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e4d6c:
    // 0x1e4d6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e4d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e4d70:
    // 0x1e4d70: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1e4d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4d74:
    // 0x1e4d74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e4d78:
    // 0x1e4d78: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1e4d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1e4d7c:
    // 0x1e4d7c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e4d80:
    // 0x1e4d80: 0x40f809  jalr        $v0
label_1e4d84:
    if (ctx->pc == 0x1E4D84u) {
        ctx->pc = 0x1E4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D80u;
        // 0x1e4d84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D88u;
        goto label_1e4d88;
    }
    ctx->pc = 0x1E4D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4D88u);
        ctx->pc = 0x1E4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D80u;
        // 0x1e4d84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4D80u, 0x1E4D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4D88u;
label_1e4d88:
    // 0x1e4d88: 0xc079afa  jal         func_1E6BE8
label_1e4d8c:
    if (ctx->pc == 0x1E4D8Cu) {
        ctx->pc = 0x1E4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D88u;
        // 0x1e4d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D90u;
        goto label_1e4d90;
    }
    ctx->pc = 0x1E4D88u;
    SET_GPR_U32(ctx, 31, 0x1E4D90u);
    ctx->pc = 0x1E4D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D88u;
    // 0x1e4d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E4D88u, 0x1E4D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D90u;
label_1e4d90:
    // 0x1e4d90: 0xc079b36  jal         func_1E6CD8
label_1e4d94:
    if (ctx->pc == 0x1E4D94u) {
        ctx->pc = 0x1E4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D90u;
        // 0x1e4d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4D98u;
        goto label_1e4d98;
    }
    ctx->pc = 0x1E4D90u;
    SET_GPR_U32(ctx, 31, 0x1E4D98u);
    ctx->pc = 0x1E4D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D90u;
    // 0x1e4d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6CD8u, 0x1E4D90u, 0x1E4D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4D98u;
label_1e4d98:
    // 0x1e4d98: 0xc079b68  jal         func_1E6DA0
label_1e4d9c:
    if (ctx->pc == 0x1E4D9Cu) {
        ctx->pc = 0x1E4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4D98u;
        // 0x1e4d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DA0u;
        goto label_1e4da0;
    }
    ctx->pc = 0x1E4D98u;
    SET_GPR_U32(ctx, 31, 0x1E4DA0u);
    ctx->pc = 0x1E4D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4D98u;
    // 0x1e4d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6DA0u, 0x1E4D98u, 0x1E4DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DA0u;
label_1e4da0:
    // 0x1e4da0: 0xc079b9a  jal         func_1E6E68
label_1e4da4:
    if (ctx->pc == 0x1E4DA4u) {
        ctx->pc = 0x1E4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DA0u;
        // 0x1e4da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DA8u;
        goto label_1e4da8;
    }
    ctx->pc = 0x1E4DA0u;
    SET_GPR_U32(ctx, 31, 0x1E4DA8u);
    ctx->pc = 0x1E4DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DA0u;
    // 0x1e4da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6E68u, 0x1E4DA0u, 0x1E4DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DA8u;
label_1e4da8:
    // 0x1e4da8: 0xc079bfa  jal         func_1E6FE8
label_1e4dac:
    if (ctx->pc == 0x1E4DACu) {
        ctx->pc = 0x1E4DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DA8u;
        // 0x1e4dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DB0u;
        goto label_1e4db0;
    }
    ctx->pc = 0x1E4DA8u;
    SET_GPR_U32(ctx, 31, 0x1E4DB0u);
    ctx->pc = 0x1E4DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DA8u;
    // 0x1e4dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6FE8u, 0x1E4DA8u, 0x1E4DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DB0u;
label_1e4db0:
    // 0x1e4db0: 0xc079e7a  jal         func_1E79E8
label_1e4db4:
    if (ctx->pc == 0x1E4DB4u) {
        ctx->pc = 0x1E4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DB0u;
        // 0x1e4db4: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DB8u;
        goto label_1e4db8;
    }
    ctx->pc = 0x1E4DB0u;
    SET_GPR_U32(ctx, 31, 0x1E4DB8u);
    ctx->pc = 0x1E4DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DB0u;
    // 0x1e4db4: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E79E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E79E8u, 0x1E4DB0u, 0x1E4DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DB8u;
label_1e4db8:
    // 0x1e4db8: 0xc07a20c  jal         func_1E8830
label_1e4dbc:
    if (ctx->pc == 0x1E4DBCu) {
        ctx->pc = 0x1E4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DB8u;
        // 0x1e4dbc: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DC0u;
        goto label_1e4dc0;
    }
    ctx->pc = 0x1E4DB8u;
    SET_GPR_U32(ctx, 31, 0x1E4DC0u);
    ctx->pc = 0x1E4DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DB8u;
    // 0x1e4dbc: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8830u, 0x1E4DB8u, 0x1E4DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DC0u;
label_1e4dc0:
    // 0x1e4dc0: 0xc07a20c  jal         func_1E8830
label_1e4dc4:
    if (ctx->pc == 0x1E4DC4u) {
        ctx->pc = 0x1E4DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DC0u;
        // 0x1e4dc4: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DC8u;
        goto label_1e4dc8;
    }
    ctx->pc = 0x1E4DC0u;
    SET_GPR_U32(ctx, 31, 0x1E4DC8u);
    ctx->pc = 0x1E4DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DC0u;
    // 0x1e4dc4: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8830u, 0x1E4DC0u, 0x1E4DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DC8u;
label_1e4dc8:
    // 0x1e4dc8: 0xc07a20c  jal         func_1E8830
label_1e4dcc:
    if (ctx->pc == 0x1E4DCCu) {
        ctx->pc = 0x1E4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DC8u;
        // 0x1e4dcc: 0x26240228  addiu       $a0, $s1, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DD0u;
        goto label_1e4dd0;
    }
    ctx->pc = 0x1E4DC8u;
    SET_GPR_U32(ctx, 31, 0x1E4DD0u);
    ctx->pc = 0x1E4DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DC8u;
    // 0x1e4dcc: 0x26240228  addiu       $a0, $s1, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8830u, 0x1E4DC8u, 0x1E4DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DD0u;
label_1e4dd0:
    // 0x1e4dd0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1e4dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1e4dd4:
    // 0x1e4dd4: 0xc07e9c4  jal         func_1FA710
label_1e4dd8:
    if (ctx->pc == 0x1E4DD8u) {
        ctx->pc = 0x1E4DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DD4u;
        // 0x1e4dd8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DDCu;
        goto label_1e4ddc;
    }
    ctx->pc = 0x1E4DD4u;
    SET_GPR_U32(ctx, 31, 0x1E4DDCu);
    ctx->pc = 0x1E4DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DD4u;
    // 0x1e4dd8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1E4DD4u, 0x1E4DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DDCu;
label_1e4ddc:
    // 0x1e4ddc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e4ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4de0:
    // 0x1e4de0: 0xc0b5952  jal         func_2D6548
label_1e4de4:
    if (ctx->pc == 0x1E4DE4u) {
        ctx->pc = 0x1E4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DE0u;
        // 0x1e4de4: 0x26240450  addiu       $a0, $s1, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DE8u;
        goto label_1e4de8;
    }
    ctx->pc = 0x1E4DE0u;
    SET_GPR_U32(ctx, 31, 0x1E4DE8u);
    ctx->pc = 0x1E4DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DE0u;
    // 0x1e4de4: 0x26240450  addiu       $a0, $s1, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1E4DE0u, 0x1E4DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DE8u;
label_1e4de8:
    // 0x1e4de8: 0xc079cf0  jal         func_1E73C0
label_1e4dec:
    if (ctx->pc == 0x1E4DECu) {
        ctx->pc = 0x1E4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DE8u;
        // 0x1e4dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DF0u;
        goto label_1e4df0;
    }
    ctx->pc = 0x1E4DE8u;
    SET_GPR_U32(ctx, 31, 0x1E4DF0u);
    ctx->pc = 0x1E4DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DE8u;
    // 0x1e4dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73C0u, 0x1E4DE8u, 0x1E4DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DF0u;
label_1e4df0:
    // 0x1e4df0: 0xc079d10  jal         func_1E7440
label_1e4df4:
    if (ctx->pc == 0x1E4DF4u) {
        ctx->pc = 0x1E4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DF0u;
        // 0x1e4df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DF8u;
        goto label_1e4df8;
    }
    ctx->pc = 0x1E4DF0u;
    SET_GPR_U32(ctx, 31, 0x1E4DF8u);
    ctx->pc = 0x1E4DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DF0u;
    // 0x1e4df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7440u, 0x1E4DF0u, 0x1E4DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4DF8u;
label_1e4df8:
    // 0x1e4df8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1e4df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1e4dfc:
    // 0x1e4dfc: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1e4dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
label_1e4e00:
    // 0x1e4e00: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1e4e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1e4e04:
    // 0x1e4e04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e4e08:
    if (ctx->pc == 0x1E4E08u) {
        ctx->pc = 0x1E4E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E04u;
        // 0x1e4e08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E0Cu;
        goto label_1e4e0c;
    }
    ctx->pc = 0x1E4E04u;
    {
        const bool branch_taken_0x1e4e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E04u;
        // 0x1e4e08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e04) {
            ctx->pc = 0x1E4E18u;
            goto label_1e4e18;
        }
    }
    ctx->pc = 0x1E4E0Cu;
label_1e4e0c:
    // 0x1e4e0c: 0xc079a4e  jal         func_1E6938
label_1e4e10:
    if (ctx->pc == 0x1E4E10u) {
        ctx->pc = 0x1E4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E0Cu;
        // 0x1e4e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E14u;
        goto label_1e4e14;
    }
    ctx->pc = 0x1E4E0Cu;
    SET_GPR_U32(ctx, 31, 0x1E4E14u);
    ctx->pc = 0x1E4E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E0Cu;
    // 0x1e4e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6938u, 0x1E4E0Cu, 0x1E4E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E14u;
label_1e4e14:
    // 0x1e4e14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e4e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4e18:
    // 0x1e4e18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4e1c:
    // 0x1e4e1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4e20:
    // 0x1e4e20: 0x3e00008  jr          $ra
label_1e4e24:
    if (ctx->pc == 0x1E4E24u) {
        ctx->pc = 0x1E4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E20u;
        // 0x1e4e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E28u;
        goto label_fallthrough_0x1e4e20;
    }
    ctx->pc = 0x1E4E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E20u;
        // 0x1e4e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e4e20:
    ctx->pc = 0x1E4E28u;
}
