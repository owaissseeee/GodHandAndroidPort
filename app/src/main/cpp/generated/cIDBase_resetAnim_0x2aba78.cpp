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

// Function: cIDBase_resetAnim
// Address: 0x2aba78 - 0x2abbe8
void cIDBase_resetAnim_0x2aba78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_resetAnim_0x2aba78");
#endif

    switch (ctx->pc) {
        case 0x2abac0u: goto label_2abac0;
        case 0x2abaecu: goto label_2abaec;
        case 0x2abb04u: goto label_2abb04;
        case 0x2abb1cu: goto label_2abb1c;
        case 0x2abb34u: goto label_2abb34;
        case 0x2abb4cu: goto label_2abb4c;
        case 0x2abb80u: goto label_2abb80;
        case 0x2abb8cu: goto label_2abb8c;
        case 0x2abb98u: goto label_2abb98;
        case 0x2abba4u: goto label_2abba4;
        case 0x2abbb0u: goto label_2abbb0;
        default: break;
    }

    ctx->pc = 0x2aba78u;

    // 0x2aba78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2aba78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2aba7c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2aba7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2aba80: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2aba80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2aba84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aba84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2aba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2aba8c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2aba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2aba90: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2aba90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2aba94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aba98: 0xa620001a  sh          $zero, 0x1A($s1)
    ctx->pc = 0x2aba98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x2aba9c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2aba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2abaa0: 0xa220001d  sb          $zero, 0x1D($s1)
    ctx->pc = 0x2abaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abaa4: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2ABAA4u;
    {
        const bool branch_taken_0x2abaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABAA4u;
        // 0x2abaa8: 0xa220001e  sb          $zero, 0x1E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 30), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abaa4) {
            ctx->pc = 0x2ABBC4u;
            goto label_2abbc4;
        }
    }
    ctx->pc = 0x2ABAACu;
    // 0x2abaac: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2abaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2abab0: 0x18400044  blez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2ABAB0u;
    {
        const bool branch_taken_0x2abab0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2ABAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABAB0u;
        // 0x2abab4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abab0) {
            ctx->pc = 0x2ABBC4u;
            goto label_2abbc4;
        }
    }
    ctx->pc = 0x2ABAB8u;
    // 0x2abab8: 0x2412270f  addiu       $s2, $zero, 0x270F
    ctx->pc = 0x2abab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x2ababc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ababcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2abac0:
    // 0x2abac0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2abac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2abac4: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x2abac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2abac8: 0x5200003a  beql        $s0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x2ABAC8u;
    {
        const bool branch_taken_0x2abac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abac8) {
            ctx->pc = 0x2ABACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABAC8u;
            // 0x2abacc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABBB4u;
            goto label_2abbb4;
        }
    }
    ctx->pc = 0x2ABAD0u;
    // 0x2abad0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2abad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2abad4: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x2abad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x2abad8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2abad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2abadc: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2ABADCu;
    {
        const bool branch_taken_0x2abadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abadc) {
            ctx->pc = 0x2ABAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABADCu;
            // 0x2abae0: 0xa60000a0  sh          $zero, 0xA0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB64u;
            goto label_2abb64;
        }
    }
    ctx->pc = 0x2ABAE4u;
    // 0x2abae4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2ABAE4u;
    SET_GPR_U32(ctx, 31, 0x2ABAECu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2ABAE4u, 0x2ABAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABAECu;
label_2abaec:
    // 0x2abaec: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2abaecu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2abaf0: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ABAF0u;
    {
        const bool branch_taken_0x2abaf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abaf0) {
            ctx->pc = 0x2ABAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABAF0u;
            // 0x2abaf4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABAF8u;
            goto label_2abaf8;
        }
    }
    ctx->pc = 0x2ABAF8u;
label_2abaf8:
    // 0x2abaf8: 0x1810  mfhi        $v1
    ctx->pc = 0x2abaf8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2abafc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2ABAFCu;
    SET_GPR_U32(ctx, 31, 0x2ABB04u);
    ctx->pc = 0x2ABB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABAFCu;
    // 0x2abb00: 0xa60300a0  sh          $v1, 0xA0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2ABAFCu, 0x2ABB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB04u;
label_2abb04:
    // 0x2abb04: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2abb04u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2abb08: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ABB08u;
    {
        const bool branch_taken_0x2abb08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abb08) {
            ctx->pc = 0x2ABB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABB08u;
            // 0x2abb0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB10u;
            goto label_2abb10;
        }
    }
    ctx->pc = 0x2ABB10u;
label_2abb10:
    // 0x2abb10: 0x1810  mfhi        $v1
    ctx->pc = 0x2abb10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2abb14: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2ABB14u;
    SET_GPR_U32(ctx, 31, 0x2ABB1Cu);
    ctx->pc = 0x2ABB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABB14u;
    // 0x2abb18: 0xa60300a2  sh          $v1, 0xA2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2ABB14u, 0x2ABB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB1Cu;
label_2abb1c:
    // 0x2abb1c: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2abb1cu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2abb20: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ABB20u;
    {
        const bool branch_taken_0x2abb20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abb20) {
            ctx->pc = 0x2ABB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABB20u;
            // 0x2abb24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB28u;
            goto label_2abb28;
        }
    }
    ctx->pc = 0x2ABB28u;
