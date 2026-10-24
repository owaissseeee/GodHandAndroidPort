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

// Function: cSndSeVoice_Init
// Address: 0x2cda48 - 0x2cda80
void cSndSeVoice_Init_0x2cda48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_Init_0x2cda48");
#endif

    switch (ctx->pc) {
        case 0x2cda64u: goto label_2cda64;
        default: break;
    }

    ctx->pc = 0x2cda48u;

    // 0x2cda48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cda48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cda4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cda4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cda50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cda54: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2cda54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2cda58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cda58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cda5c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2CDA5Cu;
    SET_GPR_U32(ctx, 31, 0x2CDA64u);
    ctx->pc = 0x2CDA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDA5Cu;
    // 0x2cda60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2CDA5Cu, 0x2CDA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA64u;
label_2cda64:
    // 0x2cda64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cda64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cda68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cda68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cda6c: 0xa603002a  sh          $v1, 0x2A($s0)
    ctx->pc = 0x2cda6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cda70: 0xa6030028  sh          $v1, 0x28($s0)
    ctx->pc = 0x2cda70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cda74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cda74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cda78: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA78u;
        // 0x2cda7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDA80u;
}
