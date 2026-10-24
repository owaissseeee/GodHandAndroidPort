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

// Function: func_002D5080
// Address: 0x2d5080 - 0x2d50c0
void func_002D5080_0x2d5080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5080_0x2d5080");
#endif

    ctx->pc = 0x2d5080u;

    // 0x2d5080: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2d5080u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5084: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d5084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5088: 0x216ba  dsrl        $v0, $v0, 26
    ctx->pc = 0x2d5088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 26);
    // 0x2d508c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2d508cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2d5090: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d5090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d5094: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2d5094u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d5098: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x2d5098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d509c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2d509cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2d50a0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2d50a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d50a4: 0x31fba  dsrl        $v1, $v1, 30
    ctx->pc = 0x2d50a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 30);
    // 0x2d50a8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2d50a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2d50ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2d50acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d50b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2d50b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2d50b4: 0x673804  sllv        $a3, $a3, $v1
    ctx->pc = 0x2d50b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x2d50b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D50B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50B8u;
        // 0x2d50bc: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D50B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D50C0u;
}
