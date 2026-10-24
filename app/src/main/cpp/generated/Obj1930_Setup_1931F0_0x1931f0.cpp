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

// Function: Obj1930_Setup_1931F0
// Address: 0x1931f0 - 0x193278
void Obj1930_Setup_1931F0_0x1931f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj1930_Setup_1931F0_0x1931f0");
#endif

    switch (ctx->pc) {
        case 0x193218u: goto label_193218;
        case 0x193228u: goto label_193228;
        case 0x193248u: goto label_193248;
        default: break;
    }

    ctx->pc = 0x1931f0u;

    // 0x1931f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1931f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1931f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1931f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1931f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1931f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1931fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x193200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x193200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x193204: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x193204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x193208: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x193208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19320c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19320cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193210: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x193210u;
    SET_GPR_U32(ctx, 31, 0x193218u);
    ctx->pc = 0x193214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193210u;
    // 0x193214: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x193210u, 0x193218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193218u;
label_193218:
    // 0x193218: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x193218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19321c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19321cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x193220: 0x244246a8  addiu       $v0, $v0, 0x46A8
    ctx->pc = 0x193220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18088));
    // 0x193224: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x193224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_193228:
    // 0x193228: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x193228u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19322c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19322cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193230: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x193230u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193234: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x193234u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193238: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x193238u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19323c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19323cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193240: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x193240u;
    SET_GPR_U32(ctx, 31, 0x193248u);
    ctx->pc = 0x193244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193240u;
    // 0x193244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x193240u, 0x193248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193248u;
label_193248:
    // 0x193248: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x193248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19324c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19324Cu;
    {
        const bool branch_taken_0x19324c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x193250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19324Cu;
        // 0x193250: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19324c) {
            ctx->pc = 0x193228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193228;
        }
    }
    ctx->pc = 0x193254u;
    // 0x193254: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x193254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193258: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x193258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19325c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19325cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193260: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x193260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193264: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x193264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19326c: 0x3e00008  jr          $ra
    ctx->pc = 0x19326Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19326Cu;
        // 0x193270: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19326Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193274u;
    // 0x193274: 0x0  nop
    ctx->pc = 0x193274u;
    // NOP
    ctx->pc = 0x193278u;
}
