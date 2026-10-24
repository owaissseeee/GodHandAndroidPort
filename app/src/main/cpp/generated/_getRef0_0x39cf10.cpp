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

// Function: _getRef0
// Address: 0x39cf10 - 0x39d398
void _getRef0_0x39cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getRef0_0x39cf10");
#endif

    ctx->pc = 0x39cf10u;

    // 0x39cf10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x39cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x39cf14: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x39cf14u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf18: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x39cf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x39cf1c: 0x25e306cc  addiu       $v1, $t7, 0x6CC
    ctx->pc = 0x39cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 1740));
    // 0x39cf20: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x39cf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x39cf24: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x39cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39cf28: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x39cf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x39cf2c: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x39cf2cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf30: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x39cf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x39cf34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39cf34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf38: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x39cf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x39cf3c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x39cf3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf40: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x39cf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x39cf44: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x39cf44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf48: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x39cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x39cf4c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x39cf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x39cf50: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x39cf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x39cf54: 0x8df30820  lw          $s3, 0x820($t7)
    ctx->pc = 0x39cf54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x39cf58: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x39cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x39cf5c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x39cf5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39cf60: 0x8fbe00b0  lw          $fp, 0xB0($sp)
    ctx->pc = 0x39cf60u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x39cf64: 0x8de40830  lw          $a0, 0x830($t7)
    ctx->pc = 0x39cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2096)));
    // 0x39cf68: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x39cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x39cf6c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x39cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x39cf70: 0x1e5043  sra         $t2, $fp, 1
    ctx->pc = 0x39cf70u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 30), 1));
    // 0x39cf74: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x39cf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x39cf78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39cf7c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x39cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x39cf80: 0x244205a0  addiu       $v0, $v0, 0x5A0
    ctx->pc = 0x39cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x39cf84: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x39cf84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39cf88: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x39cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x39cf8c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x39cf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x39cf90: 0x3242018  mult        $a0, $t9, $a0
    ctx->pc = 0x39cf90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39cf94: 0x8fb800c0  lw          $t8, 0xC0($sp)
    ctx->pc = 0x39cf94u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x39cf98: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x39cf98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x39cf9c: 0x8fb500b8  lw          $s5, 0xB8($sp)
    ctx->pc = 0x39cf9cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x39cfa0: 0x248300b8  addiu       $v1, $a0, 0xB8
    ctx->pc = 0x39cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x39cfa4: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x39cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x39cfa8: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x39cfa8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39cfac: 0x13000005  beqz        $t8, . + 4 + (0x5 << 2)
    ctx->pc = 0x39CFACu;
    {
        const bool branch_taken_0x39cfac = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFACu;
        // 0x39cfb0: 0x446021  addu        $t4, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cfac) {
            ctx->pc = 0x39CFC4u;
            goto label_39cfc4;
        }
    }
    ctx->pc = 0x39CFB4u;
    // 0x39cfb4: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x39cfb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x39cfb8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x39cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x39cfbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39CFBCu;
    {
        const bool branch_taken_0x39cfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFBCu;
        // 0x39cfc0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cfbc) {
            ctx->pc = 0x39CFCCu;
            goto label_39cfcc;
        }
    }
    ctx->pc = 0x39CFC4u;
