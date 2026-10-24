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

// Function: Tramp_003B4AD8_1F6E98
// Address: 0x1f6e98 - 0x1f6ed8
void Tramp_003B4AD8_1F6E98_0x1f6e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_003B4AD8_1F6E98_0x1f6e98");
#endif

    switch (ctx->pc) {
        case 0x1f6ec0u: goto label_1f6ec0;
        default: break;
    }

    ctx->pc = 0x1f6e98u;

    // 0x1f6e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f6e9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f6e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ea0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f6ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f6ea4: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1f6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1f6ea8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f6ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6eac: 0x8c648280  lw          $a0, -0x7D80($v1)
    ctx->pc = 0x1f6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x568280u));
    // 0x1f6eb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6eb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f6eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6eb8: 0xc0ed2b6  jal         func_3B4AD8
    ctx->pc = 0x1F6EB8u;
    SET_GPR_U32(ctx, 31, 0x1F6EC0u);
    ctx->pc = 0x1F6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6EB8u;
    // 0x1f6ebc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4AD8u, 0x1F6EB8u, 0x1F6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6EC0u;
label_1f6ec0:
    // 0x1f6ec0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f6ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6ec8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f6ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ECCu;
        // 0x1f6ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6ED4u;
    // 0x1f6ed4: 0x0  nop
    ctx->pc = 0x1f6ed4u;
    // NOP
    ctx->pc = 0x1f6ed8u;
}
