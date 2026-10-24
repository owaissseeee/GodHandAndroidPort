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

// Function: func_001A42E8
// Address: 0x1a42e8 - 0x1a43b8
void func_001A42E8_0x1a42e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A42E8_0x1a42e8");
#endif

    switch (ctx->pc) {
        case 0x1a42fcu: goto label_1a42fc;
        case 0x1a4380u: goto label_1a4380;
        default: break;
    }

    ctx->pc = 0x1a42e8u;

    // 0x1a42e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a42e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a42ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a42ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a42f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a42f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a42f4: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1A42F4u;
    SET_GPR_U32(ctx, 31, 0x1A42FCu);
    ctx->pc = 0x1A42F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A42F4u;
    // 0x1a42f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1A42F4u, 0x1A42FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A42FCu;
label_1a42fc:
    // 0x1a42fc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1a42fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1a4300: 0x26020600  addiu       $v0, $s0, 0x600
    ctx->pc = 0x1a4300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1a4304: 0x24637230  addiu       $v1, $v1, 0x7230
    ctx->pc = 0x1a4304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29232));
    // 0x1a4308: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1a4308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1a430c: 0xfa000650  sqc2        $vf0, 0x650($s0)
    ctx->pc = 0x1a430cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1616), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a4310: 0xfa000660  sqc2        $vf0, 0x660($s0)
    ctx->pc = 0x1a4310u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1632), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a4314: 0xfa000670  sqc2        $vf0, 0x670($s0)
    ctx->pc = 0x1a4314u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1648), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a4318: 0xfa000680  sqc2        $vf0, 0x680($s0)
    ctx->pc = 0x1a4318u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1664), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a431c: 0xfa000690  sqc2        $vf0, 0x690($s0)
    ctx->pc = 0x1a431cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1680), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a4320: 0xfa0006a0  sqc2        $vf0, 0x6A0($s0)
    ctx->pc = 0x1a4320u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1696), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a4324: 0xfa0006b0  sqc2        $vf0, 0x6B0($s0)
    ctx->pc = 0x1a4324u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1712), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a4328: 0xfa0006c0  sqc2        $vf0, 0x6C0($s0)
    ctx->pc = 0x1a4328u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1728), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a432c: 0xfa0006d0  sqc2        $vf0, 0x6D0($s0)
    ctx->pc = 0x1a432cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1744), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a4330: 0xfa0006e0  sqc2        $vf0, 0x6E0($s0)
    ctx->pc = 0x1a4330u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1760), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a4334: 0xfa0006f0  sqc2        $vf0, 0x6F0($s0)
    ctx->pc = 0x1a4334u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1776), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a4338: 0xfa000700  sqc2        $vf0, 0x700($s0)
    ctx->pc = 0x1a4338u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1792), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a433c: 0xfa000710  sqc2        $vf0, 0x710($s0)
    ctx->pc = 0x1a433cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1808), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a4340: 0xfa000720  sqc2        $vf0, 0x720($s0)
    ctx->pc = 0x1a4340u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1824), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a4344: 0xa2000600  sb          $zero, 0x600($s0)
    ctx->pc = 0x1a4344u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4348: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a4348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a434c: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x1a434cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x1a4350: 0x2603060c  addiu       $v1, $s0, 0x60C
    ctx->pc = 0x1a4350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1548));
    // 0x1a4354: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1a4354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4358: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1a4358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a435c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a435cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a4360: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a4360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1a4364: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1a4364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1a4368: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1a4368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1a436c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1a436cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1a4370: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1a4370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1a4374: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x1a4374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x1a4378: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x1a4378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x1a437c: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x1a437cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
label_1a4380:
    // 0x1a4380: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a4380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1a4384: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a4384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a4388: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1a4388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a438c: 0x0  nop
    ctx->pc = 0x1a438cu;
    // NOP
    // 0x1a4390: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A4390u;
    {
        const bool branch_taken_0x1a4390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4390u;
        // 0x1a4394: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4390) {
            ctx->pc = 0x1A4380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4380;
        }
    }
    ctx->pc = 0x1A4398u;
    // 0x1a4398: 0xfa000770  sqc2        $vf0, 0x770($s0)
    ctx->pc = 0x1a4398u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1904), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a439c: 0xfa000780  sqc2        $vf0, 0x780($s0)
    ctx->pc = 0x1a439cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1920), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a43a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a43a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a43a4: 0xae000790  sw          $zero, 0x790($s0)
    ctx->pc = 0x1a43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1936), GPR_U32(ctx, 0));
    // 0x1a43a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a43a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a43ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a43acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a43b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A43B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43B0u;
        // 0x1a43b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A43B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A43B8u;
}