label_39cfc4:
    // 0x39cfc4: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x39cfc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x39cfc8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x39cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_39cfcc:
    // 0x39cfcc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x39cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x39cfd0: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x39cfd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39cfd4: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x39cfd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x39cfd8: 0xab103  sra         $s6, $t2, 4
    ctx->pc = 0x39cfd8u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 10), 4));
    // 0x39cfdc: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x39cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39cfe0: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x39cfe0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39cfe4: 0x2c71818  mult        $v1, $s6, $a3
    ctx->pc = 0x39cfe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39cfe8: 0x72621018  mult1       $v0, $s3, $v0
    ctx->pc = 0x39cfe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39cfec: 0xbb903  sra         $s7, $t3, 4
    ctx->pc = 0x39cfecu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 11), 4));
    // 0x39cff0: 0x194080  sll         $t0, $t9, 2
    ctx->pc = 0x39cff0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x39cff4: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x39cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x39cff8: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x39cff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x39cffc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39d000: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x39d000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x39d004: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x39d004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x39d008: 0x664018  mult        $t0, $v1, $a2
    ctx->pc = 0x39d008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x39d00c: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x39d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x39d010: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x39d010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x39d014: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x39d014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x39d018: 0x663818  mult        $a3, $v1, $a2
    ctx->pc = 0x39d018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x39d01c: 0x162900  sll         $a1, $s6, 4
    ctx->pc = 0x39d01cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x39d020: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x39d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39d024: 0x1452823  subu        $a1, $t2, $a1
    ctx->pc = 0x39d024u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x39d028: 0x1289821  addu        $s3, $t1, $t0
    ctx->pc = 0x39d028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x39d02c: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x39d02cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x39d030: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x39d030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39d034: 0xad850004  sw          $a1, 0x4($t4)
    ctx->pc = 0x39d034u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 5));
    // 0x39d038: 0xe9a021  addu        $s4, $a3, $t1
    ctx->pc = 0x39d038u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x39d03c: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x39d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x39d040: 0x1e23821  addu        $a3, $t7, $v0
    ctx->pc = 0x39d040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x39d044: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x39d044u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x39d048: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x39d048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d04c: 0xacf305a8  sw          $s3, 0x5A8($a3)
    ctx->pc = 0x39d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1448), GPR_U32(ctx, 19));
    // 0x39d050: 0x33c70001  andi        $a3, $fp, 0x1
    ctx->pc = 0x39d050u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x39d054: 0xac5405b8  sw          $s4, 0x5B8($v0)
    ctx->pc = 0x39d054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1464), GPR_U32(ctx, 20));
    // 0x39d058: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x39D058u;
    {
        const bool branch_taken_0x39d058 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D058u;
        // 0x39d05c: 0xad840000  sw          $a0, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d058) {
            ctx->pc = 0x39D098u;
            goto label_39d098;
        }
    }
    ctx->pc = 0x39D060u;
    // 0x39d060: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x39d060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d064: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x39d064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x39d068: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x39d068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x39d06c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x39D06Cu;
    {
        const bool branch_taken_0x39d06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d06c) {
            ctx->pc = 0x39D070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D06Cu;
            // 0x39d070: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D0CCu;
            goto label_39d0cc;
        }
    }
    ctx->pc = 0x39D074u;
    // 0x39d074: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x39d074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39d078: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x39d078u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d07c: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x39d07cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d080: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39d080u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39d084: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39d084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39d088: 0x1c21823  subu        $v1, $t6, $v0
    ctx->pc = 0x39d088u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x39d08c: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x39d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x39d090: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x39D090u;
    {
        const bool branch_taken_0x39d090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D090u;
        // 0x39d094: 0xad83000c  sw          $v1, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d090) {
            ctx->pc = 0x39D0D0u;
            goto label_39d0d0;
        }
    }
    ctx->pc = 0x39D098u;
label_39d098:
    // 0x39d098: 0x30e1004  sllv        $v0, $t6, $t8
    ctx->pc = 0x39d098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d09c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x39d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x39d0a0: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x39d0a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x39d0a4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x39D0A4u;
    {
        const bool branch_taken_0x39d0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d0a4) {
            ctx->pc = 0x39D0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D0A4u;
            // 0x39d0a8: 0xad8e0008  sw          $t6, 0x8($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D0CCu;
            goto label_39d0cc;
        }
    }
    ctx->pc = 0x39D0ACu;
    // 0x39d0ac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x39d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39d0b0: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x39d0b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d0b4: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x39d0b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d0b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39d0bc: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x39d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x39d0c0: 0xad820008  sw          $v0, 0x8($t4)
    ctx->pc = 0x39d0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 2));
    // 0x39d0c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39D0C4u;
    {
        const bool branch_taken_0x39d0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0C4u;
        // 0x39d0c8: 0xad84000c  sw          $a0, 0xC($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d0c4) {
            ctx->pc = 0x39D0D0u;
            goto label_39d0d0;
        }
    }
    ctx->pc = 0x39D0CCu;
label_39d0cc:
    // 0x39d0cc: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x39d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
