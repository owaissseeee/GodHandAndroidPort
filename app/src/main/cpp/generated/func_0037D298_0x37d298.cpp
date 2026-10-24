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

// Function: func_0037D298
// Address: 0x37d298 - 0x37d2d8
void func_0037D298_0x37d298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D298_0x37d298");
#endif

    switch (ctx->pc) {
        case 0x37d298u: goto label_37d298;
        case 0x37d29cu: goto label_37d29c;
        case 0x37d2a0u: goto label_37d2a0;
        case 0x37d2a4u: goto label_37d2a4;
        case 0x37d2a8u: goto label_37d2a8;
        case 0x37d2acu: goto label_37d2ac;
        case 0x37d2b0u: goto label_37d2b0;
        case 0x37d2b4u: goto label_37d2b4;
        case 0x37d2b8u: goto label_37d2b8;
        case 0x37d2bcu: goto label_37d2bc;
        case 0x37d2c0u: goto label_37d2c0;
        case 0x37d2c4u: goto label_37d2c4;
        case 0x37d2c8u: goto label_37d2c8;
        case 0x37d2ccu: goto label_37d2cc;
        case 0x37d2d0u: goto label_37d2d0;
        case 0x37d2d4u: goto label_37d2d4;
        default: break;
    }

    ctx->pc = 0x37d298u;

label_37d298:
    // 0x37d298: 0x3c050077  lui         $a1, 0x77
    ctx->pc = 0x37d298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)119 << 16));
label_37d29c:
    // 0x37d29c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37d29cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_37d2a0:
    // 0x37d2a0: 0x8ca3a7ac  lw          $v1, -0x5854($a1)
    ctx->pc = 0x37d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294944684)));
label_37d2a4:
    // 0x37d2a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_37d2a8:
    // 0x37d2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37d2ac:
    // 0x37d2ac: 0x24422810  addiu       $v0, $v0, 0x2810
    ctx->pc = 0x37d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10256));
label_37d2b0:
    // 0x37d2b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37d2b4:
    // 0x37d2b4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x37d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_37d2b8:
    // 0x37d2b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37d2bc:
    // 0x37d2bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37d2c0:
    // 0x37d2c0: 0x40f809  jalr        $v0
label_37d2c4:
    if (ctx->pc == 0x37D2C4u) {
        ctx->pc = 0x37D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D2C0u;
        // 0x37d2c4: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D2C8u;
        goto label_37d2c8;
    }
    ctx->pc = 0x37D2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37D2C8u);
        ctx->pc = 0x37D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D2C0u;
        // 0x37d2c4: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D2C0u, 0x37D2C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37D2C8u;
label_37d2c8:
    // 0x37d2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37d2cc:
    // 0x37d2cc: 0x3e00008  jr          $ra
label_37d2d0:
    if (ctx->pc == 0x37D2D0u) {
        ctx->pc = 0x37D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D2CCu;
        // 0x37d2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D2D4u;
        goto label_37d2d4;
    }
    ctx->pc = 0x37D2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D2CCu;
        // 0x37d2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D2D4u;
label_37d2d4:
    // 0x37d2d4: 0x0  nop
    ctx->pc = 0x37d2d4u;
    // NOP
    ctx->pc = 0x37d2d8u;
}
