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

// Function: func_00335AD8
// Address: 0x335ad8 - 0x335b08
void func_00335AD8_0x335ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335AD8_0x335ad8");
#endif

    switch (ctx->pc) {
        case 0x335af0u: goto label_335af0;
        default: break;
    }

    ctx->pc = 0x335ad8u;

    // 0x335ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335adc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x335ADCu;
    {
        const bool branch_taken_0x335adc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x335AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335ADCu;
        // 0x335ae0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335adc) {
            ctx->pc = 0x335AF8u;
            goto label_335af8;
        }
    }
    ctx->pc = 0x335AE4u;
    // 0x335ae4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x335ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x335ae8: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x335AE8u;
    SET_GPR_U32(ctx, 31, 0x335AF0u);
    ctx->pc = 0x335AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335AE8u;
    // 0x335aec: 0x24844d38  addiu       $a0, $a0, 0x4D38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335AE8u, 0x335AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335AF0u;
label_335af0:
    // 0x335af0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x335AF0u;
    {
        const bool branch_taken_0x335af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335AF0u;
        // 0x335af4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335af0) {
            ctx->pc = 0x335AFCu;
            goto label_335afc;
        }
    }
    ctx->pc = 0x335AF8u;
label_335af8:
    // 0x335af8: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x335af8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_335afc:
    // 0x335afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335b00: 0x3e00008  jr          $ra
    ctx->pc = 0x335B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335B00u;
        // 0x335b04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335B08u;
}
