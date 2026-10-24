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

// Function: IdObj_resetAndReleaseIds4
// Address: 0x1655d8 - 0x165638
void IdObj_resetAndReleaseIds4_0x1655d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IdObj_resetAndReleaseIds4_0x1655d8");
#endif

    switch (ctx->pc) {
        case 0x1655ecu: goto label_1655ec;
        case 0x1655f4u: goto label_1655f4;
        case 0x1655fcu: goto label_1655fc;
        case 0x165604u: goto label_165604;
        case 0x16560cu: goto label_16560c;
        case 0x165628u: goto label_165628;
        default: break;
    }

    ctx->pc = 0x1655d8u;

    // 0x1655d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1655d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1655dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1655dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1655e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1655e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1655e4: 0xc05857c  jal         func_1615F0
    ctx->pc = 0x1655E4u;
    SET_GPR_U32(ctx, 31, 0x1655ECu);
    ctx->pc = 0x1655E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655E4u;
    // 0x1655e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615F0u, 0x1655E4u, 0x1655ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655ECu;
label_1655ec:
    // 0x1655ec: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1655ECu;
    SET_GPR_U32(ctx, 31, 0x1655F4u);
    ctx->pc = 0x1655F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655ECu;
    // 0x1655f0: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1655ECu, 0x1655F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655F4u;
label_1655f4:
    // 0x1655f4: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1655F4u;
    SET_GPR_U32(ctx, 31, 0x1655FCu);
    ctx->pc = 0x1655F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655F4u;
    // 0x1655f8: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1655F4u, 0x1655FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655FCu;
label_1655fc:
    // 0x1655fc: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x1655FCu;
    SET_GPR_U32(ctx, 31, 0x165604u);
    ctx->pc = 0x165600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1655FCu;
    // 0x165600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x1655FCu, 0x165604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165604u;
label_165604:
    // 0x165604: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x165604u;
    SET_GPR_U32(ctx, 31, 0x16560Cu);
    ctx->pc = 0x165608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165604u;
    // 0x165608: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x165604u, 0x16560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16560Cu;
label_16560c:
    // 0x16560c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x16560cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x165610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165614: 0x8ca22384  lw          $v0, 0x2384($a1)
    ctx->pc = 0x165614u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x165618: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x165618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16561c: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x16561cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x165620: 0xc058564  jal         func_161590
    ctx->pc = 0x165620u;
    SET_GPR_U32(ctx, 31, 0x165628u);
    ctx->pc = 0x165624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165620u;
    // 0x165624: 0xac600024  sw          $zero, 0x24($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161590u, 0x165620u, 0x165628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165628u;
label_165628:
    // 0x165628: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x165628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16562c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16562cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165630: 0x3e00008  jr          $ra
    ctx->pc = 0x165630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165630u;
        // 0x165634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165638u;
}
