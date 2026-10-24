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

// Function: GetOrInit_460D60_2BAD40
// Address: 0x2bad40 - 0x2bad80
void GetOrInit_460D60_2BAD40_0x2bad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_460D60_2BAD40_0x2bad40");
#endif

    switch (ctx->pc) {
        case 0x2bad6cu: goto label_2bad6c;
        default: break;
    }

    ctx->pc = 0x2bad40u;

    // 0x2bad40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bad44: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2bad44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2bad48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bad48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bad4c: 0x8c620d60  lw          $v0, 0xD60($v1)
    ctx->pc = 0x2bad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D60u));
    // 0x2bad50: 0x24700d60  addiu       $s0, $v1, 0xD60
    ctx->pc = 0x2bad50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3424));
    // 0x2bad54: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAD54u;
    {
        const bool branch_taken_0x2bad54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD54u;
        // 0x2bad58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bad54) {
            ctx->pc = 0x2BAD6Cu;
            goto label_2bad6c;
        }
    }
    ctx->pc = 0x2BAD5Cu;
    // 0x2bad5c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2bad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2bad60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bad60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad64: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x2BAD64u;
    SET_GPR_U32(ctx, 31, 0x2BAD6Cu);
    ctx->pc = 0x2BAD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAD64u;
    // 0x2bad68: 0x24a5be98  addiu       $a1, $a1, -0x4168 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x2BAD64u, 0x2BAD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD6Cu;
label_2bad6c:
    // 0x2bad6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bad6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bad70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bad74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bad74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bad78: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD78u;
        // 0x2bad7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAD80u;
}
