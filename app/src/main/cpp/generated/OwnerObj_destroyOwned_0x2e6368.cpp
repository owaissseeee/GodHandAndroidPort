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

// Function: OwnerObj_destroyOwned
// Address: 0x2e6368 - 0x2e63c0
void OwnerObj_destroyOwned_0x2e6368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OwnerObj_destroyOwned_0x2e6368");
#endif

    switch (ctx->pc) {
        case 0x2e639cu: goto label_2e639c;
        case 0x2e63a8u: goto label_2e63a8;
        default: break;
    }

    ctx->pc = 0x2e6368u;

    // 0x2e6368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e6368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e636c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2e636cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2e6370: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e6370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e6374: 0x2442e538  addiu       $v0, $v0, -0x1AC8
    ctx->pc = 0x2e6374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960440));
    // 0x2e6378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e637c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e637cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e6380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e6384: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2e6384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2e6388: 0x8e0402b0  lw          $a0, 0x2B0($s0)
    ctx->pc = 0x2e6388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2e638c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E638Cu;
    {
        const bool branch_taken_0x2e638c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E638Cu;
        // 0x2e6390: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e638c) {
            ctx->pc = 0x2E639Cu;
            goto label_2e639c;
        }
    }
    ctx->pc = 0x2E6394u;
    // 0x2e6394: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x2E6394u;
    SET_GPR_U32(ctx, 31, 0x2E639Cu);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x2E6394u, 0x2E639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E639Cu;
label_2e639c:
    // 0x2e639c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e63a0: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x2E63A0u;
    SET_GPR_U32(ctx, 31, 0x2E63A8u);
    ctx->pc = 0x2E63A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E63A0u;
    // 0x2e63a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x2E63A0u, 0x2E63A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E63A8u;
label_2e63a8:
    // 0x2e63a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e63a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e63ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e63acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e63b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e63b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e63b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E63B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E63B4u;
        // 0x2e63b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E63B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E63BCu;
    // 0x2e63bc: 0x0  nop
    ctx->pc = 0x2e63bcu;
    // NOP
    ctx->pc = 0x2e63c0u;
}
