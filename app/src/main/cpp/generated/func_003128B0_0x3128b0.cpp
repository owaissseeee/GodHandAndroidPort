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

// Function: func_003128B0
// Address: 0x3128b0 - 0x312908
void func_003128B0_0x3128b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003128B0_0x3128b0");
#endif

    switch (ctx->pc) {
        case 0x3128e4u: goto label_3128e4;
        case 0x3128ecu: goto label_3128ec;
        default: break;
    }

    ctx->pc = 0x3128b0u;

    // 0x3128b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3128b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3128b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3128b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3128b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3128b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3128bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3128bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3128c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3128c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3128c4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3128c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3128c8: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3128C8u;
    {
        const bool branch_taken_0x3128c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3128c8) {
            ctx->pc = 0x3128CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3128C8u;
            // 0x3128cc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3128F0u;
            goto label_3128f0;
        }
    }
    ctx->pc = 0x3128D0u;
    // 0x3128d0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3128d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3128d4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3128D4u;
    {
        const bool branch_taken_0x3128d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3128d4) {
            ctx->pc = 0x3128E4u;
            goto label_3128e4;
        }
    }
    ctx->pc = 0x3128DCu;
    // 0x3128dc: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x3128DCu;
    SET_GPR_U32(ctx, 31, 0x3128E4u);
    ctx->pc = 0x3128E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128DCu;
    // 0x3128e0: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x3128DCu, 0x3128E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128E4u;
label_3128e4:
    // 0x3128e4: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x3128E4u;
    SET_GPR_U32(ctx, 31, 0x3128ECu);
    ctx->pc = 0x3128E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128E4u;
    // 0x3128e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x3128E4u, 0x3128ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128ECu;
label_3128ec:
    // 0x3128ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3128ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3128f0:
    // 0x3128f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3128f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3128f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3128f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3128f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3128f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3128fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3128FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128FCu;
        // 0x312900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3128FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312904u;
    // 0x312904: 0x0  nop
    ctx->pc = 0x312904u;
    // NOP
    ctx->pc = 0x312908u;
}
