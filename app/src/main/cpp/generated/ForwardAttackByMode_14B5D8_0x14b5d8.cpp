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

// Function: ForwardAttackByMode_14B5D8
// Address: 0x14b5d8 - 0x14b638
void ForwardAttackByMode_14B5D8_0x14b5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardAttackByMode_14B5D8_0x14b5d8");
#endif

    switch (ctx->pc) {
        case 0x14b614u: goto label_14b614;
        case 0x14b628u: goto label_14b628;
        default: break;
    }

    ctx->pc = 0x14b5d8u;

    // 0x14b5d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b5dc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x14b5dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b5e4: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x14b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x14b5e8: 0x8ce30414  lw          $v1, 0x414($a3)
    ctx->pc = 0x14b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1044)));
    // 0x14b5ec: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x14b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x14b5f0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14b5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x14b5f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B5F4u;
    {
        const bool branch_taken_0x14b5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5F4u;
        // 0x14b5f8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b5f4) {
            ctx->pc = 0x14B61Cu;
            goto label_14b61c;
        }
    }
    ctx->pc = 0x14B5FCu;
    // 0x14b5fc: 0x8c467aa8  lw          $a2, 0x7AA8($v0)
    ctx->pc = 0x14b5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31400)));
    // 0x14b600: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B600u;
    {
        const bool branch_taken_0x14b600 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B600u;
        // 0x14b604: 0x8c8502c4  lw          $a1, 0x2C4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b600) {
            ctx->pc = 0x14B620u;
            goto label_14b620;
        }
    }
    ctx->pc = 0x14B608u;
    // 0x14b608: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x14b608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b60c: 0xc0522f6  jal         func_148BD8
    ctx->pc = 0x14B60Cu;
    SET_GPR_U32(ctx, 31, 0x14B614u);
    ctx->pc = 0x14B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B60Cu;
    // 0x14b610: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148BD8u, 0x14B60Cu, 0x14B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B614u;
label_14b614:
    // 0x14b614: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14B614u;
    {
        const bool branch_taken_0x14b614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B614u;
        // 0x14b618: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b614) {
            ctx->pc = 0x14B62Cu;
            goto label_14b62c;
        }
    }
    ctx->pc = 0x14B61Cu;
label_14b61c:
    // 0x14b61c: 0x8c8502c4  lw          $a1, 0x2C4($a0)
    ctx->pc = 0x14b61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 708)));
label_14b620:
    // 0x14b620: 0xc05234c  jal         func_148D30
    ctx->pc = 0x14B620u;
    SET_GPR_U32(ctx, 31, 0x14B628u);
    ctx->pc = 0x14B624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B620u;
    // 0x14b624: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D30u, 0x14B620u, 0x14B628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B628u;
label_14b628:
    // 0x14b628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14b62c:
    // 0x14b62c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B62Cu;
        // 0x14b630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B634u;
    // 0x14b634: 0x0  nop
    ctx->pc = 0x14b634u;
    // NOP
    ctx->pc = 0x14b638u;
}
