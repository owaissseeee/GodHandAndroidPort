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

// Function: RefreshEntryIfActive
// Address: 0x3388f8 - 0x338960
void RefreshEntryIfActive_0x3388f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RefreshEntryIfActive_0x3388f8");
#endif

    switch (ctx->pc) {
        case 0x33892cu: goto label_33892c;
        default: break;
    }

    ctx->pc = 0x3388f8u;

    // 0x3388f8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3388f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3388fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3388fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338900: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x338900u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x338904: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x338904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338908: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x338908u;
    {
        const bool branch_taken_0x338908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x33890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338908u;
        // 0x33890c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338908) {
            ctx->pc = 0x338920u;
            goto label_338920;
        }
    }
    ctx->pc = 0x338910u;
    // 0x338910: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x338910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x338914: 0x8c830708  lw          $v1, 0x708($a0)
    ctx->pc = 0x338914u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x338918: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x338918u;
    {
        const bool branch_taken_0x338918 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x33891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338918u;
        // 0x33891c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338918) {
            ctx->pc = 0x338930u;
            goto label_338930;
        }
    }
    ctx->pc = 0x338920u;
label_338920:
    // 0x338920: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x338920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x338924: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x338924u;
    SET_GPR_U32(ctx, 31, 0x33892Cu);
    ctx->pc = 0x338928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338924u;
    // 0x338928: 0x248458c8  addiu       $a0, $a0, 0x58C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x338924u, 0x33892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33892Cu;
label_33892c:
    // 0x33892c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33892cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338930:
    // 0x338930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338934: 0x3e00008  jr          $ra
    ctx->pc = 0x338934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338934u;
        // 0x338938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33893Cu;
    // 0x33893c: 0x0  nop
    ctx->pc = 0x33893cu;
    // NOP
    // 0x338940: 0x0  nop
    ctx->pc = 0x338940u;
    // NOP
    // 0x338944: 0x0  nop
    ctx->pc = 0x338944u;
    // NOP
    // 0x338948: 0x0  nop
    ctx->pc = 0x338948u;
    // NOP
    // 0x33894c: 0x0  nop
    ctx->pc = 0x33894cu;
    // NOP
    // 0x338950: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x338950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x338954: 0x0  nop
    ctx->pc = 0x338954u;
    // NOP
    // 0x338958: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x338958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x33895c: 0x0  nop
    ctx->pc = 0x33895cu;
    // NOP
    ctx->pc = 0x338960u;
}
