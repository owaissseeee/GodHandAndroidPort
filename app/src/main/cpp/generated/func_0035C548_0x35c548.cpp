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

// Function: func_0035C548
// Address: 0x35c548 - 0x35c5a0
void func_0035C548_0x35c548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035C548_0x35c548");
#endif

    switch (ctx->pc) {
        case 0x35c574u: goto label_35c574;
        case 0x35c580u: goto label_35c580;
        default: break;
    }

    ctx->pc = 0x35c548u;

    // 0x35c548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35c54c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35c54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35c550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35c558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35c55c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x35c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35c560: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35C560u;
    {
        const bool branch_taken_0x35c560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C560u;
        // 0x35c564: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c560) {
            ctx->pc = 0x35C58Cu;
            goto label_35c58c;
        }
    }
    ctx->pc = 0x35C568u;
    // 0x35c568: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x35c568u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35c56c: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x35C56Cu;
    SET_GPR_U32(ctx, 31, 0x35C574u);
    ctx->pc = 0x35C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C56Cu;
    // 0x35c570: 0xde040130  ld          $a0, 0x130($s0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x35C56Cu, 0x35C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C574u;
label_35c574:
    // 0x35c574: 0xde250008  ld          $a1, 0x8($s1)
    ctx->pc = 0x35c574u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x35c578: 0xc0edff8  jal         func_3B7FE0
    ctx->pc = 0x35C578u;
    SET_GPR_U32(ctx, 31, 0x35C580u);
    ctx->pc = 0x35C57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C578u;
    // 0x35c57c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x35C578u, 0x35C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C580u;
label_35c580:
    // 0x35c580: 0xde030128  ld          $v1, 0x128($s0)
    ctx->pc = 0x35c580u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x35c584: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x35c584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x35c588: 0xfe030128  sd          $v1, 0x128($s0)
    ctx->pc = 0x35c588u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 3));
label_35c58c:
    // 0x35c58c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c58cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35c590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c598: 0x3e00008  jr          $ra
    ctx->pc = 0x35C598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C598u;
        // 0x35c59c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C5A0u;
}
