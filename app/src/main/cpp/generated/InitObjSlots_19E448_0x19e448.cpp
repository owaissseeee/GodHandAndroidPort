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

// Function: InitObjSlots_19E448
// Address: 0x19e448 - 0x19e4d0
void InitObjSlots_19E448_0x19e448(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlots_19E448_0x19e448");
#endif

    if (__builtin_expect(ctx->pc != 0x19e448u, 0)) {
        switch (ctx->pc) {
            case 0x19e470u: goto label_19e470;
            case 0x19e480u: goto label_19e480;
            case 0x19e4a0u: goto label_19e4a0;
            default: break;
        }
    }


    // 0x19e448: 0x27bdffb0  addiu       $sp, $sp, -0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19e44c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19e44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19e450: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e454: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19e454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19e458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19e458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e45c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19e45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19e460: 0x24120009  addiu       $s2, $zero, 0x9
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19e464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e468: 0xc0709fa  jal         func_1C27E8
    SET_GPR_U32(ctx, 31, 0x19E470u);
    ctx->pc = 0x19E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E468u;
    // 0x19e46c: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &InitVtable214_429C80_1C27E8_0x1c27e8, 0x1c27e8u, 0x19e470u)) {
        return;
    }
label_19e470:
    // 0x19e470: 0x2413ffff  addiu       $s3, $zero, -0x1
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19e474: 0x3c020042  lui         $v0, 0x42
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19e478: 0x24426350  addiu       $v0, $v0, 0x6350
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25424));
    // 0x19e47c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19e47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19e480:
    // 0x19e480: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19e480u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19e484: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19e484u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19e488: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19e488u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19e48c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19e48cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19e490: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19e490u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19e494: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e498: 0xc05bd90  jal         func_16F640
    SET_GPR_U32(ctx, 31, 0x19E4A0u);
    ctx->pc = 0x19E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E498u;
    // 0x19e49c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Set_Byte_54_0x16f640, 0x16f640u, 0x19e4a0u)) {
        return;
    }
label_19e4a0:
    // 0x19e4a0: 0x2652ffff  addiu       $s2, $s2, -0x1
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19e4a4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19E4A4u;
    {
        const bool branch_taken_0x19e4a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4A4u;
        // 0x19e4a8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4a4) {
            ctx->pc = 0x19E480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e480;
        }
    }
    // 0x19e4ac: 0x220102d  daddu       $v0, $s1, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19e4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e4b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19e4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e4b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e4bc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19e4bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x19E4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4C4u;
        // 0x19e4c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x19e4cc: 0x0  nop
    // NOP
    ctx->pc = 0x19e4d0u;
}