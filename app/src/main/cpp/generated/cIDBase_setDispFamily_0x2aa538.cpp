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

// Function: cIDBase_setDispFamily
// Address: 0x2aa538 - 0x2aa598
void cIDBase_setDispFamily_0x2aa538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_setDispFamily_0x2aa538");
#endif

    switch (ctx->pc) {
        case 0x2aa558u: goto label_2aa558;
        case 0x2aa56cu: goto label_2aa56c;
        case 0x2aa57cu: goto label_2aa57c;
        default: break;
    }

    ctx->pc = 0x2aa538u;

    // 0x2aa538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aa538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2aa53c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2aa53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2aa540: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2aa540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2aa544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aa544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa548: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2aa548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2aa54c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa550: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x2AA550u;
    SET_GPR_U32(ctx, 31, 0x2AA558u);
    ctx->pc = 0x2AA554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA550u;
    // 0x2aa554: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x2AA550u, 0x2AA558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA558u;
label_2aa558:
    // 0x2aa558: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aa558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa55c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa560: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aa560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa564: 0xc0aa966  jal         func_2AA598
    ctx->pc = 0x2AA564u;
    SET_GPR_U32(ctx, 31, 0x2AA56Cu);
    ctx->pc = 0x2AA568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA564u;
    // 0x2aa568: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA598u, 0x2AA564u, 0x2AA56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA56Cu;
label_2aa56c:
    // 0x2aa56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aa570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa574: 0xc0aa97c  jal         func_2AA5F0
    ctx->pc = 0x2AA574u;
    SET_GPR_U32(ctx, 31, 0x2AA57Cu);
    ctx->pc = 0x2AA578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA574u;
    // 0x2aa578: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA5F0u, 0x2AA574u, 0x2AA57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA57Cu;
label_2aa57c:
    // 0x2aa57c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2aa57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa580: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2aa580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa584: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2aa584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa58c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA58Cu;
        // 0x2aa590: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA594u;
    // 0x2aa594: 0x0  nop
    ctx->pc = 0x2aa594u;
    // NOP
    ctx->pc = 0x2aa598u;
}
