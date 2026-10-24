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

// Function: func_002B8B50
// Address: 0x2b8b50 - 0x2b8d88
void func_002B8B50_0x2b8b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B8B50_0x2b8b50");
#endif

    switch (ctx->pc) {
        case 0x2b8b64u: goto label_2b8b64;
        case 0x2b8b70u: goto label_2b8b70;
        case 0x2b8b84u: goto label_2b8b84;
        case 0x2b8b98u: goto label_2b8b98;
        case 0x2b8bacu: goto label_2b8bac;
        case 0x2b8bc0u: goto label_2b8bc0;
        case 0x2b8bd4u: goto label_2b8bd4;
        case 0x2b8be8u: goto label_2b8be8;
        case 0x2b8bfcu: goto label_2b8bfc;
        case 0x2b8c10u: goto label_2b8c10;
        case 0x2b8c24u: goto label_2b8c24;
        case 0x2b8c38u: goto label_2b8c38;
        case 0x2b8c4cu: goto label_2b8c4c;
        case 0x2b8c60u: goto label_2b8c60;
        case 0x2b8c74u: goto label_2b8c74;
        case 0x2b8c88u: goto label_2b8c88;
        case 0x2b8c9cu: goto label_2b8c9c;
        case 0x2b8cb0u: goto label_2b8cb0;
        case 0x2b8cc4u: goto label_2b8cc4;
        case 0x2b8cd8u: goto label_2b8cd8;
        case 0x2b8cecu: goto label_2b8cec;
        case 0x2b8d00u: goto label_2b8d00;
        case 0x2b8d14u: goto label_2b8d14;
        case 0x2b8d28u: goto label_2b8d28;
        case 0x2b8d3cu: goto label_2b8d3c;
        case 0x2b8d50u: goto label_2b8d50;
        case 0x2b8d64u: goto label_2b8d64;
        case 0x2b8d78u: goto label_2b8d78;
        default: break;
    }

    ctx->pc = 0x2b8b50u;

    // 0x2b8b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8b54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b8b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b8b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8b5c: 0xc0ae86c  jal         func_2BA1B0
    ctx->pc = 0x2B8B5Cu;
    SET_GPR_U32(ctx, 31, 0x2B8B64u);
    ctx->pc = 0x2B8B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B5Cu;
    // 0x2b8b60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA1B0u, 0x2B8B5Cu, 0x2B8B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B64u;
label_2b8b64:
    // 0x2b8b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8b68: 0xc0ae872  jal         func_2BA1C8
    ctx->pc = 0x2B8B68u;
    SET_GPR_U32(ctx, 31, 0x2B8B70u);
    ctx->pc = 0x2B8B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B68u;
    // 0x2b8b6c: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA1C8u, 0x2B8B68u, 0x2B8B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B70u;
label_2b8b70:
    // 0x2b8b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8b74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8b78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b8b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8b7c: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8B7Cu;
    SET_GPR_U32(ctx, 31, 0x2B8B84u);
    ctx->pc = 0x2B8B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B7Cu;
    // 0x2b8b80: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8B7Cu, 0x2B8B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B84u;
label_2b8b84:
    // 0x2b8b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8b88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8b8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b8b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8b90: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8B90u;
    SET_GPR_U32(ctx, 31, 0x2B8B98u);
    ctx->pc = 0x2B8B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8B90u;
    // 0x2b8b94: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8B90u, 0x2B8B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8B98u;
label_2b8b98:
    // 0x2b8b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8b9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8ba0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b8ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8ba4: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8BA4u;
    SET_GPR_U32(ctx, 31, 0x2B8BACu);
    ctx->pc = 0x2B8BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8BA4u;
    // 0x2b8ba8: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8BA4u, 0x2B8BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8BACu;
label_2b8bac:
    // 0x2b8bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8bb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8bb4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b8bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8bb8: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8BB8u;
    SET_GPR_U32(ctx, 31, 0x2B8BC0u);
    ctx->pc = 0x2B8BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8BB8u;
    // 0x2b8bbc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8BB8u, 0x2B8BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8BC0u;
label_2b8bc0:
    // 0x2b8bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8bc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8bc8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b8bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8bcc: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8BCCu;
    SET_GPR_U32(ctx, 31, 0x2B8BD4u);
    ctx->pc = 0x2B8BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8BCCu;
    // 0x2b8bd0: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8BCCu, 0x2B8BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8BD4u;
label_2b8bd4:
    // 0x2b8bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8bd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8bdc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b8bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8be0: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8BE0u;
    SET_GPR_U32(ctx, 31, 0x2B8BE8u);
    ctx->pc = 0x2B8BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8BE0u;
    // 0x2b8be4: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8BE0u, 0x2B8BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8BE8u;
label_2b8be8:
    // 0x2b8be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8bec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8bf0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b8bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b8bf4: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8BF4u;
    SET_GPR_U32(ctx, 31, 0x2B8BFCu);
    ctx->pc = 0x2B8BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8BF4u;
    // 0x2b8bf8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8BF4u, 0x2B8BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8BFCu;
label_2b8bfc:
    // 0x2b8bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8c04: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b8c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b8c08: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8C08u;
    SET_GPR_U32(ctx, 31, 0x2B8C10u);
    ctx->pc = 0x2B8C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C08u;
    // 0x2b8c0c: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8C08u, 0x2B8C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C10u;
label_2b8c10:
    // 0x2b8c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8c18: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b8c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b8c1c: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8C1Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C24u);
    ctx->pc = 0x2B8C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C1Cu;
    // 0x2b8c20: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8C1Cu, 0x2B8C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C24u;
