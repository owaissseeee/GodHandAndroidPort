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

// Function: AllocZeroedAndForward_316E70
// Address: 0x316e70 - 0x316ee0
void AllocZeroedAndForward_316E70_0x316e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_316E70_0x316e70");
#endif

    switch (ctx->pc) {
        case 0x316ea4u: goto label_316ea4;
        case 0x316ebcu: goto label_316ebc;
        case 0x316ec4u: goto label_316ec4;
        default: break;
    }

    ctx->pc = 0x316e70u;

    // 0x316e70: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316e74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316e78: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316e78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316e7c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316e80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316e84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316e88: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316E88u;
    {
        const bool branch_taken_0x316e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E88u;
        // 0x316e8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e88) {
            ctx->pc = 0x316ECCu;
            goto label_316ecc;
        }
    }
    ctx->pc = 0x316E90u;
    // 0x316e90: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316e94: 0x24040db0  addiu       $a0, $zero, 0xDB0
    ctx->pc = 0x316e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3504));
    // 0x316e98: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316e9c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316E9Cu;
    SET_GPR_U32(ctx, 31, 0x316EA4u);
    ctx->pc = 0x316EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E9Cu;
    // 0x316ea0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316E9Cu, 0x316EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316EA4u;
label_316ea4:
    // 0x316ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ea8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316EA8u;
    {
        const bool branch_taken_0x316ea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EA8u;
        // 0x316eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ea8) {
            ctx->pc = 0x316ECCu;
            goto label_316ecc;
        }
    }
    ctx->pc = 0x316EB0u;
    // 0x316eb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316eb4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316EB4u;
    SET_GPR_U32(ctx, 31, 0x316EBCu);
    ctx->pc = 0x316EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316EB4u;
    // 0x316eb8: 0x24060db0  addiu       $a2, $zero, 0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316EB4u, 0x316EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316EBCu;
label_316ebc:
    // 0x316ebc: 0xc05c724  jal         func_171C90
    ctx->pc = 0x316EBCu;
    SET_GPR_U32(ctx, 31, 0x316EC4u);
    ctx->pc = 0x316EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316EBCu;
    // 0x316ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C90u, 0x316EBCu, 0x316EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316EC4u;
label_316ec4:
    // 0x316ec4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316EC4u;
    {
        const bool branch_taken_0x316ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EC4u;
        // 0x316ec8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ec4) {
            ctx->pc = 0x316ED4u;
            goto label_316ed4;
        }
    }
    ctx->pc = 0x316ECCu;
label_316ecc:
    // 0x316ecc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ed0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316ed4:
    // 0x316ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x316ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316ED8u;
        // 0x316edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316EE0u;
}
