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

// Function: func_00393AB8
// Address: 0x393ab8 - 0x393b10
void func_00393AB8_0x393ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00393AB8_0x393ab8");
#endif

    switch (ctx->pc) {
        case 0x393adcu: goto label_393adc;
        case 0x393af8u: goto label_393af8;
        default: break;
    }

    ctx->pc = 0x393ab8u;

    // 0x393ab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x393ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x393abc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x393abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x393ac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x393ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x393ac4: 0x8c626788  lw          $v0, 0x6788($v1)
    ctx->pc = 0x393ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786788u));
    // 0x393ac8: 0x24706788  addiu       $s0, $v1, 0x6788
    ctx->pc = 0x393ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26504));
    // 0x393acc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x393ACCu;
    {
        const bool branch_taken_0x393acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393ACCu;
        // 0x393ad0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393acc) {
            ctx->pc = 0x393AF8u;
            goto label_393af8;
        }
    }
    ctx->pc = 0x393AD4u;
    // 0x393ad4: 0xc0e29f8  jal         func_38A7E0
    ctx->pc = 0x393AD4u;
    SET_GPR_U32(ctx, 31, 0x393ADCu);
    ctx->pc = 0x38A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A7E0u, 0x393AD4u, 0x393ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393ADCu;
label_393adc:
    // 0x393adc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x393adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x393ae0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x393ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x393ae4: 0x24a5db78  addiu       $a1, $a1, -0x2488
    ctx->pc = 0x393ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957944));
    // 0x393ae8: 0x24c6db88  addiu       $a2, $a2, -0x2478
    ctx->pc = 0x393ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957960));
    // 0x393aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x393aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393af0: 0xc0c7ba0  jal         func_31EE80
    ctx->pc = 0x393AF0u;
    SET_GPR_U32(ctx, 31, 0x393AF8u);
    ctx->pc = 0x393AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393AF0u;
    // 0x393af4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EE80u, 0x393AF0u, 0x393AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393AF8u;
label_393af8:
    // 0x393af8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x393af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393afc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x393afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x393b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393b04: 0x3e00008  jr          $ra
    ctx->pc = 0x393B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393B04u;
        // 0x393b08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393B0Cu;
    // 0x393b0c: 0x0  nop
    ctx->pc = 0x393b0cu;
    // NOP
    ctx->pc = 0x393b10u;
}
