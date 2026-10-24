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

// Function: func_00305F58
// Address: 0x305f58 - 0x305fb0
void func_00305F58_0x305f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305F58_0x305f58");
#endif

    switch (ctx->pc) {
        case 0x305f94u: goto label_305f94;
        default: break;
    }

    ctx->pc = 0x305f58u;

    // 0x305f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x305f5c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x305f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x305f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305f68: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x305f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x305f6c: 0x8cc40414  lw          $a0, 0x414($a2)
    ctx->pc = 0x305f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1044)));
    // 0x305f70: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x305f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x305f74: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x305F74u;
    {
        const bool branch_taken_0x305f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F74u;
        // 0x305f78: 0x21027  nor         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f74) {
            ctx->pc = 0x305F94u;
            goto label_305f94;
        }
    }
    ctx->pc = 0x305F7Cu;
    // 0x305f7c: 0x24a52200  addiu       $a1, $a1, 0x2200
    ctx->pc = 0x305f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8704));
    // 0x305f80: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x305f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x305f84: 0xacc20414  sw          $v0, 0x414($a2)
    ctx->pc = 0x305f84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1044), GPR_U32(ctx, 2));
    // 0x305f88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x305f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305f8c: 0xc0c1880  jal         func_306200
    ctx->pc = 0x305F8Cu;
    SET_GPR_U32(ctx, 31, 0x305F94u);
    ctx->pc = 0x305F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F8Cu;
    // 0x305f90: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x305F8Cu, 0x305F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F94u;
label_305f94:
    // 0x305f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305f98: 0x3e00008  jr          $ra
    ctx->pc = 0x305F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F98u;
        // 0x305f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305FA0u;
    // 0x305fa0: 0x0  nop
    ctx->pc = 0x305fa0u;
    // NOP
    // 0x305fa4: 0x0  nop
    ctx->pc = 0x305fa4u;
    // NOP
    // 0x305fa8: 0x0  nop
    ctx->pc = 0x305fa8u;
    // NOP
    // 0x305fac: 0x0  nop
    ctx->pc = 0x305facu;
    // NOP
    ctx->pc = 0x305fb0u;
}
