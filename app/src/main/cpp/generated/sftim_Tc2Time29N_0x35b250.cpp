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

// Function: sftim_Tc2Time29N
// Address: 0x35b250 - 0x35b288
void sftim_Tc2Time29N_0x35b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sftim_Tc2Time29N_0x35b250");
#endif

    switch (ctx->pc) {
        case 0x35b270u: goto label_35b270;
        default: break;
    }

    ctx->pc = 0x35b250u;

    // 0x35b250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b254: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35b254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35b258: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35b258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b25c: 0x24047530  addiu       $a0, $zero, 0x7530
    ctx->pc = 0x35b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x35b260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35b260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35b264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35b268: 0xc0d6c62  jal         func_35B188
    ctx->pc = 0x35B268u;
    SET_GPR_U32(ctx, 31, 0x35B270u);
    ctx->pc = 0x35B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B268u;
    // 0x35b26c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B188u, 0x35B268u, 0x35B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B270u;
label_35b270:
    // 0x35b270: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x35b270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x35b274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35b274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35b278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b27c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35b27cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b280: 0x3e00008  jr          $ra
    ctx->pc = 0x35B280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B280u;
        // 0x35b284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B288u;
}
