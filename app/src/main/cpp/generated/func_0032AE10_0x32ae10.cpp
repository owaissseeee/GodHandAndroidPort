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

// Function: func_0032AE10
// Address: 0x32ae10 - 0x32ae50
void func_0032AE10_0x32ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032AE10_0x32ae10");
#endif

    switch (ctx->pc) {
        case 0x32ae28u: goto label_32ae28;
        case 0x32ae30u: goto label_32ae30;
        case 0x32ae38u: goto label_32ae38;
        default: break;
    }

    ctx->pc = 0x32ae10u;

    // 0x32ae10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ae14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ae18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ae18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ae1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32ae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32ae20: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32AE20u;
    SET_GPR_U32(ctx, 31, 0x32AE28u);
    ctx->pc = 0x32AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE20u;
    // 0x32ae24: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32AE20u, 0x32AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE28u;
label_32ae28:
    // 0x32ae28: 0xc0cab94  jal         func_32AE50
    ctx->pc = 0x32AE28u;
    SET_GPR_U32(ctx, 31, 0x32AE30u);
    ctx->pc = 0x32AE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE28u;
    // 0x32ae2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AE50u, 0x32AE28u, 0x32AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE30u;
label_32ae30:
    // 0x32ae30: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x32AE30u;
    SET_GPR_U32(ctx, 31, 0x32AE38u);
    ctx->pc = 0x32AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE30u;
    // 0x32ae34: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32AE30u, 0x32AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE38u;
label_32ae38:
    // 0x32ae38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ae38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ae3c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x32ae3cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x32ae40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32ae40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ae44: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x32ae44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32ae48: 0x3e00008  jr          $ra
    ctx->pc = 0x32AE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE48u;
        // 0x32ae4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AE50u;
}
