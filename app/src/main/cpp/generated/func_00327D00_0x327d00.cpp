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

// Function: func_00327D00
// Address: 0x327d00 - 0x327d48
void func_00327D00_0x327d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00327D00_0x327d00");
#endif

    switch (ctx->pc) {
        case 0x327d1cu: goto label_327d1c;
        case 0x327d28u: goto label_327d28;
        case 0x327d30u: goto label_327d30;
        default: break;
    }

    ctx->pc = 0x327d00u;

    // 0x327d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327d08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x327d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x327d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x327d10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x327d14: 0xc0ca41c  jal         func_329070
    ctx->pc = 0x327D14u;
    SET_GPR_U32(ctx, 31, 0x327D1Cu);
    ctx->pc = 0x327D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D14u;
    // 0x327d18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329070u, 0x327D14u, 0x327D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D1Cu;
label_327d1c:
    // 0x327d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d20: 0xc0c9f52  jal         func_327D48
    ctx->pc = 0x327D20u;
    SET_GPR_U32(ctx, 31, 0x327D28u);
    ctx->pc = 0x327D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D20u;
    // 0x327d24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327D48u, 0x327D20u, 0x327D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D28u;
label_327d28:
    // 0x327d28: 0xc0ca422  jal         func_329088
    ctx->pc = 0x327D28u;
    SET_GPR_U32(ctx, 31, 0x327D30u);
    ctx->pc = 0x327D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D28u;
    // 0x327d2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329088u, 0x327D28u, 0x327D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D30u;
label_327d30:
    // 0x327d30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x327d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327d34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x327d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327d40: 0x3e00008  jr          $ra
    ctx->pc = 0x327D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D40u;
        // 0x327d44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327D48u;
}
