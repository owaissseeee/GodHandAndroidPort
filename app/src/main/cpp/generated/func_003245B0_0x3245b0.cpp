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

// Function: func_003245B0
// Address: 0x3245b0 - 0x324640
void func_003245B0_0x3245b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003245B0_0x3245b0");
#endif

    switch (ctx->pc) {
        case 0x3245ecu: goto label_3245ec;
        case 0x32460cu: goto label_32460c;
        case 0x324614u: goto label_324614;
        default: break;
    }

    ctx->pc = 0x3245b0u;

    // 0x3245b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3245b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3245b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3245b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3245b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3245b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3245bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3245c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3245c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3245c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3245c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3245c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3245ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3245d0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3245d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245d4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3245d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3245d8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3245d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245dc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3245dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3245e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3245e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3245e4: 0xc0c9220  jal         func_324880
    ctx->pc = 0x3245E4u;
    SET_GPR_U32(ctx, 31, 0x3245ECu);
    ctx->pc = 0x3245E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3245E4u;
    // 0x3245e8: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x3245E4u, 0x3245ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3245ECu;
label_3245ec:
    // 0x3245ec: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x3245ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3245f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3245f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3245f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3245fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324600: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x324600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324604: 0xc0c9190  jal         func_324640
    ctx->pc = 0x324604u;
    SET_GPR_U32(ctx, 31, 0x32460Cu);
    ctx->pc = 0x324608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324604u;
    // 0x324608: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324640u, 0x324604u, 0x32460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32460Cu;
label_32460c:
    // 0x32460c: 0xc0c9226  jal         func_324898
    ctx->pc = 0x32460Cu;
    SET_GPR_U32(ctx, 31, 0x324614u);
    ctx->pc = 0x324610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32460Cu;
    // 0x324610: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x32460Cu, 0x324614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324614u;
label_324614:
    // 0x324614: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x324614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x324618: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x324618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32461c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32461cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324620: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x324620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324624: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x324624u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x324628: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x324628u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32462c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x32462cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x324630: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x324630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324634: 0x3e00008  jr          $ra
    ctx->pc = 0x324634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324634u;
        // 0x324638: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32463Cu;
    // 0x32463c: 0x0  nop
    ctx->pc = 0x32463cu;
    // NOP
    ctx->pc = 0x324640u;
}
