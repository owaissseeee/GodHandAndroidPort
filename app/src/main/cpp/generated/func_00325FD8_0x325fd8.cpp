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

// Function: func_00325FD8
// Address: 0x325fd8 - 0x326020
void func_00325FD8_0x325fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325FD8_0x325fd8");
#endif

    switch (ctx->pc) {
        case 0x325fd8u: goto label_325fd8;
        case 0x325fdcu: goto label_325fdc;
        case 0x325fe0u: goto label_325fe0;
        case 0x325fe4u: goto label_325fe4;
        case 0x325fe8u: goto label_325fe8;
        case 0x325fecu: goto label_325fec;
        case 0x325ff0u: goto label_325ff0;
        case 0x325ff4u: goto label_325ff4;
        case 0x325ff8u: goto label_325ff8;
        case 0x325ffcu: goto label_325ffc;
        case 0x326000u: goto label_326000;
        case 0x326004u: goto label_326004;
        case 0x326008u: goto label_326008;
        case 0x32600cu: goto label_32600c;
        case 0x326010u: goto label_326010;
        case 0x326014u: goto label_326014;
        case 0x326018u: goto label_326018;
        case 0x32601cu: goto label_32601c;
        default: break;
    }

    ctx->pc = 0x325fd8u;

label_325fd8:
    // 0x325fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_325fdc:
    // 0x325fdc: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x325fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_325fe0:
    // 0x325fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_325fe4:
    // 0x325fe4: 0x24425c28  addiu       $v0, $v0, 0x5C28
    ctx->pc = 0x325fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23592));
label_325fe8:
    // 0x325fe8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x325fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_325fec:
    // 0x325fec: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_325ff0:
    if (ctx->pc == 0x325FF0u) {
        ctx->pc = 0x325FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FECu;
        // 0x325ff0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325FF4u;
        goto label_325ff4;
    }
    ctx->pc = 0x325FECu;
    {
        const bool branch_taken_0x325fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x325fec) {
            ctx->pc = 0x325FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325FECu;
            // 0x325ff0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326000u;
            goto label_326000;
        }
    }
    ctx->pc = 0x325FF4u;
label_325ff4:
    // 0x325ff4: 0x60f809  jalr        $v1
label_325ff8:
    if (ctx->pc == 0x325FF8u) {
        ctx->pc = 0x325FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FF4u;
        // 0x325ff8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x325FFCu;
        goto label_325ffc;
    }
    ctx->pc = 0x325FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x325FFCu);
        ctx->pc = 0x325FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FF4u;
        // 0x325ff8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325FF4u, 0x325FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x325FFCu;
label_325ffc:
    // 0x325ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_326000:
    // 0x326000: 0x3e00008  jr          $ra
label_326004:
    if (ctx->pc == 0x326004u) {
        ctx->pc = 0x326004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326000u;
        // 0x326004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326008u;
        goto label_326008;
    }
    ctx->pc = 0x326000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326000u;
        // 0x326004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326008u;
label_326008:
    // 0x326008: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x326008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32600c:
    // 0x32600c: 0x0  nop
    ctx->pc = 0x32600cu;
    // NOP
label_326010:
    // 0x326010: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x326010u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_326014:
    // 0x326014: 0x0  nop
    ctx->pc = 0x326014u;
    // NOP
label_326018:
    // 0x326018: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x326018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32601c:
    // 0x32601c: 0x0  nop
    ctx->pc = 0x32601cu;
    // NOP
    ctx->pc = 0x326020u;
}
