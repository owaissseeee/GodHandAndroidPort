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

// Function: func_001B36E0
// Address: 0x1b36e0 - 0x1b37a8
void func_001B36E0_0x1b36e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B36E0_0x1b36e0");
#endif

    switch (ctx->pc) {
        case 0x1b36f4u: goto label_1b36f4;
        case 0x1b3778u: goto label_1b3778;
        default: break;
    }

    ctx->pc = 0x1b36e0u;

    // 0x1b36e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b36e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b36e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b36e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b36e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b36e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b36ec: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1B36ECu;
    SET_GPR_U32(ctx, 31, 0x1B36F4u);
    ctx->pc = 0x1B36F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B36ECu;
    // 0x1b36f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1B36ECu, 0x1B36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B36F4u;
label_1b36f4:
    // 0x1b36f4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b36f8: 0x26020610  addiu       $v0, $s0, 0x610
    ctx->pc = 0x1b36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1b36fc: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x1b36fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x1b3700: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1b3700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1b3704: 0xfa000660  sqc2        $vf0, 0x660($s0)
    ctx->pc = 0x1b3704u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1632), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3708: 0xfa000670  sqc2        $vf0, 0x670($s0)
    ctx->pc = 0x1b3708u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1648), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b370c: 0xfa000680  sqc2        $vf0, 0x680($s0)
    ctx->pc = 0x1b370cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1664), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3710: 0xfa000690  sqc2        $vf0, 0x690($s0)
    ctx->pc = 0x1b3710u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1680), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3714: 0xfa0006a0  sqc2        $vf0, 0x6A0($s0)
    ctx->pc = 0x1b3714u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1696), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3718: 0xfa0006b0  sqc2        $vf0, 0x6B0($s0)
    ctx->pc = 0x1b3718u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1712), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b371c: 0xfa0006c0  sqc2        $vf0, 0x6C0($s0)
    ctx->pc = 0x1b371cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1728), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3720: 0xfa0006d0  sqc2        $vf0, 0x6D0($s0)
    ctx->pc = 0x1b3720u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1744), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3724: 0xfa0006e0  sqc2        $vf0, 0x6E0($s0)
    ctx->pc = 0x1b3724u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1760), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3728: 0xfa0006f0  sqc2        $vf0, 0x6F0($s0)
    ctx->pc = 0x1b3728u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1776), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b372c: 0xfa000700  sqc2        $vf0, 0x700($s0)
    ctx->pc = 0x1b372cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1792), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3730: 0xfa000710  sqc2        $vf0, 0x710($s0)
    ctx->pc = 0x1b3730u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1808), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3734: 0xfa000720  sqc2        $vf0, 0x720($s0)
    ctx->pc = 0x1b3734u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1824), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b3738: 0xfa000730  sqc2        $vf0, 0x730($s0)
    ctx->pc = 0x1b3738u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1840), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b373c: 0xa2000610  sb          $zero, 0x610($s0)
    ctx->pc = 0x1b373cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1552), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3740: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b3740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3744: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x1b3744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x1b3748: 0x2603061c  addiu       $v1, $s0, 0x61C
    ctx->pc = 0x1b3748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1564));
    // 0x1b374c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1b374cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3750: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1b3750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3754: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1b3754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b3758: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1b3758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1b375c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1b375cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1b3760: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1b3760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1b3764: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1b3764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1b3768: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1b3768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1b376c: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x1b376cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x1b3770: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x1b3770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x1b3774: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x1b3774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
label_1b3778:
    // 0x1b3778: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b3778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b377c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b377cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b3780: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1b3780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b3784: 0x0  nop
    ctx->pc = 0x1b3784u;
    // NOP
    // 0x1b3788: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B3788u;
    {
        const bool branch_taken_0x1b3788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3788u;
        // 0x1b378c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3788) {
            ctx->pc = 0x1B3778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3778;
        }
    }
    ctx->pc = 0x1B3790u;
    // 0x1b3790: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b3790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3794: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1b3794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1b3798: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b3798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b379c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b379cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b37a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B37A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37A0u;
        // 0x1b37a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B37A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B37A8u;
}
