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

// Function: InitVuBlockObject
// Address: 0x1b39d0 - 0x1b3a70
void InitVuBlockObject_0x1b39d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVuBlockObject_0x1b39d0");
#endif

    switch (ctx->pc) {
        case 0x1b39f8u: goto label_1b39f8;
        case 0x1b3a10u: goto label_1b3a10;
        case 0x1b3a30u: goto label_1b3a30;
        default: break;
    }

    ctx->pc = 0x1b39d0u;

    // 0x1b39d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b39d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b39d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b39d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b39d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b39d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b39dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b39e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b39e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b39e4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b39e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b39e8: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x1b39e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b39ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b39ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b39f0: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1B39F0u;
    SET_GPR_U32(ctx, 31, 0x1B39F8u);
    ctx->pc = 0x1B39F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B39F0u;
    // 0x1b39f4: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1B39F0u, 0x1B39F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B39F8u;
label_1b39f8:
    // 0x1b39f8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1b39f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b39fc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b39fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b3a00: 0xae200600  sw          $zero, 0x600($s1)
    ctx->pc = 0x1b3a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 0));
    // 0x1b3a04: 0x24428778  addiu       $v0, $v0, -0x7888
    ctx->pc = 0x1b3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936440));
    // 0x1b3a08: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1b3a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    // 0x1b3a0c: 0x0  nop
    ctx->pc = 0x1b3a0cu;
    // NOP
label_1b3a10:
    // 0x1b3a10: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1b3a10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3a14: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1b3a14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3a18: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1b3a18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3a1c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1b3a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3a20: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1b3a20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a28: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1B3A28u;
    SET_GPR_U32(ctx, 31, 0x1B3A30u);
    ctx->pc = 0x1B3A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A28u;
    // 0x1b3a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1B3A28u, 0x1B3A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A30u;
label_1b3a30:
    // 0x1b3a30: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b3a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b3a34: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B3A34u;
    {
        const bool branch_taken_0x1b3a34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1B3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A34u;
        // 0x1b3a38: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a34) {
            ctx->pc = 0x1B3A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3a10;
        }
    }
    ctx->pc = 0x1B3A3Cu;
    // 0x1b3a3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b3a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a40: 0xae20064c  sw          $zero, 0x64C($s1)
    ctx->pc = 0x1b3a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1612), GPR_U32(ctx, 0));
    // 0x1b3a44: 0xae200650  sw          $zero, 0x650($s1)
    ctx->pc = 0x1b3a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1616), GPR_U32(ctx, 0));
    // 0x1b3a48: 0xae200654  sw          $zero, 0x654($s1)
    ctx->pc = 0x1b3a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1620), GPR_U32(ctx, 0));
    // 0x1b3a4c: 0xae200658  sw          $zero, 0x658($s1)
    ctx->pc = 0x1b3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1624), GPR_U32(ctx, 0));
    // 0x1b3a50: 0xae200648  sw          $zero, 0x648($s1)
    ctx->pc = 0x1b3a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1608), GPR_U32(ctx, 0));
    // 0x1b3a54: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b3a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3a58: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b3a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3a5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b3a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3a60: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b3a60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3a68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A68u;
        // 0x1b3a6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3A70u;
}
