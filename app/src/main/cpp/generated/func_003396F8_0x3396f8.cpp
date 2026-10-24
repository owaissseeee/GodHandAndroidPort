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

// Function: func_003396F8
// Address: 0x3396f8 - 0x339780
void func_003396F8_0x3396f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003396F8_0x3396f8");
#endif

    switch (ctx->pc) {
        case 0x339768u: goto label_339768;
        default: break;
    }

    ctx->pc = 0x3396f8u;

    // 0x3396f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3396f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3396fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3396fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x339700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339704: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x339704u;
    {
        const bool branch_taken_0x339704 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x339708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339704u;
        // 0x339708: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339704) {
            ctx->pc = 0x339730u;
            goto label_339730;
        }
    }
    ctx->pc = 0x33970Cu;
    // 0x33970c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33970cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x339710: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x339714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339718: 0x24845a70  addiu       $a0, $a0, 0x5A70
    ctx->pc = 0x339718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23152));
    // 0x33971c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33971cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x339720: 0x24a55a80  addiu       $a1, $a1, 0x5A80
    ctx->pc = 0x339720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23168));
    // 0x339724: 0x80ce516  j           func_339458
    ctx->pc = 0x339724u;
    ctx->pc = 0x339728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339724u;
    // 0x339728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339458u, 0x339724u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33972Cu;
    // 0x33972c: 0x0  nop
    ctx->pc = 0x33972cu;
    // NOP
label_339730:
    // 0x339730: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x339730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x339734: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x339734u;
    {
        const bool branch_taken_0x339734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339734u;
        // 0x339738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339734) {
            ctx->pc = 0x339760u;
            goto label_339760;
        }
    }
    ctx->pc = 0x33973Cu;
    // 0x33973c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33973cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x339740: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x339744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339748: 0x24845aa0  addiu       $a0, $a0, 0x5AA0
    ctx->pc = 0x339748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23200));
    // 0x33974c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33974cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x339750: 0x24a55ab0  addiu       $a1, $a1, 0x5AB0
    ctx->pc = 0x339750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23216));
    // 0x339754: 0x80ce516  j           func_339458
    ctx->pc = 0x339754u;
    ctx->pc = 0x339758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339754u;
    // 0x339758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339458u, 0x339754u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33975Cu;
    // 0x33975c: 0x0  nop
    ctx->pc = 0x33975cu;
    // NOP
label_339760:
    // 0x339760: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x339760u;
    SET_GPR_U32(ctx, 31, 0x339768u);
    ctx->pc = 0x339764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339760u;
    // 0x339764: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x339760u, 0x339768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339768u;
label_339768:
    // 0x339768: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x339768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x33976c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33976cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x339770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339774: 0x3e00008  jr          $ra
    ctx->pc = 0x339774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339774u;
        // 0x339778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33977Cu;
    // 0x33977c: 0x0  nop
    ctx->pc = 0x33977cu;
    // NOP
    ctx->pc = 0x339780u;
}
