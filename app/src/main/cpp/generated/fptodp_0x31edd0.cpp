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

// Function: fptodp
// Address: 0x31edd0 - 0x31ee10
void fptodp_0x31edd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptodp_0x31edd0");
#endif

    switch (ctx->pc) {
        case 0x31ede8u: goto label_31ede8;
        case 0x31ee04u: goto label_31ee04;
        default: break;
    }

    ctx->pc = 0x31edd0u;

    // 0x31edd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31edd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31edd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31edd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31edd8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31eddc: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x31eddcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31ede0: 0xc0c7b12  jal         func_31EC48
    ctx->pc = 0x31EDE0u;
    SET_GPR_U32(ctx, 31, 0x31EDE8u);
    ctx->pc = 0x31EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EDE0u;
    // 0x31ede4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC48u, 0x31EDE0u, 0x31EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EDE8u;
label_31ede8:
    // 0x31ede8: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x31ede8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x31edec: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x31edecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31edf0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x31edf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x31edf4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x31edf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31edf8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x31edf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31edfc: 0xc0c7aac  jal         func_31EAB0
    ctx->pc = 0x31EDFCu;
    SET_GPR_U32(ctx, 31, 0x31EE04u);
    ctx->pc = 0x31EE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EDFCu;
    // 0x31ee00: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAB0u, 0x31EDFCu, 0x31EE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE04u;
label_31ee04:
    // 0x31ee04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31ee04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ee08: 0x3e00008  jr          $ra
    ctx->pc = 0x31EE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE08u;
        // 0x31ee0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EE10u;
}