label_39d0d0:
    // 0x39d0d0: 0x8de2087c  lw          $v0, 0x87C($t7)
    ctx->pc = 0x39d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x39d0d4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x39D0D4u;
    {
        const bool branch_taken_0x39d0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0D4u;
        // 0x39d0d8: 0xb1100  sll         $v0, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d0d4) {
            ctx->pc = 0x39D118u;
            goto label_39d118;
        }
    }
    ctx->pc = 0x39D0DCu;
    // 0x39d0dc: 0x8de60820  lw          $a2, 0x820($t7)
    ctx->pc = 0x39d0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x39d0e0: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x39d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39d0e4: 0x24030600  addiu       $v1, $zero, 0x600
    ctx->pc = 0x39d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x39d0e8: 0xb2900  sll         $a1, $t3, 4
    ctx->pc = 0x39d0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x39d0ec: 0xc22018  mult        $a0, $a2, $v0
    ctx->pc = 0x39d0ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39d0f0: 0x3231818  mult        $v1, $t9, $v1
    ctx->pc = 0x39d0f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39d0f4: 0x8f3021  addu        $a2, $a0, $t7
    ctx->pc = 0x39d0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x39d0f8: 0x8cc205a0  lw          $v0, 0x5A0($a2)
    ctx->pc = 0x39d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1440)));
    // 0x39d0fc: 0x24a40300  addiu       $a0, $a1, 0x300
    ctx->pc = 0x39d0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x39d100: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x39d100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39d104: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x39d104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x39d108: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x39d108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x39d10c: 0xad850014  sw          $a1, 0x14($t4)
    ctx->pc = 0x39d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 5));
    // 0x39d110: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39D110u;
    {
        const bool branch_taken_0x39d110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D110u;
        // 0x39d114: 0xad840018  sw          $a0, 0x18($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d110) {
            ctx->pc = 0x39D12Cu;
            goto label_39d12c;
        }
    }
    ctx->pc = 0x39D118u;
label_39d118:
    // 0x39d118: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x39d118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d11c: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x39d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x39d120: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x39d120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x39d124: 0xad830018  sw          $v1, 0x18($t4)
    ctx->pc = 0x39d124u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 3));
    // 0x39d128: 0xad820014  sw          $v0, 0x14($t4)
    ctx->pc = 0x39d128u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 2));
label_39d12c:
    // 0x39d12c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x39d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x39d130: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x39d130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x39d134: 0x1e27c2  srl         $a0, $fp, 31
    ctx->pc = 0x39d134u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
    // 0x39d138: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x39d138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39d13c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39d140: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x39d140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x39d144: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x39d144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x39d148: 0x4c843  sra         $t9, $a0, 1
    ctx->pc = 0x39d148u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 4), 1));
    // 0x39d14c: 0x1517c2  srl         $v0, $s5, 31
    ctx->pc = 0x39d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x39d150: 0x3052804  sllv        $a1, $a1, $t8
    ctx->pc = 0x39d150u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d154: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x39d154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x39d158: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x39d158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x39d15c: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x39d15cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x39d160: 0x6a843  sra         $s5, $a2, 1
    ctx->pc = 0x39d160u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 1));
    // 0x39d164: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x39d164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x39d168: 0xe4843  sra         $t1, $t6, 1
    ctx->pc = 0x39d168u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
    // 0x39d16c: 0x6af025  or          $fp, $v1, $t2
    ctx->pc = 0x39d16cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x39d170: 0x103843  sra         $a3, $s0, 1
    ctx->pc = 0x39d170u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 1));
    // 0x39d174: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39d174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x39d178: 0xad850010  sw          $a1, 0x10($t4)
    ctx->pc = 0x39d178u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 5));
    // 0x39d17c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x39d17cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x39d180: 0x13000008  beqz        $t8, . + 4 + (0x8 << 2)
    ctx->pc = 0x39D180u;
    {
        const bool branch_taken_0x39d180 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D180u;
        // 0x39d184: 0x825021  addu        $t2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d180) {
            ctx->pc = 0x39D1A4u;
            goto label_39d1a4;
        }
    }
    ctx->pc = 0x39D188u;
    // 0x39d188: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x39d188u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x39d18c: 0x112043  sra         $a0, $s1, 1
    ctx->pc = 0x39d18cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
    // 0x39d190: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x39d190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x39d194: 0xf21821  addu        $v1, $a3, $s2
    ctx->pc = 0x39d194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x39d198: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39d198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39d19c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39D19Cu;
    {
        const bool branch_taken_0x39d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D19Cu;
        // 0x39d1a0: 0x435821  addu        $t3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d19c) {
            ctx->pc = 0x39D1B8u;
            goto label_39d1b8;
        }
    }
    ctx->pc = 0x39D1A4u;
