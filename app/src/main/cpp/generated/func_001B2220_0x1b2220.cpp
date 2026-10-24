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

// Function: func_001B2220
// Address: 0x1b2220 - 0x1b22a8
void func_001B2220_0x1b2220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B2220_0x1b2220");
#endif

    switch (ctx->pc) {
        case 0x1b2248u: goto label_1b2248;
        case 0x1b2258u: goto label_1b2258;
        case 0x1b2278u: goto label_1b2278;
        default: break;
    }

    ctx->pc = 0x1b2220u;

    // 0x1b2220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b2220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b2224: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b2224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b2228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b2228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b222c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b222cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b2230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b2230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b2234: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b2234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b2238: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1b2238u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b223c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b223cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2240: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x1B2240u;
    SET_GPR_U32(ctx, 31, 0x1B2248u);
    ctx->pc = 0x1B2244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2240u;
    // 0x1b2244: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x1B2240u, 0x1B2248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2248u;
label_1b2248:
    // 0x1b2248: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1b2248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b224c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b224cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b2250: 0x244284a0  addiu       $v0, $v0, -0x7B60
    ctx->pc = 0x1b2250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935712));
    // 0x1b2254: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1b2254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1b2258:
    // 0x1b2258: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1b2258u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b225c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1b225cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b2260: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1b2260u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b2264: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1b2264u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b2268: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1b2268u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b226c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b226cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2270: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1B2270u;
    SET_GPR_U32(ctx, 31, 0x1B2278u);
    ctx->pc = 0x1B2274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2270u;
    // 0x1b2274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1B2270u, 0x1B2278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2278u;
label_1b2278:
    // 0x1b2278: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b2278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b227c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B227Cu;
    {
        const bool branch_taken_0x1b227c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1B2280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B227Cu;
        // 0x1b2280: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b227c) {
            ctx->pc = 0x1B2258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2258;
        }
    }
    ctx->pc = 0x1B2284u;
    // 0x1b2284: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b2284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2288: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b2288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b228c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b228cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2290: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b2290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2294: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b2294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b229c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B229Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B229Cu;
        // 0x1b22a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B229Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B22A4u;
    // 0x1b22a4: 0x0  nop
    ctx->pc = 0x1b22a4u;
    // NOP
    ctx->pc = 0x1b22a8u;
}
