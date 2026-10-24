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

// Function: ForwardInitBuffer_314B70
// Address: 0x314b70 - 0x314be0
void ForwardInitBuffer_314B70_0x314b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314B70_0x314b70");
#endif

    switch (ctx->pc) {
        case 0x314ba4u: goto label_314ba4;
        case 0x314bbcu: goto label_314bbc;
        case 0x314bc4u: goto label_314bc4;
        default: break;
    }

    ctx->pc = 0x314b70u;

    // 0x314b70: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314b74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314b78: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314b78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x314b7c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x314b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314b80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314b84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314b88: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314B88u;
    {
        const bool branch_taken_0x314b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B88u;
        // 0x314b8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b88) {
            ctx->pc = 0x314BCCu;
            goto label_314bcc;
        }
    }
    ctx->pc = 0x314B90u;
    // 0x314b90: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314b94: 0x240408c0  addiu       $a0, $zero, 0x8C0
    ctx->pc = 0x314b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2240));
    // 0x314b98: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x314b9c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x314B9Cu;
    SET_GPR_U32(ctx, 31, 0x314BA4u);
    ctx->pc = 0x314BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314B9Cu;
    // 0x314ba0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x314B9Cu, 0x314BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314BA4u;
label_314ba4:
    // 0x314ba4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ba8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314BA8u;
    {
        const bool branch_taken_0x314ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BA8u;
        // 0x314bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ba8) {
            ctx->pc = 0x314BCCu;
            goto label_314bcc;
        }
    }
    ctx->pc = 0x314BB0u;
    // 0x314bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314bb4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314BB4u;
    SET_GPR_U32(ctx, 31, 0x314BBCu);
    ctx->pc = 0x314BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314BB4u;
    // 0x314bb8: 0x240608c0  addiu       $a2, $zero, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314BB4u, 0x314BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314BBCu;
label_314bbc:
    // 0x314bbc: 0xc06692a  jal         func_19A4A8
    ctx->pc = 0x314BBCu;
    SET_GPR_U32(ctx, 31, 0x314BC4u);
    ctx->pc = 0x314BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314BBCu;
    // 0x314bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A4A8u, 0x314BBCu, 0x314BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314BC4u;
label_314bc4:
    // 0x314bc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314BC4u;
    {
        const bool branch_taken_0x314bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BC4u;
        // 0x314bc8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314bc4) {
            ctx->pc = 0x314BD4u;
            goto label_314bd4;
        }
    }
    ctx->pc = 0x314BCCu;
label_314bcc:
    // 0x314bcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314bd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314bd4:
    // 0x314bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x314BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BD8u;
        // 0x314bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314BE0u;
}
