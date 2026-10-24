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

// Function: cSeData_RegisterBank
// Address: 0x2cfb60 - 0x2cfbc0
void cSeData_RegisterBank_0x2cfb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_RegisterBank_0x2cfb60");
#endif

    switch (ctx->pc) {
        case 0x2cfb8cu: goto label_2cfb8c;
        case 0x2cfba0u: goto label_2cfba0;
        case 0x2cfbacu: goto label_2cfbac;
        default: break;
    }

    ctx->pc = 0x2cfb60u;

    // 0x2cfb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cfb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cfb64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cfb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cfb68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfb6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cfb6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfb70: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cfb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cfb74: 0x8604002c  lh          $a0, 0x2C($s0)
    ctx->pc = 0x2cfb74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2cfb78: 0x8c480018  lw          $t0, 0x18($v0)
    ctx->pc = 0x2cfb78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2cfb7c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2cfb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cfb80: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2cfb80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2cfb84: 0xc0dd2dc  jal         func_374B70
    ctx->pc = 0x2CFB84u;
    SET_GPR_U32(ctx, 31, 0x2CFB8Cu);
    ctx->pc = 0x2CFB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB84u;
    // 0x2cfb88: 0x8e07001c  lw          $a3, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374B70u, 0x2CFB84u, 0x2CFB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB8Cu;
label_2cfb8c:
    // 0x2cfb8c: 0x8604002c  lh          $a0, 0x2C($s0)
    ctx->pc = 0x2cfb8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2cfb90: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2cfb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cfb94: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2cfb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2cfb98: 0xc0dd662  jal         func_375988
    ctx->pc = 0x2CFB98u;
    SET_GPR_U32(ctx, 31, 0x2CFBA0u);
    ctx->pc = 0x2CFB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFB98u;
    // 0x2cfb9c: 0x8e07001c  lw          $a3, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375988u, 0x2CFB98u, 0x2CFBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFBA0u;
label_2cfba0:
    // 0x2cfba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cfba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfba4: 0xc0b3f2c  jal         func_2CFCB0
    ctx->pc = 0x2CFBA4u;
    SET_GPR_U32(ctx, 31, 0x2CFBACu);
    ctx->pc = 0x2CFBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFBA4u;
    // 0x2cfba8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCB0u, 0x2CFBA4u, 0x2CFBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFBACu;
label_2cfbac:
    // 0x2cfbac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cfbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfbb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBB4u;
        // 0x2cfbb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFBBCu;
    // 0x2cfbbc: 0x0  nop
    ctx->pc = 0x2cfbbcu;
    // NOP
    ctx->pc = 0x2cfbc0u;
}
