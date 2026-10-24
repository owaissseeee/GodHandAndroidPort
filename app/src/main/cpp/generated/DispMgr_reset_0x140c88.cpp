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

// Function: DispMgr_reset
// Address: 0x140c88 - 0x140de0
void DispMgr_reset_0x140c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DispMgr_reset_0x140c88");
#endif

    switch (ctx->pc) {
        case 0x140c88u: goto label_140c88;
        case 0x140c8cu: goto label_140c8c;
        case 0x140c90u: goto label_140c90;
        case 0x140c94u: goto label_140c94;
        case 0x140c98u: goto label_140c98;
        case 0x140c9cu: goto label_140c9c;
        case 0x140ca0u: goto label_140ca0;
        case 0x140ca4u: goto label_140ca4;
        case 0x140ca8u: goto label_140ca8;
        case 0x140cacu: goto label_140cac;
        case 0x140cb0u: goto label_140cb0;
        case 0x140cb4u: goto label_140cb4;
        case 0x140cb8u: goto label_140cb8;
        case 0x140cbcu: goto label_140cbc;
        case 0x140cc0u: goto label_140cc0;
        case 0x140cc4u: goto label_140cc4;
        case 0x140cc8u: goto label_140cc8;
        case 0x140cccu: goto label_140ccc;
        case 0x140cd0u: goto label_140cd0;
        case 0x140cd4u: goto label_140cd4;
        case 0x140cd8u: goto label_140cd8;
        case 0x140cdcu: goto label_140cdc;
        case 0x140ce0u: goto label_140ce0;
        case 0x140ce4u: goto label_140ce4;
        case 0x140ce8u: goto label_140ce8;
        case 0x140cecu: goto label_140cec;
        case 0x140cf0u: goto label_140cf0;
        case 0x140cf4u: goto label_140cf4;
        case 0x140cf8u: goto label_140cf8;
        case 0x140cfcu: goto label_140cfc;
        case 0x140d00u: goto label_140d00;
        case 0x140d04u: goto label_140d04;
        case 0x140d08u: goto label_140d08;
        case 0x140d0cu: goto label_140d0c;
        case 0x140d10u: goto label_140d10;
        case 0x140d14u: goto label_140d14;
        case 0x140d18u: goto label_140d18;
        case 0x140d1cu: goto label_140d1c;
        case 0x140d20u: goto label_140d20;
        case 0x140d24u: goto label_140d24;
        case 0x140d28u: goto label_140d28;
        case 0x140d2cu: goto label_140d2c;
        case 0x140d30u: goto label_140d30;
        case 0x140d34u: goto label_140d34;
        case 0x140d38u: goto label_140d38;
        case 0x140d3cu: goto label_140d3c;
        case 0x140d40u: goto label_140d40;
        case 0x140d44u: goto label_140d44;
        case 0x140d48u: goto label_140d48;
        case 0x140d4cu: goto label_140d4c;
        case 0x140d50u: goto label_140d50;
        case 0x140d54u: goto label_140d54;
        case 0x140d58u: goto label_140d58;
        case 0x140d5cu: goto label_140d5c;
        case 0x140d60u: goto label_140d60;
        case 0x140d64u: goto label_140d64;
        case 0x140d68u: goto label_140d68;
        case 0x140d6cu: goto label_140d6c;
        case 0x140d70u: goto label_140d70;
        case 0x140d74u: goto label_140d74;
        case 0x140d78u: goto label_140d78;
        case 0x140d7cu: goto label_140d7c;
        case 0x140d80u: goto label_140d80;
        case 0x140d84u: goto label_140d84;
        case 0x140d88u: goto label_140d88;
        case 0x140d8cu: goto label_140d8c;
        case 0x140d90u: goto label_140d90;
        case 0x140d94u: goto label_140d94;
        case 0x140d98u: goto label_140d98;
        case 0x140d9cu: goto label_140d9c;
        case 0x140da0u: goto label_140da0;
        case 0x140da4u: goto label_140da4;
        case 0x140da8u: goto label_140da8;
        case 0x140dacu: goto label_140dac;
        case 0x140db0u: goto label_140db0;
        case 0x140db4u: goto label_140db4;
        case 0x140db8u: goto label_140db8;
        case 0x140dbcu: goto label_140dbc;
        case 0x140dc0u: goto label_140dc0;
        case 0x140dc4u: goto label_140dc4;
        case 0x140dc8u: goto label_140dc8;
        case 0x140dccu: goto label_140dcc;
        case 0x140dd0u: goto label_140dd0;
        case 0x140dd4u: goto label_140dd4;
        case 0x140dd8u: goto label_140dd8;
        case 0x140ddcu: goto label_140ddc;
        default: break;
    }

    ctx->pc = 0x140c88u;

