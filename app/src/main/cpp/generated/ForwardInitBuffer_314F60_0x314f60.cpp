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

// Function: ForwardInitBuffer_314F60
// Address: 0x314f60 - 0x314fd0
void ForwardInitBuffer_314F60_0x314f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314F60_0x314f60");
#endif

    switch (ctx->pc) {
        case 0x314f94u: goto label_314f94;
        case 0x314facu: goto label_314fac;
        case 0x314fb4u: goto label_314fb4;
        default: break;
    }

    ctx->pc = 0x314f60u;

    // 0x314f60: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314f64: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314f64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314f68: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314f68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x314f6c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x314f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314f70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314f74: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314f78: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314F78u;
    {
        const bool branch_taken_0x314f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F78u;
        // 0x314f7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f78) {
            ctx->pc = 0x314FBCu;
            goto label_314fbc;
        }
    }
    ctx->pc = 0x314F80u;
    // 0x314f80: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314f80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314f84: 0x240408a0  addiu       $a0, $zero, 0x8A0
    ctx->pc = 0x314f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2208));
    // 0x314f88: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x314f8c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x314F8Cu;
    SET_GPR_U32(ctx, 31, 0x314F94u);
    ctx->pc = 0x314F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314F8Cu;
    // 0x314f90: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x314F8Cu, 0x314F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314F94u;
label_314f94:
    // 0x314f94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314f98: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314F98u;
    {
        const bool branch_taken_0x314f98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F98u;
        // 0x314f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f98) {
            ctx->pc = 0x314FBCu;
            goto label_314fbc;
        }
    }
    ctx->pc = 0x314FA0u;
    // 0x314fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314fa4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314FA4u;
    SET_GPR_U32(ctx, 31, 0x314FACu);
    ctx->pc = 0x314FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314FA4u;
    // 0x314fa8: 0x240608a0  addiu       $a2, $zero, 0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314FA4u, 0x314FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314FACu;
label_314fac:
    // 0x314fac: 0xc067162  jal         func_19C588
    ctx->pc = 0x314FACu;
    SET_GPR_U32(ctx, 31, 0x314FB4u);
    ctx->pc = 0x314FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314FACu;
    // 0x314fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C588u, 0x314FACu, 0x314FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314FB4u;
label_314fb4:
    // 0x314fb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314FB4u;
    {
        const bool branch_taken_0x314fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FB4u;
        // 0x314fb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314fb4) {
            ctx->pc = 0x314FC4u;
            goto label_314fc4;
        }
    }
    ctx->pc = 0x314FBCu;
label_314fbc:
    // 0x314fbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314fc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314fc4:
    // 0x314fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x314FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FC8u;
        // 0x314fcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314FD0u;
}
