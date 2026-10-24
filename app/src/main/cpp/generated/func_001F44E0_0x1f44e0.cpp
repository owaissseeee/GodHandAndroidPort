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

// Function: func_001F44E0
// Address: 0x1f44e0 - 0x1f4530
void func_001F44E0_0x1f44e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F44E0_0x1f44e0");
#endif

    switch (ctx->pc) {
        case 0x1f4510u: goto label_1f4510;
        default: break;
    }

    ctx->pc = 0x1f44e0u;

    // 0x1f44e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f44e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f44e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f44e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f44e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f44e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f44ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f44ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44f0: 0x9e020054  lwu         $v0, 0x54($s0)
    ctx->pc = 0x1f44f0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1f44f4: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1f44f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1f44f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f44f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f44fc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F44FCu;
    {
        const bool branch_taken_0x1f44fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f44fc) {
            ctx->pc = 0x1F4500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F44FCu;
            // 0x1f4500: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4524u;
            goto label_1f4524;
        }
    }
    ctx->pc = 0x1F4504u;
    // 0x1f4504: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1f4504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1f4508: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x1F4508u;
    SET_GPR_U32(ctx, 31, 0x1F4510u);
    ctx->pc = 0x1F450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4508u;
    // 0x1f450c: 0x24847470  addiu       $a0, $a0, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x1F4508u, 0x1F4510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4510u;
label_1f4510:
    // 0x1f4510: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1f4510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1f4514: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1f4514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f4518: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f4518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f451c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1f451cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1f4520: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f4520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4524:
    // 0x1f4524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4528: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4528u;
        // 0x1f452c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4530u;
}
