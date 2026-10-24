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

// Function: isEnableAudFtr
// Address: 0x35e968 - 0x35e9a8
void isEnableAudFtr_0x35e968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isEnableAudFtr_0x35e968");
#endif

    switch (ctx->pc) {
        case 0x35e97cu: goto label_35e97c;
        default: break;
    }

    ctx->pc = 0x35e968u;

    // 0x35e968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e96c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e970: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35e970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35e974: 0xc0d7a7a  jal         func_35E9E8
    ctx->pc = 0x35E974u;
    SET_GPR_U32(ctx, 31, 0x35E97Cu);
    ctx->pc = 0x35E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E974u;
    // 0x35e978: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9E8u, 0x35E974u, 0x35E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E97Cu;
label_35e97c:
    // 0x35e97c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x35e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x35e980: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E980u;
    {
        const bool branch_taken_0x35e980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E980u;
        // 0x35e984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e980) {
            ctx->pc = 0x35E998u;
            goto label_35e998;
        }
    }
    ctx->pc = 0x35E988u;
    // 0x35e988: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x35e988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35e98c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x35e98cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35e990: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x35e990u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35e994: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x35e994u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_35e998:
    // 0x35e998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e99c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35e99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x35E9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E9A0u;
        // 0x35e9a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E9A8u;
}
