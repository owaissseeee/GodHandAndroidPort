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

// Function: func_0017E0F8
// Address: 0x17e0f8 - 0x17e1c0
void func_0017E0F8_0x17e0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017E0F8_0x17e0f8");
#endif

    switch (ctx->pc) {
        case 0x17e10cu: goto label_17e10c;
        case 0x17e190u: goto label_17e190;
        default: break;
    }

    ctx->pc = 0x17e0f8u;

    // 0x17e0f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e0fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17e0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17e100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e104: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x17E104u;
    SET_GPR_U32(ctx, 31, 0x17E10Cu);
    ctx->pc = 0x17E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E104u;
    // 0x17e108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x17E104u, 0x17E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E10Cu;
label_17e10c:
    // 0x17e10c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x17e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x17e110: 0x26020610  addiu       $v0, $s0, 0x610
    ctx->pc = 0x17e110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x17e114: 0x24631fe8  addiu       $v1, $v1, 0x1FE8
    ctx->pc = 0x17e114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8168));
    // 0x17e118: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x17e118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x17e11c: 0xfa000660  sqc2        $vf0, 0x660($s0)
    ctx->pc = 0x17e11cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1632), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e120: 0xfa000670  sqc2        $vf0, 0x670($s0)
    ctx->pc = 0x17e120u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1648), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e124: 0xfa000680  sqc2        $vf0, 0x680($s0)
    ctx->pc = 0x17e124u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1664), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e128: 0xfa000690  sqc2        $vf0, 0x690($s0)
    ctx->pc = 0x17e128u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1680), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e12c: 0xfa0006a0  sqc2        $vf0, 0x6A0($s0)
    ctx->pc = 0x17e12cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1696), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e130: 0xfa0006b0  sqc2        $vf0, 0x6B0($s0)
    ctx->pc = 0x17e130u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1712), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e134: 0xfa0006c0  sqc2        $vf0, 0x6C0($s0)
    ctx->pc = 0x17e134u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1728), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e138: 0xfa0006d0  sqc2        $vf0, 0x6D0($s0)
    ctx->pc = 0x17e138u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1744), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e13c: 0xfa0006e0  sqc2        $vf0, 0x6E0($s0)
    ctx->pc = 0x17e13cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1760), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e140: 0xfa0006f0  sqc2        $vf0, 0x6F0($s0)
    ctx->pc = 0x17e140u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1776), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e144: 0xfa000700  sqc2        $vf0, 0x700($s0)
    ctx->pc = 0x17e144u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1792), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e148: 0xfa000710  sqc2        $vf0, 0x710($s0)
    ctx->pc = 0x17e148u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1808), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e14c: 0xfa000720  sqc2        $vf0, 0x720($s0)
    ctx->pc = 0x17e14cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1824), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e150: 0xfa000730  sqc2        $vf0, 0x730($s0)
    ctx->pc = 0x17e150u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1840), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e154: 0xa2000610  sb          $zero, 0x610($s0)
    ctx->pc = 0x17e154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1552), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e158: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17e158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e15c: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x17e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x17e160: 0x2603061c  addiu       $v1, $s0, 0x61C
    ctx->pc = 0x17e160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1564));
    // 0x17e164: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x17e164u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e168: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x17e168u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e16c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17e16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17e170: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17e170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17e174: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x17e174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x17e178: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x17e178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x17e17c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x17e17cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x17e180: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x17e180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x17e184: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x17e184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x17e188: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x17e188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x17e18c: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x17e18cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
label_17e190:
    // 0x17e190: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17e190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17e194: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17e194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17e198: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x17e198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17e19c: 0x0  nop
    ctx->pc = 0x17e19cu;
    // NOP
    // 0x17e1a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17E1A0u;
    {
        const bool branch_taken_0x17e1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1A0u;
        // 0x17e1a4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1a0) {
            ctx->pc = 0x17E190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e190;
        }
    }
    ctx->pc = 0x17E1A8u;
    // 0x17e1a8: 0xfa000770  sqc2        $vf0, 0x770($s0)
    ctx->pc = 0x17e1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1904), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e1ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17e1acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e1b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17e1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17E1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E1B8u;
        // 0x17e1bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E1C0u;
}
