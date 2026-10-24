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

// Function: func_001E6B70
// Address: 0x1e6b70 - 0x1e6be8
void func_001E6B70_0x1e6b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E6B70_0x1e6b70");
#endif

    switch (ctx->pc) {
        case 0x1e6bacu: goto label_1e6bac;
        case 0x1e6bb8u: goto label_1e6bb8;
        case 0x1e6bccu: goto label_1e6bcc;
        case 0x1e6bd8u: goto label_1e6bd8;
        default: break;
    }

    ctx->pc = 0x1e6b70u;

    // 0x1e6b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6b74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e6b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6b7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b80: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6B80u;
    {
        const bool branch_taken_0x1e6b80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B80u;
        // 0x1e6b84: 0xa60003e0  sh          $zero, 0x3E0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 992), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b80) {
            ctx->pc = 0x1E6B90u;
            goto label_1e6b90;
        }
    }
    ctx->pc = 0x1E6B88u;
    // 0x1e6b88: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e6b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6b8c: 0xa60203e0  sh          $v0, 0x3E0($s0)
    ctx->pc = 0x1e6b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 992), (uint16_t)GPR_U32(ctx, 2));
label_1e6b90:
    // 0x1e6b90: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E6B90u;
    {
        const bool branch_taken_0x1e6b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B90u;
        // 0x1e6b94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b90) {
            ctx->pc = 0x1E6BC0u;
            goto label_1e6bc0;
        }
    }
    ctx->pc = 0x1E6B98u;
    // 0x1e6b98: 0x960203e0  lhu         $v0, 0x3E0($s0)
    ctx->pc = 0x1e6b98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 992)));
    // 0x1e6b9c: 0x8e0403c8  lw          $a0, 0x3C8($s0)
    ctx->pc = 0x1e6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 968)));
    // 0x1e6ba0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e6ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e6ba4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6BA4u;
    SET_GPR_U32(ctx, 31, 0x1E6BACu);
    ctx->pc = 0x1E6BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6BA4u;
    // 0x1e6ba8: 0xa60203e0  sh          $v0, 0x3E0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 992), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6BA4u, 0x1E6BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6BACu;
label_1e6bac:
    // 0x1e6bac: 0x8e0403cc  lw          $a0, 0x3CC($s0)
    ctx->pc = 0x1e6bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 972)));
    // 0x1e6bb0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6BB0u;
    SET_GPR_U32(ctx, 31, 0x1E6BB8u);
    ctx->pc = 0x1E6BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6BB0u;
    // 0x1e6bb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6BB0u, 0x1E6BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6BB8u;
label_1e6bb8:
    // 0x1e6bb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6BB8u;
    {
        const bool branch_taken_0x1e6bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BB8u;
        // 0x1e6bbc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6bb8) {
            ctx->pc = 0x1E6BDCu;
            goto label_1e6bdc;
        }
    }
    ctx->pc = 0x1E6BC0u;
label_1e6bc0:
    // 0x1e6bc0: 0x8e0403c8  lw          $a0, 0x3C8($s0)
    ctx->pc = 0x1e6bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 968)));
    // 0x1e6bc4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6BC4u;
    SET_GPR_U32(ctx, 31, 0x1E6BCCu);
    ctx->pc = 0x1E6BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6BC4u;
    // 0x1e6bc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6BC4u, 0x1E6BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6BCCu;
label_1e6bcc:
    // 0x1e6bcc: 0x8e0403cc  lw          $a0, 0x3CC($s0)
    ctx->pc = 0x1e6bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 972)));
    // 0x1e6bd0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6BD0u;
    SET_GPR_U32(ctx, 31, 0x1E6BD8u);
    ctx->pc = 0x1E6BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6BD0u;
    // 0x1e6bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6BD0u, 0x1E6BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6BD8u;
label_1e6bd8:
    // 0x1e6bd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e6bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6bdc:
    // 0x1e6bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BE0u;
        // 0x1e6be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6BE8u;
}
