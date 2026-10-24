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

// Function: func_00305308
// Address: 0x305308 - 0x305358
void func_00305308_0x305308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305308_0x305308");
#endif

    switch (ctx->pc) {
        case 0x30532cu: goto label_30532c;
        case 0x305344u: goto label_305344;
        default: break;
    }

    ctx->pc = 0x305308u;

    // 0x305308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x305308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30530c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x30530cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x305310: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x305310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x305314: 0x8c6265e8  lw          $v0, 0x65E8($v1)
    ctx->pc = 0x305314u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7865E8u));
    // 0x305318: 0x247065e8  addiu       $s0, $v1, 0x65E8
    ctx->pc = 0x305318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26088));
    // 0x30531c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30531Cu;
    {
        const bool branch_taken_0x30531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30531Cu;
        // 0x305320: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30531c) {
            ctx->pc = 0x305344u;
            goto label_305344;
        }
    }
    ctx->pc = 0x305324u;
    // 0x305324: 0xc0c0052  jal         func_300148
    ctx->pc = 0x305324u;
    SET_GPR_U32(ctx, 31, 0x30532Cu);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x305324u, 0x30532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30532Cu;
label_30532c:
    // 0x30532c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x30532cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x305330: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x305330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x305334: 0x24a5fe88  addiu       $a1, $a1, -0x178
    ctx->pc = 0x305334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966920));
    // 0x305338: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x305338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x30533c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x30533Cu;
    SET_GPR_U32(ctx, 31, 0x305344u);
    ctx->pc = 0x305340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30533Cu;
    // 0x305340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x30533Cu, 0x305344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305344u;
label_305344:
    // 0x305344: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x305344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30534c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30534cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305350: 0x3e00008  jr          $ra
    ctx->pc = 0x305350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305350u;
        // 0x305354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305358u;
}
