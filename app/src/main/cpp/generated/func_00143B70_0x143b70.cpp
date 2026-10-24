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

// Function: func_00143B70
// Address: 0x143b70 - 0x143be8
void func_00143B70_0x143b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00143B70_0x143b70");
#endif

    switch (ctx->pc) {
        case 0x143b90u: goto label_143b90;
        case 0x143ba0u: goto label_143ba0;
        case 0x143bb0u: goto label_143bb0;
        case 0x143bc0u: goto label_143bc0;
        case 0x143bd0u: goto label_143bd0;
        default: break;
    }

    ctx->pc = 0x143b70u;

    // 0x143b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143b74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x143b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143b78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x143b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x143b7c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x143b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x143b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b88: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x143B88u;
    SET_GPR_U32(ctx, 31, 0x143B90u);
    ctx->pc = 0x143B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B88u;
    // 0x143b8c: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x143B88u, 0x143B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B90u;
label_143b90:
    // 0x143b90: 0x26040500  addiu       $a0, $s0, 0x500
    ctx->pc = 0x143b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
    // 0x143b94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x143b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143b98: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x143B98u;
    SET_GPR_U32(ctx, 31, 0x143BA0u);
    ctx->pc = 0x143B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B98u;
    // 0x143b9c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x143B98u, 0x143BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BA0u;
label_143ba0:
    // 0x143ba0: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x143ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x143ba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x143ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143ba8: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x143BA8u;
    SET_GPR_U32(ctx, 31, 0x143BB0u);
    ctx->pc = 0x143BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143BA8u;
    // 0x143bac: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x143BA8u, 0x143BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BB0u;
label_143bb0:
    // 0x143bb0: 0x260404b0  addiu       $a0, $s0, 0x4B0
    ctx->pc = 0x143bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1200));
    // 0x143bb4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x143bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x143bb8: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x143BB8u;
    SET_GPR_U32(ctx, 31, 0x143BC0u);
    ctx->pc = 0x143BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143BB8u;
    // 0x143bbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x143BB8u, 0x143BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BC0u;
label_143bc0:
    // 0x143bc0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x143bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x143bc4: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x143bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x143bc8: 0xc0ab38a  jal         func_2ACE28
    ctx->pc = 0x143BC8u;
    SET_GPR_U32(ctx, 31, 0x143BD0u);
    ctx->pc = 0x143BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143BC8u;
    // 0x143bcc: 0x8c642388  lw          $a0, 0x2388($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE28u, 0x143BC8u, 0x143BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143BD0u;
label_143bd0:
    // 0x143bd0: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x143bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x143bd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x143bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x143BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BDCu;
        // 0x143be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143BE4u;
    // 0x143be4: 0x0  nop
    ctx->pc = 0x143be4u;
    // NOP
    ctx->pc = 0x143be8u;
}
