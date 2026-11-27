#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "sdk_arm64_fast.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: strncmp
// Address: 0x3a5bd8 - 0x3a5da0
void strncmp_0x3a5bd8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strncmp_0x3a5bd8");
#endif

    if (__builtin_expect(ctx->pc != 0x3a5bd8u, 0)) {
        switch (ctx->pc) {
            case 0x3a5be0u: goto label_3a5be0;
            case 0x3a5c6cu: goto label_3a5c6c;
            case 0x3a5d08u: goto label_3a5d08;
            case 0x3a5d68u: goto label_3a5d68;
            default: break;
        }
    }

#if defined(__aarch64__) || defined(_M_ARM64)
    if (__builtin_expect(ctx->pc == 0x3a5bd8u, 1)) {
        const uint32_t n = GPR_U32(ctx, 6);
        if (n == 0u) {
            SET_GPR_S32(ctx, 2, 0);
            ps2FastReturn(rdram, ctx, runtime, 0x3A5BE0u);
            return;
        }
        uint32_t avail1 = 0, avail2 = 0;
        const char* const s1 = ps2TryFastCStr(rdram, GPR_U32(ctx, 4), avail1);
        const char* const s2 = ps2TryFastCStr(rdram, GPR_U32(ctx, 5), avail2);
        if (__builtin_expect(s1 != nullptr && s2 != nullptr && avail1 > n + 16u && avail2 > n + 16u, 1)) {
            const int cmp = std::strncmp(s1, s2, n);
            SET_GPR_S32(ctx, 2, cmp);
            ps2FastReturn(rdram, ctx, runtime, 0x3A5BE0u);
            return;
        }
    }
#endif


    // 0x3a5bd8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5BD8u;
    {
        const bool branch_taken_0x3a5bd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BD8u;
        // 0x3a5bdc: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5bd8) {
            ctx->pc = 0x3A5BE8u;
            goto label_3a5be8;
        }
    }
