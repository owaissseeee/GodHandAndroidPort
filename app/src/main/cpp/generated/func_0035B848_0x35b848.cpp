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

// Function: func_0035B848
// Address: 0x35b848 - 0x35b8c0
void func_0035B848_0x35b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B848_0x35b848");
#endif

    switch (ctx->pc) {
        case 0x35b894u: goto label_35b894;
        default: break;
    }

    ctx->pc = 0x35b848u;

    // 0x35b848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b84c: 0x24880d30  addiu       $t0, $a0, 0xD30
    ctx->pc = 0x35b84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3376));
    // 0x35b850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35b850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35b854: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x35b854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b858: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35b858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35b85c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35b860: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x35b860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b864: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x35b864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b868: 0x8d0302cc  lw          $v1, 0x2CC($t0)
    ctx->pc = 0x35b868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 716)));
    // 0x35b86c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B86Cu;
    {
        const bool branch_taken_0x35b86c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x35B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B86Cu;
        // 0x35b870: 0x2442e270  addiu       $v0, $v0, -0x1D90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b86c) {
            ctx->pc = 0x35B888u;
            goto label_35b888;
        }
    }
    ctx->pc = 0x35B874u;
    // 0x35b874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b878: 0xad0002cc  sw          $zero, 0x2CC($t0)
    ctx->pc = 0x35b878u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 716), GPR_U32(ctx, 0));
    // 0x35b87c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35B87Cu;
    {
        const bool branch_taken_0x35b87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B87Cu;
        // 0x35b880: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b87c) {
            ctx->pc = 0x35B8ACu;
            goto label_35b8ac;
        }
    }
    ctx->pc = 0x35B884u;
    // 0x35b884: 0x0  nop
    ctx->pc = 0x35b884u;
    // NOP
label_35b888:
    // 0x35b888: 0x8d0602cc  lw          $a2, 0x2CC($t0)
    ctx->pc = 0x35b888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 716)));
    // 0x35b88c: 0xc0d9a46  jal         func_366918
    ctx->pc = 0x35B88Cu;
    SET_GPR_U32(ctx, 31, 0x35B894u);
    ctx->pc = 0x35B890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B88Cu;
    // 0x35b890: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366918u, 0x35B88Cu, 0x35B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B894u;
label_35b894:
    // 0x35b894: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35B894u;
    {
        const bool branch_taken_0x35b894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B894u;
        // 0x35b898: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b894) {
            ctx->pc = 0x35B8A8u;
            goto label_35b8a8;
        }
    }
    ctx->pc = 0x35B89Cu;
    // 0x35b89c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35B89Cu;
    {
        const bool branch_taken_0x35b89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B89Cu;
        // 0x35b8a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b89c) {
            ctx->pc = 0x35B8ACu;
            goto label_35b8ac;
        }
    }
    ctx->pc = 0x35B8A4u;
    // 0x35b8a4: 0x0  nop
    ctx->pc = 0x35b8a4u;
    // NOP
label_35b8a8:
    // 0x35b8a8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x35b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_35b8ac:
    // 0x35b8ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35b8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b8b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35b8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x35B8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B8B4u;
        // 0x35b8b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B8BCu;
    // 0x35b8bc: 0x0  nop
    ctx->pc = 0x35b8bcu;
    // NOP
    ctx->pc = 0x35b8c0u;
}
