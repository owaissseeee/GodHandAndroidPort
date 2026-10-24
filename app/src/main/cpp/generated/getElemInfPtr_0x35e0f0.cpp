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

// Function: getElemInfPtr
// Address: 0x35e0f0 - 0x35e148
void getElemInfPtr_0x35e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getElemInfPtr_0x35e0f0");
#endif

    switch (ctx->pc) {
        case 0x35e10cu: goto label_35e10c;
        default: break;
    }

    ctx->pc = 0x35e0f0u;

    // 0x35e0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e0f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e0f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35e0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e0fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e100: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35e100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35e104: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x35E104u;
    SET_GPR_U32(ctx, 31, 0x35E10Cu);
    ctx->pc = 0x35E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E104u;
    // 0x35e108: 0x8c910004  lw          $s1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x35E104u, 0x35E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E10Cu;
label_35e10c:
    // 0x35e10c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35e10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e110: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35E110u;
    {
        const bool branch_taken_0x35e110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E110u;
        // 0x35e114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e110) {
            ctx->pc = 0x35E130u;
            goto label_35e130;
        }
    }
    ctx->pc = 0x35E118u;
    // 0x35e118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e11c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35e120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e124: 0x80d7696  j           func_35DA58
    ctx->pc = 0x35E124u;
    ctx->pc = 0x35E128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E124u;
    // 0x35e128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DA58u, 0x35E124u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35E12Cu;
    // 0x35e12c: 0x0  nop
    ctx->pc = 0x35e12cu;
    // NOP
label_35e130:
    // 0x35e130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35e138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e13c: 0x3e00008  jr          $ra
    ctx->pc = 0x35E13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E13Cu;
        // 0x35e140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E144u;
    // 0x35e144: 0x0  nop
    ctx->pc = 0x35e144u;
    // NOP
    ctx->pc = 0x35e148u;
}
