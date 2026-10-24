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

// Function: func_0017AAD8
// Address: 0x17aad8 - 0x17ac30
void func_0017AAD8_0x17aad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017AAD8_0x17aad8");
#endif

    switch (ctx->pc) {
        case 0x17aaecu: goto label_17aaec;
        case 0x17ab70u: goto label_17ab70;
        case 0x17ac00u: goto label_17ac00;
        default: break;
    }

    ctx->pc = 0x17aad8u;

    // 0x17aad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17aad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17aadc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17aadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17aae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17aae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17aae4: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x17AAE4u;
    SET_GPR_U32(ctx, 31, 0x17AAECu);
    ctx->pc = 0x17AAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AAE4u;
    // 0x17aae8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x17AAE4u, 0x17AAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AAECu;
label_17aaec:
    // 0x17aaec: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x17aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x17aaf0: 0x26020610  addiu       $v0, $s0, 0x610
    ctx->pc = 0x17aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x17aaf4: 0x24631a08  addiu       $v1, $v1, 0x1A08
    ctx->pc = 0x17aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6664));
    // 0x17aaf8: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x17aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x17aafc: 0xfa000660  sqc2        $vf0, 0x660($s0)
    ctx->pc = 0x17aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1632), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab00: 0xfa000670  sqc2        $vf0, 0x670($s0)
    ctx->pc = 0x17ab00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1648), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab04: 0xfa000680  sqc2        $vf0, 0x680($s0)
    ctx->pc = 0x17ab04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1664), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab08: 0xfa000690  sqc2        $vf0, 0x690($s0)
    ctx->pc = 0x17ab08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1680), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab0c: 0xfa0006a0  sqc2        $vf0, 0x6A0($s0)
    ctx->pc = 0x17ab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1696), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab10: 0xfa0006b0  sqc2        $vf0, 0x6B0($s0)
    ctx->pc = 0x17ab10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1712), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab14: 0xfa0006c0  sqc2        $vf0, 0x6C0($s0)
    ctx->pc = 0x17ab14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1728), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab18: 0xfa0006d0  sqc2        $vf0, 0x6D0($s0)
    ctx->pc = 0x17ab18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1744), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab1c: 0xfa0006e0  sqc2        $vf0, 0x6E0($s0)
    ctx->pc = 0x17ab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1760), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab20: 0xfa0006f0  sqc2        $vf0, 0x6F0($s0)
    ctx->pc = 0x17ab20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1776), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab24: 0xfa000700  sqc2        $vf0, 0x700($s0)
    ctx->pc = 0x17ab24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1792), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab28: 0xfa000710  sqc2        $vf0, 0x710($s0)
    ctx->pc = 0x17ab28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1808), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab2c: 0xfa000720  sqc2        $vf0, 0x720($s0)
    ctx->pc = 0x17ab2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1824), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab30: 0xfa000730  sqc2        $vf0, 0x730($s0)
    ctx->pc = 0x17ab30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1840), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab34: 0xa2000610  sb          $zero, 0x610($s0)
    ctx->pc = 0x17ab34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1552), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ab38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17ab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab3c: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x17ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x17ab40: 0x2603061c  addiu       $v1, $s0, 0x61C
    ctx->pc = 0x17ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1564));
    // 0x17ab44: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x17ab44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ab48: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x17ab48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ab4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17ab50: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17ab54: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x17ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x17ab58: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x17ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x17ab5c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x17ab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x17ab60: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x17ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x17ab64: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x17ab64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x17ab68: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x17ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x17ab6c: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x17ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
label_17ab70:
    // 0x17ab70: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17ab74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17ab78: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x17ab78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17ab7c: 0x0  nop
    ctx->pc = 0x17ab7cu;
    // NOP
    // 0x17ab80: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17AB80u;
    {
        const bool branch_taken_0x17ab80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB80u;
        // 0x17ab84: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab80) {
            ctx->pc = 0x17AB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ab70;
        }
    }
    ctx->pc = 0x17AB88u;
    // 0x17ab88: 0x26020770  addiu       $v0, $s0, 0x770
    ctx->pc = 0x17ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1904));
    // 0x17ab8c: 0xfa0007c0  sqc2        $vf0, 0x7C0($s0)
    ctx->pc = 0x17ab8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1984), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab90: 0xfa0007d0  sqc2        $vf0, 0x7D0($s0)
    ctx->pc = 0x17ab90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2000), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab94: 0xfa0007e0  sqc2        $vf0, 0x7E0($s0)
    ctx->pc = 0x17ab94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2016), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab98: 0xfa0007f0  sqc2        $vf0, 0x7F0($s0)
    ctx->pc = 0x17ab98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2032), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ab9c: 0xfa000800  sqc2        $vf0, 0x800($s0)
    ctx->pc = 0x17ab9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2048), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17aba0: 0xfa000810  sqc2        $vf0, 0x810($s0)
    ctx->pc = 0x17aba0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2064), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17aba4: 0xfa000820  sqc2        $vf0, 0x820($s0)
    ctx->pc = 0x17aba4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2080), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17aba8: 0xfa000830  sqc2        $vf0, 0x830($s0)
    ctx->pc = 0x17aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2096), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17abac: 0xfa000840  sqc2        $vf0, 0x840($s0)
    ctx->pc = 0x17abacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17abb0: 0xfa000850  sqc2        $vf0, 0x850($s0)
    ctx->pc = 0x17abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17abb4: 0xfa000860  sqc2        $vf0, 0x860($s0)
    ctx->pc = 0x17abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17abb8: 0xfa000870  sqc2        $vf0, 0x870($s0)
    ctx->pc = 0x17abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17abbc: 0xfa000880  sqc2        $vf0, 0x880($s0)
    ctx->pc = 0x17abbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17abc0: 0xfa000890  sqc2        $vf0, 0x890($s0)
    ctx->pc = 0x17abc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17abc4: 0xa2000770  sb          $zero, 0x770($s0)
    ctx->pc = 0x17abc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1904), (uint8_t)GPR_U32(ctx, 0));
    // 0x17abc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17abc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abcc: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x17abccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x17abd0: 0x2603077c  addiu       $v1, $s0, 0x77C
    ctx->pc = 0x17abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1916));
    // 0x17abd4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x17abd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x17abd8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x17abd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17abdc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17abe0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17abe4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x17abe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x17abe8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x17abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x17abec: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x17abecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x17abf0: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x17abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x17abf4: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x17abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x17abf8: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x17abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x17abfc: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x17abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
label_17ac00:
    // 0x17ac00: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17ac00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17ac04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17ac08: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x17ac08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17ac0c: 0x0  nop
    ctx->pc = 0x17ac0cu;
    // NOP
    // 0x17ac10: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17AC10u;
    {
        const bool branch_taken_0x17ac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC10u;
        // 0x17ac14: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac10) {
            ctx->pc = 0x17AC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ac00;
        }
    }
    ctx->pc = 0x17AC18u;
    // 0x17ac18: 0xfa0008d0  sqc2        $vf0, 0x8D0($s0)
    ctx->pc = 0x17ac18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17ac1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17ac1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ac20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ac24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ac24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ac28: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC28u;
        // 0x17ac2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AC30u;
}
