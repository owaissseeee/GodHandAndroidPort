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

// Function: InitObjectFull_3806D8
// Address: 0x3806d8 - 0x380720
void InitObjectFull_3806D8_0x3806d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectFull_3806D8_0x3806d8");
#endif

    switch (ctx->pc) {
        case 0x3806ecu: goto label_3806ec;
        case 0x3806fcu: goto label_3806fc;
        case 0x380704u: goto label_380704;
        case 0x38070cu: goto label_38070c;
        default: break;
    }

    ctx->pc = 0x3806d8u;

    // 0x3806d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3806d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3806dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3806dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3806e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3806e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3806e4: 0xc0e0384  jal         func_380E10
    ctx->pc = 0x3806E4u;
    SET_GPR_U32(ctx, 31, 0x3806ECu);
    ctx->pc = 0x3806E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3806E4u;
    // 0x3806e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380E10u, 0x3806E4u, 0x3806ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3806ECu;
label_3806ec:
    // 0x3806ec: 0x26050348  addiu       $a1, $s0, 0x348
    ctx->pc = 0x3806ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 840));
    // 0x3806f0: 0x26060318  addiu       $a2, $s0, 0x318
    ctx->pc = 0x3806f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 792));
    // 0x3806f4: 0xc0e074e  jal         func_381D38
    ctx->pc = 0x3806F4u;
    SET_GPR_U32(ctx, 31, 0x3806FCu);
    ctx->pc = 0x3806F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3806F4u;
    // 0x3806f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381D38u, 0x3806F4u, 0x3806FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3806FCu;
label_3806fc:
    // 0x3806fc: 0xc0e1318  jal         func_384C60
    ctx->pc = 0x3806FCu;
    SET_GPR_U32(ctx, 31, 0x380704u);
    ctx->pc = 0x380700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3806FCu;
    // 0x380700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384C60u, 0x3806FCu, 0x380704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380704u;
label_380704:
    // 0x380704: 0xc0e1688  jal         func_385A20
    ctx->pc = 0x380704u;
    SET_GPR_U32(ctx, 31, 0x38070Cu);
    ctx->pc = 0x380708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380704u;
    // 0x380708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385A20u, 0x380704u, 0x38070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38070Cu;
label_38070c:
    // 0x38070c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38070cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380714: 0x3e00008  jr          $ra
    ctx->pc = 0x380714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380714u;
        // 0x380718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38071Cu;
    // 0x38071c: 0x0  nop
    ctx->pc = 0x38071cu;
    // NOP
    ctx->pc = 0x380720u;
}
