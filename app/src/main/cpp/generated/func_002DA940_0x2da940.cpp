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

// Function: func_002DA940
// Address: 0x2da940 - 0x2da9b8
void func_002DA940_0x2da940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DA940_0x2da940");
#endif

    ctx->pc = 0x2da940u;

    // 0x2da940: 0x460d6301  sub.s       $f12, $f12, $f13
    ctx->pc = 0x2da940u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x2da944: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da948: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da94c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da950: 0x0  nop
    ctx->pc = 0x2da950u;
    // NOP
    // 0x2da954: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da958: 0x0  nop
    ctx->pc = 0x2da958u;
    // NOP
    // 0x2da95c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA95Cu;
    {
        const bool branch_taken_0x2da95c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da95c) {
            ctx->pc = 0x2DA978u;
            goto label_2da978;
        }
    }
    ctx->pc = 0x2DA964u;
    // 0x2da964: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2da964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da968: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da96c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da96cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da970: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA970u;
        // 0x2da974: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA978u;
label_2da978:
    // 0x2da978: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2da978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2da97c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da97cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da980: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da984: 0x0  nop
    ctx->pc = 0x2da984u;
    // NOP
    // 0x2da988: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2da988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da98c: 0x0  nop
    ctx->pc = 0x2da98cu;
    // NOP
    // 0x2da990: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA990u;
    {
        const bool branch_taken_0x2da990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da990) {
            ctx->pc = 0x2DA9A0u;
            goto label_2da9a0;
        }
    }
    ctx->pc = 0x2DA998u;
    // 0x2da998: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA998u;
        // 0x2da99c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA9A0u;
label_2da9a0:
    // 0x2da9a0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2da9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da9a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da9a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da9a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9ACu;
        // 0x2da9b0: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA9B4u;
    // 0x2da9b4: 0x0  nop
    ctx->pc = 0x2da9b4u;
    // NOP
    ctx->pc = 0x2da9b8u;
}
