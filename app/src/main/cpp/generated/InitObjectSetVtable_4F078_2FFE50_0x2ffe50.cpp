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

// Function: InitObjectSetVtable_4F078_2FFE50
// Address: 0x2ffe50 - 0x2ffe90
void InitObjectSetVtable_4F078_2FFE50_0x2ffe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectSetVtable_4F078_2FFE50_0x2ffe50");
#endif

    switch (ctx->pc) {
        case 0x2ffe6cu: goto label_2ffe6c;
        default: break;
    }

    ctx->pc = 0x2ffe50u;

    // 0x2ffe50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffe54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ffe54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ffe58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffe58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe5c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFE5Cu;
    {
        const bool branch_taken_0x2ffe5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE5Cu;
        // 0x2ffe60: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe5c) {
            ctx->pc = 0x2FFE78u;
            goto label_2ffe78;
        }
    }
    ctx->pc = 0x2FFE64u;
    // 0x2ffe64: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2FFE64u;
    SET_GPR_U32(ctx, 31, 0x2FFE6Cu);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2FFE64u, 0x2FFE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE6Cu;
label_2ffe6c:
    // 0x2ffe6c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ffe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ffe70: 0x2463f078  addiu       $v1, $v1, -0xF88
    ctx->pc = 0x2ffe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963320));
    // 0x2ffe74: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2ffe74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_2ffe78:
    // 0x2ffe78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ffe78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffe7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffe80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ffe80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffe84: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE84u;
        // 0x2ffe88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFE8Cu;
    // 0x2ffe8c: 0x0  nop
    ctx->pc = 0x2ffe8cu;
    // NOP
    ctx->pc = 0x2ffe90u;
}
