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

// Function: htCiSeek
// Address: 0x334738 - 0x3347d0
void htCiSeek_0x334738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("htCiSeek_0x334738");
#endif

    switch (ctx->pc) {
        case 0x334754u: goto label_334754;
        default: break;
    }

    ctx->pc = 0x334738u;

    // 0x334738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33473c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x33473cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334740: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x334740u;
    {
        const bool branch_taken_0x334740 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x334744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334740u;
        // 0x334744: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334740) {
            ctx->pc = 0x334760u;
            goto label_334760;
        }
    }
    ctx->pc = 0x334748u;
    // 0x334748: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x334748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33474c: 0xc0cd002  jal         func_334008
    ctx->pc = 0x33474Cu;
    SET_GPR_U32(ctx, 31, 0x334754u);
    ctx->pc = 0x334750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33474Cu;
    // 0x334750: 0x24a54960  addiu       $a1, $a1, 0x4960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334008u, 0x33474Cu, 0x334754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334754u;
label_334754:
    // 0x334754: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x334754u;
    {
        const bool branch_taken_0x334754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334754u;
        // 0x334758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334754) {
            ctx->pc = 0x3347C0u;
            goto label_3347c0;
        }
    }
    ctx->pc = 0x33475Cu;
    // 0x33475c: 0x0  nop
    ctx->pc = 0x33475cu;
    // NOP
label_334760:
    // 0x334760: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x334760u;
    {
        const bool branch_taken_0x334760 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x334764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334760u;
        // 0x334764: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334760) {
            ctx->pc = 0x334770u;
            goto label_334770;
        }
    }
    ctx->pc = 0x334768u;
    // 0x334768: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x334768u;
    {
        const bool branch_taken_0x334768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334768u;
        // 0x33476c: 0xace5001c  sw          $a1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334768) {
            ctx->pc = 0x3347A0u;
            goto label_3347a0;
        }
    }
    ctx->pc = 0x334770u;
label_334770:
    // 0x334770: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x334770u;
    {
        const bool branch_taken_0x334770 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x334774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334770u;
        // 0x334774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334770) {
            ctx->pc = 0x334788u;
            goto label_334788;
        }
    }
    ctx->pc = 0x334778u;
    // 0x334778: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x334778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x33477c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x33477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x334780: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x334780u;
    {
        const bool branch_taken_0x334780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334780u;
        // 0x334784: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334780) {
            ctx->pc = 0x3347A4u;
            goto label_3347a4;
        }
    }
    ctx->pc = 0x334788u;
label_334788:
    // 0x334788: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334788u;
    {
        const bool branch_taken_0x334788 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x33478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334788u;
        // 0x33478c: 0x8ce40010  lw          $a0, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334788) {
            ctx->pc = 0x3347A4u;
            goto label_3347a4;
        }
    }
    ctx->pc = 0x334790u;
    // 0x334790: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x334790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x334794: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x334794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x334798: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x334798u;
    {
        const bool branch_taken_0x334798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334798u;
        // 0x33479c: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334798) {
            ctx->pc = 0x3347A4u;
            goto label_3347a4;
        }
    }
    ctx->pc = 0x3347A0u;
label_3347a0:
    // 0x3347a0: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x3347a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_3347a4:
    // 0x3347a4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3347a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3347a8: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x3347a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x3347ac: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x3347acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3347b0: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x3347b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3347b4: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x3347b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3347b8: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x3347b8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x3347bc: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x3347bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_3347c0:
    // 0x3347c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3347c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3347c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3347C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3347C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3347C4u;
        // 0x3347c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3347C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3347CCu;
    // 0x3347cc: 0x0  nop
    ctx->pc = 0x3347ccu;
    // NOP
    ctx->pc = 0x3347d0u;
}
