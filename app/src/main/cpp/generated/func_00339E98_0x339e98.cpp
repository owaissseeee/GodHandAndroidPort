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

// Function: func_00339E98
// Address: 0x339e98 - 0x339f00
void func_00339E98_0x339e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00339E98_0x339e98");
#endif

    switch (ctx->pc) {
        case 0x339ec4u: goto label_339ec4;
        case 0x339ed8u: goto label_339ed8;
        case 0x339ee0u: goto label_339ee0;
        default: break;
    }

    ctx->pc = 0x339e98u;

    // 0x339e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x339e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x339e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x339ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x339ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x339ea8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x339ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339eac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x339eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x339eb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x339eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339eb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x339eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x339eb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x339eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x339ebc: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x339EBCu;
    SET_GPR_U32(ctx, 31, 0x339EC4u);
    ctx->pc = 0x339EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339EBCu;
    // 0x339ec0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x339EBCu, 0x339EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339EC4u;
label_339ec4:
    // 0x339ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x339ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ec8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ecc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x339eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ed0: 0xc0ce7c0  jal         func_339F00
    ctx->pc = 0x339ED0u;
    SET_GPR_U32(ctx, 31, 0x339ED8u);
    ctx->pc = 0x339ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339ED0u;
    // 0x339ed4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339F00u, 0x339ED0u, 0x339ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339ED8u;
label_339ed8:
    // 0x339ed8: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x339ED8u;
    SET_GPR_U32(ctx, 31, 0x339EE0u);
    ctx->pc = 0x339EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339ED8u;
    // 0x339edc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x339ED8u, 0x339EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339EE0u;
label_339ee0:
    // 0x339ee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x339ee4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x339ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ee8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x339ee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339ef0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x339ef0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339ef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x339ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x339EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EF8u;
        // 0x339efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339F00u;
}
