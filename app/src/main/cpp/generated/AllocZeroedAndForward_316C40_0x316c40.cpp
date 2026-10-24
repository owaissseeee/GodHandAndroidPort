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

// Function: AllocZeroedAndForward_316C40
// Address: 0x316c40 - 0x316cb0
void AllocZeroedAndForward_316C40_0x316c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_316C40_0x316c40");
#endif

    switch (ctx->pc) {
        case 0x316c74u: goto label_316c74;
        case 0x316c8cu: goto label_316c8c;
        case 0x316c94u: goto label_316c94;
        default: break;
    }

    ctx->pc = 0x316c40u;

    // 0x316c40: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316c44: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316c48: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316c4c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316c50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316c54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316c58: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316C58u;
    {
        const bool branch_taken_0x316c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C58u;
        // 0x316c5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c58) {
            ctx->pc = 0x316C9Cu;
            goto label_316c9c;
        }
    }
    ctx->pc = 0x316C60u;
    // 0x316c60: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316c60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316c64: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x316c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x316c68: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316c6c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316C6Cu;
    SET_GPR_U32(ctx, 31, 0x316C74u);
    ctx->pc = 0x316C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C6Cu;
    // 0x316c70: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316C6Cu, 0x316C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C74u;
label_316c74:
    // 0x316c74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c78: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316C78u;
    {
        const bool branch_taken_0x316c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C78u;
        // 0x316c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c78) {
            ctx->pc = 0x316C9Cu;
            goto label_316c9c;
        }
    }
    ctx->pc = 0x316C80u;
    // 0x316c80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c84: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316C84u;
    SET_GPR_U32(ctx, 31, 0x316C8Cu);
    ctx->pc = 0x316C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C84u;
    // 0x316c88: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316C84u, 0x316C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C8Cu;
label_316c8c:
    // 0x316c8c: 0xc05c296  jal         func_170A58
    ctx->pc = 0x316C8Cu;
    SET_GPR_U32(ctx, 31, 0x316C94u);
    ctx->pc = 0x316C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C8Cu;
    // 0x316c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170A58u, 0x316C8Cu, 0x316C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C94u;
label_316c94:
    // 0x316c94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316C94u;
    {
        const bool branch_taken_0x316c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C94u;
        // 0x316c98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c94) {
            ctx->pc = 0x316CA4u;
            goto label_316ca4;
        }
    }
    ctx->pc = 0x316C9Cu;
label_316c9c:
    // 0x316c9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ca0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316ca4:
    // 0x316ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x316CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CA8u;
        // 0x316cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316CB0u;
}
