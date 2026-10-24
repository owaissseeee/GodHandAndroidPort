#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079ABA0
// Address: 0x79aba0 - 0x79ae78
void func_0079ABA0_0x79aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079ABA0_0x79aba0");
#endif

    switch (ctx->pc) {
        case 0x79abe4u: goto label_79abe4;
        case 0x79abf4u: goto label_79abf4;
        case 0x79ac20u: goto label_79ac20;
        case 0x79ac34u: goto label_79ac34;
        case 0x79ac44u: goto label_79ac44;
        case 0x79ac54u: goto label_79ac54;
        case 0x79ac5cu: goto label_79ac5c;
        case 0x79ac88u: goto label_79ac88;
        case 0x79ac98u: goto label_79ac98;
        case 0x79aca8u: goto label_79aca8;
        case 0x79acc8u: goto label_79acc8;
        case 0x79ace8u: goto label_79ace8;
        case 0x79acf0u: goto label_79acf0;
        case 0x79acfcu: goto label_79acfc;
        case 0x79ad0cu: goto label_79ad0c;
        case 0x79ad40u: goto label_79ad40;
        case 0x79ad48u: goto label_79ad48;
        case 0x79ad58u: goto label_79ad58;
        case 0x79ad68u: goto label_79ad68;
        case 0x79ad7cu: goto label_79ad7c;
        case 0x79ad8cu: goto label_79ad8c;
        case 0x79add4u: goto label_79add4;
        case 0x79ade4u: goto label_79ade4;
        case 0x79ae0cu: goto label_79ae0c;
        case 0x79ae20u: goto label_79ae20;
        case 0x79ae28u: goto label_79ae28;
        case 0x79ae38u: goto label_79ae38;
        case 0x79ae48u: goto label_79ae48;
        default: break;
    }

    ctx->pc = 0x79aba0u;

    // 0x79aba0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79aba4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79aba8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79aba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x79abac: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79abacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79abb0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79abb4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79abb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x79abbc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x79abbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x79abc0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x79abc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x79abc4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x79abc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x79abc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79abc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79abcc: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79abccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79abd0: 0x90640014  lbu         $a0, 0x14($v1)
    ctx->pc = 0x79abd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79abd4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x79ABD4u;
    {
        const bool branch_taken_0x79abd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABD4u;
        // 0x79abd8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abd4) {
            ctx->pc = 0x79AC00u;
            goto label_79ac00;
        }
    }
    ctx->pc = 0x79ABDCu;
    // 0x79abdc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79ABDCu;
    SET_GPR_U32(ctx, 31, 0x79ABE4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79ABDCu, 0x79ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABE4u;
label_79abe4:
    // 0x79abe4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x79abe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x79abe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79abe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79abec: 0xc0c6be8  jal         func_31AFA0
    ctx->pc = 0x79ABECu;
    SET_GPR_U32(ctx, 31, 0x79ABF4u);
    ctx->pc = 0x79ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABECu;
    // 0x79abf0: 0xe440054c  swc1        $f0, 0x54C($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x79ABECu, 0x79ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABF4u;
label_79abf4:
    // 0x79abf4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x79abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x79abf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79abfc: 0xa0626aa5  sb          $v0, 0x6AA5($v1)
    ctx->pc = 0x79abfcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x586AA5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x586AA5u, _value); } while (0);
label_79ac00:
    // 0x79ac00: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79ac04: 0x8c64c800  lw          $a0, -0x3800($v1)
    ctx->pc = 0x79ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C800u));
    // 0x79ac08: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x79ac08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x79ac0c: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x79AC0Cu;
    {
        const bool branch_taken_0x79ac0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC0Cu;
        // 0x79ac10: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac0c) {
            ctx->pc = 0x79ADCCu;
            goto label_79adcc;
        }
    }
    ctx->pc = 0x79AC14u;
    // 0x79ac14: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x79ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x79ac18: 0xc1e67b2  jal         func_799EC8
    ctx->pc = 0x79AC18u;
    SET_GPR_U32(ctx, 31, 0x79AC20u);
    ctx->pc = 0x79AC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC18u;
    // 0x79ac1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799EC8u, 0x79AC18u, 0x79AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC20u;
label_79ac20:
    // 0x79ac20: 0x24160064  addiu       $s6, $zero, 0x64
    ctx->pc = 0x79ac20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x79ac24: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79ac28: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x79ac28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x79ac2c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AC2Cu;
    SET_GPR_U32(ctx, 31, 0x79AC34u);
    ctx->pc = 0x79AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC2Cu;
    // 0x79ac30: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AC2Cu, 0x79AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC34u;