label_140c88:
    // 0x140c88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x140c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_140c8c:
    // 0x140c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140c90:
    // 0x140c90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x140c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_140c94:
    // 0x140c94: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x140c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_140c98:
    // 0x140c98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_140c9c:
    // 0x140c9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x140c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_140ca0:
    // 0x140ca0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x140ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_140ca4:
    // 0x140ca4: 0x260422f0  addiu       $a0, $s0, 0x22F0
    ctx->pc = 0x140ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8944));
label_140ca8:
    // 0x140ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_140cac:
    // 0x140cac: 0xc0e94bc  jal         func_3A52F0
label_140cb0:
    if (ctx->pc == 0x140CB0u) {
        ctx->pc = 0x140CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CACu;
        // 0x140cb0: 0x261122f4  addiu       $s1, $s0, 0x22F4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8948));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CB4u;
        goto label_140cb4;
    }
    ctx->pc = 0x140CACu;
    SET_GPR_U32(ctx, 31, 0x140CB4u);
    ctx->pc = 0x140CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CACu;
    // 0x140cb0: 0x261122f4  addiu       $s1, $s0, 0x22F4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8948));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x140CACu, 0x140CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CB4u;
label_140cb4:
    // 0x140cb4: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x140cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_140cb8:
    // 0x140cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140cbc:
    // 0x140cbc: 0x260506e0  addiu       $a1, $s0, 0x6E0
    ctx->pc = 0x140cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1760));
label_140cc0:
    // 0x140cc0: 0xc0502fc  jal         func_140BF0
label_140cc4:
    if (ctx->pc == 0x140CC4u) {
        ctx->pc = 0x140CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CC0u;
        // 0x140cc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CC8u;
        goto label_140cc8;
    }
    ctx->pc = 0x140CC0u;
    SET_GPR_U32(ctx, 31, 0x140CC8u);
    ctx->pc = 0x140CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CC0u;
    // 0x140cc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140BF0u, 0x140CC0u, 0x140CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CC8u;
label_140cc8:
    // 0x140cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140ccc:
    // 0x140ccc: 0x26050460  addiu       $a1, $s0, 0x460
    ctx->pc = 0x140cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1120));
label_140cd0:
    // 0x140cd0: 0xc0502fc  jal         func_140BF0
label_140cd4:
    if (ctx->pc == 0x140CD4u) {
        ctx->pc = 0x140CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CD0u;
        // 0x140cd4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CD8u;
        goto label_140cd8;
    }
    ctx->pc = 0x140CD0u;
    SET_GPR_U32(ctx, 31, 0x140CD8u);
    ctx->pc = 0x140CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CD0u;
    // 0x140cd4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140BF0u, 0x140CD0u, 0x140CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CD8u;
label_140cd8:
    // 0x140cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140cdc:
    // 0x140cdc: 0x26050ea0  addiu       $a1, $s0, 0xEA0
    ctx->pc = 0x140cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3744));
label_140ce0:
    // 0x140ce0: 0xc0502fc  jal         func_140BF0
label_140ce4:
    if (ctx->pc == 0x140CE4u) {
        ctx->pc = 0x140CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CE0u;
        // 0x140ce4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CE8u;
        goto label_140ce8;
    }
    ctx->pc = 0x140CE0u;
    SET_GPR_U32(ctx, 31, 0x140CE8u);
    ctx->pc = 0x140CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CE0u;
    // 0x140ce4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140BF0u, 0x140CE0u, 0x140CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CE8u;
