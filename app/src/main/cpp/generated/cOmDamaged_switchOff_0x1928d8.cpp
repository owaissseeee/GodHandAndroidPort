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

// Function: cOmDamaged_switchOff
// Address: 0x1928d8 - 0x192960
void cOmDamaged_switchOff_0x1928d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmDamaged_switchOff_0x1928d8");
#endif

    switch (ctx->pc) {
        case 0x1928fcu: goto label_1928fc;
        case 0x19290cu: goto label_19290c;
        case 0x19291cu: goto label_19291c;
        case 0x19292cu: goto label_19292c;
        case 0x19293cu: goto label_19293c;
        default: break;
    }

    ctx->pc = 0x1928d8u;

    // 0x1928d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1928d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1928dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1928dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1928e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1928e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1928e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1928e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928e8: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x1928e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1928ec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1928ECu;
    {
        const bool branch_taken_0x1928ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1928ec) {
            ctx->pc = 0x1928F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1928ECu;
            // 0x1928f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192900u;
            goto label_192900;
        }
    }
    ctx->pc = 0x1928F4u;
    // 0x1928f4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1928F4u;
    SET_GPR_U32(ctx, 31, 0x1928FCu);
    ctx->pc = 0x1928F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928F4u;
    // 0x1928f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1928F4u, 0x1928FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1928FCu;
label_1928fc:
    // 0x1928fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1928fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192900:
    // 0x192900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192904: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x192904u;
    SET_GPR_U32(ctx, 31, 0x19290Cu);
    ctx->pc = 0x192908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192904u;
    // 0x192908: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x192904u, 0x19290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19290Cu;
label_19290c:
    // 0x19290c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192910: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x192910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x192914: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x192914u;
    SET_GPR_U32(ctx, 31, 0x19291Cu);
    ctx->pc = 0x192918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192914u;
    // 0x192918: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x192914u, 0x19291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19291Cu;
label_19291c:
    // 0x19291c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19291cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192924: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x192924u;
    SET_GPR_U32(ctx, 31, 0x19292Cu);
    ctx->pc = 0x192928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192924u;
    // 0x192928: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x192924u, 0x19292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19292Cu;
label_19292c:
    // 0x19292c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19292cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192930: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x192930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x192934: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x192934u;
    SET_GPR_U32(ctx, 31, 0x19293Cu);
    ctx->pc = 0x192938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192934u;
    // 0x192938: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x192934u, 0x19293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19293Cu;
label_19293c:
    // 0x19293c: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x19293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x192940: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x192940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x192944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192948: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x192948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19294c: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x19294cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x192950: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192954: 0x3e00008  jr          $ra
    ctx->pc = 0x192954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192954u;
        // 0x192958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19295Cu;
    // 0x19295c: 0x0  nop
    ctx->pc = 0x19295cu;
    // NOP
    ctx->pc = 0x192960u;
}
