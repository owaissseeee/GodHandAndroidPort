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

// Function: InitSoundEntry_375B90
// Address: 0x375b90 - 0x375bf0
void InitSoundEntry_375B90_0x375b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSoundEntry_375B90_0x375b90");
#endif

    switch (ctx->pc) {
        case 0x375bc8u: goto label_375bc8;
        default: break;
    }

    ctx->pc = 0x375b90u;

    // 0x375b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x375b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x375b94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x375b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x375b98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x375b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x375b9c: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x375b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x375ba0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x375ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x375ba4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x375ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ba8: 0x49400  sll         $s2, $a0, 16
    ctx->pc = 0x375ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x375bac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375bb0: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x375bb0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x375bb4: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x375bb4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x375bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x375bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x375bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375bc0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x375BC0u;
    SET_GPR_U32(ctx, 31, 0x375BC8u);
    ctx->pc = 0x375BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375BC0u;
    // 0x375bc4: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x375BC0u, 0x375BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375BC8u;
label_375bc8:
    // 0x375bc8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x375bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x375bcc: 0xa6300002  sh          $s0, 0x2($s1)
    ctx->pc = 0x375bccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x375bd0: 0xa6320000  sh          $s2, 0x0($s1)
    ctx->pc = 0x375bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x375bd4: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x375bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x375bd8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x375bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375bdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x375bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375be0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x375be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375be8: 0x3e00008  jr          $ra
    ctx->pc = 0x375BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375BE8u;
        // 0x375bec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375BF0u;
}
