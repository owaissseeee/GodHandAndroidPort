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

// Function: func_002BA750
// Address: 0x2ba750 - 0x2ba780
void func_002BA750_0x2ba750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA750_0x2ba750");
#endif

    switch (ctx->pc) {
        case 0x2ba750u: goto label_2ba750;
        case 0x2ba754u: goto label_2ba754;
        case 0x2ba758u: goto label_2ba758;
        case 0x2ba75cu: goto label_2ba75c;
        case 0x2ba760u: goto label_2ba760;
        case 0x2ba764u: goto label_2ba764;
        case 0x2ba768u: goto label_2ba768;
        case 0x2ba76cu: goto label_2ba76c;
        case 0x2ba770u: goto label_2ba770;
        case 0x2ba774u: goto label_2ba774;
        case 0x2ba778u: goto label_2ba778;
        case 0x2ba77cu: goto label_2ba77c;
        default: break;
    }

    ctx->pc = 0x2ba750u;

label_2ba750:
    // 0x2ba750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ba754:
    // 0x2ba754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ba758:
    // 0x2ba758: 0xe48c0114  swc1        $f12, 0x114($a0)
    ctx->pc = 0x2ba758u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
label_2ba75c:
    // 0x2ba75c: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x2ba75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_2ba760:
    // 0x2ba760: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x2ba760u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2ba764:
    // 0x2ba764: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x2ba764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2ba768:
    // 0x2ba768: 0xa0f809  jalr        $a1
label_2ba76c:
    if (ctx->pc == 0x2BA76Cu) {
        ctx->pc = 0x2BA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA768u;
        // 0x2ba76c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA770u;
        goto label_2ba770;
    }
    ctx->pc = 0x2BA768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2BA770u);
        ctx->pc = 0x2BA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA768u;
        // 0x2ba76c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA768u, 0x2BA770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA770u;
label_2ba770:
    // 0x2ba770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba774:
    // 0x2ba774: 0x3e00008  jr          $ra
label_2ba778:
    if (ctx->pc == 0x2BA778u) {
        ctx->pc = 0x2BA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA774u;
        // 0x2ba778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA77Cu;
        goto label_2ba77c;
    }
    ctx->pc = 0x2BA774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA774u;
        // 0x2ba778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA77Cu;
label_2ba77c:
    // 0x2ba77c: 0x0  nop
    ctx->pc = 0x2ba77cu;
    // NOP
    ctx->pc = 0x2ba780u;
}