label_3a5be0:
    // 0x3a5be0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BE0u;
        // 0x3a5be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_3a5be8:
    // 0x3a5be8: 0x30620007  andi        $v0, $v1, 0x7
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3a5bec: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3A5BECu;
    {
        const bool branch_taken_0x3a5bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BECu;
        // 0x3a5bf0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5bec) {
            ctx->pc = 0x3A5D54u;
            goto label_3a5d54;
        }
    }
    // 0x3a5bf4: 0x3062000f  andi        $v0, $v1, 0xF
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3a5bf8: 0x2cc70010  sltiu       $a3, $a2, 0x10
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3a5bfc: 0x34098080  ori         $t1, $zero, 0x8080
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5c00: 0x94c38  dsll        $t1, $t1, 16
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3a5c04: 0x35298080  ori         $t1, $t1, 0x8080
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3a5c08: 0x94c38  dsll        $t1, $t1, 16
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3a5c0c: 0x35298080  ori         $t1, $t1, 0x8080
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3a5c10: 0x94a78  dsll        $t1, $t1, 9
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x3a5c14: 0x35290101  ori         $t1, $t1, 0x101
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x3a5c18: 0x471025  or          $v0, $v0, $a3
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3a5c1c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3A5C1Cu;
    {
        const bool branch_taken_0x3a5c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5C1Cu;
        // 0x3a5c20: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5c1c) {
            ctx->pc = 0x3A5CC8u;
            goto label_3a5cc8;
        }
    }
    // 0x3a5c24: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3a5c24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5c28: 0x71295389  pcpyld      $t2, $t1, $t1
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3a5c2c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a5c2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5c30: 0x34088080  ori         $t0, $zero, 0x8080
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5c34: 0x84438  dsll        $t0, $t0, 16
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3a5c38: 0x35088080  ori         $t0, $t0, 0x8080
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3a5c3c: 0x84438  dsll        $t0, $t0, 16
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3a5c40: 0x35088080  ori         $t0, $t0, 0x8080
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3a5c44: 0x84438  dsll        $t0, $t0, 16
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3a5c48: 0x35088080  ori         $t0, $t0, 0x8080
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3a5c4c: 0x70621848  psubw       $v1, $v1, $v0
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3a5c50: 0x71084b89  pcpyld      $t1, $t0, $t0
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x3a5c54: 0x706413a9  pcpyud      $v0, $v1, $a0
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3a5c58: 0xa0402d  daddu       $t0, $a1, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c5c: 0x431825  or          $v1, $v0, $v1
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a5c60: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3A5C60u;
    {
        const bool branch_taken_0x3a5c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5C60u;
        // 0x3a5c64: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5c60) {
            ctx->pc = 0x3A5D54u;
            goto label_3a5d54;
        }
    }
    // 0x3a5c68: 0x24c6fff0  addiu       $a2, $a2, -0x10
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_3a5c6c:
    // 0x3a5c6c: 0x10c0ffdc  beqz        $a2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3A5C6Cu;
    {
        const bool branch_taken_0x3a5c6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5c6c) {
            ctx->pc = 0x3A5BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5be0;
        }
    }
    // 0x3a5c74: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x3a5c74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a5c78: 0x70021ce9  pnor        $v1, $zero, $v0
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3a5c7c: 0x704a1248  psubb       $v0, $v0, $t2
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3a5c80: 0x70431489  pand        $v0, $v0, $v1
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a5c84: 0x70491c89  pand        $v1, $v0, $t1
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3a5c88: 0x706413a9  pcpyud      $v0, $v1, $a0
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3a5c8c: 0x431025  or          $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a5c90: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x3A5C90u;
    {
        const bool branch_taken_0x3a5c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5C90u;
        // 0x3a5c94: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5c90) {
            ctx->pc = 0x3A5BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5be0;
        }
    }
    // 0x3a5c98: 0x2cc20010  sltiu       $v0, $a2, 0x10
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3a5c9c: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x3a5c9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a5ca0: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3A5CA0u;
    {
        const bool branch_taken_0x3a5ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5CA0u;
        // 0x3a5ca4: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ca0) {
            ctx->pc = 0x3A5D48u;
            goto label_3a5d48;
        }
    }
    // 0x3a5ca8: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x3a5ca8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a5cac: 0x70621848  psubw       $v1, $v1, $v0
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3a5cb0: 0x706413a9  pcpyud      $v0, $v1, $a0
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3a5cb4: 0x431025  or          $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a5cb8: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3A5CB8u;
    {
        const bool branch_taken_0x3a5cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5cb8) {
            ctx->pc = 0x3A5CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5CB8u;
            // 0x3a5cbc: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5c6c;
        }
    }
    // 0x3a5cc0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3A5CC0u;
    {
        const bool branch_taken_0x3a5cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5CC0u;
        // 0x3a5cc4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5cc0) {
            ctx->pc = 0x3A5D4Cu;
            goto label_3a5d4c;
        }
    }
label_3a5cc8:
    // 0x3a5cc8: 0x2cc20008  sltiu       $v0, $a2, 0x8
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a5ccc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A5CCCu;
    {
        const bool branch_taken_0x3a5ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5CCCu;
        // 0x3a5cd0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5ccc) {
            ctx->pc = 0x3A5D48u;
            goto label_3a5d48;
        }
    }
    // 0x3a5cd4: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x3a5cd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5cd8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x3a5cd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5cdc: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A5CDCu;
    {
        const bool branch_taken_0x3a5cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5CDCu;
        // 0x3a5ce0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5cdc) {
            ctx->pc = 0x3A5D54u;
            goto label_3a5d54;
        }
    }
    // 0x3a5ce4: 0x24c6fff8  addiu       $a2, $a2, -0x8
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3a5ce8: 0x340a8080  ori         $t2, $zero, 0x8080
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5cec: 0xa5438  dsll        $t2, $t2, 16
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3a5cf0: 0x354a8080  ori         $t2, $t2, 0x8080
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3a5cf4: 0xa5438  dsll        $t2, $t2, 16
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3a5cf8: 0x354a8080  ori         $t2, $t2, 0x8080
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3a5cfc: 0xa5438  dsll        $t2, $t2, 16
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3a5d00: 0x354a8080  ori         $t2, $t2, 0x8080
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x3a5d04: 0x0  nop
    // NOP
