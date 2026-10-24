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

// Function: VtObj_destroyDerived
// Address: 0x1710f0 - 0x171140
void VtObj_destroyDerived_0x1710f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VtObj_destroyDerived_0x1710f0");
#endif

    switch (ctx->pc) {
        case 0x171120u: goto label_171120;
        case 0x17112cu: goto label_17112c;
        default: break;
    }

    ctx->pc = 0x1710f0u;

    // 0x1710f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1710f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1710f4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1710f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1710f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1710f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1710fc: 0x24420ca0  addiu       $v0, $v0, 0xCA0
    ctx->pc = 0x1710fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3232));
    // 0x171100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x171104: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17110c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17110cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171110: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x171110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x171114: 0x26041ae0  addiu       $a0, $s0, 0x1AE0
    ctx->pc = 0x171114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6880));
    // 0x171118: 0xc0ab4a2  jal         func_2AD288
    ctx->pc = 0x171118u;
    SET_GPR_U32(ctx, 31, 0x171120u);
    ctx->pc = 0x17111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171118u;
    // 0x17111c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD288u, 0x171118u, 0x171120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171120u;
label_171120:
    // 0x171120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171124: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x171124u;
    SET_GPR_U32(ctx, 31, 0x17112Cu);
    ctx->pc = 0x171128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171124u;
    // 0x171128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x171124u, 0x17112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17112Cu;
label_17112c:
    // 0x17112c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17112cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171138: 0x3e00008  jr          $ra
    ctx->pc = 0x171138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171138u;
        // 0x17113c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171140u;
}
