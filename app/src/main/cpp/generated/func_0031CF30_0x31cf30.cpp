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

// Function: func_0031CF30
// Address: 0x31cf30 - 0x31cf78
void func_0031CF30_0x31cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031CF30_0x31cf30");
#endif

    switch (ctx->pc) {
        case 0x31cf40u: goto label_31cf40;
        default: break;
    }

    ctx->pc = 0x31cf30u;

    // 0x31cf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31cf34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31cf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31cf38: 0xc0c73de  jal         func_31CF78
    ctx->pc = 0x31CF38u;
    SET_GPR_U32(ctx, 31, 0x31CF40u);
    ctx->pc = 0x31CF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CF78u, 0x31CF38u, 0x31CF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CF40u;
label_31cf40:
    // 0x31cf40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31cf40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31cf44: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x31cf44u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x31cf48: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x31cf48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31cf4c: 0x0  nop
    ctx->pc = 0x31cf4cu;
    // NOP
    // 0x31cf50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x31CF50u;
    {
        const bool branch_taken_0x31cf50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF50u;
        // 0x31cf54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf50) {
            ctx->pc = 0x31CF68u;
            goto label_31cf68;
        }
    }
    ctx->pc = 0x31CF58u;
    // 0x31cf58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31cf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31cf5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31cf5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cf60: 0x0  nop
    ctx->pc = 0x31cf60u;
    // NOP
    // 0x31cf64: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31cf64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_31cf68:
    // 0x31cf68: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x31cf68u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x31cf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x31CF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF6Cu;
        // 0x31cf70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CF74u;
    // 0x31cf74: 0x0  nop
    ctx->pc = 0x31cf74u;
    // NOP
    ctx->pc = 0x31cf78u;
}
