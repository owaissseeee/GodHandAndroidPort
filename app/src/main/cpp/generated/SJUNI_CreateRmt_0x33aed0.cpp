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

// Function: SJUNI_CreateRmt
// Address: 0x33aed0 - 0x33af28
void SJUNI_CreateRmt_0x33aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SJUNI_CreateRmt_0x33aed0");
#endif

    switch (ctx->pc) {
        case 0x33af10u: goto label_33af10;
        default: break;
    }

    ctx->pc = 0x33aed0u;

    // 0x33aed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33aed4: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x33aed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33aedc: 0x3c100076  lui         $s0, 0x76
    ctx->pc = 0x33aedcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)118 << 16));
    // 0x33aee0: 0x24428400  addiu       $v0, $v0, -0x7C00
    ctx->pc = 0x33aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935552));
    // 0x33aee4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33aee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33aee8: 0x26108500  addiu       $s0, $s0, -0x7B00
    ctx->pc = 0x33aee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935808));
    // 0x33aeec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x33aeecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x758400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x758400u, _value); } while (0);
    // 0x33aef0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x33aef0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x758404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x758404u, _value); } while (0);
    // 0x33aef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33aef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aef8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x33aef8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x758408u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x758408u, _value); } while (0);
    // 0x33aefc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33aefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33af00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33af00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33af04: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x33af04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x33af08: 0xc0cc99c  jal         func_332670
    ctx->pc = 0x33AF08u;
    SET_GPR_U32(ctx, 31, 0x33AF10u);
    ctx->pc = 0x33AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AF08u;
    // 0x33af0c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x33AF08u, 0x33AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF10u;
label_33af10:
    // 0x33af10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33af14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33af14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33af18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33af18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33af1c: 0x3e00008  jr          $ra
    ctx->pc = 0x33AF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF1Cu;
        // 0x33af20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AF24u;
    // 0x33af24: 0x0  nop
    ctx->pc = 0x33af24u;
    // NOP
    ctx->pc = 0x33af28u;
}
