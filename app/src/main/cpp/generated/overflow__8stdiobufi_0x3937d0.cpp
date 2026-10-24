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

// Function: overflow__8stdiobufi
// Address: 0x3937d0 - 0x393820
void overflow__8stdiobufi_0x3937d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("overflow__8stdiobufi_0x3937d0");
#endif

    switch (ctx->pc) {
        case 0x3937ecu: goto label_3937ec;
        case 0x393808u: goto label_393808;
        default: break;
    }

    ctx->pc = 0x3937d0u;

    // 0x3937d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3937d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3937d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3937d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3937d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3937d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3937dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3937dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3937e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3937e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3937e4: 0xc0e3be8  jal         func_38EFA0
    ctx->pc = 0x3937E4u;
    SET_GPR_U32(ctx, 31, 0x3937ECu);
    ctx->pc = 0x3937E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3937E4u;
    // 0x3937e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EFA0u, 0x3937E4u, 0x3937ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3937ECu;
label_3937ec:
    // 0x3937ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3937ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3937f0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3937F0u;
    {
        const bool branch_taken_0x3937f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3937F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3937F0u;
        // 0x3937f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3937f0) {
            ctx->pc = 0x393808u;
            goto label_393808;
        }
    }
    ctx->pc = 0x3937F8u;
    // 0x3937f8: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3937F8u;
    {
        const bool branch_taken_0x3937f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x3937FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3937F8u;
        // 0x3937fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3937f8) {
            ctx->pc = 0x393808u;
            goto label_393808;
        }
    }
    ctx->pc = 0x393800u;
    // 0x393800: 0xc0e9808  jal         func_3A6020
    ctx->pc = 0x393800u;
    SET_GPR_U32(ctx, 31, 0x393808u);
    ctx->pc = 0x393804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393800u;
    // 0x393804: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6020u, 0x393800u, 0x393808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393808u;
label_393808:
    // 0x393808: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x393808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39380c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39380cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x393810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393814: 0x3e00008  jr          $ra
    ctx->pc = 0x393814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393814u;
        // 0x393818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39381Cu;
    // 0x39381c: 0x0  nop
    ctx->pc = 0x39381cu;
    // NOP
    ctx->pc = 0x393820u;
}
