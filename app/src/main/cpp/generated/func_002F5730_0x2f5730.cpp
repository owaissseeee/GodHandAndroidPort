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

// Function: func_002F5730
// Address: 0x2f5730 - 0x2f5788
void func_002F5730_0x2f5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F5730_0x2f5730");
#endif

    switch (ctx->pc) {
        case 0x2f5768u: goto label_2f5768;
        case 0x2f5774u: goto label_2f5774;
        default: break;
    }

    ctx->pc = 0x2f5730u;

    // 0x2f5730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f5730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f5734: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2f5734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2f5738: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f5738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f573c: 0x2442f448  addiu       $v0, $v0, -0xBB8
    ctx->pc = 0x2f573cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964296));
    // 0x2f5740: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f5740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f5744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f5748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f574c: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2f574cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2f5750: 0x8e0302f0  lw          $v1, 0x2F0($s0)
    ctx->pc = 0x2f5750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x2f5754: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5754u;
    {
        const bool branch_taken_0x2f5754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5754u;
        // 0x2f5758: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5754) {
            ctx->pc = 0x2F5768u;
            goto label_2f5768;
        }
    }
    ctx->pc = 0x2F575Cu;
    // 0x2f575c: 0x8c64ffe0  lw          $a0, -0x20($v1)
    ctx->pc = 0x2f575cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x2f5760: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2F5760u;
    SET_GPR_U32(ctx, 31, 0x2F5768u);
    ctx->pc = 0x2F5764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5760u;
    // 0x2f5764: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2F5760u, 0x2F5768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5768u;
label_2f5768:
    // 0x2f5768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f5768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f576c: 0xc0baf14  jal         func_2EBC50
    ctx->pc = 0x2F576Cu;
    SET_GPR_U32(ctx, 31, 0x2F5774u);
    ctx->pc = 0x2F5770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F576Cu;
    // 0x2f5770: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC50u, 0x2F576Cu, 0x2F5774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5774u;
label_2f5774:
    // 0x2f5774: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f5774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5778: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f5778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f577c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f577cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5780: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5780u;
        // 0x2f5784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5788u;
}
