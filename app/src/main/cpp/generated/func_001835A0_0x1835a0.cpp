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

// Function: func_001835A0
// Address: 0x1835a0 - 0x183628
void func_001835A0_0x1835a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001835A0_0x1835a0");
#endif

    switch (ctx->pc) {
        case 0x1835c8u: goto label_1835c8;
        case 0x1835d8u: goto label_1835d8;
        case 0x1835f8u: goto label_1835f8;
        default: break;
    }

    ctx->pc = 0x1835a0u;

    // 0x1835a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1835a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1835a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1835a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1835a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1835a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1835acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1835b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1835b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1835b4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1835b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1835b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1835b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1835bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1835c0: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x1835C0u;
    SET_GPR_U32(ctx, 31, 0x1835C8u);
    ctx->pc = 0x1835C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1835C0u;
    // 0x1835c4: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x1835C0u, 0x1835C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1835C8u;
label_1835c8:
    // 0x1835c8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1835c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1835cc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1835ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1835d0: 0x24422c18  addiu       $v0, $v0, 0x2C18
    ctx->pc = 0x1835d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11288));
    // 0x1835d4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1835d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1835d8:
    // 0x1835d8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1835d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1835dc: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1835dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1835e0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1835e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1835e4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1835e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1835e8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1835e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1835ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1835ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835f0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1835F0u;
    SET_GPR_U32(ctx, 31, 0x1835F8u);
    ctx->pc = 0x1835F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1835F0u;
    // 0x1835f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1835F0u, 0x1835F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1835F8u;
label_1835f8:
    // 0x1835f8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1835f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1835fc: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1835FCu;
    {
        const bool branch_taken_0x1835fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x183600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835FCu;
        // 0x183600: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1835fc) {
            ctx->pc = 0x1835D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1835d8;
        }
    }
    ctx->pc = 0x183604u;
    // 0x183604: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x183604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183608: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x183608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18360c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18360cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183610: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183614: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x183614u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18361c: 0x3e00008  jr          $ra
    ctx->pc = 0x18361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18361Cu;
        // 0x183620: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18361Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183624u;
    // 0x183624: 0x0  nop
    ctx->pc = 0x183624u;
    // NOP
    ctx->pc = 0x183628u;
}
