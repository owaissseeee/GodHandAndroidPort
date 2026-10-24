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

// Function: _$_9streambuf
// Address: 0x38b3e0 - 0x38b438
void ps2____9streambuf_0x38b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____9streambuf_0x38b3e0");
#endif

    switch (ctx->pc) {
        case 0x38b40cu: goto label_38b40c;
        case 0x38b420u: goto label_38b420;
        default: break;
    }

    ctx->pc = 0x38b3e0u;

    // 0x38b3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38b3e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x38b3e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38b3ec: 0x2442d2b0  addiu       $v0, $v0, -0x2D50
    ctx->pc = 0x38b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955696));
    // 0x38b3f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38b3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38b3f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38b3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b3f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38b3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38b3fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38b3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b400: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x38b400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x38b404: 0xc0e3322  jal         func_38CC88
    ctx->pc = 0x38B404u;
    SET_GPR_U32(ctx, 31, 0x38B40Cu);
    ctx->pc = 0x38B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B404u;
    // 0x38b408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CC88u, 0x38B404u, 0x38B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B40Cu;
label_38b40c:
    // 0x38b40c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x38b40cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x38b410: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38B410u;
    {
        const bool branch_taken_0x38b410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B410u;
        // 0x38b414: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b410) {
            ctx->pc = 0x38B424u;
            goto label_38b424;
        }
    }
    ctx->pc = 0x38B418u;
    // 0x38b418: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x38B418u;
    SET_GPR_U32(ctx, 31, 0x38B420u);
    ctx->pc = 0x38B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B418u;
    // 0x38b41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x38B418u, 0x38B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B420u;
label_38b420:
    // 0x38b420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38b420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38b424:
    // 0x38b424: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38b424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38b428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b42c: 0x3e00008  jr          $ra
    ctx->pc = 0x38B42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B42Cu;
        // 0x38b430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B434u;
    // 0x38b434: 0x0  nop
    ctx->pc = 0x38b434u;
    // NOP
    ctx->pc = 0x38b438u;
}
