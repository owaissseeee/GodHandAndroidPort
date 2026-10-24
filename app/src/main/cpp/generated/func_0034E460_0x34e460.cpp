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

// Function: func_0034E460
// Address: 0x34e460 - 0x34e4b0
void func_0034E460_0x34e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E460_0x34e460");
#endif

    switch (ctx->pc) {
        case 0x34e484u: goto label_34e484;
        default: break;
    }

    ctx->pc = 0x34e460u;

    // 0x34e460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34e460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34e464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34e464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34e468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34e468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e46c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34e46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34e470: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34e470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34e474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34e478: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34e478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e47c: 0xc0d30e4  jal         func_34C390
    ctx->pc = 0x34E47Cu;
    SET_GPR_U32(ctx, 31, 0x34E484u);
    ctx->pc = 0x34E480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E47Cu;
    // 0x34e480: 0x8e051f84  lw          $a1, 0x1F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C390u, 0x34E47Cu, 0x34E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E484u;
label_34e484:
    // 0x34e484: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E484u;
    {
        const bool branch_taken_0x34e484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e484) {
            ctx->pc = 0x34E488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E484u;
            // 0x34e488: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E49Cu;
            goto label_34e49c;
        }
    }
    ctx->pc = 0x34E48Cu;
    // 0x34e48c: 0x8e0337a8  lw          $v1, 0x37A8($s0)
    ctx->pc = 0x34e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14248)));
    // 0x34e490: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x34e490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34e494: 0xae0337a8  sw          $v1, 0x37A8($s0)
    ctx->pc = 0x34e494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14248), GPR_U32(ctx, 3));
    // 0x34e498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34e498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34e49c:
    // 0x34e49c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34e49cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34e4a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34e4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x34E4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E4A4u;
        // 0x34e4a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E4ACu;
    // 0x34e4ac: 0x0  nop
    ctx->pc = 0x34e4acu;
    // NOP
    ctx->pc = 0x34e4b0u;
}
