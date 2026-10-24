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

// Function: cGameObj_isWithinRangeXZ
// Address: 0x17e058 - 0x17e0a8
void cGameObj_isWithinRangeXZ_0x17e058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_isWithinRangeXZ_0x17e058");
#endif

    switch (ctx->pc) {
        case 0x17e080u: goto label_17e080;
        default: break;
    }

    ctx->pc = 0x17e058u;

    // 0x17e058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e05c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17e05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17e060: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x17e060u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17e064: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17e064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e06c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x17e06cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x17e070: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x17e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x17e074: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17e074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e078: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x17E078u;
    SET_GPR_U32(ctx, 31, 0x17E080u);
    ctx->pc = 0x17E07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E078u;
    // 0x17e07c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x17E078u, 0x17E080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E080u;
label_17e080:
    // 0x17e080: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x17e080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e084: 0x0  nop
    ctx->pc = 0x17e084u;
    // NOP
    // 0x17e088: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17E088u;
    {
        const bool branch_taken_0x17e088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e088) {
            ctx->pc = 0x17E08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E088u;
            // 0x17e08c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E090u;
            goto label_17e090;
        }
    }
    ctx->pc = 0x17E090u;
label_17e090:
    // 0x17e090: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17e090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e098: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17e098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e09c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x17e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17E0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E0A0u;
        // 0x17e0a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E0A8u;
}
