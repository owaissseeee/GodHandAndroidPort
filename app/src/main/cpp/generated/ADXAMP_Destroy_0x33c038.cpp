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

// Function: ADXAMP_Destroy
// Address: 0x33c038 - 0x33c088
void ADXAMP_Destroy_0x33c038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXAMP_Destroy_0x33c038");
#endif

    switch (ctx->pc) {
        case 0x33c054u: goto label_33c054;
        case 0x33c064u: goto label_33c064;
        default: break;
    }

    ctx->pc = 0x33c038u;

    // 0x33c038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33c03c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33c040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c044: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x33C044u;
    {
        const bool branch_taken_0x33c044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C044u;
        // 0x33c048: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c044) {
            ctx->pc = 0x33C078u;
            goto label_33c078;
        }
    }
    ctx->pc = 0x33C04Cu;
    // 0x33c04c: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x33C04Cu;
    SET_GPR_U32(ctx, 31, 0x33C054u);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x33C04Cu, 0x33C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C054u;
label_33c054:
    // 0x33c054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c05c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33C05Cu;
    SET_GPR_U32(ctx, 31, 0x33C064u);
    ctx->pc = 0x33C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C05Cu;
    // 0x33c060: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33C05Cu, 0x33C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C064u;
label_33c064:
    // 0x33c064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c068: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33c068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c06c: 0x80cf9a4  j           func_33E690
    ctx->pc = 0x33C06Cu;
    ctx->pc = 0x33C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C06Cu;
    // 0x33c070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x33C06Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33C074u;
    // 0x33c074: 0x0  nop
    ctx->pc = 0x33c074u;
    // NOP
label_33c078:
    // 0x33c078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c07c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33c07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c080: 0x3e00008  jr          $ra
    ctx->pc = 0x33C080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C080u;
        // 0x33c084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C088u;
}
