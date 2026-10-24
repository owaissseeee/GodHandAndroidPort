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

// Function: ForwardInitBuffer_314EF0
// Address: 0x314ef0 - 0x314f60
void ForwardInitBuffer_314EF0_0x314ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314EF0_0x314ef0");
#endif

    switch (ctx->pc) {
        case 0x314f24u: goto label_314f24;
        case 0x314f3cu: goto label_314f3c;
        case 0x314f44u: goto label_314f44;
        default: break;
    }

    ctx->pc = 0x314ef0u;

    // 0x314ef0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314ef4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314ef8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x314efc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x314efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314f00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314f04: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314f08: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314F08u;
    {
        const bool branch_taken_0x314f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F08u;
        // 0x314f0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f08) {
            ctx->pc = 0x314F4Cu;
            goto label_314f4c;
        }
    }
    ctx->pc = 0x314F10u;
    // 0x314f10: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314f10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314f14: 0x240408f0  addiu       $a0, $zero, 0x8F0
    ctx->pc = 0x314f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2288));
    // 0x314f18: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x314f1c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x314F1Cu;
    SET_GPR_U32(ctx, 31, 0x314F24u);
    ctx->pc = 0x314F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314F1Cu;
    // 0x314f20: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x314F1Cu, 0x314F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314F24u;
label_314f24:
    // 0x314f24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314f28: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314F28u;
    {
        const bool branch_taken_0x314f28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F28u;
        // 0x314f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f28) {
            ctx->pc = 0x314F4Cu;
            goto label_314f4c;
        }
    }
    ctx->pc = 0x314F30u;
    // 0x314f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314f34: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314F34u;
    SET_GPR_U32(ctx, 31, 0x314F3Cu);
    ctx->pc = 0x314F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314F34u;
    // 0x314f38: 0x240608f0  addiu       $a2, $zero, 0x8F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314F34u, 0x314F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314F3Cu;
label_314f3c:
    // 0x314f3c: 0xc0670c8  jal         func_19C320
    ctx->pc = 0x314F3Cu;
    SET_GPR_U32(ctx, 31, 0x314F44u);
    ctx->pc = 0x314F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314F3Cu;
    // 0x314f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C320u, 0x314F3Cu, 0x314F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314F44u;
label_314f44:
    // 0x314f44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314F44u;
    {
        const bool branch_taken_0x314f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F44u;
        // 0x314f48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314f44) {
            ctx->pc = 0x314F54u;
            goto label_314f54;
        }
    }
    ctx->pc = 0x314F4Cu;
label_314f4c:
    // 0x314f4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314f50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314f54:
    // 0x314f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314f58: 0x3e00008  jr          $ra
    ctx->pc = 0x314F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F58u;
        // 0x314f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314F60u;
}
