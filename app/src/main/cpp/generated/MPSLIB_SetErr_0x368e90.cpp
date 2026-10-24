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

// Function: MPSLIB_SetErr
// Address: 0x368e90 - 0x368ee0
void MPSLIB_SetErr_0x368e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MPSLIB_SetErr_0x368e90");
#endif

    switch (ctx->pc) {
        case 0x368eb8u: goto label_368eb8;
        case 0x368ec8u: goto label_368ec8;
        default: break;
    }

    ctx->pc = 0x368e90u;

    // 0x368e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x368e94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x368e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368e98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368e9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x368e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ea0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x368ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x368ea4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x368EA4u;
    {
        const bool branch_taken_0x368ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368EA4u;
        // 0x368ea8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368ea4) {
            ctx->pc = 0x368EC0u;
            goto label_368ec0;
        }
    }
    ctx->pc = 0x368EACu;
    // 0x368eac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x368eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x368eb0: 0xc0da3b8  jal         func_368EE0
    ctx->pc = 0x368EB0u;
    SET_GPR_U32(ctx, 31, 0x368EB8u);
    ctx->pc = 0x368EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368EB0u;
    // 0x368eb4: 0x8c441a98  lw          $a0, 0x1A98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368EE0u, 0x368EB0u, 0x368EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368EB8u;
label_368eb8:
    // 0x368eb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x368EB8u;
    {
        const bool branch_taken_0x368eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368EB8u;
        // 0x368ebc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368eb8) {
            ctx->pc = 0x368ECCu;
            goto label_368ecc;
        }
    }
    ctx->pc = 0x368EC0u;
label_368ec0:
    // 0x368ec0: 0xc0da3b8  jal         func_368EE0
    ctx->pc = 0x368EC0u;
    SET_GPR_U32(ctx, 31, 0x368EC8u);
    ctx->pc = 0x368EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368EE0u, 0x368EC0u, 0x368EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368EC8u;
label_368ec8:
    // 0x368ec8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x368ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_368ecc:
    // 0x368ecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368ed0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x368ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x368ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368ED4u;
        // 0x368ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368EDCu;
    // 0x368edc: 0x0  nop
    ctx->pc = 0x368edcu;
    // NOP
    ctx->pc = 0x368ee0u;
}
