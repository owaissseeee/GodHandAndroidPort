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

// Function: MWSFCRE_DestroySfd
// Address: 0x343bd0 - 0x343c18
void MWSFCRE_DestroySfd_0x343bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MWSFCRE_DestroySfd_0x343bd0");
#endif

    switch (ctx->pc) {
        case 0x343be0u: goto label_343be0;
        case 0x343bf0u: goto label_343bf0;
        default: break;
    }

    ctx->pc = 0x343bd0u;

    // 0x343bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x343bd8: 0xc0d61fa  jal         func_3587E8
    ctx->pc = 0x343BD8u;
    SET_GPR_U32(ctx, 31, 0x343BE0u);
    ctx->pc = 0x3587E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3587E8u, 0x343BD8u, 0x343BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343BE0u;
label_343be0:
    // 0x343be0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x343BE0u;
    {
        const bool branch_taken_0x343be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BE0u;
        // 0x343be4: 0x2404fece  addiu       $a0, $zero, -0x132 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966990));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343be0) {
            ctx->pc = 0x343C08u;
            goto label_343c08;
        }
    }
    ctx->pc = 0x343BE8u;
    // 0x343be8: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x343BE8u;
    SET_GPR_U32(ctx, 31, 0x343BF0u);
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x343BE8u, 0x343BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343BF0u;
label_343bf0:
    // 0x343bf0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x343bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x343bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343bf8: 0x248473b8  addiu       $a0, $a0, 0x73B8
    ctx->pc = 0x343bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29624));
    // 0x343bfc: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x343BFCu;
    ctx->pc = 0x343C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343BFCu;
    // 0x343c00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x343BFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x343C04u;
    // 0x343c04: 0x0  nop
    ctx->pc = 0x343c04u;
    // NOP
label_343c08:
    // 0x343c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x343C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C0Cu;
        // 0x343c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343C14u;
    // 0x343c14: 0x0  nop
    ctx->pc = 0x343c14u;
    // NOP
    ctx->pc = 0x343c18u;
}
