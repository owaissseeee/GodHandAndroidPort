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

// Function: func_002FBE88
// Address: 0x2fbe88 - 0x2fbec8
void func_002FBE88_0x2fbe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FBE88_0x2fbe88");
#endif

    switch (ctx->pc) {
        case 0x2fbe88u: goto label_2fbe88;
        case 0x2fbe8cu: goto label_2fbe8c;
        case 0x2fbe90u: goto label_2fbe90;
        case 0x2fbe94u: goto label_2fbe94;
        case 0x2fbe98u: goto label_2fbe98;
        case 0x2fbe9cu: goto label_2fbe9c;
        case 0x2fbea0u: goto label_2fbea0;
        case 0x2fbea4u: goto label_2fbea4;
        case 0x2fbea8u: goto label_2fbea8;
        case 0x2fbeacu: goto label_2fbeac;
        case 0x2fbeb0u: goto label_2fbeb0;
        case 0x2fbeb4u: goto label_2fbeb4;
        case 0x2fbeb8u: goto label_2fbeb8;
        case 0x2fbebcu: goto label_2fbebc;
        case 0x2fbec0u: goto label_2fbec0;
        case 0x2fbec4u: goto label_2fbec4;
        default: break;
    }

    ctx->pc = 0x2fbe88u;

label_2fbe88:
    // 0x2fbe88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fbe88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2fbe8c:
    // 0x2fbe8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2fbe8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbe90:
    // 0x2fbe90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fbe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2fbe94:
    // 0x2fbe94: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2fbe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2fbe98:
    // 0x2fbe98: 0x8ca2011c  lw          $v0, 0x11C($a1)
    ctx->pc = 0x2fbe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 284)));
label_2fbe9c:
    // 0x2fbe9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fbe9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2fbea0:
    // 0x2fbea0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2fbea4:
    if (ctx->pc == 0x2FBEA4u) {
        ctx->pc = 0x2FBEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEA0u;
        // 0x2fbea4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBEA8u;
        goto label_2fbea8;
    }
    ctx->pc = 0x2FBEA0u;
    {
        const bool branch_taken_0x2fbea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEA0u;
        // 0x2fbea4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbea0) {
            ctx->pc = 0x2FBEC0u;
            goto label_2fbec0;
        }
    }
    ctx->pc = 0x2FBEA8u;
label_2fbea8:
    // 0x2fbea8: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x2fbea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
label_2fbeac:
    // 0x2fbeac: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2fbeacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_2fbeb0:
    // 0x2fbeb0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2fbeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2fbeb4:
    // 0x2fbeb4: 0x60f809  jalr        $v1
label_2fbeb8:
    if (ctx->pc == 0x2FBEB8u) {
        ctx->pc = 0x2FBEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEB4u;
        // 0x2fbeb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBEBCu;
        goto label_2fbebc;
    }
    ctx->pc = 0x2FBEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FBEBCu);
        ctx->pc = 0x2FBEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEB4u;
        // 0x2fbeb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBEB4u, 0x2FBEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FBEBCu;
label_2fbebc:
    // 0x2fbebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fbebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbec0:
    // 0x2fbec0: 0x3e00008  jr          $ra
label_2fbec4:
    if (ctx->pc == 0x2FBEC4u) {
        ctx->pc = 0x2FBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEC0u;
        // 0x2fbec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FBEC8u;
        goto label_fallthrough_0x2fbec0;
    }
    ctx->pc = 0x2FBEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBEC0u;
        // 0x2fbec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fbec0:
    ctx->pc = 0x2FBEC8u;
}
