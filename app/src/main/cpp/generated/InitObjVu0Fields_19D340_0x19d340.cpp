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

// Function: InitObjVu0Fields_19D340
// Address: 0x19d340 - 0x19d3c8
void InitObjVu0Fields_19D340_0x19d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVu0Fields_19D340_0x19d340");
#endif

    switch (ctx->pc) {
        case 0x19d368u: goto label_19d368;
        case 0x19d378u: goto label_19d378;
        case 0x19d398u: goto label_19d398;
        default: break;
    }

    ctx->pc = 0x19d340u;

    // 0x19d340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19d344: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19d344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19d348: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19d348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d34c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19d350: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19d354: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19d354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19d358: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x19d358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19d35c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d360: 0xc06efae  jal         func_1BBEB8
    ctx->pc = 0x19D360u;
    SET_GPR_U32(ctx, 31, 0x19D368u);
    ctx->pc = 0x19D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D360u;
    // 0x19d364: 0x26300650  addiu       $s0, $s1, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBEB8u, 0x19D360u, 0x19D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D368u;
label_19d368:
    // 0x19d368: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19d368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19d36c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19d370: 0x24425d48  addiu       $v0, $v0, 0x5D48
    ctx->pc = 0x19d370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23880));
    // 0x19d374: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19d374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19d378:
    // 0x19d378: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19d378u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19d37c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19d37cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19d380: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19d380u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19d384: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19d384u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19d388: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19d388u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19d38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d390: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19D390u;
    SET_GPR_U32(ctx, 31, 0x19D398u);
    ctx->pc = 0x19D394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D390u;
    // 0x19d394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19D390u, 0x19D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D398u;
label_19d398:
    // 0x19d398: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19d398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19d39c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19D39Cu;
    {
        const bool branch_taken_0x19d39c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D39Cu;
        // 0x19d3a0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d39c) {
            ctx->pc = 0x19D378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d378;
        }
    }
    ctx->pc = 0x19D3A4u;
    // 0x19d3a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19d3a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d3a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19d3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d3ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19d3acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d3b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d3b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d3b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19d3b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19D3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3BCu;
        // 0x19d3c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D3C4u;
    // 0x19d3c4: 0x0  nop
    ctx->pc = 0x19d3c4u;
    // NOP
    ctx->pc = 0x19d3c8u;
}
