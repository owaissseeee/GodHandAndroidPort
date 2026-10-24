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

// Function: func_003741B0
// Address: 0x3741b0 - 0x374210
void func_003741B0_0x3741b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003741B0_0x3741b0");
#endif

    switch (ctx->pc) {
        case 0x3741f0u: goto label_3741f0;
        case 0x374200u: goto label_374200;
        default: break;
    }

    ctx->pc = 0x3741b0u;

    // 0x3741b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3741b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3741b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3741b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3741b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3741bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3741bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3741c0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3741C0u;
    {
        const bool branch_taken_0x3741c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3741C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3741C0u;
        // 0x3741c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3741c0) {
            ctx->pc = 0x374204u;
            goto label_374204;
        }
    }
    ctx->pc = 0x3741C8u;
    // 0x3741c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3741c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3741cc: 0x0  nop
    ctx->pc = 0x3741ccu;
    // NOP
    // 0x3741d0: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x3741d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3741d4: 0x0  nop
    ctx->pc = 0x3741d4u;
    // NOP
    // 0x3741d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3741D8u;
    {
        const bool branch_taken_0x3741d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3741DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3741D8u;
        // 0x3741dc: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3741d8) {
            ctx->pc = 0x3741F8u;
            goto label_3741f8;
        }
    }
    ctx->pc = 0x3741E0u;
    // 0x3741e0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3741e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3741e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3741e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3741e8: 0xc0caafa  jal         func_32ABE8
    ctx->pc = 0x3741E8u;
    SET_GPR_U32(ctx, 31, 0x3741F0u);
    ctx->pc = 0x3741ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3741E8u;
    // 0x3741ec: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ABE8u, 0x3741E8u, 0x3741F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3741F0u;
label_3741f0:
    // 0x3741f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3741F0u;
    {
        const bool branch_taken_0x3741f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3741F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3741F0u;
        // 0x3741f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3741f0) {
            ctx->pc = 0x374204u;
            goto label_374204;
        }
    }
    ctx->pc = 0x3741F8u;
label_3741f8:
    // 0x3741f8: 0xc0caafa  jal         func_32ABE8
    ctx->pc = 0x3741F8u;
    SET_GPR_U32(ctx, 31, 0x374200u);
    ctx->pc = 0x3741FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3741F8u;
    // 0x3741fc: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ABE8u, 0x3741F8u, 0x374200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374200u;
label_374200:
    // 0x374200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_374204:
    // 0x374204: 0x3e00008  jr          $ra
    ctx->pc = 0x374204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374204u;
        // 0x374208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37420Cu;
    // 0x37420c: 0x0  nop
    ctx->pc = 0x37420cu;
    // NOP
    ctx->pc = 0x374210u;
}