label_39d1a4:
    // 0x39d1a4: 0x61083  sra         $v0, $a2, 2
    ctx->pc = 0x39d1a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
    // 0x39d1a8: 0x111843  sra         $v1, $s1, 1
    ctx->pc = 0x39d1a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
    // 0x39d1ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39d1b0: 0xf22021  addu        $a0, $a3, $s2
    ctx->pc = 0x39d1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x39d1b4: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x39d1b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_39d1b8:
    // 0x39d1b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39d1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39d1bc: 0xa30c3  sra         $a2, $t2, 3
    ctx->pc = 0x39d1bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 10), 3));
    // 0x39d1c0: 0xb28c3  sra         $a1, $t3, 3
    ctx->pc = 0x39d1c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 11), 3));
    // 0x39d1c4: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x39d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x39d1c8: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x39d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x39d1cc: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x39d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x39d1d0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x39d1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39d1d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x39d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x39d1d8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x39d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x39d1dc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x39d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x39d1e0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x39d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x39d1e4: 0x1645823  subu        $t3, $t3, $a0
    ctx->pc = 0x39d1e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x39d1e8: 0x33270001  andi        $a3, $t9, 0x1
    ctx->pc = 0x39d1e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
    // 0x39d1ec: 0x32aa0001  andi        $t2, $s5, 0x1
    ctx->pc = 0x39d1ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x39d1f0: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x39d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x39d1f4: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x39D1F4u;
    {
        const bool branch_taken_0x39d1f4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1F4u;
        // 0x39d1f8: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d1f4) {
            ctx->pc = 0x39D234u;
            goto label_39d234;
        }
    }
    ctx->pc = 0x39D1FCu;
    // 0x39d1fc: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x39d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d200: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x39d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x39d204: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x39d204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x39d208: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x39D208u;
    {
        const bool branch_taken_0x39d208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d208) {
            ctx->pc = 0x39D20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D208u;
            // 0x39d20c: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D268u;
            goto label_39d268;
        }
    }
    ctx->pc = 0x39D210u;
    // 0x39d210: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x39d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39d214: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x39d214u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d218: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x39d218u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d21c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39d220: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39d224: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x39d224u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x39d228: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x39d228u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x39d22c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x39D22Cu;
    {
        const bool branch_taken_0x39d22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D22Cu;
        // 0x39d230: 0xada3000c  sw          $v1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d22c) {
            ctx->pc = 0x39D26Cu;
            goto label_39d26c;
        }
    }
    ctx->pc = 0x39D234u;
label_39d234:
    // 0x39d234: 0x3091004  sllv        $v0, $t1, $t8
    ctx->pc = 0x39d234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d238: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x39d238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x39d23c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x39d23cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x39d240: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x39D240u;
    {
        const bool branch_taken_0x39d240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d240) {
            ctx->pc = 0x39D244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D240u;
            // 0x39d244: 0xada90008  sw          $t1, 0x8($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D268u;
            goto label_39d268;
        }
    }
    ctx->pc = 0x39D248u;
    // 0x39d248: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x39d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39d24c: 0x30b1807  srav        $v1, $t3, $t8
    ctx->pc = 0x39d24cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d250: 0x3021007  srav        $v0, $v0, $t8
    ctx->pc = 0x39d250u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d254: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39d254u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39d258: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x39d258u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x39d25c: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x39d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x39d260: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39D260u;
    {
        const bool branch_taken_0x39d260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D260u;
        // 0x39d264: 0xada4000c  sw          $a0, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d260) {
            ctx->pc = 0x39D26Cu;
            goto label_39d26c;
        }
    }
    ctx->pc = 0x39D268u;
label_39d268:
    // 0x39d268: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x39d268u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
label_39d26c:
    // 0x39d26c: 0xd61023  subu        $v0, $a2, $s6
    ctx->pc = 0x39d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x39d270: 0xb71823  subu        $v1, $a1, $s7
    ctx->pc = 0x39d270u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x39d274: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x39d274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x39d278: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x39d278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x39d27c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39d280: 0x8de5087c  lw          $a1, 0x87C($t7)
    ctx->pc = 0x39d280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2172)));
    // 0x39d284: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x39d284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x39d288: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x39D288u;
    {
        const bool branch_taken_0x39d288 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D288u;
        // 0x39d28c: 0x1032021  addu        $a0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d288) {
            ctx->pc = 0x39D2B0u;
            goto label_39d2b0;
        }
    }
    ctx->pc = 0x39D290u;
    // 0x39d290: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x39d290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x39d294: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x39d294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x39d298: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x39d298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x39d29c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x39d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x39d2a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x39d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x39d2a4: 0xada30018  sw          $v1, 0x18($t5)
    ctx->pc = 0x39d2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 3));
    // 0x39d2a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x39D2A8u;
    {
        const bool branch_taken_0x39d2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2A8u;
        // 0x39d2ac: 0xada20014  sw          $v0, 0x14($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d2a8) {
            ctx->pc = 0x39D2F0u;
            goto label_39d2f0;
        }
    }
    ctx->pc = 0x39D2B0u;
