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

// Function: func_00360740
// Address: 0x360740 - 0x360790
void func_00360740_0x360740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00360740_0x360740");
#endif

    switch (ctx->pc) {
        case 0x360764u: goto label_360764;
        default: break;
    }

    ctx->pc = 0x360740u;

    // 0x360740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360744: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x360744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x360748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36074c: 0x2450ea6c  addiu       $s0, $v0, -0x1594
    ctx->pc = 0x36074cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961772));
    // 0x360750: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x360750u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEA6Cu));
    // 0x360754: 0x1c600009  bgtz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x360754u;
    {
        const bool branch_taken_0x360754 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x360758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360754u;
        // 0x360758: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360754) {
            ctx->pc = 0x36077Cu;
            goto label_36077c;
        }
    }
    ctx->pc = 0x36075Cu;
    // 0x36075c: 0xc0d81e4  jal         func_360790
    ctx->pc = 0x36075Cu;
    SET_GPR_U32(ctx, 31, 0x360764u);
    ctx->pc = 0x360790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360790u, 0x36075Cu, 0x360764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360764u;
label_360764:
    // 0x360764: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x360764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x360768: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x360768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36076c: 0x24636ca4  addiu       $v1, $v1, 0x6CA4
    ctx->pc = 0x36076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27812));
    // 0x360770: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x360770u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x766CA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x766CA4u, _value); } while (0);
    // 0x360774: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x360774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x360778: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x360778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_36077c:
    // 0x36077c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36077cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360780: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x360780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360784: 0x3e00008  jr          $ra
    ctx->pc = 0x360784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360784u;
        // 0x360788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36078Cu;
    // 0x36078c: 0x0  nop
    ctx->pc = 0x36078cu;
    // NOP
    ctx->pc = 0x360790u;
}
