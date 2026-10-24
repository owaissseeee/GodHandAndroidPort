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

// Function: cCamera_move
// Address: 0x138600 - 0x138648
void cCamera_move_0x138600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCamera_move_0x138600");
#endif

    switch (ctx->pc) {
        case 0x138600u: goto label_138600;
        case 0x138604u: goto label_138604;
        case 0x138608u: goto label_138608;
        case 0x13860cu: goto label_13860c;
        case 0x138610u: goto label_138610;
        case 0x138614u: goto label_138614;
        case 0x138618u: goto label_138618;
        case 0x13861cu: goto label_13861c;
        case 0x138620u: goto label_138620;
        case 0x138624u: goto label_138624;
        case 0x138628u: goto label_138628;
        case 0x13862cu: goto label_13862c;
        case 0x138630u: goto label_138630;
        case 0x138634u: goto label_138634;
        case 0x138638u: goto label_138638;
        case 0x13863cu: goto label_13863c;
        case 0x138640u: goto label_138640;
        case 0x138644u: goto label_138644;
        default: break;
    }

    ctx->pc = 0x138600u;

label_138600:
    // 0x138600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_138604:
    // 0x138604: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x138604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_138608:
    // 0x138608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13860c:
    // 0x13860c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13860cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_138610:
    // 0x138610: 0x8e02035c  lw          $v0, 0x35C($s0)
    ctx->pc = 0x138610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
label_138614:
    // 0x138614: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x138614u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_138618:
    // 0x138618: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x138618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_13861c:
    // 0x13861c: 0x60f809  jalr        $v1
label_138620:
    if (ctx->pc == 0x138620u) {
        ctx->pc = 0x138620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13861Cu;
        // 0x138620: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138624u;
        goto label_138624;
    }
    ctx->pc = 0x13861Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x138624u);
        ctx->pc = 0x138620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13861Cu;
        // 0x138620: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13861Cu, 0x138624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138624u;
label_138624:
    // 0x138624: 0xc04e156  jal         func_138558
label_138628:
    if (ctx->pc == 0x138628u) {
        ctx->pc = 0x138628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138624u;
        // 0x138628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13862Cu;
        goto label_13862c;
    }
    ctx->pc = 0x138624u;
    SET_GPR_U32(ctx, 31, 0x13862Cu);
    ctx->pc = 0x138628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138624u;
    // 0x138628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138558u, 0x138624u, 0x13862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13862Cu;
label_13862c:
    // 0x13862c: 0xc04e1d0  jal         func_138740
label_138630:
    if (ctx->pc == 0x138630u) {
        ctx->pc = 0x138630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13862Cu;
        // 0x138630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138634u;
        goto label_138634;
    }
    ctx->pc = 0x13862Cu;
    SET_GPR_U32(ctx, 31, 0x138634u);
    ctx->pc = 0x138630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13862Cu;
    // 0x138630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138740u, 0x13862Cu, 0x138634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138634u;
label_138634:
    // 0x138634: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x138634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_138638:
    // 0x138638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13863c:
    // 0x13863c: 0x3e00008  jr          $ra
label_138640:
    if (ctx->pc == 0x138640u) {
        ctx->pc = 0x138640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13863Cu;
        // 0x138640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138644u;
        goto label_138644;
    }
    ctx->pc = 0x13863Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13863Cu;
        // 0x138640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13863Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138644u;
label_138644:
    // 0x138644: 0x0  nop
    ctx->pc = 0x138644u;
    // NOP
    ctx->pc = 0x138648u;
}
