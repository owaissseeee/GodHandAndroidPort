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

// Function: func_0032D340
// Address: 0x32d340 - 0x32d3a8
void func_0032D340_0x32d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032D340_0x32d340");
#endif

    switch (ctx->pc) {
        case 0x32d36cu: goto label_32d36c;
        case 0x32d380u: goto label_32d380;
        case 0x32d388u: goto label_32d388;
        default: break;
    }

    ctx->pc = 0x32d340u;

    // 0x32d340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32d344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32d348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d34c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32d34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32d350: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32d350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d354: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32d358: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32d358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d35c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32d35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32d360: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32d360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32d364: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32D364u;
    SET_GPR_U32(ctx, 31, 0x32D36Cu);
    ctx->pc = 0x32D368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D364u;
    // 0x32d368: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32D364u, 0x32D36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D36Cu;
label_32d36c:
    // 0x32d36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32d370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d374: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32d374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d378: 0xc0cb4ea  jal         func_32D3A8
    ctx->pc = 0x32D378u;
    SET_GPR_U32(ctx, 31, 0x32D380u);
    ctx->pc = 0x32D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D378u;
    // 0x32d37c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D3A8u, 0x32D378u, 0x32D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D380u;
label_32d380:
    // 0x32d380: 0xc0cff2a  jal         func_33FCA8
    ctx->pc = 0x32D380u;
    SET_GPR_U32(ctx, 31, 0x32D388u);
    ctx->pc = 0x32D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D380u;
    // 0x32d384: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32D380u, 0x32D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D388u;
label_32d388:
    // 0x32d388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32d388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d38c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32d38cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d390: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32d390u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d398: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32d398u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32d39c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32d39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x32D3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D3A0u;
        // 0x32d3a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D3A8u;
}
