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

// Function: func_002E7FE8
// Address: 0x2e7fe8 - 0x2e8038
void func_002E7FE8_0x2e7fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E7FE8_0x2e7fe8");
#endif

    switch (ctx->pc) {
        case 0x2e800cu: goto label_2e800c;
        case 0x2e8024u: goto label_2e8024;
        default: break;
    }

    ctx->pc = 0x2e7fe8u;

    // 0x2e7fe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7fec: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2e7fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2e7ff0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e7ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e7ff4: 0x8c626418  lw          $v0, 0x6418($v1)
    ctx->pc = 0x2e7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786418u));
    // 0x2e7ff8: 0x24706418  addiu       $s0, $v1, 0x6418
    ctx->pc = 0x2e7ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25624));
    // 0x2e7ffc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E7FFCu;
    {
        const bool branch_taken_0x2e7ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7FFCu;
        // 0x2e8000: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7ffc) {
            ctx->pc = 0x2E8024u;
            goto label_2e8024;
        }
    }
    ctx->pc = 0x2E8004u;
    // 0x2e8004: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2E8004u;
    SET_GPR_U32(ctx, 31, 0x2E800Cu);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2E8004u, 0x2E800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E800Cu;
label_2e800c:
    // 0x2e800c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e800cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e8010: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2e8010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2e8014: 0x24a5e6d0  addiu       $a1, $a1, -0x1930
    ctx->pc = 0x2e8014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960848));
    // 0x2e8018: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2e8018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2e801c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2E801Cu;
    SET_GPR_U32(ctx, 31, 0x2E8024u);
    ctx->pc = 0x2E8020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E801Cu;
    // 0x2e8020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2E801Cu, 0x2E8024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8024u;
label_2e8024:
    // 0x2e8024: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e8024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e802c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e802cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8030: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8030u;
        // 0x2e8034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8038u;
}
