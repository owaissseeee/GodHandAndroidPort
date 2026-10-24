#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: fptodp
// Address: 0x79b158 - 0x79b198
void fptodp_0x79b158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptodp_0x79b158");
#endif

    switch (ctx->pc) {
        case 0x79b170u: goto label_79b170;
        case 0x79b18cu: goto label_79b18c;
        default: break;
    }

    ctx->pc = 0x79b158u;

    // 0x79b158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79b158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79b15c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79b160: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79b160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b164: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x79b164u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79b168: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79B168u;
    SET_GPR_U32(ctx, 31, 0x79B170u);
    ctx->pc = 0x79B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B168u;
    // 0x79b16c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79B168u, 0x79B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B170u;
label_79b170:
    // 0x79b170: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x79b170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79b174: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x79b174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b178: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x79b178u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x79b17c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x79b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79b180: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x79b180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79b184: 0xc1e6f82  jal         func_79BE08
    ctx->pc = 0x79B184u;
    SET_GPR_U32(ctx, 31, 0x79B18Cu);
    ctx->pc = 0x79B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B184u;
    // 0x79b188: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BE08u, 0x79B184u, 0x79B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B18Cu;
label_79b18c:
    // 0x79b18c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b190: 0x3e00008  jr          $ra
    ctx->pc = 0x79B190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B190u;
        // 0x79b194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B198u;
}
} // namespace gh_r505
