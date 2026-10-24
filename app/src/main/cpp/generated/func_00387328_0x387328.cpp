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

// Function: func_00387328
// Address: 0x387328 - 0x387430
void func_00387328_0x387328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00387328_0x387328");
#endif

    switch (ctx->pc) {
        case 0x387360u: goto label_387360;
        case 0x3873b0u: goto label_3873b0;
        case 0x3873e8u: goto label_3873e8;
        default: break;
    }

    ctx->pc = 0x387328u;

    // 0x387328: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x387328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38732c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x38732cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x387330: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x387330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x387334: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x387334u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x387338: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x387338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x38733c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x38733cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x387340: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x387340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x387344: 0x68403  sra         $s0, $a2, 16
    ctx->pc = 0x387344u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 16));
    // 0x387348: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x387348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x38734c: 0x49403  sra         $s2, $a0, 16
    ctx->pc = 0x38734cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 4), 16));
    // 0x387350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x387354: 0x59c03  sra         $s3, $a1, 16
    ctx->pc = 0x387354u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 16));
    // 0x387358: 0xc0dde66  jal         func_377998
    ctx->pc = 0x387358u;
    SET_GPR_U32(ctx, 31, 0x387360u);
    ctx->pc = 0x38735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387358u;
    // 0x38735c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377998u, 0x387358u, 0x387360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387360u;
label_387360:
    // 0x387360: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x387360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387364: 0x10c0002b  beqz        $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x387364u;
    {
        const bool branch_taken_0x387364 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x387368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387364u;
        // 0x387368: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387364) {
            ctx->pc = 0x387414u;
            goto label_387414;
        }
    }
    ctx->pc = 0x38736Cu;
    // 0x38736c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x38736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x387370: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x387370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387374: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x387374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x387378: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x387378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38737c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x38737cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387380: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x387380u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x387384: 0xa0c30008  sb          $v1, 0x8($a2)
    ctx->pc = 0x387384u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x387388: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x387388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x38738c: 0xa0c50009  sb          $a1, 0x9($a2)
    ctx->pc = 0x38738cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x387390: 0xa4d2000c  sh          $s2, 0xC($a2)
    ctx->pc = 0x387390u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 18));
    // 0x387394: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x387394u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x387398: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x387398u;
    {
        const bool branch_taken_0x387398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387398u;
        // 0x38739c: 0xa4c0000a  sh          $zero, 0xA($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387398) {
            ctx->pc = 0x3873DCu;
            goto label_3873dc;
        }
    }
    ctx->pc = 0x3873A0u;
    // 0x3873a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3873a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3873a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3873a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3873a8: 0x24c40026  addiu       $a0, $a2, 0x26
    ctx->pc = 0x3873a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 38));
    // 0x3873ac: 0x24c30022  addiu       $v1, $a2, 0x22
    ctx->pc = 0x3873acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 34));
label_3873b0:
    // 0x3873b0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x3873b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3873b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3873b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3873b8: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x3873b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x3873bc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x3873bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3873c0: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x3873c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3873c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3873C4u;
    {
        const bool branch_taken_0x3873c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3873C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3873C4u;
        // 0x3873c8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3873c4) {
            ctx->pc = 0x3873B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3873b0;
        }
    }
    ctx->pc = 0x3873CCu;
    // 0x3873cc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3873ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3873d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3873d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3873d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3873D4u;
    {
        const bool branch_taken_0x3873d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3873D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3873D4u;
        // 0x3873d8: 0xacc30040  sw          $v1, 0x40($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3873d4) {
            ctx->pc = 0x387414u;
            goto label_387414;
        }
    }
    ctx->pc = 0x3873DCu;
label_3873dc:
    // 0x3873dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3873dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3873e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3873e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3873e4: 0x24c30026  addiu       $v1, $a2, 0x26
    ctx->pc = 0x3873e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 38));
label_3873e8:
    // 0x3873e8: 0x2241024  and         $v0, $s1, $a0
    ctx->pc = 0x3873e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x3873ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3873ECu;
    {
        const bool branch_taken_0x3873ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3873F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3873ECu;
        // 0x3873f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3873ec) {
            ctx->pc = 0x3873FCu;
            goto label_3873fc;
        }
    }
    ctx->pc = 0x3873F4u;
    // 0x3873f4: 0xa473fffc  sh          $s3, -0x4($v1)
    ctx->pc = 0x3873f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294967292), (uint16_t)GPR_U32(ctx, 19));
    // 0x3873f8: 0xa4700000  sh          $s0, 0x0($v1)
    ctx->pc = 0x3873f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 16));
label_3873fc:
    // 0x3873fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3873fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x387400: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x387400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x387404: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x387404u;
    {
        const bool branch_taken_0x387404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387404u;
        // 0x387408: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387404) {
            ctx->pc = 0x3873E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3873e8;
        }
    }
    ctx->pc = 0x38740Cu;
    // 0x38740c: 0xacd10040  sw          $s1, 0x40($a2)
    ctx->pc = 0x38740cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 17));
    // 0x387410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x387410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387414:
    // 0x387414: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x387414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387418: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x387418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38741c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38741cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387420: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x387420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387428: 0x3e00008  jr          $ra
    ctx->pc = 0x387428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387428u;
        // 0x38742c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387430u;
}
