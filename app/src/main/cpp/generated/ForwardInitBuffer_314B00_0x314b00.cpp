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

// Function: ForwardInitBuffer_314B00
// Address: 0x314b00 - 0x314b70
void ForwardInitBuffer_314B00_0x314b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314B00_0x314b00");
#endif

    switch (ctx->pc) {
        case 0x314b34u: goto label_314b34;
        case 0x314b4cu: goto label_314b4c;
        case 0x314b54u: goto label_314b54;
        default: break;
    }

    ctx->pc = 0x314b00u;

    // 0x314b00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314b04: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314b08: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314b08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x314b0c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x314b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314b10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314b14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314b18: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314B18u;
    {
        const bool branch_taken_0x314b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B18u;
        // 0x314b1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b18) {
            ctx->pc = 0x314B5Cu;
            goto label_314b5c;
        }
    }
    ctx->pc = 0x314B20u;
    // 0x314b20: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314b20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314b24: 0x240408c0  addiu       $a0, $zero, 0x8C0
    ctx->pc = 0x314b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2240));
    // 0x314b28: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x314b2c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x314B2Cu;
    SET_GPR_U32(ctx, 31, 0x314B34u);
    ctx->pc = 0x314B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314B2Cu;
    // 0x314b30: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x314B2Cu, 0x314B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B34u;
label_314b34:
    // 0x314b34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314b38: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314B38u;
    {
        const bool branch_taken_0x314b38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B38u;
        // 0x314b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b38) {
            ctx->pc = 0x314B5Cu;
            goto label_314b5c;
        }
    }
    ctx->pc = 0x314B40u;
    // 0x314b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314b44: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314B44u;
    SET_GPR_U32(ctx, 31, 0x314B4Cu);
    ctx->pc = 0x314B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314B44u;
    // 0x314b48: 0x240608c0  addiu       $a2, $zero, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314B44u, 0x314B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B4Cu;
label_314b4c:
    // 0x314b4c: 0xc066890  jal         func_19A240
    ctx->pc = 0x314B4Cu;
    SET_GPR_U32(ctx, 31, 0x314B54u);
    ctx->pc = 0x314B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314B4Cu;
    // 0x314b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A240u, 0x314B4Cu, 0x314B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B54u;
label_314b54:
    // 0x314b54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314B54u;
    {
        const bool branch_taken_0x314b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B54u;
        // 0x314b58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b54) {
            ctx->pc = 0x314B64u;
            goto label_314b64;
        }
    }
    ctx->pc = 0x314B5Cu;
label_314b5c:
    // 0x314b5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314b60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314b64:
    // 0x314b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314b68: 0x3e00008  jr          $ra
    ctx->pc = 0x314B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B68u;
        // 0x314b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314B70u;
}
