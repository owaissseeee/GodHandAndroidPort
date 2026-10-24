#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: fptodp
// Address: 0x79bd58 - 0x79bd98
void fptodp_0x79bd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptodp_0x79bd58");
#endif

    switch (ctx->pc) {
        case 0x79bd70u: goto label_79bd70;
        case 0x79bd8cu: goto label_79bd8c;
        default: break;
    }

    ctx->pc = 0x79bd58u;

    // 0x79bd58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79bd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79bd5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79bd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79bd60: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79bd64: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x79bd64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79bd68: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79BD68u;
    SET_GPR_U32(ctx, 31, 0x79BD70u);
    ctx->pc = 0x79BD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD68u;
    // 0x79bd6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79BD68u, 0x79BD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD70u;
label_79bd70:
    // 0x79bd70: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x79bd70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79bd74: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x79bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bd78: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x79bd78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x79bd7c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x79bd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79bd80: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x79bd80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79bd84: 0xc1e7282  jal         func_79CA08
    ctx->pc = 0x79BD84u;
    SET_GPR_U32(ctx, 31, 0x79BD8Cu);
    ctx->pc = 0x79BD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD84u;
    // 0x79bd88: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CA08u, 0x79BD84u, 0x79BD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD8Cu;
label_79bd8c:
    // 0x79bd8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79bd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bd90: 0x3e00008  jr          $ra
    ctx->pc = 0x79BD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD90u;
        // 0x79bd94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BD98u;
}
} // namespace gh_r022
