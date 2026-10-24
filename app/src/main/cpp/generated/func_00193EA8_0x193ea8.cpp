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

// Function: func_00193EA8
// Address: 0x193ea8 - 0x193fd8
void func_00193EA8_0x193ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00193EA8_0x193ea8");
#endif

    switch (ctx->pc) {
        case 0x193ec8u: goto label_193ec8;
        case 0x193ee8u: goto label_193ee8;
        case 0x193f08u: goto label_193f08;
        case 0x193f90u: goto label_193f90;
        default: break;
    }

    ctx->pc = 0x193ea8u;

    // 0x193ea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x193ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x193eac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x193eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x193eb0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x193eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x193eb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x193eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x193eb8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x193eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x193ebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193ec0: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x193EC0u;
    SET_GPR_U32(ctx, 31, 0x193EC8u);
    ctx->pc = 0x193EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193EC0u;
    // 0x193ec4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x193EC0u, 0x193EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193EC8u;
label_193ec8:
    // 0x193ec8: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x193ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x193ecc: 0x24634b68  addiu       $v1, $v1, 0x4B68
    ctx->pc = 0x193eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19304));
    // 0x193ed0: 0xae230214  sw          $v1, 0x214($s1)
    ctx->pc = 0x193ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 3));
    // 0x193ed4: 0xfa200620  sqc2        $vf0, 0x620($s1)
    ctx->pc = 0x193ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1568), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193ed8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x193ed8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193edc: 0x26300630  addiu       $s0, $s1, 0x630
    ctx->pc = 0x193edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
    // 0x193ee0: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x193ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x193ee4: 0x0  nop
    ctx->pc = 0x193ee4u;
    // NOP
label_193ee8:
    // 0x193ee8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x193ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193eec: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x193eecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193ef0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x193ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193ef4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x193ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193ef8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x193ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f00: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x193F00u;
    SET_GPR_U32(ctx, 31, 0x193F08u);
    ctx->pc = 0x193F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F00u;
    // 0x193f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x193F00u, 0x193F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F08u;
label_193f08:
    // 0x193f08: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x193f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x193f0c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x193F0Cu;
    {
        const bool branch_taken_0x193f0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x193F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F0Cu;
        // 0x193f10: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f0c) {
            ctx->pc = 0x193EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193ee8;
        }
    }
    ctx->pc = 0x193F14u;
    // 0x193f14: 0x26220990  addiu       $v0, $s1, 0x990
    ctx->pc = 0x193f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2448));
    // 0x193f18: 0xfa2009e0  sqc2        $vf0, 0x9E0($s1)
    ctx->pc = 0x193f18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2528), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f1c: 0xfa2009f0  sqc2        $vf0, 0x9F0($s1)
    ctx->pc = 0x193f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2544), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f20: 0xfa200a00  sqc2        $vf0, 0xA00($s1)
    ctx->pc = 0x193f20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2560), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f24: 0xfa200a10  sqc2        $vf0, 0xA10($s1)
    ctx->pc = 0x193f24u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2576), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f28: 0xfa200a20  sqc2        $vf0, 0xA20($s1)
    ctx->pc = 0x193f28u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2592), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f2c: 0xfa200a30  sqc2        $vf0, 0xA30($s1)
    ctx->pc = 0x193f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2608), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f30: 0xfa200a40  sqc2        $vf0, 0xA40($s1)
    ctx->pc = 0x193f30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2624), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f34: 0xfa200a50  sqc2        $vf0, 0xA50($s1)
    ctx->pc = 0x193f34u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2640), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f38: 0xfa200a60  sqc2        $vf0, 0xA60($s1)
    ctx->pc = 0x193f38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2656), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f3c: 0xfa200a70  sqc2        $vf0, 0xA70($s1)
    ctx->pc = 0x193f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2672), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f40: 0xfa200a80  sqc2        $vf0, 0xA80($s1)
    ctx->pc = 0x193f40u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2688), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f44: 0xfa200a90  sqc2        $vf0, 0xA90($s1)
    ctx->pc = 0x193f44u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2704), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f48: 0xfa200aa0  sqc2        $vf0, 0xAA0($s1)
    ctx->pc = 0x193f48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2720), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f4c: 0xfa200ab0  sqc2        $vf0, 0xAB0($s1)
    ctx->pc = 0x193f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2736), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193f50: 0xa2200990  sb          $zero, 0x990($s1)
    ctx->pc = 0x193f50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2448), (uint8_t)GPR_U32(ctx, 0));
    // 0x193f54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f58: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x193f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x193f5c: 0x2623099c  addiu       $v1, $s1, 0x99C
    ctx->pc = 0x193f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2460));
    // 0x193f60: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x193f60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x193f64: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x193f64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x193f68: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x193f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x193f6c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x193f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x193f70: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x193f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x193f74: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x193f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x193f78: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x193f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x193f7c: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x193f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x193f80: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x193f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x193f84: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x193f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x193f88: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x193f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
    // 0x193f8c: 0x0  nop
    ctx->pc = 0x193f8cu;
    // NOP
label_193f90:
    // 0x193f90: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x193f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x193f94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x193f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x193f98: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x193f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x193f9c: 0x0  nop
    ctx->pc = 0x193f9cu;
    // NOP
    // 0x193fa0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x193FA0u;
    {
        const bool branch_taken_0x193fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FA0u;
        // 0x193fa4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193fa0) {
            ctx->pc = 0x193F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193f90;
        }
    }
    ctx->pc = 0x193FA8u;
    // 0x193fa8: 0xfa200b10  sqc2        $vf0, 0xB10($s1)
    ctx->pc = 0x193fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2832), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193fac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x193facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193fb0: 0xae200614  sw          $zero, 0x614($s1)
    ctx->pc = 0x193fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1556), GPR_U32(ctx, 0));
    // 0x193fb4: 0xae200b20  sw          $zero, 0xB20($s1)
    ctx->pc = 0x193fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2848), GPR_U32(ctx, 0));
    // 0x193fb8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x193fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193fbc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x193fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193fc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x193fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193fc4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x193fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x193FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FCCu;
        // 0x193fd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193FD4u;
    // 0x193fd4: 0x0  nop
    ctx->pc = 0x193fd4u;
    // NOP
    ctx->pc = 0x193fd8u;
}