label_79ac34:
    // 0x79ac34: 0x8e84c800  lw          $a0, -0x3800($s4)
    ctx->pc = 0x79ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952960)));
    // 0x79ac38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ac38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac3c: 0xc1e67b2  jal         func_799EC8
    ctx->pc = 0x79AC3Cu;
    SET_GPR_U32(ctx, 31, 0x79AC44u);
    ctx->pc = 0x79AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC3Cu;
    // 0x79ac40: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799EC8u, 0x79AC3Cu, 0x79AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC44u;
label_79ac44:
    // 0x79ac44: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79ac48: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79ac48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79ac4c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AC4Cu;
    SET_GPR_U32(ctx, 31, 0x79AC54u);
    ctx->pc = 0x79AC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC4Cu;
    // 0x79ac50: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AC4Cu, 0x79AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC54u;
label_79ac54:
    // 0x79ac54: 0xc1e6f5c  jal         func_79BD70
    ctx->pc = 0x79AC54u;
    SET_GPR_U32(ctx, 31, 0x79AC5Cu);
    ctx->pc = 0x79BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BD70u, 0x79AC54u, 0x79AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC5Cu;
label_79ac5c:
    // 0x79ac5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79ac5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac60: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x79AC60u;
    {
        const bool branch_taken_0x79ac60 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ac60) {
            ctx->pc = 0x79AC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AC60u;
            // 0x79ac64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AC68u;
            goto label_79ac68;
        }
    }
    ctx->pc = 0x79AC68u;
label_79ac68:
    // 0x79ac68: 0x236001b  divu        $zero, $s1, $s6
    ctx->pc = 0x79ac68u;
    { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x79ac6c: 0x8e84c800  lw          $a0, -0x3800($s4)
    ctx->pc = 0x79ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952960)));
    // 0x79ac70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79ac70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ac78: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x79ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x79ac7c: 0x1012  mflo        $v0
    ctx->pc = 0x79ac7cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x79ac80: 0xc1e6882  jal         func_79A208
    ctx->pc = 0x79AC80u;
    SET_GPR_U32(ctx, 31, 0x79AC88u);
    ctx->pc = 0x79AC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC80u;
    // 0x79ac84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A208u, 0x79AC80u, 0x79AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC88u;
label_79ac88:
    // 0x79ac88: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79ac8c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x79ac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x79ac90: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AC90u;
    SET_GPR_U32(ctx, 31, 0x79AC98u);
    ctx->pc = 0x79AC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC90u;
    // 0x79ac94: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AC90u, 0x79AC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC98u;
label_79ac98:
    // 0x79ac98: 0x3c150057  lui         $s5, 0x57
    ctx->pc = 0x79ac98u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
    // 0x79ac9c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x79AC9Cu;
    {
        const bool branch_taken_0x79ac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC9Cu;
        // 0x79aca0: 0x3c17007a  lui         $s7, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac9c) {
            ctx->pc = 0x79AD0Cu;
            goto label_79ad0c;
        }
    }
    ctx->pc = 0x79ACA4u;
    // 0x79aca4: 0x0  nop
    ctx->pc = 0x79aca4u;
    // NOP
label_79aca8:
    // 0x79aca8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79aca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79acac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79acacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79acb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79acb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79acb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acb8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79acbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79acbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acc0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79ACC0u;
    SET_GPR_U32(ctx, 31, 0x79ACC8u);
    ctx->pc = 0x79ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACC0u;
    // 0x79acc4: 0x24060165  addiu       $a2, $zero, 0x165 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79ACC0u, 0x79ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACC8u;
label_79acc8:
    // 0x79acc8: 0x2631ff9c  addiu       $s1, $s1, -0x64
    ctx->pc = 0x79acc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967196));
    // 0x79accc: 0x8e84c800  lw          $a0, -0x3800($s4)
    ctx->pc = 0x79acccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952960)));
    // 0x79acd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79acd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79acd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79acd8: 0x26b09b70  addiu       $s0, $s5, -0x6490
    ctx->pc = 0x79acd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x79acdc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x79acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x79ace0: 0xc1e6882  jal         func_79A208
    ctx->pc = 0x79ACE0u;
    SET_GPR_U32(ctx, 31, 0x79ACE8u);
    ctx->pc = 0x79ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACE0u;
    // 0x79ace4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A208u, 0x79ACE0u, 0x79ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACE8u;
label_79ace8:
    // 0x79ace8: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x79ACE8u;
    SET_GPR_U32(ctx, 31, 0x79ACF0u);
    ctx->pc = 0x79ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACE8u;
    // 0x79acec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x79ACE8u, 0x79ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACF0u;
