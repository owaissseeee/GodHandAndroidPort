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

// Function: sftim_Tc2Time23N
// Address: 0x35b218 - 0x35b250
void sftim_Tc2Time23N_0x35b218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sftim_Tc2Time23N_0x35b218");
#endif

    switch (ctx->pc) {
        case 0x35b238u: goto label_35b238;
        default: break;
    }

    ctx->pc = 0x35b218u;

    // 0x35b218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b21c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35b21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35b220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35b220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b224: 0x24045dc0  addiu       $a0, $zero, 0x5DC0
    ctx->pc = 0x35b224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
    // 0x35b228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35b228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35b22c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35b22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35b230: 0xc0d6c62  jal         func_35B188
    ctx->pc = 0x35B230u;
    SET_GPR_U32(ctx, 31, 0x35B238u);
    ctx->pc = 0x35B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B230u;
    // 0x35b234: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B188u, 0x35B230u, 0x35B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B238u;
label_35b238:
    // 0x35b238: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x35b238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x35b23c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35b23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35b240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b244: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35b244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b248: 0x3e00008  jr          $ra
    ctx->pc = 0x35B248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B248u;
        // 0x35b24c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B250u;
}
