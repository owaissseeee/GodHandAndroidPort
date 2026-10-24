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

// Function: FreeObjResource_19D5E0
// Address: 0x19d5e0 - 0x19d640
void FreeObjResource_19D5E0_0x19d5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeObjResource_19D5E0_0x19d5e0");
#endif

    switch (ctx->pc) {
        case 0x19d61cu: goto label_19d61c;
        case 0x19d62cu: goto label_19d62c;
        default: break;
    }

    ctx->pc = 0x19d5e0u;

    // 0x19d5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d5e4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19d5e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19d5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19d5ec: 0x24425e10  addiu       $v0, $v0, 0x5E10
    ctx->pc = 0x19d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24080));
    // 0x19d5f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d5f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d5fc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19d5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19d600: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x19d600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19d604: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19D604u;
    {
        const bool branch_taken_0x19d604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D604u;
        // 0x19d608: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d604) {
            ctx->pc = 0x19D620u;
            goto label_19d620;
        }
    }
    ctx->pc = 0x19D60Cu;
    // 0x19d60c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19d610: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19d610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d614: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19D614u;
    SET_GPR_U32(ctx, 31, 0x19D61Cu);
    ctx->pc = 0x19D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D614u;
    // 0x19d618: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19D614u, 0x19D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D61Cu;
label_19d61c:
    // 0x19d61c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_19d620:
    // 0x19d620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d624: 0xc06fec0  jal         func_1BFB00
    ctx->pc = 0x19D624u;
    SET_GPR_U32(ctx, 31, 0x19D62Cu);
    ctx->pc = 0x19D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D624u;
    // 0x19d628: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB00u, 0x19D624u, 0x19D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D62Cu;
label_19d62c:
    // 0x19d62c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19d62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d638: 0x3e00008  jr          $ra
    ctx->pc = 0x19D638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D638u;
        // 0x19d63c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D640u;
}
