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

// Function: sftim_Tc2Time59N
// Address: 0x35b288 - 0x35b2c0
void sftim_Tc2Time59N_0x35b288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sftim_Tc2Time59N_0x35b288");
#endif

    switch (ctx->pc) {
        case 0x35b2a8u: goto label_35b2a8;
        default: break;
    }

    ctx->pc = 0x35b288u;

    // 0x35b288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b28c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35b290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35b290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b294: 0x3404ea60  ori         $a0, $zero, 0xEA60
    ctx->pc = 0x35b294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x35b298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35b298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35b29c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35b29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35b2a0: 0xc0d6c62  jal         func_35B188
    ctx->pc = 0x35B2A0u;
    SET_GPR_U32(ctx, 31, 0x35B2A8u);
    ctx->pc = 0x35B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B2A0u;
    // 0x35b2a4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B188u, 0x35B2A0u, 0x35B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B2A8u;
label_35b2a8:
    // 0x35b2a8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x35b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x35b2ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35b2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b2b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35b2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b2b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35b2b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x35B2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B2B8u;
        // 0x35b2bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B2C0u;
}