label_140ce8:
    // 0x140ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140cec:
    // 0x140cec: 0x26050cc0  addiu       $a1, $s0, 0xCC0
    ctx->pc = 0x140cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3264));
label_140cf0:
    // 0x140cf0: 0xc0502fc  jal         func_140BF0
label_140cf4:
    if (ctx->pc == 0x140CF4u) {
        ctx->pc = 0x140CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140CF0u;
        // 0x140cf4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140CF8u;
        goto label_140cf8;
    }
    ctx->pc = 0x140CF0u;
    SET_GPR_U32(ctx, 31, 0x140CF8u);
    ctx->pc = 0x140CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140CF0u;
    // 0x140cf4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140BF0u, 0x140CF0u, 0x140CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140CF8u;
label_140cf8:
    // 0x140cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140cfc:
    // 0x140cfc: 0x26051380  addiu       $a1, $s0, 0x1380
    ctx->pc = 0x140cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4992));
label_140d00:
    // 0x140d00: 0xc0502fc  jal         func_140BF0
label_140d04:
    if (ctx->pc == 0x140D04u) {
        ctx->pc = 0x140D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D00u;
        // 0x140d04: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D08u;
        goto label_140d08;
    }
    ctx->pc = 0x140D00u;
    SET_GPR_U32(ctx, 31, 0x140D08u);
    ctx->pc = 0x140D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D00u;
    // 0x140d04: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140BF0u, 0x140D00u, 0x140D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D08u;
label_140d08:
    // 0x140d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140d0c:
    // 0x140d0c: 0x26051470  addiu       $a1, $s0, 0x1470
    ctx->pc = 0x140d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5232));
label_140d10:
    // 0x140d10: 0xc0502fc  jal         func_140BF0
label_140d14:
    if (ctx->pc == 0x140D14u) {
        ctx->pc = 0x140D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D10u;
        // 0x140d14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D18u;
        goto label_140d18;
    }
    ctx->pc = 0x140D10u;
    SET_GPR_U32(ctx, 31, 0x140D18u);
    ctx->pc = 0x140D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D10u;
    // 0x140d14: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140BF0u, 0x140D10u, 0x140D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D18u;
label_140d18:
    // 0x140d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140d1c:
    // 0x140d1c: 0x26051520  addiu       $a1, $s0, 0x1520
    ctx->pc = 0x140d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5408));
label_140d20:
    // 0x140d20: 0xc0502fc  jal         func_140BF0
label_140d24:
    if (ctx->pc == 0x140D24u) {
        ctx->pc = 0x140D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D20u;
        // 0x140d24: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D28u;
        goto label_140d28;
    }
    ctx->pc = 0x140D20u;
    SET_GPR_U32(ctx, 31, 0x140D28u);
    ctx->pc = 0x140D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D20u;
    // 0x140d24: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140BF0u, 0x140D20u, 0x140D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D28u;
label_140d28:
    // 0x140d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140d2c:
    // 0x140d2c: 0x260515c0  addiu       $a1, $s0, 0x15C0
    ctx->pc = 0x140d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5568));
label_140d30:
    // 0x140d30: 0xc0502fc  jal         func_140BF0
label_140d34:
    if (ctx->pc == 0x140D34u) {
        ctx->pc = 0x140D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D30u;
        // 0x140d34: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D38u;
        goto label_140d38;
    }
    ctx->pc = 0x140D30u;
    SET_GPR_U32(ctx, 31, 0x140D38u);
    ctx->pc = 0x140D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D30u;
    // 0x140d34: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140BF0u, 0x140D30u, 0x140D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D38u;
label_140d38:
    // 0x140d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140d3c:
    // 0x140d3c: 0x26051cb0  addiu       $a1, $s0, 0x1CB0
    ctx->pc = 0x140d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 7344));
label_140d40:
    // 0x140d40: 0xc0502fc  jal         func_140BF0
