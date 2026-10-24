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

// Function: func_0017F4E0
// Address: 0x17f4e0 - 0x17f5a8
void func_0017F4E0_0x17f4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017F4E0_0x17f4e0");
#endif

    switch (ctx->pc) {
        case 0x17f4f4u: goto label_17f4f4;
        case 0x17f578u: goto label_17f578;
        default: break;
    }

    ctx->pc = 0x17f4e0u;

    // 0x17f4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f4e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17f4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f4ec: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x17F4ECu;
    SET_GPR_U32(ctx, 31, 0x17F4F4u);
    ctx->pc = 0x17F4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4ECu;
    // 0x17f4f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x17F4ECu, 0x17F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4F4u;
label_17f4f4:
    // 0x17f4f4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x17f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x17f4f8: 0x26020600  addiu       $v0, $s0, 0x600
    ctx->pc = 0x17f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x17f4fc: 0x24632498  addiu       $v1, $v1, 0x2498
    ctx->pc = 0x17f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9368));
    // 0x17f500: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x17f500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x17f504: 0xfa000650  sqc2        $vf0, 0x650($s0)
    ctx->pc = 0x17f504u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1616), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f508: 0xfa000660  sqc2        $vf0, 0x660($s0)
    ctx->pc = 0x17f508u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1632), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f50c: 0xfa000670  sqc2        $vf0, 0x670($s0)
    ctx->pc = 0x17f50cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1648), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f510: 0xfa000680  sqc2        $vf0, 0x680($s0)
    ctx->pc = 0x17f510u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1664), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f514: 0xfa000690  sqc2        $vf0, 0x690($s0)
    ctx->pc = 0x17f514u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1680), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f518: 0xfa0006a0  sqc2        $vf0, 0x6A0($s0)
    ctx->pc = 0x17f518u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1696), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f51c: 0xfa0006b0  sqc2        $vf0, 0x6B0($s0)
    ctx->pc = 0x17f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1712), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f520: 0xfa0006c0  sqc2        $vf0, 0x6C0($s0)
    ctx->pc = 0x17f520u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1728), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f524: 0xfa0006d0  sqc2        $vf0, 0x6D0($s0)
    ctx->pc = 0x17f524u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1744), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f528: 0xfa0006e0  sqc2        $vf0, 0x6E0($s0)
    ctx->pc = 0x17f528u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1760), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f52c: 0xfa0006f0  sqc2        $vf0, 0x6F0($s0)
    ctx->pc = 0x17f52cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1776), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f530: 0xfa000700  sqc2        $vf0, 0x700($s0)
    ctx->pc = 0x17f530u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1792), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f534: 0xfa000710  sqc2        $vf0, 0x710($s0)
    ctx->pc = 0x17f534u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1808), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f538: 0xfa000720  sqc2        $vf0, 0x720($s0)
    ctx->pc = 0x17f538u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1824), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f53c: 0xa2000600  sb          $zero, 0x600($s0)
    ctx->pc = 0x17f53cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17f540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f544: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x17f544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x17f548: 0x2603060c  addiu       $v1, $s0, 0x60C
    ctx->pc = 0x17f548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1548));
    // 0x17f54c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x17f54cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f550: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x17f550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f554: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17f554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17f558: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17f558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17f55c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x17f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x17f560: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x17f560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x17f564: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x17f564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x17f568: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x17f568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x17f56c: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x17f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x17f570: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x17f570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x17f574: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x17f574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
label_17f578:
    // 0x17f578: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17f578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17f57c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17f57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17f580: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x17f580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17f584: 0x0  nop
    ctx->pc = 0x17f584u;
    // NOP
    // 0x17f588: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17F588u;
    {
        const bool branch_taken_0x17f588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F588u;
        // 0x17f58c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f588) {
            ctx->pc = 0x17F578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f578;
        }
    }
    ctx->pc = 0x17F590u;
    // 0x17f590: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17f590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f598: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f59c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F59Cu;
        // 0x17f5a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F5A4u;
    // 0x17f5a4: 0x0  nop
    ctx->pc = 0x17f5a4u;
    // NOP
    ctx->pc = 0x17f5a8u;
}
