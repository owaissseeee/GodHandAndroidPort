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

// Function: cSeData_HasBankKeys
// Address: 0x2cf9a8 - 0x2cfa08
void cSeData_HasBankKeys_0x2cf9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_HasBankKeys_0x2cf9a8");
#endif

    switch (ctx->pc) {
        case 0x2cf9d0u: goto label_2cf9d0;
        case 0x2cf9e4u: goto label_2cf9e4;
        default: break;
    }

    ctx->pc = 0x2cf9a8u;

    // 0x2cf9a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf9ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cf9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cf9b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cf9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2cf9b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cf9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cf9b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf9bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf9c0: 0x24513a40  addiu       $s1, $v0, 0x3A40
    ctx->pc = 0x2cf9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 14912));
    // 0x2cf9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf9c8: 0xc0b4bba  jal         func_2D2EE8
    ctx->pc = 0x2CF9C8u;
    SET_GPR_U32(ctx, 31, 0x2CF9D0u);
    ctx->pc = 0x2CF9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF9C8u;
    // 0x2cf9cc: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2EE8u, 0x2CF9C8u, 0x2CF9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF9D0u;
label_2cf9d0:
    // 0x2cf9d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CF9D0u;
    {
        const bool branch_taken_0x2cf9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9D0u;
        // 0x2cf9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf9d0) {
            ctx->pc = 0x2CF9F0u;
            goto label_2cf9f0;
        }
    }
    ctx->pc = 0x2CF9D8u;
    // 0x2cf9d8: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x2cf9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2cf9dc: 0xc0b4bba  jal         func_2D2EE8
    ctx->pc = 0x2CF9DCu;
    SET_GPR_U32(ctx, 31, 0x2CF9E4u);
    ctx->pc = 0x2CF9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF9DCu;
    // 0x2cf9e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2EE8u, 0x2CF9DCu, 0x2CF9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF9E4u;
label_2cf9e4:
    // 0x2cf9e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CF9E4u;
    {
        const bool branch_taken_0x2cf9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9E4u;
        // 0x2cf9e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf9e4) {
            ctx->pc = 0x2CF9F0u;
            goto label_2cf9f0;
        }
    }
    ctx->pc = 0x2CF9ECu;
    // 0x2cf9ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf9ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf9f0:
    // 0x2cf9f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cf9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf9f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cf9f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf9f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF9FCu;
        // 0x2cfa00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFA04u;
    // 0x2cfa04: 0x0  nop
    ctx->pc = 0x2cfa04u;
    // NOP
    ctx->pc = 0x2cfa08u;
}
