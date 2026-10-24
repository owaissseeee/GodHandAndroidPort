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

// Function: GetClassDescB_2815E8
// Address: 0x2815e8 - 0x281638
void GetClassDescB_2815E8_0x2815e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetClassDescB_2815E8_0x2815e8");
#endif

    switch (ctx->pc) {
        case 0x28160cu: goto label_28160c;
        case 0x281624u: goto label_281624;
        default: break;
    }

    ctx->pc = 0x2815e8u;

    // 0x2815e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2815e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2815ec: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2815ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2815f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2815f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2815f4: 0x8c626268  lw          $v0, 0x6268($v1)
    ctx->pc = 0x2815f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786268u));
    // 0x2815f8: 0x24706268  addiu       $s0, $v1, 0x6268
    ctx->pc = 0x2815f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25192));
    // 0x2815fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2815FCu;
    {
        const bool branch_taken_0x2815fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815FCu;
        // 0x281600: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815fc) {
            ctx->pc = 0x281624u;
            goto label_281624;
        }
    }
    ctx->pc = 0x281604u;
    // 0x281604: 0xc0a3f74  jal         func_28FDD0
    ctx->pc = 0x281604u;
    SET_GPR_U32(ctx, 31, 0x28160Cu);
    ctx->pc = 0x28FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FDD0u, 0x281604u, 0x28160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28160Cu;
label_28160c:
    // 0x28160c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28160cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x281610: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x281610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x281614: 0x24a58688  addiu       $a1, $a1, -0x7978
    ctx->pc = 0x281614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936200));
    // 0x281618: 0x24c661d8  addiu       $a2, $a2, 0x61D8
    ctx->pc = 0x281618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25048));
    // 0x28161c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x28161Cu;
    SET_GPR_U32(ctx, 31, 0x281624u);
    ctx->pc = 0x281620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28161Cu;
    // 0x281620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x28161Cu, 0x281624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281624u;
label_281624:
    // 0x281624: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x281624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28162c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28162cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281630: 0x3e00008  jr          $ra
    ctx->pc = 0x281630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281630u;
        // 0x281634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281638u;
}
