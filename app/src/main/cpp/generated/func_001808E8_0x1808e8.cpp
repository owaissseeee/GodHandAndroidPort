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

// Function: func_001808E8
// Address: 0x1808e8 - 0x1809b0
void func_001808E8_0x1808e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001808E8_0x1808e8");
#endif

    switch (ctx->pc) {
        case 0x1808fcu: goto label_1808fc;
        case 0x180980u: goto label_180980;
        default: break;
    }

    ctx->pc = 0x1808e8u;

    // 0x1808e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1808e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1808ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1808ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1808f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1808f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1808f4: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1808F4u;
    SET_GPR_U32(ctx, 31, 0x1808FCu);
    ctx->pc = 0x1808F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1808F4u;
    // 0x1808f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1808F4u, 0x1808FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1808FCu;
label_1808fc:
    // 0x1808fc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1808fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x180900: 0x26020610  addiu       $v0, $s0, 0x610
    ctx->pc = 0x180900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x180904: 0x246326a8  addiu       $v1, $v1, 0x26A8
    ctx->pc = 0x180904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9896));
    // 0x180908: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x180908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x18090c: 0xfa000660  sqc2        $vf0, 0x660($s0)
    ctx->pc = 0x18090cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1632), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x180910: 0xfa000670  sqc2        $vf0, 0x670($s0)
    ctx->pc = 0x180910u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1648), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x180914: 0xfa000680  sqc2        $vf0, 0x680($s0)
    ctx->pc = 0x180914u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1664), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x180918: 0xfa000690  sqc2        $vf0, 0x690($s0)
    ctx->pc = 0x180918u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1680), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18091c: 0xfa0006a0  sqc2        $vf0, 0x6A0($s0)
    ctx->pc = 0x18091cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1696), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x180920: 0xfa0006b0  sqc2        $vf0, 0x6B0($s0)
    ctx->pc = 0x180920u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1712), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x180924: 0xfa0006c0  sqc2        $vf0, 0x6C0($s0)
    ctx->pc = 0x180924u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1728), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x180928: 0xfa0006d0  sqc2        $vf0, 0x6D0($s0)
    ctx->pc = 0x180928u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1744), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18092c: 0xfa0006e0  sqc2        $vf0, 0x6E0($s0)
    ctx->pc = 0x18092cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1760), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x180930: 0xfa0006f0  sqc2        $vf0, 0x6F0($s0)
    ctx->pc = 0x180930u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1776), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x180934: 0xfa000700  sqc2        $vf0, 0x700($s0)
    ctx->pc = 0x180934u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1792), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x180938: 0xfa000710  sqc2        $vf0, 0x710($s0)
    ctx->pc = 0x180938u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1808), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18093c: 0xfa000720  sqc2        $vf0, 0x720($s0)
    ctx->pc = 0x18093cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1824), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x180940: 0xfa000730  sqc2        $vf0, 0x730($s0)
    ctx->pc = 0x180940u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1840), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x180944: 0xa2000610  sb          $zero, 0x610($s0)
    ctx->pc = 0x180944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1552), (uint8_t)GPR_U32(ctx, 0));
    // 0x180948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18094c: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x18094cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x180950: 0x2603061c  addiu       $v1, $s0, 0x61C
    ctx->pc = 0x180950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1564));
    // 0x180954: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x180954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x180958: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x180958u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x18095c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18095cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x180960: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x180960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x180964: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x180964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x180968: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x180968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x18096c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x18096cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x180970: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x180970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x180974: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x180974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x180978: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x180978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x18097c: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x18097cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
label_180980:
    // 0x180980: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x180980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x180984: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x180984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x180988: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x180988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x18098c: 0x0  nop
    ctx->pc = 0x18098cu;
    // NOP
    // 0x180990: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x180990u;
    {
        const bool branch_taken_0x180990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180990u;
        // 0x180994: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180990) {
            ctx->pc = 0x180980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180980;
        }
    }
    ctx->pc = 0x180998u;
    // 0x180998: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18099c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18099cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1809a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1809a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1809a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1809A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1809A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809A4u;
        // 0x1809a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1809A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1809ACu;
    // 0x1809ac: 0x0  nop
    ctx->pc = 0x1809acu;
    // NOP
    ctx->pc = 0x1809b0u;
}
