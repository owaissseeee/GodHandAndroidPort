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

// Function: func_00329FD0
// Address: 0x329fd0 - 0x32a018
void func_00329FD0_0x329fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329FD0_0x329fd0");
#endif

    switch (ctx->pc) {
        case 0x329fe8u: goto label_329fe8;
        default: break;
    }

    ctx->pc = 0x329fd0u;

    // 0x329fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x329fd4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x329FD4u;
    {
        const bool branch_taken_0x329fd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x329FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FD4u;
        // 0x329fd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329fd4) {
            ctx->pc = 0x329FF0u;
            goto label_329ff0;
        }
    }
    ctx->pc = 0x329FDCu;
    // 0x329fdc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x329fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x329fe0: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x329FE0u;
    SET_GPR_U32(ctx, 31, 0x329FE8u);
    ctx->pc = 0x329FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329FE0u;
    // 0x329fe4: 0x24842088  addiu       $a0, $a0, 0x2088 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x329FE0u, 0x329FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329FE8u;
label_329fe8:
    // 0x329fe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x329FE8u;
    {
        const bool branch_taken_0x329fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FE8u;
        // 0x329fec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329fe8) {
            ctx->pc = 0x329FF4u;
            goto label_329ff4;
        }
    }
    ctx->pc = 0x329FF0u;
label_329ff0:
    // 0x329ff0: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x329ff0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_329ff4:
    // 0x329ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x329FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329FF8u;
        // 0x329ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A000u;
    // 0x32a000: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32a004: 0x0  nop
    ctx->pc = 0x32a004u;
    // NOP
    // 0x32a008: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32a008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32a00c: 0x0  nop
    ctx->pc = 0x32a00cu;
    // NOP
    // 0x32a010: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32a014: 0x0  nop
    ctx->pc = 0x32a014u;
    // NOP
    ctx->pc = 0x32a018u;
}
