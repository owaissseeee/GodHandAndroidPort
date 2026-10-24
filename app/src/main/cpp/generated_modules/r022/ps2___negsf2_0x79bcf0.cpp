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
// Function: __negsf2
// Address: 0x79bcf0 - 0x79bd28
void ps2___negsf2_0x79bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___negsf2_0x79bcf0");
#endif

    switch (ctx->pc) {
        case 0x79bd08u: goto label_79bd08;
        case 0x79bd1cu: goto label_79bd1c;
        default: break;
    }

    ctx->pc = 0x79bcf0u;

    // 0x79bcf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79bcf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79bcf8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79bcfc: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x79bcfcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79bd00: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79BD00u;
    SET_GPR_U32(ctx, 31, 0x79BD08u);
    ctx->pc = 0x79BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD00u;
    // 0x79bd04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79BD00u, 0x79BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD08u;
label_79bd08:
    // 0x79bd08: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79bd0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79bd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd10: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x79bd10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x79bd14: 0xc1e6c6e  jal         func_79B1B8
    ctx->pc = 0x79BD14u;
    SET_GPR_U32(ctx, 31, 0x79BD1Cu);
    ctx->pc = 0x79BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD14u;
    // 0x79bd18: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B1B8u, 0x79BD14u, 0x79BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BD1Cu;
label_79bd1c:
    // 0x79bd1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79bd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bd20: 0x3e00008  jr          $ra
    ctx->pc = 0x79BD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD20u;
        // 0x79bd24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BD28u;
}
} // namespace gh_r022
