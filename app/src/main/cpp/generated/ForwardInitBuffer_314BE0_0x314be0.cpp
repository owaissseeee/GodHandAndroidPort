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

// Function: ForwardInitBuffer_314BE0
// Address: 0x314be0 - 0x314c50
void ForwardInitBuffer_314BE0_0x314be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314BE0_0x314be0");
#endif

    switch (ctx->pc) {
        case 0x314c14u: goto label_314c14;
        case 0x314c2cu: goto label_314c2c;
        case 0x314c34u: goto label_314c34;
        default: break;
    }

    ctx->pc = 0x314be0u;

    // 0x314be0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314be4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314be8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314be8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x314bec: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x314becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314bf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314bf4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314bf8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314BF8u;
    {
        const bool branch_taken_0x314bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BF8u;
        // 0x314bfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314bf8) {
            ctx->pc = 0x314C3Cu;
            goto label_314c3c;
        }
    }
    ctx->pc = 0x314C00u;
    // 0x314c00: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314c00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314c04: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x314c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x314c08: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x314c0c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x314C0Cu;
    SET_GPR_U32(ctx, 31, 0x314C14u);
    ctx->pc = 0x314C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314C0Cu;
    // 0x314c10: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x314C0Cu, 0x314C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314C14u;
label_314c14:
    // 0x314c14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314c18: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314C18u;
    {
        const bool branch_taken_0x314c18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C18u;
        // 0x314c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c18) {
            ctx->pc = 0x314C3Cu;
            goto label_314c3c;
        }
    }
    ctx->pc = 0x314C20u;
    // 0x314c20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314c24: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314C24u;
    SET_GPR_U32(ctx, 31, 0x314C2Cu);
    ctx->pc = 0x314C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314C24u;
    // 0x314c28: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314C24u, 0x314C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314C2Cu;
label_314c2c:
    // 0x314c2c: 0xc0669c8  jal         func_19A720
    ctx->pc = 0x314C2Cu;
    SET_GPR_U32(ctx, 31, 0x314C34u);
    ctx->pc = 0x314C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314C2Cu;
    // 0x314c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A720u, 0x314C2Cu, 0x314C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314C34u;
label_314c34:
    // 0x314c34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314C34u;
    {
        const bool branch_taken_0x314c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C34u;
        // 0x314c38: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c34) {
            ctx->pc = 0x314C44u;
            goto label_314c44;
        }
    }
    ctx->pc = 0x314C3Cu;
label_314c3c:
    // 0x314c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314c40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314c44:
    // 0x314c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314c48: 0x3e00008  jr          $ra
    ctx->pc = 0x314C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C48u;
        // 0x314c4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314C50u;
}
