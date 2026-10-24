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

// Function: dtx_create_rmt
// Address: 0x332020 - 0x332090
void dtx_create_rmt_0x332020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dtx_create_rmt_0x332020");
#endif

    switch (ctx->pc) {
        case 0x332078u: goto label_332078;
        default: break;
    }

    ctx->pc = 0x332020u;

    // 0x332020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x332024: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x332024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x332028: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x332028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33202c: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x33202cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x332030: 0x244261c0  addiu       $v0, $v0, 0x61C0
    ctx->pc = 0x332030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25024));
    // 0x332034: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x332034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x332038: 0x261062c0  addiu       $s0, $s0, 0x62C0
    ctx->pc = 0x332038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25280));
    // 0x33203c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x33203cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x332040: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x332040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7561C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7561C0u, _value); } while (0);
    // 0x332044: 0x24648d40  addiu       $a0, $v1, -0x72C0
    ctx->pc = 0x332044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937920));
    // 0x332048: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x332048u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7561C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7561C4u, _value); } while (0);
    // 0x33204c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33204cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332050: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x332050u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7561C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7561C8u, _value); } while (0);
    // 0x332054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x332054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332058: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x332058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7561CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7561CCu, _value); } while (0);
    // 0x33205c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x33205cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332060: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x332060u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332064: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x332064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x332068: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x332068u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33206c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33206cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332070: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x332070u;
    SET_GPR_U32(ctx, 31, 0x332078u);
    ctx->pc = 0x332074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332070u;
    // 0x332074: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x332070u, 0x332078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332078u;
label_332078:
    // 0x332078: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x332078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33207c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x332080: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x332080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332084: 0x3e00008  jr          $ra
    ctx->pc = 0x332084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332084u;
        // 0x332088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33208Cu;
    // 0x33208c: 0x0  nop
    ctx->pc = 0x33208cu;
    // NOP
    ctx->pc = 0x332090u;
}
