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

// Function: Obj0000_Set_D_0076A5D8_Check_Field_0_EQ_2
// Address: 0x36d688 - 0x36d6b0
void Obj0000_Set_D_0076A5D8_Check_Field_0_EQ_2_0x36d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_0076A5D8_Check_Field_0_EQ_2_0x36d688");
#endif

    ctx->pc = 0x36d688u;

    // 0x36d688: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x36d688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x36d68c: 0xac44a5d8  sw          $a0, -0x5A28($v0)
    ctx->pc = 0x36d68cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x76A5D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x76A5D8u, _value); } while (0);
    // 0x36d690: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D690u;
    {
        const bool branch_taken_0x36d690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D690u;
        // 0x36d694: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d690) {
            ctx->pc = 0x36D6A4u;
            goto label_36d6a4;
        }
    }
    ctx->pc = 0x36D698u;
    // 0x36d698: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x36d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36d69c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x36d69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x36d6a0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x36d6a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_36d6a4:
    // 0x36d6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x36D6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D6ACu;
    // 0x36d6ac: 0x0  nop
    ctx->pc = 0x36d6acu;
    // NOP
    ctx->pc = 0x36d6b0u;
}