label_79acf0:
    // 0x79acf0: 0x24450064  addiu       $a1, $v0, 0x64
    ctx->pc = 0x79acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x79acf4: 0xc07e9be  jal         func_1FA6F8
    ctx->pc = 0x79ACF4u;
    SET_GPR_U32(ctx, 31, 0x79ACFCu);
    ctx->pc = 0x79ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACF4u;
    // 0x79acf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6F8u, 0x79ACF4u, 0x79ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACFCu;
label_79acfc:
    // 0x79acfc: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79ad00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ad00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ad04: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AD04u;
    SET_GPR_U32(ctx, 31, 0x79AD0Cu);
    ctx->pc = 0x79AD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD04u;
    // 0x79ad08: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AD04u, 0x79AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD0Cu;
label_79ad0c:
    // 0x79ad0c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x79AD0Cu;
    {
        const bool branch_taken_0x79ad0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD0Cu;
        // 0x79ad10: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad0c) {
            ctx->pc = 0x79AD28u;
            goto label_79ad28;
        }
    }
    ctx->pc = 0x79AD14u;
    // 0x79ad14: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x79ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x79ad18: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x79ad18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x79ad1c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79ad1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79ad20: 0x5060ffe1  beql        $v1, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x79AD20u;
    {
        const bool branch_taken_0x79ad20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ad20) {
            ctx->pc = 0x79AD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD20u;
            // 0x79ad24: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ACA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aca8;
        }
    }
    ctx->pc = 0x79AD28u;
label_79ad28:
    // 0x79ad28: 0x8e84c800  lw          $a0, -0x3800($s4)
    ctx->pc = 0x79ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952960)));
    // 0x79ad2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79ad2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ad30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ad34: 0x26b09b70  addiu       $s0, $s5, -0x6490
    ctx->pc = 0x79ad34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x79ad38: 0xc1e6882  jal         func_79A208
    ctx->pc = 0x79AD38u;
    SET_GPR_U32(ctx, 31, 0x79AD40u);
    ctx->pc = 0x79AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD38u;
    // 0x79ad3c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A208u, 0x79AD38u, 0x79AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD40u;
label_79ad40:
    // 0x79ad40: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x79AD40u;
    SET_GPR_U32(ctx, 31, 0x79AD48u);
    ctx->pc = 0x79AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD40u;
    // 0x79ad44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x79AD40u, 0x79AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD48u;
label_79ad48:
    // 0x79ad48: 0x2562818  mult        $a1, $s2, $s6
    ctx->pc = 0x79ad48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x79ad4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ad4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad50: 0xc07e9be  jal         func_1FA6F8
    ctx->pc = 0x79AD50u;
    SET_GPR_U32(ctx, 31, 0x79AD58u);
    ctx->pc = 0x79AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD50u;
    // 0x79ad54: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6F8u, 0x79AD50u, 0x79AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD58u;
label_79ad58:
    // 0x79ad58: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79ad5c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79ad5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79ad60: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AD60u;
    SET_GPR_U32(ctx, 31, 0x79AD68u);
    ctx->pc = 0x79AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD60u;
    // 0x79ad64: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AD60u, 0x79AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD68u;
label_79ad68:
    // 0x79ad68: 0x8e84c800  lw          $a0, -0x3800($s4)
    ctx->pc = 0x79ad68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952960)));
    // 0x79ad6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ad6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79ad70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ad74: 0xc1e6882  jal         func_79A208
    ctx->pc = 0x79AD74u;
    SET_GPR_U32(ctx, 31, 0x79AD7Cu);
    ctx->pc = 0x79AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD74u;
    // 0x79ad78: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A208u, 0x79AD74u, 0x79AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD7Cu;
label_79ad7c:
    // 0x79ad7c: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79ad80: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79ad80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79ad84: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AD84u;
    SET_GPR_U32(ctx, 31, 0x79AD8Cu);
    ctx->pc = 0x79AD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD84u;
    // 0x79ad88: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AD84u, 0x79AD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD8Cu;