label_140d44:
    if (ctx->pc == 0x140D44u) {
        ctx->pc = 0x140D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D40u;
        // 0x140d44: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D48u;
        goto label_140d48;
    }
    ctx->pc = 0x140D40u;
    SET_GPR_U32(ctx, 31, 0x140D48u);
    ctx->pc = 0x140D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D40u;
    // 0x140d44: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140BF0u, 0x140D40u, 0x140D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D48u;
label_140d48:
    // 0x140d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140d4c:
    // 0x140d4c: 0x26051910  addiu       $a1, $s0, 0x1910
    ctx->pc = 0x140d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6416));
label_140d50:
    // 0x140d50: 0xc0502fc  jal         func_140BF0
label_140d54:
    if (ctx->pc == 0x140D54u) {
        ctx->pc = 0x140D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D50u;
        // 0x140d54: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D58u;
        goto label_140d58;
    }
    ctx->pc = 0x140D50u;
    SET_GPR_U32(ctx, 31, 0x140D58u);
    ctx->pc = 0x140D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D50u;
    // 0x140d54: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140BF0u, 0x140D50u, 0x140D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D58u;
label_140d58:
    // 0x140d58: 0x26051ae0  addiu       $a1, $s0, 0x1AE0
    ctx->pc = 0x140d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6880));
label_140d5c:
    // 0x140d5c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x140d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_140d60:
    // 0x140d60: 0xc0502fc  jal         func_140BF0
label_140d64:
    if (ctx->pc == 0x140D64u) {
        ctx->pc = 0x140D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D60u;
        // 0x140d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D68u;
        goto label_140d68;
    }
    ctx->pc = 0x140D60u;
    SET_GPR_U32(ctx, 31, 0x140D68u);
    ctx->pc = 0x140D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D60u;
    // 0x140d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140BF0u, 0x140D60u, 0x140D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D68u;
label_140d68:
    // 0x140d68: 0xc04f4f0  jal         func_13D3C0
label_140d6c:
    if (ctx->pc == 0x140D6Cu) {
        ctx->pc = 0x140D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D68u;
        // 0x140d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D70u;
        goto label_140d70;
    }
    ctx->pc = 0x140D68u;
    SET_GPR_U32(ctx, 31, 0x140D70u);
    ctx->pc = 0x140D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D68u;
    // 0x140d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D3C0u, 0x140D68u, 0x140D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D70u;
label_140d70:
    // 0x140d70: 0xc04fb3c  jal         func_13ECF0
label_140d74:
    if (ctx->pc == 0x140D74u) {
        ctx->pc = 0x140D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D70u;
        // 0x140d74: 0x260403a0  addiu       $a0, $s0, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D78u;
        goto label_140d78;
    }
    ctx->pc = 0x140D70u;
    SET_GPR_U32(ctx, 31, 0x140D78u);
    ctx->pc = 0x140D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D70u;
    // 0x140d74: 0x260403a0  addiu       $a0, $s0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECF0u, 0x140D70u, 0x140D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D78u;
label_140d78:
    // 0x140d78: 0xc04f202  jal         func_13C808
label_140d7c:
    if (ctx->pc == 0x140D7Cu) {
        ctx->pc = 0x140D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D78u;
        // 0x140d7c: 0x26041dc0  addiu       $a0, $s0, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D80u;
        goto label_140d80;
    }
    ctx->pc = 0x140D78u;
    SET_GPR_U32(ctx, 31, 0x140D80u);
    ctx->pc = 0x140D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D78u;
    // 0x140d7c: 0x26041dc0  addiu       $a0, $s0, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C808u, 0x140D78u, 0x140D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D80u;
label_140d80:
    // 0x140d80: 0xc04fcbe  jal         func_13F2F8
label_140d84:
    if (ctx->pc == 0x140D84u) {
        ctx->pc = 0x140D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D80u;
        // 0x140d84: 0x26041e90  addiu       $a0, $s0, 0x1E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D88u;
        goto label_140d88;
    }
    ctx->pc = 0x140D80u;
    SET_GPR_U32(ctx, 31, 0x140D88u);
    ctx->pc = 0x140D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D80u;
    // 0x140d84: 0x26041e90  addiu       $a0, $s0, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F8u, 0x140D80u, 0x140D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D88u;
