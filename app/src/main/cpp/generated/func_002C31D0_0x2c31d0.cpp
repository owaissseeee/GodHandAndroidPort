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

// Function: func_002C31D0
// Address: 0x2c31d0 - 0x2c3280
void func_002C31D0_0x2c31d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C31D0_0x2c31d0");
#endif

    switch (ctx->pc) {
        case 0x2c3208u: goto label_2c3208;
        case 0x2c3260u: goto label_2c3260;
        default: break;
    }

    ctx->pc = 0x2c31d0u;

    // 0x2c31d0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2c31d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2c31d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c31d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c31d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c31d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c31dc: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x2c31dcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x2c31e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c31e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c31e4: 0x0  nop
    ctx->pc = 0x2c31e4u;
    // NOP
    // 0x2c31e8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2C31E8u;
    {
        const bool branch_taken_0x2c31e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c31e8) {
            ctx->pc = 0x2C3228u;
            goto label_2c3228;
        }
    }
    ctx->pc = 0x2C31F0u;
    // 0x2c31f0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2c31f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2c31f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c31f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c31f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c31f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c31fc: 0x0  nop
    ctx->pc = 0x2c31fcu;
    // NOP
    // 0x2c3200: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2c3200u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c3204: 0x0  nop
    ctx->pc = 0x2c3204u;
    // NOP
label_2c3208:
    // 0x2c3208: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c3208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c320c: 0x0  nop
    ctx->pc = 0x2c320cu;
    // NOP
    // 0x2c3210: 0x0  nop
    ctx->pc = 0x2c3210u;
    // NOP
    // 0x2c3214: 0x0  nop
    ctx->pc = 0x2c3214u;
    // NOP
    // 0x2c3218: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C3218u;
    {
        const bool branch_taken_0x2c3218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3218) {
            ctx->pc = 0x2C321Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3218u;
            // 0x2c321c: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3208;
        }
    }
    ctx->pc = 0x2C3220u;
    // 0x2c3220: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3228u;
label_2c3228:
    // 0x2c3228: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2c3228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2c322c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c322cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c3230: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c3230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3234: 0x0  nop
    ctx->pc = 0x2c3234u;
    // NOP
    // 0x2c3238: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c3238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c323c: 0x0  nop
    ctx->pc = 0x2c323cu;
    // NOP
    // 0x2c3240: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2C3240u;
    {
        const bool branch_taken_0x2c3240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3240) {
            ctx->pc = 0x2C3278u;
            goto label_2c3278;
        }
    }
    ctx->pc = 0x2C3248u;
    // 0x2c3248: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2c3248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2c324c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c324cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c3250: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c3250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c3254: 0x0  nop
    ctx->pc = 0x2c3254u;
    // NOP
    // 0x2c3258: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c3258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c325c: 0x0  nop
    ctx->pc = 0x2c325cu;
    // NOP
label_2c3260:
    // 0x2c3260: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c3260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3264: 0x0  nop
    ctx->pc = 0x2c3264u;
    // NOP
    // 0x2c3268: 0x0  nop
    ctx->pc = 0x2c3268u;
    // NOP
    // 0x2c326c: 0x0  nop
    ctx->pc = 0x2c326cu;
    // NOP
    // 0x2c3270: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C3270u;
    {
        const bool branch_taken_0x2c3270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3270) {
            ctx->pc = 0x2C3274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3270u;
            // 0x2c3274: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3260;
        }
    }
    ctx->pc = 0x2C3278u;
label_2c3278:
    // 0x2c3278: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3280u;
}
