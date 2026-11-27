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

// Function: Turn_dest_dir
// Address: 0x2da1f8 - 0x2da2d0
void Turn_dest_dir_0x2da1f8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Turn_dest_dir_0x2da1f8");
#endif


    // 0x2da1f8: 0x460c6b41  sub.s       $f13, $f13, $f12
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x2da1fc: 0x3c014049  lui         $at, 0x4049
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da200: 0x34210fdb  ori         $at, $at, 0xFDB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da204: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da208: 0x0  nop
    // NOP
    // 0x2da20c: 0x460d0034  c.lt.s      $f0, $f13
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da210: 0x0  nop
    // NOP
    // 0x2da214: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA214u;
    {
        const bool branch_taken_0x2da214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da214) {
            ctx->pc = 0x2DA230u;
            goto label_2da230;
        }
    }
    // 0x2da21c: 0x3c0140c9  lui         $at, 0x40C9
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da220: 0x34210fdb  ori         $at, $at, 0xFDB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da224: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da228: 0x0  nop
    // NOP
    // 0x2da22c: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_2da230:
    // 0x2da230: 0x3c01c049  lui         $at, 0xC049
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2da234: 0x34210fdb  ori         $at, $at, 0xFDB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da238: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da23c: 0x0  nop
    // NOP
    // 0x2da240: 0x46006834  c.lt.s      $f13, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da244: 0x0  nop
    // NOP
    // 0x2da248: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA248u;
    {
        const bool branch_taken_0x2da248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da248) {
            ctx->pc = 0x2DA264u;
            goto label_2da264;
        }
    }
    // 0x2da250: 0x3c0140c9  lui         $at, 0x40C9
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da254: 0x34210fdb  ori         $at, $at, 0xFDB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da258: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da25c: 0x0  nop
    // NOP
    // 0x2da260: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_2da264:
    // 0x2da264: 0x44800000  mtc1        $zero, $f0
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da268: 0x3c01bf80  lui         $at, 0xBF80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2da26c: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da270: 0x460d0034  c.lt.s      $f0, $f13
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da274: 0x0  nop
    // NOP
    // 0x2da278: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA278u;
    {
        const bool branch_taken_0x2da278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da278) {
            ctx->pc = 0x2DA27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA278u;
            // 0x2da27c: 0x46006807  neg.s       $f0, $f13 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA29Cu;
            goto label_2da29c;
        }
    }
    // 0x2da280: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2da284: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da288: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA288u;
    {
        const bool branch_taken_0x2da288 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da288) {
            ctx->pc = 0x2DA28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA288u;
            // 0x2da28c: 0x46006807  neg.s       $f0, $f13 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[13]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA29Cu;
            goto label_2da29c;
        }
    }
    // 0x2da290: 0x460d7034  c.lt.s      $f14, $f13
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da294: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA294u;
    {
        const bool branch_taken_0x2da294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da294) {
            ctx->pc = 0x2DA2A0u;
            goto label_2da2a0;
        }
    }
label_2da29c:
    // 0x2da29c: 0x46007034  c.lt.s      $f14, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2da2a0:
    // 0x2da2a0: 0x0  nop
    // NOP
    // 0x2da2a4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA2A4u;
    {
        const bool branch_taken_0x2da2a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da2a4) {
            ctx->pc = 0x2DA2C8u;
            goto label_2da2c8;
        }
    }
    // 0x2da2ac: 0x44800000  mtc1        $zero, $f0
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da2b0: 0x0  nop
    // NOP
    // 0x2da2b4: 0x460d0034  c.lt.s      $f0, $f13
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da2b8: 0x0  nop
    // NOP
    // 0x2da2bc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA2BCu;
    {
        const bool branch_taken_0x2da2bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2BCu;
        // 0x2da2c0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2bc) {
            ctx->pc = 0x2DA2C8u;
            goto label_2da2c8;
        }
    }
    // 0x2da2c4: 0x46006b87  neg.s       $f14, $f13
    ctx->f[14] = FPU_NEG_S(ctx->f[13]);
label_2da2c8:
    // 0x2da2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2C8u;
        // 0x2da2cc: 0x46017002  mul.s       $f0, $f14, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA2D0u;
}