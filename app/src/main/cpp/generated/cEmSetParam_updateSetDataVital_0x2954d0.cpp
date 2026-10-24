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

// Function: cEmSetParam_updateSetDataVital
// Address: 0x2954d0 - 0x295510
void cEmSetParam_updateSetDataVital_0x2954d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_updateSetDataVital_0x2954d0");
#endif

    switch (ctx->pc) {
        case 0x2954ecu: goto label_2954ec;
        default: break;
    }

    ctx->pc = 0x2954d0u;

    // 0x2954d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2954d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2954d4: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x2954d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2954d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2954d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2954dc: 0x24848658  addiu       $a0, $a0, -0x79A8
    ctx->pc = 0x2954dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    // 0x2954e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2954e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2954e4: 0xc0afbd8  jal         func_2BEF60
    ctx->pc = 0x2954E4u;
    SET_GPR_U32(ctx, 31, 0x2954ECu);
    ctx->pc = 0x2954E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2954E4u;
    // 0x2954e8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF60u, 0x2954E4u, 0x2954ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2954ECu;
label_2954ec:
    // 0x2954ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2954ECu;
    {
        const bool branch_taken_0x2954ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2954ec) {
            ctx->pc = 0x2954F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2954ECu;
            // 0x2954f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295504u;
            goto label_295504;
        }
    }
    ctx->pc = 0x2954F4u;
    // 0x2954f4: 0x5a000002  blezl       $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2954F4u;
    {
        const bool branch_taken_0x2954f4 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x2954f4) {
            ctx->pc = 0x2954F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2954F4u;
            // 0x2954f8: 0xa4400016  sh          $zero, 0x16($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295500u;
            goto label_295500;
        }
    }
    ctx->pc = 0x2954FCu;
    // 0x2954fc: 0xa4500016  sh          $s0, 0x16($v0)
    ctx->pc = 0x2954fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 16));
label_295500:
    // 0x295500: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x295500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295504:
    // 0x295504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295508: 0x3e00008  jr          $ra
    ctx->pc = 0x295508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295508u;
        // 0x29550c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295510u;
}
