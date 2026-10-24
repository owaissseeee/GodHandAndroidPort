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

// Function: AllocZeroedAndForward_316B60
// Address: 0x316b60 - 0x316bd0
void AllocZeroedAndForward_316B60_0x316b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_316B60_0x316b60");
#endif

    switch (ctx->pc) {
        case 0x316b94u: goto label_316b94;
        case 0x316bacu: goto label_316bac;
        case 0x316bb4u: goto label_316bb4;
        default: break;
    }

    ctx->pc = 0x316b60u;

    // 0x316b60: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316b64: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316b68: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316b68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316b6c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316b70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316b74: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316b78: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316B78u;
    {
        const bool branch_taken_0x316b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B78u;
        // 0x316b7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b78) {
            ctx->pc = 0x316BBCu;
            goto label_316bbc;
        }
    }
    ctx->pc = 0x316B80u;
    // 0x316b80: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316b80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316b84: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x316b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x316b88: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316b8c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316B8Cu;
    SET_GPR_U32(ctx, 31, 0x316B94u);
    ctx->pc = 0x316B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B8Cu;
    // 0x316b90: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316B8Cu, 0x316B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B94u;
label_316b94:
    // 0x316b94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316b98: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316B98u;
    {
        const bool branch_taken_0x316b98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B98u;
        // 0x316b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316b98) {
            ctx->pc = 0x316BBCu;
            goto label_316bbc;
        }
    }
    ctx->pc = 0x316BA0u;
    // 0x316ba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ba4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316BA4u;
    SET_GPR_U32(ctx, 31, 0x316BACu);
    ctx->pc = 0x316BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316BA4u;
    // 0x316ba8: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316BA4u, 0x316BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316BACu;
label_316bac:
    // 0x316bac: 0xc05c14e  jal         func_170538
    ctx->pc = 0x316BACu;
    SET_GPR_U32(ctx, 31, 0x316BB4u);
    ctx->pc = 0x316BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316BACu;
    // 0x316bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170538u, 0x316BACu, 0x316BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316BB4u;
label_316bb4:
    // 0x316bb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316BB4u;
    {
        const bool branch_taken_0x316bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BB4u;
        // 0x316bb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316bb4) {
            ctx->pc = 0x316BC4u;
            goto label_316bc4;
        }
    }
    ctx->pc = 0x316BBCu;
label_316bbc:
    // 0x316bbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316bc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316bc4:
    // 0x316bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x316BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BC8u;
        // 0x316bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316BD0u;
}
