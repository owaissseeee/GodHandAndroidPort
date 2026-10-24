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

// Function: cGameObj_destructSubclassB
// Address: 0x1bded8 - 0x1bdf30
void cGameObj_destructSubclassB_0x1bded8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_destructSubclassB_0x1bded8");
#endif

    switch (ctx->pc) {
        case 0x1bdf0cu: goto label_1bdf0c;
        case 0x1bdf18u: goto label_1bdf18;
        default: break;
    }

    ctx->pc = 0x1bded8u;

    // 0x1bded8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bded8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bdedc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bdedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bdee0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bdee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bdee4: 0x244294f0  addiu       $v0, $v0, -0x6B10
    ctx->pc = 0x1bdee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939888));
    // 0x1bdee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdeec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bdeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bdef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdef4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bdef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdef8: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1bdef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1bdefc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1bdefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1bdf00: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x1bdf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x1bdf04: 0xc0c15de  jal         func_305778
    ctx->pc = 0x1BDF04u;
    SET_GPR_U32(ctx, 31, 0x1BDF0Cu);
    ctx->pc = 0x1BDF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF04u;
    // 0x1bdf08: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x1BDF04u, 0x1BDF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF0Cu;
label_1bdf0c:
    // 0x1bdf0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf10: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1BDF10u;
    SET_GPR_U32(ctx, 31, 0x1BDF18u);
    ctx->pc = 0x1BDF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDF10u;
    // 0x1bdf14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1BDF10u, 0x1BDF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF18u;
label_1bdf18:
    // 0x1bdf18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bdf18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdf1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bdf1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdf20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdf24: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF24u;
        // 0x1bdf28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDF2Cu;
    // 0x1bdf2c: 0x0  nop
    ctx->pc = 0x1bdf2cu;
    // NOP
    ctx->pc = 0x1bdf30u;
}
