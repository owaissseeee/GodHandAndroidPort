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

// Function: sceVu0RotMatrix
// Address: 0x30a870 - 0x30a8c8
void sceVu0RotMatrix_0x30a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0RotMatrix_0x30a870");
#endif

    switch (ctx->pc) {
        case 0x30a890u: goto label_30a890;
        case 0x30a8a0u: goto label_30a8a0;
        case 0x30a8b0u: goto label_30a8b0;
        default: break;
    }

    ctx->pc = 0x30a870u;

    // 0x30a870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30a874: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30a874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30a878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a87c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30a87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30a880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30a884: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30a884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a888: 0xc0c2994  jal         func_30A650
    ctx->pc = 0x30A888u;
    SET_GPR_U32(ctx, 31, 0x30A890u);
    ctx->pc = 0x30A88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A888u;
    // 0x30a88c: 0xc62c0008  lwc1        $f12, 0x8($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A650u, 0x30A888u, 0x30A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A890u;
label_30a890:
    // 0x30a890: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x30a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30a894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30a894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a898: 0xc0c29ee  jal         func_30A7B8
    ctx->pc = 0x30A898u;
    SET_GPR_U32(ctx, 31, 0x30A8A0u);
    ctx->pc = 0x30A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A898u;
    // 0x30a89c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7B8u, 0x30A898u, 0x30A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8A0u;
label_30a8a0:
    // 0x30a8a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30a8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8a4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x30a8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30a8a8: 0xc0c29c0  jal         func_30A700
    ctx->pc = 0x30A8A8u;
    SET_GPR_U32(ctx, 31, 0x30A8B0u);
    ctx->pc = 0x30A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A8A8u;
    // 0x30a8ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A700u, 0x30A8A8u, 0x30A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8B0u;
label_30a8b0:
    // 0x30a8b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30a8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a8b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a8b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30a8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x30A8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8BCu;
        // 0x30a8c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A8C4u;
    // 0x30a8c4: 0x0  nop
    ctx->pc = 0x30a8c4u;
    // NOP
    ctx->pc = 0x30a8c8u;
}
