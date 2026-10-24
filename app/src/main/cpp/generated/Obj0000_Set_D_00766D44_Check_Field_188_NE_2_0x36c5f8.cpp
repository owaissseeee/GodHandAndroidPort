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

// Function: Obj0000_Set_D_00766D44_Check_Field_188_NE_2
// Address: 0x36c5f8 - 0x36c628
void Obj0000_Set_D_00766D44_Check_Field_188_NE_2_0x36c5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_00766D44_Check_Field_188_NE_2_0x36c5f8");
#endif

    ctx->pc = 0x36c5f8u;

    // 0x36c5f8: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x36c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x36c5fc: 0xac446d44  sw          $a0, 0x6D44($v0)
    ctx->pc = 0x36c5fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x766D44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x766D44u, _value); } while (0);
    // 0x36c600: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36C600u;
    {
        const bool branch_taken_0x36c600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C600u;
        // 0x36c604: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c600) {
            ctx->pc = 0x36C614u;
            goto label_36c614;
        }
    }
    ctx->pc = 0x36C608u;
    // 0x36c608: 0x8c830188  lw          $v1, 0x188($a0)
    ctx->pc = 0x36c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x36c60c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x36c60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x36c610: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x36c610u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_36c614:
    // 0x36c614: 0x3e00008  jr          $ra
    ctx->pc = 0x36C614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C61Cu;
    // 0x36c61c: 0x0  nop
    ctx->pc = 0x36c61cu;
    // NOP
    // 0x36c620: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36c624: 0x0  nop
    ctx->pc = 0x36c624u;
    // NOP
    ctx->pc = 0x36c628u;
}