label_39d2b0:
    // 0x39d2b0: 0xb20c0  sll         $a0, $t3, 3
    ctx->pc = 0x39d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x39d2b4: 0x24850100  addiu       $a1, $a0, 0x100
    ctx->pc = 0x39d2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x39d2b8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x39d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39d2bc: 0x2c420301  sltiu       $v0, $v0, 0x301
    ctx->pc = 0x39d2bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)769) ? 1 : 0);
    // 0x39d2c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39D2C0u;
    {
        const bool branch_taken_0x39d2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2C0u;
        // 0x39d2c4: 0x2631021  addu        $v0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d2c0) {
            ctx->pc = 0x39D2D4u;
            goto label_39d2d4;
        }
    }
    ctx->pc = 0x39D2C8u;
    // 0x39d2c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39d2cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39D2CCu;
    {
        const bool branch_taken_0x39d2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D2CCu;
        // 0x39d2d0: 0x2831821  addu        $v1, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d2cc) {
            ctx->pc = 0x39D2E0u;
            goto label_39d2e0;
        }
    }
    ctx->pc = 0x39D2D4u;
label_39d2d4:
    // 0x39d2d4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x39d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x39d2d8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x39d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39d2dc: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x39d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
label_39d2e0:
    // 0x39d2e0: 0xada20014  sw          $v0, 0x14($t5)
    ctx->pc = 0x39d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 2));
    // 0x39d2e4: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x39d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x39d2e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x39d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39d2ec: 0xada20018  sw          $v0, 0x18($t5)
    ctx->pc = 0x39d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 2));
label_39d2f0:
    // 0x39d2f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x39d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39d2f4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x39d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x39d2f8: 0x3021004  sllv        $v0, $v0, $t8
    ctx->pc = 0x39d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
    // 0x39d2fc: 0x2484a238  addiu       $a0, $a0, -0x5DC8
    ctx->pc = 0x39d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943288));
    // 0x39d300: 0xada20010  sw          $v0, 0x10($t5)
    ctx->pc = 0x39d300u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 2));
    // 0x39d304: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x39d304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x39d308: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x39d308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x39d30c: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x39d30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x39d310: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x39d310u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x39d314: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39d318: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x39d318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39d31c: 0x8de50820  lw          $a1, 0x820($t7)
    ctx->pc = 0x39d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2080)));
    // 0x39d320: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x39d320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x39d324: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x39d324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x39d328: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39d328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x39d32c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x39d32cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39d330: 0x2442a258  addiu       $v0, $v0, -0x5DA8
    ctx->pc = 0x39d330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943320));
    // 0x39d334: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39d334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39d338: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x39d338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x39d33c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39d340: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x39d340u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x39d344: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x39d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39d348: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x39d348u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39d34c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x39d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39d350: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x39d350u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39d354: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x39d354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x39d358: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x39d358u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39d35c: 0x1e43021  addu        $a2, $t7, $a0
    ctx->pc = 0x39d35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x39d360: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x39d360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39d364: 0xacc705c8  sw          $a3, 0x5C8($a2)
    ctx->pc = 0x39d364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1480), GPR_U32(ctx, 7));
    // 0x39d368: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x39d368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d36c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39d370: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x39d370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39d374: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x39d374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39d378: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x39d378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39d37c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x39d37cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39d380: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x39d380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39d384: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x39d384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39d388: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x39d388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x39d38c: 0xac8605d8  sw          $a2, 0x5D8($a0)
    ctx->pc = 0x39d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1496), GPR_U32(ctx, 6));
    // 0x39d390: 0x3e00008  jr          $ra
    ctx->pc = 0x39D390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D390u;
        // 0x39d394: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39D398u;
}