label_2abb28:
    // 0x2abb28: 0x1810  mfhi        $v1
    ctx->pc = 0x2abb28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2abb2c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2ABB2Cu;
    SET_GPR_U32(ctx, 31, 0x2ABB34u);
    ctx->pc = 0x2ABB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABB2Cu;
    // 0x2abb30: 0xa60300a6  sh          $v1, 0xA6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 166), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2ABB2Cu, 0x2ABB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB34u;
label_2abb34:
    // 0x2abb34: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2abb34u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2abb38: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ABB38u;
    {
        const bool branch_taken_0x2abb38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abb38) {
            ctx->pc = 0x2ABB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABB38u;
            // 0x2abb3c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB40u;
            goto label_2abb40;
        }
    }
    ctx->pc = 0x2ABB40u;
label_2abb40:
    // 0x2abb40: 0x1810  mfhi        $v1
    ctx->pc = 0x2abb40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2abb44: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2ABB44u;
    SET_GPR_U32(ctx, 31, 0x2ABB4Cu);
    ctx->pc = 0x2ABB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABB44u;
    // 0x2abb48: 0xa60300a8  sh          $v1, 0xA8($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2ABB44u, 0x2ABB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB4Cu;
label_2abb4c:
    // 0x2abb4c: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2abb4cu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2abb50: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ABB50u;
    {
        const bool branch_taken_0x2abb50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abb50) {
            ctx->pc = 0x2ABB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABB50u;
            // 0x2abb54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABB58u;
            goto label_2abb58;
        }
    }
    ctx->pc = 0x2ABB58u;
label_2abb58:
    // 0x2abb58: 0x1810  mfhi        $v1
    ctx->pc = 0x2abb58u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2abb5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABB5Cu;
    {
        const bool branch_taken_0x2abb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB5Cu;
        // 0x2abb60: 0xa60300a4  sh          $v1, 0xA4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb5c) {
            ctx->pc = 0x2ABB74u;
            goto label_2abb74;
        }
    }
    ctx->pc = 0x2ABB64u;
label_2abb64:
    // 0x2abb64: 0xa60000a2  sh          $zero, 0xA2($s0)
    ctx->pc = 0x2abb64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 0));
    // 0x2abb68: 0xa60000a6  sh          $zero, 0xA6($s0)
    ctx->pc = 0x2abb68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 166), (uint16_t)GPR_U32(ctx, 0));
    // 0x2abb6c: 0xa60000a8  sh          $zero, 0xA8($s0)
    ctx->pc = 0x2abb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 0));
    // 0x2abb70: 0xa60000a4  sh          $zero, 0xA4($s0)
    ctx->pc = 0x2abb70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 0));
label_2abb74:
    // 0x2abb74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2abb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abb78: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x2ABB78u;
    SET_GPR_U32(ctx, 31, 0x2ABB80u);
    ctx->pc = 0x2ABB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABB78u;
    // 0x2abb7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABC18u, 0x2ABB78u, 0x2ABB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB80u;
label_2abb80:
    // 0x2abb80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2abb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abb84: 0xc0aaf0c  jal         func_2ABC30
    ctx->pc = 0x2ABB84u;
    SET_GPR_U32(ctx, 31, 0x2ABB8Cu);
    ctx->pc = 0x2ABB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABB84u;
    // 0x2abb88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABC30u, 0x2ABB84u, 0x2ABB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB8Cu;
label_2abb8c:
    // 0x2abb8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2abb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abb90: 0xc0aaf3a  jal         func_2ABCE8
    ctx->pc = 0x2ABB90u;
    SET_GPR_U32(ctx, 31, 0x2ABB98u);
    ctx->pc = 0x2ABB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABB90u;
    // 0x2abb94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABCE8u, 0x2ABB90u, 0x2ABB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABB98u;
label_2abb98:
    // 0x2abb98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2abb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abb9c: 0xc0aaf4c  jal         func_2ABD30
    ctx->pc = 0x2ABB9Cu;
    SET_GPR_U32(ctx, 31, 0x2ABBA4u);
    ctx->pc = 0x2ABBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABB9Cu;
    // 0x2abba0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABD30u, 0x2ABB9Cu, 0x2ABBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABBA4u;
label_2abba4:
    // 0x2abba4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2abba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abba8: 0xc0aaf5e  jal         func_2ABD78
    ctx->pc = 0x2ABBA8u;
    SET_GPR_U32(ctx, 31, 0x2ABBB0u);
    ctx->pc = 0x2ABBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABBA8u;
    // 0x2abbac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABD78u, 0x2ABBA8u, 0x2ABBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABBB0u;
label_2abbb0:
    // 0x2abbb0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2abbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2abbb4:
    // 0x2abbb4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2abbb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2abbb8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2abbb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2abbbc: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2ABBBCu;
    {
        const bool branch_taken_0x2abbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBBCu;
        // 0x2abbc0: 0x269400ac  addiu       $s4, $s4, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abbbc) {
            ctx->pc = 0x2ABAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2abac0;
        }
    }
    ctx->pc = 0x2ABBC4u;
label_2abbc4:
    // 0x2abbc4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2abbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2abbc8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2abbc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2abbcc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2abbccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2abbd0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2abbd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2abbd4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2abbd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abbd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2abbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBDCu;
        // 0x2abbe0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABBE4u;
    // 0x2abbe4: 0x0  nop
    ctx->pc = 0x2abbe4u;
    // NOP
    ctx->pc = 0x2abbe8u;
}
