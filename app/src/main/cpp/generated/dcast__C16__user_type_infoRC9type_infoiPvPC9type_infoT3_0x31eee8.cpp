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

// Function: dcast__C16__user_type_infoRC9type_infoiPvPC9type_infoT3
// Address: 0x31eee8 - 0x31ef18
void dcast__C16__user_type_infoRC9type_infoiPvPC9type_infoT3_0x31eee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dcast__C16__user_type_infoRC9type_infoiPvPC9type_infoT3_0x31eee8");
#endif

    switch (ctx->pc) {
        case 0x31eefcu: goto label_31eefc;
        default: break;
    }

    ctx->pc = 0x31eee8u;

    // 0x31eee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31eee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31eeec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31eeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31eef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31eef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31eef4: 0xc0c7b90  jal         func_31EE40
    ctx->pc = 0x31EEF4u;
    SET_GPR_U32(ctx, 31, 0x31EEFCu);
    ctx->pc = 0x31EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EEF4u;
    // 0x31eef8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE40u, 0x31EEF4u, 0x31EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EEFCu;
label_31eefc:
    // 0x31eefc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x31eefcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x31ef00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31ef00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ef04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31ef04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ef08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31ef08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ef0c: 0x3e00008  jr          $ra
    ctx->pc = 0x31EF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EF0Cu;
        // 0x31ef10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EF14u;
    // 0x31ef14: 0x0  nop
    ctx->pc = 0x31ef14u;
    // NOP
    ctx->pc = 0x31ef18u;
}
