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

// Function: func_00326718
// Address: 0x326718 - 0x326778
void func_00326718_0x326718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00326718_0x326718");
#endif

    switch (ctx->pc) {
        case 0x326740u: goto label_326740;
        case 0x326748u: goto label_326748;
        case 0x326758u: goto label_326758;
        default: break;
    }

    ctx->pc = 0x326718u;

    // 0x326718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32671c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32671cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x326720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326724: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x326724u;
    {
        const bool branch_taken_0x326724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x326728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326724u;
        // 0x326728: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326724) {
            ctx->pc = 0x326768u;
            goto label_326768;
        }
    }
    ctx->pc = 0x32672Cu;
    // 0x32672c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x326730: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x326730u;
    {
        const bool branch_taken_0x326730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326730u;
        // 0x326734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326730) {
            ctx->pc = 0x326740u;
            goto label_326740;
        }
    }
    ctx->pc = 0x326738u;
    // 0x326738: 0xc0cf246  jal         func_33C918
    ctx->pc = 0x326738u;
    SET_GPR_U32(ctx, 31, 0x326740u);
    ctx->pc = 0x32673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326738u;
    // 0x32673c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C918u, 0x326738u, 0x326740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326740u;
label_326740:
    // 0x326740: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x326740u;
    SET_GPR_U32(ctx, 31, 0x326748u);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x326740u, 0x326748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326748u;
label_326748:
    // 0x326748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32674c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32674cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326750: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x326750u;
    SET_GPR_U32(ctx, 31, 0x326758u);
    ctx->pc = 0x326754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326750u;
    // 0x326754: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x326750u, 0x326758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326758u;
label_326758:
    // 0x326758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32675c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32675cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326760: 0x80cf9a4  j           func_33E690
    ctx->pc = 0x326760u;
    ctx->pc = 0x326764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326760u;
    // 0x326764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x326760u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x326768u;
label_326768:
    // 0x326768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32676c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32676cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326770: 0x3e00008  jr          $ra
    ctx->pc = 0x326770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326770u;
        // 0x326774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326778u;
}
