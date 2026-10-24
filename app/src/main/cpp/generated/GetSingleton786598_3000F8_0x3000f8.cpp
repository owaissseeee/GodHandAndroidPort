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

// Function: GetSingleton786598_3000F8
// Address: 0x3000f8 - 0x300148
void GetSingleton786598_3000F8_0x3000f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingleton786598_3000F8_0x3000f8");
#endif

    switch (ctx->pc) {
        case 0x30011cu: goto label_30011c;
        case 0x300134u: goto label_300134;
        default: break;
    }

    ctx->pc = 0x3000f8u;

    // 0x3000f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3000f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3000fc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3000fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x300100: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x300100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x300104: 0x8c626598  lw          $v0, 0x6598($v1)
    ctx->pc = 0x300104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786598u));
    // 0x300108: 0x24706598  addiu       $s0, $v1, 0x6598
    ctx->pc = 0x300108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26008));
    // 0x30010c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30010Cu;
    {
        const bool branch_taken_0x30010c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30010Cu;
        // 0x300110: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30010c) {
            ctx->pc = 0x300134u;
            goto label_300134;
        }
    }
    ctx->pc = 0x300114u;
    // 0x300114: 0xc0ad94a  jal         func_2B6528
    ctx->pc = 0x300114u;
    SET_GPR_U32(ctx, 31, 0x30011Cu);
    ctx->pc = 0x2B6528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6528u, 0x300114u, 0x30011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30011Cu;
label_30011c:
    // 0x30011c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x30011cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x300120: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x300120u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x300124: 0x24a5fba8  addiu       $a1, $a1, -0x458
    ctx->pc = 0x300124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966184));
    // 0x300128: 0x24c60d58  addiu       $a2, $a2, 0xD58
    ctx->pc = 0x300128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3416));
    // 0x30012c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x30012Cu;
    SET_GPR_U32(ctx, 31, 0x300134u);
    ctx->pc = 0x300130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30012Cu;
    // 0x300130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x30012Cu, 0x300134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300134u;
label_300134:
    // 0x300134: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x300134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30013c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30013cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300140: 0x3e00008  jr          $ra
    ctx->pc = 0x300140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300140u;
        // 0x300144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300148u;
}
