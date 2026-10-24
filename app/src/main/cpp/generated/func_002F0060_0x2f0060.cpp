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

// Function: func_002F0060
// Address: 0x2f0060 - 0x2f00b8
void func_002F0060_0x2f0060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F0060_0x2f0060");
#endif

    switch (ctx->pc) {
        case 0x2f0084u: goto label_2f0084;
        case 0x2f009cu: goto label_2f009c;
        default: break;
    }

    ctx->pc = 0x2f0060u;

    // 0x2f0060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0064: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f0064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f0068: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f0068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f006c: 0x8c626478  lw          $v0, 0x6478($v1)
    ctx->pc = 0x2f006cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786478u));
    // 0x2f0070: 0x24706478  addiu       $s0, $v1, 0x6478
    ctx->pc = 0x2f0070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25720));
    // 0x2f0074: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F0074u;
    {
        const bool branch_taken_0x2f0074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0074u;
        // 0x2f0078: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0074) {
            ctx->pc = 0x2F009Cu;
            goto label_2f009c;
        }
    }
    ctx->pc = 0x2F007Cu;
    // 0x2f007c: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2F007Cu;
    SET_GPR_U32(ctx, 31, 0x2F0084u);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2F007Cu, 0x2F0084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0084u;
label_2f0084:
    // 0x2f0084: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f0084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f0088: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f0088u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f008c: 0x24a5eb48  addiu       $a1, $a1, -0x14B8
    ctx->pc = 0x2f008cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961992));
    // 0x2f0090: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2f0090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2f0094: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F0094u;
    SET_GPR_U32(ctx, 31, 0x2F009Cu);
    ctx->pc = 0x2F0098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0094u;
    // 0x2f0098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F0094u, 0x2F009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F009Cu;
label_2f009c:
    // 0x2f009c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f009cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f00a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f00a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f00a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f00a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f00a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F00A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F00ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F00A8u;
        // 0x2f00ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F00A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F00B0u;
    // 0x2f00b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f00b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f00b4: 0x0  nop
    ctx->pc = 0x2f00b4u;
    // NOP
    ctx->pc = 0x2f00b8u;
}
