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

// Function: xsputn__8stdiobufPCcl
// Address: 0x393820 - 0x393878
void xsputn__8stdiobufPCcl_0x393820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("xsputn__8stdiobufPCcl_0x393820");
#endif

    switch (ctx->pc) {
        case 0x393848u: goto label_393848;
        case 0x393864u: goto label_393864;
        default: break;
    }

    ctx->pc = 0x393820u;

    // 0x393820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x393820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x393824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x393824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x393828: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x393828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x39382c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39382cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x393830: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x393830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x393834: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x393834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x393838: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x393838u;
    {
        const bool branch_taken_0x393838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393838) {
            ctx->pc = 0x39383Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393838u;
            // 0x39383c: 0x8c870058  lw          $a3, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393850u;
            goto label_393850;
        }
    }
    ctx->pc = 0x393840u;
    // 0x393840: 0xc0e2c42  jal         func_38B108
    ctx->pc = 0x393840u;
    SET_GPR_U32(ctx, 31, 0x393848u);
    ctx->pc = 0x38B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B108u, 0x393840u, 0x393848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393848u;
label_393848:
    // 0x393848: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x393848u;
    {
        const bool branch_taken_0x393848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393848u;
        // 0x39384c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393848) {
            ctx->pc = 0x393870u;
            goto label_393870;
        }
    }
    ctx->pc = 0x393850u;
label_393850:
    // 0x393850: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x393850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x393854: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x393854u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x393858: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x393858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39385c: 0xc0e9a32  jal         func_3A68C8
    ctx->pc = 0x39385Cu;
    SET_GPR_U32(ctx, 31, 0x393864u);
    ctx->pc = 0x393860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39385Cu;
    // 0x393860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A68C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A68C8u, 0x39385Cu, 0x393864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393864u;
label_393864:
    // 0x393864: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x393864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x393868: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x393868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x39386c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39386cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_393870:
    // 0x393870: 0x3e00008  jr          $ra
    ctx->pc = 0x393870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393870u;
        // 0x393874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393878u;
}
