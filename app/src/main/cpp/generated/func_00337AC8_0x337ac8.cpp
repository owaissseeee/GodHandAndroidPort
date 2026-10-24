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

// Function: func_00337AC8
// Address: 0x337ac8 - 0x337b30
void func_00337AC8_0x337ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00337AC8_0x337ac8");
#endif

    switch (ctx->pc) {
        case 0x337b08u: goto label_337b08;
        default: break;
    }

    ctx->pc = 0x337ac8u;

    // 0x337ac8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337acc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337ad0: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x337ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x337ad4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x337ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337ad8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337AD8u;
    {
        const bool branch_taken_0x337ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x337ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337AD8u;
        // 0x337adc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ad8) {
            ctx->pc = 0x337AF0u;
            goto label_337af0;
        }
    }
    ctx->pc = 0x337AE0u;
    // 0x337ae0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337ae4: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x337ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x337ae8: 0x5860000e  blezl       $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x337AE8u;
    {
        const bool branch_taken_0x337ae8 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x337ae8) {
            ctx->pc = 0x337AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337AE8u;
            // 0x337aec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337B24u;
            goto label_337b24;
        }
    }
    ctx->pc = 0x337AF0u;
label_337af0:
    // 0x337af0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x337af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x337af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337af8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337afc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x337afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337b00: 0xc0cc99c  jal         func_332670
    ctx->pc = 0x337B00u;
    SET_GPR_U32(ctx, 31, 0x337B08u);
    ctx->pc = 0x337B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337B00u;
    // 0x337b04: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x337B00u, 0x337B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337B08u;
label_337b08:
    // 0x337b08: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x337b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x337b0c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x337b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337b10: 0x24630748  addiu       $v1, $v1, 0x748
    ctx->pc = 0x337b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1864));
    // 0x337b14: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x337b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x337b18: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x337b18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3E0748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E0748u, _value); } while (0);
    // 0x337b1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x337b1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E074Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E074Cu, _value); } while (0);
    // 0x337b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_337b24:
    // 0x337b24: 0x3e00008  jr          $ra
    ctx->pc = 0x337B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B24u;
        // 0x337b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337B2Cu;
    // 0x337b2c: 0x0  nop
    ctx->pc = 0x337b2cu;
    // NOP
    ctx->pc = 0x337b30u;
}
