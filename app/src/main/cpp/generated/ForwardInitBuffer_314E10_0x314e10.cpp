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

// Function: ForwardInitBuffer_314E10
// Address: 0x314e10 - 0x314e80
void ForwardInitBuffer_314E10_0x314e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314E10_0x314e10");
#endif

    switch (ctx->pc) {
        case 0x314e44u: goto label_314e44;
        case 0x314e5cu: goto label_314e5c;
        case 0x314e64u: goto label_314e64;
        default: break;
    }

    ctx->pc = 0x314e10u;

    // 0x314e10: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314e14: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314e18: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314e18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x314e1c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x314e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314e20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314e24: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314e28: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314E28u;
    {
        const bool branch_taken_0x314e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E28u;
        // 0x314e2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e28) {
            ctx->pc = 0x314E6Cu;
            goto label_314e6c;
        }
    }
    ctx->pc = 0x314E30u;
    // 0x314e30: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314e30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314e34: 0x24040920  addiu       $a0, $zero, 0x920
    ctx->pc = 0x314e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    // 0x314e38: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x314e3c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x314E3Cu;
    SET_GPR_U32(ctx, 31, 0x314E44u);
    ctx->pc = 0x314E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314E3Cu;
    // 0x314e40: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x314E3Cu, 0x314E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314E44u;
label_314e44:
    // 0x314e44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314e48: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314E48u;
    {
        const bool branch_taken_0x314e48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E48u;
        // 0x314e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e48) {
            ctx->pc = 0x314E6Cu;
            goto label_314e6c;
        }
    }
    ctx->pc = 0x314E50u;
    // 0x314e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314e54: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314E54u;
    SET_GPR_U32(ctx, 31, 0x314E5Cu);
    ctx->pc = 0x314E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314E54u;
    // 0x314e58: 0x24060920  addiu       $a2, $zero, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314E54u, 0x314E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314E5Cu;
label_314e5c:
    // 0x314e5c: 0xc066f8a  jal         func_19BE28
    ctx->pc = 0x314E5Cu;
    SET_GPR_U32(ctx, 31, 0x314E64u);
    ctx->pc = 0x314E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314E5Cu;
    // 0x314e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BE28u, 0x314E5Cu, 0x314E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314E64u;
label_314e64:
    // 0x314e64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314E64u;
    {
        const bool branch_taken_0x314e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E64u;
        // 0x314e68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314e64) {
            ctx->pc = 0x314E74u;
            goto label_314e74;
        }
    }
    ctx->pc = 0x314E6Cu;
label_314e6c:
    // 0x314e6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314e70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314e74:
    // 0x314e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314e78: 0x3e00008  jr          $ra
    ctx->pc = 0x314E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314E78u;
        // 0x314e7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314E80u;
}
