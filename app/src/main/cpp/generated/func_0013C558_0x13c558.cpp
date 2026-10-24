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

// Function: func_0013C558
// Address: 0x13c558 - 0x13c5c8
void func_0013C558_0x13c558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013C558_0x13c558");
#endif

    switch (ctx->pc) {
        case 0x13c57cu: goto label_13c57c;
        case 0x13c594u: goto label_13c594;
        default: break;
    }

    ctx->pc = 0x13c558u;

    // 0x13c558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c55c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x13c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x13c560: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13c560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13c564: 0x8c6255b8  lw          $v0, 0x55B8($v1)
    ctx->pc = 0x13c564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7855B8u));
    // 0x13c568: 0x247055b8  addiu       $s0, $v1, 0x55B8
    ctx->pc = 0x13c568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21944));
    // 0x13c56c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C56Cu;
    {
        const bool branch_taken_0x13c56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C56Cu;
        // 0x13c570: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c56c) {
            ctx->pc = 0x13C594u;
            goto label_13c594;
        }
    }
    ctx->pc = 0x13C574u;
    // 0x13c574: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x13C574u;
    SET_GPR_U32(ctx, 31, 0x13C57Cu);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x13C574u, 0x13C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C57Cu;
label_13c57c:
    // 0x13c57c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x13c57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13c580: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x13c580u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x13c584: 0x24a5dcb8  addiu       $a1, $a1, -0x2348
    ctx->pc = 0x13c584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958264));
    // 0x13c588: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x13c588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x13c58c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x13C58Cu;
    SET_GPR_U32(ctx, 31, 0x13C594u);
    ctx->pc = 0x13C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C58Cu;
    // 0x13c590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x13C58Cu, 0x13C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C594u;
label_13c594:
    // 0x13c594: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13c594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c59c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13c59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x13C5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5A0u;
        // 0x13c5a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C5A8u;
    // 0x13c5a8: 0xac820094  sw          $v0, 0x94($a0)
    ctx->pc = 0x13c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x13c5ac: 0x0  nop
    ctx->pc = 0x13c5acu;
    // NOP
    // 0x13c5b0: 0xac820094  sw          $v0, 0x94($a0)
    ctx->pc = 0x13c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x13c5b4: 0x0  nop
    ctx->pc = 0x13c5b4u;
    // NOP
    // 0x13c5b8: 0xac820094  sw          $v0, 0x94($a0)
    ctx->pc = 0x13c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x13c5bc: 0x0  nop
    ctx->pc = 0x13c5bcu;
    // NOP
    // 0x13c5c0: 0xac820094  sw          $v0, 0x94($a0)
    ctx->pc = 0x13c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x13c5c4: 0x0  nop
    ctx->pc = 0x13c5c4u;
    // NOP
    ctx->pc = 0x13c5c8u;
}
