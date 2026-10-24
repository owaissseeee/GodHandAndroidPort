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

// Function: func_002BAFE0
// Address: 0x2bafe0 - 0x2bb010
void func_002BAFE0_0x2bafe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BAFE0_0x2bafe0");
#endif

    switch (ctx->pc) {
        case 0x2bb004u: goto label_2bb004;
        default: break;
    }

    ctx->pc = 0x2bafe0u;

    // 0x2bafe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bafe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bafe4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2bafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2bafe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bafe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bafec: 0x2442bed0  addiu       $v0, $v0, -0x4130
    ctx->pc = 0x2bafecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950608));
    // 0x2baff0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2baff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2baff4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BAFF4u;
    {
        const bool branch_taken_0x2baff4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFF4u;
        // 0x2baff8: 0xac820100  sw          $v0, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baff4) {
            ctx->pc = 0x2BB004u;
            goto label_2bb004;
        }
    }
    ctx->pc = 0x2BAFFCu;
    // 0x2baffc: 0xc0aec06  jal         func_2BB018
    ctx->pc = 0x2BAFFCu;
    SET_GPR_U32(ctx, 31, 0x2BB004u);
    ctx->pc = 0x2BB000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAFFCu;
    // 0x2bb000: 0x24050110  addiu       $a1, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB018u, 0x2BAFFCu, 0x2BB004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB004u;
label_2bb004:
    // 0x2bb004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb008: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB008u;
        // 0x2bb00c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB010u;
}
