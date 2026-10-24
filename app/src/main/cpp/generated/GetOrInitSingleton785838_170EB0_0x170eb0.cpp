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

// Function: GetOrInitSingleton785838_170EB0
// Address: 0x170eb0 - 0x170f00
void GetOrInitSingleton785838_170EB0_0x170eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSingleton785838_170EB0_0x170eb0");
#endif

    switch (ctx->pc) {
        case 0x170ed4u: goto label_170ed4;
        case 0x170eecu: goto label_170eec;
        default: break;
    }

    ctx->pc = 0x170eb0u;

    // 0x170eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170eb4: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x170eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x170eb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170ebc: 0x8c625838  lw          $v0, 0x5838($v1)
    ctx->pc = 0x170ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785838u));
    // 0x170ec0: 0x24705838  addiu       $s0, $v1, 0x5838
    ctx->pc = 0x170ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22584));
    // 0x170ec4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x170EC4u;
    {
        const bool branch_taken_0x170ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EC4u;
        // 0x170ec8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ec4) {
            ctx->pc = 0x170EECu;
            goto label_170eec;
        }
    }
    ctx->pc = 0x170ECCu;
    // 0x170ecc: 0xc070006  jal         func_1C0018
    ctx->pc = 0x170ECCu;
    SET_GPR_U32(ctx, 31, 0x170ED4u);
    ctx->pc = 0x1C0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0018u, 0x170ECCu, 0x170ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170ED4u;
label_170ed4:
    // 0x170ed4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x170ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x170ed8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x170ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x170edc: 0x24a50908  addiu       $a1, $a1, 0x908
    ctx->pc = 0x170edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2312));
    // 0x170ee0: 0x24c65808  addiu       $a2, $a2, 0x5808
    ctx->pc = 0x170ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22536));
    // 0x170ee4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x170EE4u;
    SET_GPR_U32(ctx, 31, 0x170EECu);
    ctx->pc = 0x170EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170EE4u;
    // 0x170ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x170EE4u, 0x170EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EECu;
label_170eec:
    // 0x170eec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170ef4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x170EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EF8u;
        // 0x170efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170F00u;
}