label_79ad8c:
    // 0x79ad8c: 0x8ee2c804  lw          $v0, -0x37FC($s7)
    ctx->pc = 0x79ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294952964)));
    // 0x79ad90: 0x24450011  addiu       $a1, $v0, 0x11
    ctx->pc = 0x79ad90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
    // 0x79ad94: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x79ad94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x79ad98: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x79AD98u;
    {
        const bool branch_taken_0x79ad98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD98u;
        // 0x79ad9c: 0x8ea29b70  lw          $v0, -0x6490($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad98) {
            ctx->pc = 0x79ADE4u;
            goto label_79ade4;
        }
    }
    ctx->pc = 0x79ADA0u;
    // 0x79ada0: 0x52142  srl         $a0, $a1, 5
    ctx->pc = 0x79ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x79ada4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x79ada4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x79ada8: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x79ada8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x79adac: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x79adacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x79adb0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x79adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x79adb4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x79adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x79adb8: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x79adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x79adbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79adc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79adc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79ADC4u;
    {
        const bool branch_taken_0x79adc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADC4u;
        // 0x79adc8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adc4) {
            ctx->pc = 0x79ADE4u;
            goto label_79ade4;
        }
    }
    ctx->pc = 0x79ADCCu;
label_79adcc:
    // 0x79adcc: 0xc1e681c  jal         func_79A070
    ctx->pc = 0x79ADCCu;
    SET_GPR_U32(ctx, 31, 0x79ADD4u);
    ctx->pc = 0x79ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADCCu;
    // 0x79add0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A070u, 0x79ADCCu, 0x79ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADD4u;
label_79add4:
    // 0x79add4: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79add4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79add8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x79add8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x79addc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79ADDCu;
    SET_GPR_U32(ctx, 31, 0x79ADE4u);
    ctx->pc = 0x79ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADDCu;
    // 0x79ade0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79ADDCu, 0x79ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADE4u;
label_79ade4:
    // 0x79ade4: 0x8e83c800  lw          $v1, -0x3800($s4)
    ctx->pc = 0x79ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952960)));
    // 0x79ade8: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79ade8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79adec: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x79adecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x79adf0: 0xa082001a  sb          $v0, 0x1A($a0)
    ctx->pc = 0x79adf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x79adf4: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79adf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79adf8: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x79adf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x79adfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79ADFCu;
    {
        const bool branch_taken_0x79adfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADFCu;
        // 0x79ae00: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adfc) {
            ctx->pc = 0x79AE14u;
            goto label_79ae14;
        }
    }
    ctx->pc = 0x79AE04u;
    // 0x79ae04: 0xc0b121a  jal         func_2C4868
    ctx->pc = 0x79AE04u;
    SET_GPR_U32(ctx, 31, 0x79AE0Cu);
    ctx->pc = 0x2C4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4868u, 0x79AE04u, 0x79AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE0Cu;
label_79ae0c:
    // 0x79ae0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79AE0Cu;
    {
        const bool branch_taken_0x79ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE0Cu;
        // 0x79ae10: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae0c) {
            ctx->pc = 0x79AE40u;
            goto label_79ae40;
        }
    }
    ctx->pc = 0x79AE14u;
label_79ae14:
    // 0x79ae14: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79ae14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79ae18: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79ae1c: 0x0  nop
    ctx->pc = 0x79ae1cu;
    // NOP
label_79ae20:
    // 0x79ae20: 0xc1e70e6  jal         func_79C398
    ctx->pc = 0x79AE20u;
    SET_GPR_U32(ctx, 31, 0x79AE28u);
    ctx->pc = 0x79AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE20u;
    // 0x79ae24: 0x2625c538  addiu       $a1, $s1, -0x3AC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C398u, 0x79AE20u, 0x79AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE28u;
label_79ae28:
    // 0x79ae28: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79ae2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ae30: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AE30u;
    SET_GPR_U32(ctx, 31, 0x79AE38u);
    ctx->pc = 0x79AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE30u;
    // 0x79ae34: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AE30u, 0x79AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE38u;
label_79ae38:
    // 0x79ae38: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x79AE38u;
    {
        const bool branch_taken_0x79ae38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE38u;
        // 0x79ae3c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae38) {
            ctx->pc = 0x79AE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae20;
        }
    }
    ctx->pc = 0x79AE40u;
label_79ae40:
    // 0x79ae40: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79AE40u;
    SET_GPR_U32(ctx, 31, 0x79AE48u);
    ctx->pc = 0x79AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE40u;
    // 0x79ae44: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79AE40u, 0x79AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE48u;
label_79ae48:
    // 0x79ae48: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79ae48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79ae4c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79ae4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79ae50: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79ae50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79ae54: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79ae54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79ae58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x79ae58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79ae5c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x79ae5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ae60: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x79ae60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ae64: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x79ae64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ae68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ae68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ae6c: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE6Cu;
        // 0x79ae70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE74u;
    // 0x79ae74: 0x0  nop
    ctx->pc = 0x79ae74u;
    // NOP
    ctx->pc = 0x79ae78u;
}
} // namespace gh_r040
