#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: fptodp
// Address: 0x79cac8 - 0x79cb08
void fptodp_0x79cac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptodp_0x79cac8");
#endif

    switch (ctx->pc) {
        case 0x79cae0u: goto label_79cae0;
        case 0x79cafcu: goto label_79cafc;
        default: break;
    }

    ctx->pc = 0x79cac8u;

    // 0x79cac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79cac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79cacc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79caccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79cad0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79cad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79cad4: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x79cad4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79cad8: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79CAD8u;
    SET_GPR_U32(ctx, 31, 0x79CAE0u);
    ctx->pc = 0x79CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CAD8u;
    // 0x79cadc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79CAD8u, 0x79CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CAE0u;
label_79cae0:
    // 0x79cae0: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x79cae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79cae4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x79cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79cae8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x79cae8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x79caec: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x79caecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79caf0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x79caf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79caf4: 0xc1e75de  jal         func_79D778
    ctx->pc = 0x79CAF4u;
    SET_GPR_U32(ctx, 31, 0x79CAFCu);
    ctx->pc = 0x79CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CAF4u;
    // 0x79caf8: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D778u, 0x79CAF4u, 0x79CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CAFCu;
label_79cafc:
    // 0x79cafc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79cafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79cb00: 0x3e00008  jr          $ra
    ctx->pc = 0x79CB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB00u;
        // 0x79cb04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CB08u;
}
} // namespace gh_r501