label_140d88:
    // 0x140d88: 0xc04f9f6  jal         func_13E7D8
label_140d8c:
    if (ctx->pc == 0x140D8Cu) {
        ctx->pc = 0x140D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D88u;
        // 0x140d8c: 0x26042220  addiu       $a0, $s0, 0x2220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D90u;
        goto label_140d90;
    }
    ctx->pc = 0x140D88u;
    SET_GPR_U32(ctx, 31, 0x140D90u);
    ctx->pc = 0x140D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D88u;
    // 0x140d8c: 0x26042220  addiu       $a0, $s0, 0x2220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E7D8u, 0x140D88u, 0x140D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D90u;
label_140d90:
    // 0x140d90: 0xc051c06  jal         func_147018
label_140d94:
    if (ctx->pc == 0x140D94u) {
        ctx->pc = 0x140D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D90u;
        // 0x140d94: 0x26041a20  addiu       $a0, $s0, 0x1A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140D98u;
        goto label_140d98;
    }
    ctx->pc = 0x140D90u;
    SET_GPR_U32(ctx, 31, 0x140D98u);
    ctx->pc = 0x140D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D90u;
    // 0x140d94: 0x26041a20  addiu       $a0, $s0, 0x1A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147018u, 0x140D90u, 0x140D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D98u;
label_140d98:
    // 0x140d98: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x140d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_140d9c:
    // 0x140d9c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_140da0:
    if (ctx->pc == 0x140DA0u) {
        ctx->pc = 0x140DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D9Cu;
        // 0x140da0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140DA4u;
        goto label_140da4;
    }
    ctx->pc = 0x140D9Cu;
    {
        const bool branch_taken_0x140d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x140d9c) {
            ctx->pc = 0x140DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140D9Cu;
            // 0x140da0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140DBCu;
            goto label_140dbc;
        }
    }
    ctx->pc = 0x140DA4u;
label_140da4:
    // 0x140da4: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x140da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_140da8:
    // 0x140da8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x140da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_140dac:
    // 0x140dac: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x140dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_140db0:
    // 0x140db0: 0x60f809  jalr        $v1
label_140db4:
    if (ctx->pc == 0x140DB4u) {
        ctx->pc = 0x140DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DB0u;
        // 0x140db4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140DB8u;
        goto label_140db8;
    }
    ctx->pc = 0x140DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x140DB8u);
        ctx->pc = 0x140DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DB0u;
        // 0x140db4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140DB0u, 0x140DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140DB8u;
label_140db8:
    // 0x140db8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x140db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_140dbc:
    // 0x140dbc: 0x641fff6  bgez        $s2, . + 4 + (-0xA << 2)
label_140dc0:
    if (ctx->pc == 0x140DC0u) {
        ctx->pc = 0x140DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DBCu;
        // 0x140dc0: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140DC4u;
        goto label_140dc4;
    }
    ctx->pc = 0x140DBCu;
    {
        const bool branch_taken_0x140dbc = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x140DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DBCu;
        // 0x140dc0: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140dbc) {
            ctx->pc = 0x140D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140d98;
        }
    }
    ctx->pc = 0x140DC4u;
label_140dc4:
    // 0x140dc4: 0xa20023bc  sb          $zero, 0x23BC($s0)
    ctx->pc = 0x140dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9148), (uint8_t)GPR_U32(ctx, 0));
label_140dc8:
    // 0x140dc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x140dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_140dcc:
    // 0x140dcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x140dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_140dd0:
    // 0x140dd0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x140dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_140dd4:
    // 0x140dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140dd8:
    // 0x140dd8: 0x3e00008  jr          $ra
label_140ddc:
    if (ctx->pc == 0x140DDCu) {
        ctx->pc = 0x140DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DD8u;
        // 0x140ddc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140DE0u;
        goto label_fallthrough_0x140dd8;
    }
    ctx->pc = 0x140DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DD8u;
        // 0x140ddc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x140dd8:
    ctx->pc = 0x140DE0u;
}
