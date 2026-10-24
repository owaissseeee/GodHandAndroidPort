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

// Function: cNode_setLocalScale
// Address: 0x2b61d8 - 0x2b6230
void cNode_setLocalScale_0x2b61d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cNode_setLocalScale_0x2b61d8");
#endif

    switch (ctx->pc) {
        case 0x2b61f4u: goto label_2b61f4;
        default: break;
    }

    ctx->pc = 0x2b61d8u;

    // 0x2b61d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b61d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b61dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b61dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b61e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b61e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b61e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b61e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b61e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b61ec: 0xc0ad900  jal         func_2B6400
    ctx->pc = 0x2B61ECu;
    SET_GPR_U32(ctx, 31, 0x2B61F4u);
    ctx->pc = 0x2B61F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B61ECu;
    // 0x2b61f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6400u, 0x2B61ECu, 0x2B61F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B61F4u;
label_2b61f4:
    // 0x2b61f4: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x2b61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b61f8: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B61F8u;
    {
        const bool branch_taken_0x2b61f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2b61f8) {
            ctx->pc = 0x2B61FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B61F8u;
            // 0x2b61fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B621Cu;
            goto label_2b621c;
        }
    }
    ctx->pc = 0x2B6200u;
    // 0x2b6200: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2b6200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6204: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2b6204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2b6208: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2b6208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b620c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b620cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b6210: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2b6210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6214: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b6214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b6218: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b6218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b621c:
    // 0x2b621c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b621cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6224: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6224u;
        // 0x2b6228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B622Cu;
    // 0x2b622c: 0x0  nop
    ctx->pc = 0x2b622cu;
    // NOP
    ctx->pc = 0x2b6230u;
}