label_3a5d08:
    // 0x3a5d08: 0x10c0ffb5  beqz        $a2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x3A5D08u;
    {
        const bool branch_taken_0x3a5d08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5d08) {
            ctx->pc = 0x3A5BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5be0;
        }
    }
    // 0x3a5d10: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3a5d10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a5d14: 0x21827  nor         $v1, $zero, $v0
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3a5d18: 0x49102f  dsubu       $v0, $v0, $t1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x3a5d1c: 0x431024  and         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a5d20: 0x4a1024  and         $v0, $v0, $t2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x3a5d24: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x3A5D24u;
    {
        const bool branch_taken_0x3a5d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D24u;
        // 0x3a5d28: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d24) {
            ctx->pc = 0x3A5BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5be0;
        }
    }
    // 0x3a5d2c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a5d30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5D30u;
    {
        const bool branch_taken_0x3a5d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D30u;
        // 0x3a5d34: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d30) {
            ctx->pc = 0x3A5D48u;
            goto label_3a5d48;
        }
    }
    // 0x3a5d38: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x3a5d38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a5d3c: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x3a5d3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a5d40: 0x5062fff1  beql        $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3A5D40u;
    {
        const bool branch_taken_0x3a5d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a5d40) {
            ctx->pc = 0x3A5D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5D40u;
            // 0x3a5d44: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5d08;
        }
    }
label_3a5d48:
    // 0x3a5d48: 0xe0202d  daddu       $a0, $a3, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a5d4c:
    // 0x3a5d4c: 0x100282d  daddu       $a1, $t0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5d50: 0xc0102d  daddu       $v0, $a2, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a5d54:
    // 0x3a5d54: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A5D54u;
    {
        const bool branch_taken_0x3a5d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D54u;
        // 0x3a5d58: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d54) {
            ctx->pc = 0x3A5D90u;
            goto label_3a5d90;
        }
    }
    // 0x3a5d5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A5D5Cu;
    {
        const bool branch_taken_0x3a5d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D5Cu;
        // 0x3a5d60: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d5c) {
            ctx->pc = 0x3A5D84u;
            goto label_3a5d84;
        }
    }
    // 0x3a5d64: 0x0  nop
    // NOP
label_3a5d68:
    // 0x3a5d68: 0x10c0ff9d  beqz        $a2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x3A5D68u;
    {
        const bool branch_taken_0x3a5d68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5d68) {
            ctx->pc = 0x3A5BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5be0;
        }
    }
    // 0x3a5d70: 0x10e0ff9b  beqz        $a3, . + 4 + (-0x65 << 2)
    ctx->pc = 0x3A5D70u;
    {
        const bool branch_taken_0x3a5d70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D70u;
        // 0x3a5d74: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d70) {
            ctx->pc = 0x3A5BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5be0;
        }
    }
    // 0x3a5d78: 0x24a50001  addiu       $a1, $a1, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a5d7c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x3a5d7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5d80: 0x24c6ffff  addiu       $a2, $a2, -0x1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3a5d84:
    // 0x3a5d84: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3a5d84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5d88: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3A5D88u;
    {
        const bool branch_taken_0x3a5d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D88u;
        // 0x3a5d8c: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d88) {
            ctx->pc = 0x3A5D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5d68;
        }
    }
label_3a5d90:
    // 0x3a5d90: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3a5d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5d94: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3a5d94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5d98: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D98u;
        // 0x3a5d9c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5DA0u;
}