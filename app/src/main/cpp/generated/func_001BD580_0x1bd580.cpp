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

// Function: func_001BD580
// Address: 0x1bd580 - 0x1bd650
void func_001BD580_0x1bd580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BD580_0x1bd580");
#endif

    switch (ctx->pc) {
        case 0x1bd594u: goto label_1bd594;
        case 0x1bd620u: goto label_1bd620;
        default: break;
    }

    ctx->pc = 0x1bd580u;

    // 0x1bd580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bd580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bd584: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bd584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bd588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd58c: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1BD58Cu;
    SET_GPR_U32(ctx, 31, 0x1BD594u);
    ctx->pc = 0x1BD590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD58Cu;
    // 0x1bd590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1BD58Cu, 0x1BD594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD594u;
label_1bd594:
    // 0x1bd594: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1bd594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1bd598: 0x24639420  addiu       $v1, $v1, -0x6BE0
    ctx->pc = 0x1bd598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939680));
    // 0x1bd59c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1bd59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1bd5a0: 0xfa000600  sqc2        $vf0, 0x600($s0)
    ctx->pc = 0x1bd5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1536), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5a4: 0x26020610  addiu       $v0, $s0, 0x610
    ctx->pc = 0x1bd5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1bd5a8: 0xfa000660  sqc2        $vf0, 0x660($s0)
    ctx->pc = 0x1bd5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1632), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5ac: 0xfa000670  sqc2        $vf0, 0x670($s0)
    ctx->pc = 0x1bd5acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1648), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5b0: 0xfa000680  sqc2        $vf0, 0x680($s0)
    ctx->pc = 0x1bd5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1664), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5b4: 0xfa000690  sqc2        $vf0, 0x690($s0)
    ctx->pc = 0x1bd5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1680), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5b8: 0xfa0006a0  sqc2        $vf0, 0x6A0($s0)
    ctx->pc = 0x1bd5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1696), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5bc: 0xfa0006b0  sqc2        $vf0, 0x6B0($s0)
    ctx->pc = 0x1bd5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1712), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5c0: 0xfa0006c0  sqc2        $vf0, 0x6C0($s0)
    ctx->pc = 0x1bd5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1728), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5c4: 0xfa0006d0  sqc2        $vf0, 0x6D0($s0)
    ctx->pc = 0x1bd5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1744), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5c8: 0xfa0006e0  sqc2        $vf0, 0x6E0($s0)
    ctx->pc = 0x1bd5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1760), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5cc: 0xfa0006f0  sqc2        $vf0, 0x6F0($s0)
    ctx->pc = 0x1bd5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1776), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5d0: 0xfa000700  sqc2        $vf0, 0x700($s0)
    ctx->pc = 0x1bd5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1792), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5d4: 0xfa000710  sqc2        $vf0, 0x710($s0)
    ctx->pc = 0x1bd5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1808), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5d8: 0xfa000720  sqc2        $vf0, 0x720($s0)
    ctx->pc = 0x1bd5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1824), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5dc: 0xfa000730  sqc2        $vf0, 0x730($s0)
    ctx->pc = 0x1bd5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1840), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bd5e0: 0xa2000610  sb          $zero, 0x610($s0)
    ctx->pc = 0x1bd5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1552), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd5e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bd5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd5e8: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x1bd5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x1bd5ec: 0x2603061c  addiu       $v1, $s0, 0x61C
    ctx->pc = 0x1bd5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1564));
    // 0x1bd5f0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1bd5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd5f4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1bd5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd5f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1bd5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1bd5fc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1bd5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1bd600: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1bd600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1bd604: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1bd604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1bd608: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1bd608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1bd60c: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1bd60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1bd610: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x1bd610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x1bd614: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x1bd614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x1bd618: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x1bd618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
    // 0x1bd61c: 0x0  nop
    ctx->pc = 0x1bd61cu;
    // NOP
label_1bd620:
    // 0x1bd620: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1bd620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1bd624: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1bd624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bd628: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1bd628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bd62c: 0x0  nop
    ctx->pc = 0x1bd62cu;
    // NOP
    // 0x1bd630: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BD630u;
    {
        const bool branch_taken_0x1bd630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD630u;
        // 0x1bd634: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd630) {
            ctx->pc = 0x1BD620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd620;
        }
    }
    ctx->pc = 0x1BD638u;
    // 0x1bd638: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bd638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd640: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bd640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd644: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD644u;
        // 0x1bd648: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD64Cu;
    // 0x1bd64c: 0x0  nop
    ctx->pc = 0x1bd64cu;
    // NOP
    ctx->pc = 0x1bd650u;
}