label_2b8c24:
    // 0x2b8c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8c2c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2b8c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b8c30: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8C30u;
    SET_GPR_U32(ctx, 31, 0x2B8C38u);
    ctx->pc = 0x2B8C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C30u;
    // 0x2b8c34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8C30u, 0x2B8C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C38u;
label_2b8c38:
    // 0x2b8c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8c40: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2b8c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b8c44: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8C44u;
    SET_GPR_U32(ctx, 31, 0x2B8C4Cu);
    ctx->pc = 0x2B8C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C44u;
    // 0x2b8c48: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8C44u, 0x2B8C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C4Cu;
label_2b8c4c:
    // 0x2b8c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8c54: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2b8c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b8c58: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8C58u;
    SET_GPR_U32(ctx, 31, 0x2B8C60u);
    ctx->pc = 0x2B8C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C58u;
    // 0x2b8c5c: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8C58u, 0x2B8C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C60u;
label_2b8c60:
    // 0x2b8c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8c68: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2b8c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b8c6c: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8C6Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C74u);
    ctx->pc = 0x2B8C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C6Cu;
    // 0x2b8c70: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8C6Cu, 0x2B8C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C74u;
label_2b8c74:
    // 0x2b8c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8c7c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2b8c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b8c80: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8C80u;
    SET_GPR_U32(ctx, 31, 0x2B8C88u);
    ctx->pc = 0x2B8C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C80u;
    // 0x2b8c84: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8C80u, 0x2B8C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C88u;
label_2b8c88:
    // 0x2b8c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8c90: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2b8c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b8c94: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8C94u;
    SET_GPR_U32(ctx, 31, 0x2B8C9Cu);
    ctx->pc = 0x2B8C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8C94u;
    // 0x2b8c98: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8C94u, 0x2B8C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8C9Cu;
label_2b8c9c:
    // 0x2b8c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8ca0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8ca4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2b8ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b8ca8: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8CA8u;
    SET_GPR_U32(ctx, 31, 0x2B8CB0u);
    ctx->pc = 0x2B8CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8CA8u;
    // 0x2b8cac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8CA8u, 0x2B8CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8CB0u;
label_2b8cb0:
    // 0x2b8cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8cb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8cb8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2b8cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b8cbc: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8CBCu;
    SET_GPR_U32(ctx, 31, 0x2B8CC4u);
    ctx->pc = 0x2B8CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8CBCu;
    // 0x2b8cc0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8CBCu, 0x2B8CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8CC4u;
label_2b8cc4:
    // 0x2b8cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8cc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8ccc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2b8cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b8cd0: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8CD0u;
    SET_GPR_U32(ctx, 31, 0x2B8CD8u);
    ctx->pc = 0x2B8CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8CD0u;
    // 0x2b8cd4: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8CD0u, 0x2B8CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8CD8u;
label_2b8cd8:
    // 0x2b8cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8cdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8ce0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2b8ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b8ce4: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8CE4u;
    SET_GPR_U32(ctx, 31, 0x2B8CECu);
    ctx->pc = 0x2B8CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8CE4u;
    // 0x2b8ce8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8CE4u, 0x2B8CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8CECu;
label_2b8cec:
    // 0x2b8cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8cf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8cf4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2b8cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b8cf8: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8CF8u;
    SET_GPR_U32(ctx, 31, 0x2B8D00u);
    ctx->pc = 0x2B8CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8CF8u;
    // 0x2b8cfc: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8CF8u, 0x2B8D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D00u;
label_2b8d00:
    // 0x2b8d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8d08: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2b8d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b8d0c: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8D0Cu;
    SET_GPR_U32(ctx, 31, 0x2B8D14u);
    ctx->pc = 0x2B8D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8D0Cu;
    // 0x2b8d10: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8D0Cu, 0x2B8D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D14u;
label_2b8d14:
    // 0x2b8d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8d1c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2b8d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b8d20: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8D20u;
    SET_GPR_U32(ctx, 31, 0x2B8D28u);
    ctx->pc = 0x2B8D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8D20u;
    // 0x2b8d24: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8D20u, 0x2B8D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D28u;
label_2b8d28:
    // 0x2b8d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8d30: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2b8d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b8d34: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8D34u;
    SET_GPR_U32(ctx, 31, 0x2B8D3Cu);
    ctx->pc = 0x2B8D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8D34u;
    // 0x2b8d38: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8D34u, 0x2B8D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D3Cu;
label_2b8d3c:
    // 0x2b8d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8d44: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2b8d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b8d48: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8D48u;
    SET_GPR_U32(ctx, 31, 0x2B8D50u);
    ctx->pc = 0x2B8D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8D48u;
    // 0x2b8d4c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8D48u, 0x2B8D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D50u;
label_2b8d50:
    // 0x2b8d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8d58: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2b8d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b8d5c: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8D5Cu;
    SET_GPR_U32(ctx, 31, 0x2B8D64u);
    ctx->pc = 0x2B8D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8D5Cu;
    // 0x2b8d60: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8D5Cu, 0x2B8D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D64u;
label_2b8d64:
    // 0x2b8d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b8d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8d6c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2b8d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b8d70: 0xc0ae362  jal         func_2B8D88
    ctx->pc = 0x2B8D70u;
    SET_GPR_U32(ctx, 31, 0x2B8D78u);
    ctx->pc = 0x2B8D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8D70u;
    // 0x2b8d74: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D88u, 0x2B8D70u, 0x2B8D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8D78u;
label_2b8d78:
    // 0x2b8d78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b8d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8d80: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8D80u;
        // 0x2b8d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8D88u;
}
