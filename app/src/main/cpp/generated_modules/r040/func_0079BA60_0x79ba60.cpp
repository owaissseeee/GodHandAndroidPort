#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079BA60
// Address: 0x79ba60 - 0x79baa8
void func_0079BA60_0x79ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BA60_0x79ba60");
#endif

    switch (ctx->pc) {
        case 0x79ba90u: goto label_79ba90;
        default: break;
    }

    ctx->pc = 0x79ba60u;

    // 0x79ba60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79ba64: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79ba68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ba6c: 0x8c62c800  lw          $v0, -0x3800($v1)
    ctx->pc = 0x79ba6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C800u));
    // 0x79ba70: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x79ba70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ba74: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x79ba74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ba78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x79ba78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79ba7c: 0x0  nop
    ctx->pc = 0x79ba7cu;
    // NOP
    // 0x79ba80: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x79BA80u;
    {
        const bool branch_taken_0x79ba80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79ba80) {
            ctx->pc = 0x79BA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BA80u;
            // 0x79ba84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BA98u;
            goto label_79ba98;
        }
    }
    ctx->pc = 0x79BA88u;
    // 0x79ba88: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79BA88u;
    SET_GPR_U32(ctx, 31, 0x79BA90u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79BA88u, 0x79BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA90u;
label_79ba90:
    // 0x79ba90: 0x8442054a  lh          $v0, 0x54A($v0)
    ctx->pc = 0x79ba90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x79ba94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x79ba94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_79ba98:
    // 0x79ba98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ba98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ba9c: 0x3e00008  jr          $ra
    ctx->pc = 0x79BA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA9Cu;
        // 0x79baa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BAA4u;
    // 0x79baa4: 0x0  nop
    ctx->pc = 0x79baa4u;
    // NOP
    ctx->pc = 0x79baa8u;
}
} // namespace gh_r040
