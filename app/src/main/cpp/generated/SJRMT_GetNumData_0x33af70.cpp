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

// Function: SJRMT_GetNumData
// Address: 0x33af70 - 0x33afc0
void SJRMT_GetNumData_0x33af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SJRMT_GetNumData_0x33af70");
#endif

    switch (ctx->pc) {
        case 0x33afacu: goto label_33afac;
        default: break;
    }

    ctx->pc = 0x33af70u;

    // 0x33af70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33af70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33af74: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33af74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x33af78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33af7c: 0x3c100076  lui         $s0, 0x76
    ctx->pc = 0x33af7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)118 << 16));
    // 0x33af80: 0x24428400  addiu       $v0, $v0, -0x7C00
    ctx->pc = 0x33af80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935552));
    // 0x33af84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33af84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33af88: 0x26108500  addiu       $s0, $s0, -0x7B00
    ctx->pc = 0x33af88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935808));
    // 0x33af8c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x33af8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x758400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x758400u, _value); } while (0);
    // 0x33af90: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x33af90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x758404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x758404u, _value); } while (0);
    // 0x33af94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33af94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33af98: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33af98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33af9c: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x33af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x33afa0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x33afa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33afa4: 0xc0cc99c  jal         func_332670
    ctx->pc = 0x33AFA4u;
    SET_GPR_U32(ctx, 31, 0x33AFACu);
    ctx->pc = 0x33AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AFA4u;
    // 0x33afa8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x33AFA4u, 0x33AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AFACu;
label_33afac:
    // 0x33afac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33afb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33afb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33afb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33afb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33afb8: 0x3e00008  jr          $ra
    ctx->pc = 0x33AFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFB8u;
        // 0x33afbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AFC0u;
}
