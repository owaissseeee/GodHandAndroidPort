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

// Function: func_0031C238
// Address: 0x31c238 - 0x31c348
void func_0031C238_0x31c238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031C238_0x31c238");
#endif

    switch (ctx->pc) {
        case 0x31c2a0u: goto label_31c2a0;
        case 0x31c2c0u: goto label_31c2c0;
        case 0x31c2d8u: goto label_31c2d8;
        case 0x31c300u: goto label_31c300;
        default: break;
    }

    ctx->pc = 0x31c238u;

    // 0x31c238: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31c238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31c23c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31c23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31c240: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31c240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31c244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31c244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c248: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31c248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31c24c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31c24cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c254: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x31c254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31c258: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31C258u;
    {
        const bool branch_taken_0x31c258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C258u;
        // 0x31c25c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c258) {
            ctx->pc = 0x31C288u;
            goto label_31c288;
        }
    }
    ctx->pc = 0x31C260u;
    // 0x31c260: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x31c260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31c264: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x31c264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31c268: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x31c268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x31c26c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x31c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31c270: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x31c270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x31c274: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x31c274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x31c278: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x31c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x31c27c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x31c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x31c280: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31C280u;
    {
        const bool branch_taken_0x31c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C280u;
        // 0x31c284: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c280) {
            ctx->pc = 0x31C2D8u;
            goto label_31c2d8;
        }
    }
    ctx->pc = 0x31C288u;
label_31c288:
    // 0x31c288: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x31c288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31c28c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x31c28cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c290: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x31c290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31c294: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x31c294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x31c298: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x31C298u;
    SET_GPR_U32(ctx, 31, 0x31C2A0u);
    ctx->pc = 0x31C29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C298u;
    // 0x31c29c: 0x63140  sll         $a2, $a2, 5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x31C298u, 0x31C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2A0u;
label_31c2a0:
    // 0x31c2a0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c2a4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x31c2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x31c2a8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x31c2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31c2ac: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x31c2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31c2b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31c2b4: 0x3012  mflo        $a2
    ctx->pc = 0x31c2b4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x31c2b8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x31C2B8u;
    SET_GPR_U32(ctx, 31, 0x31C2C0u);
    ctx->pc = 0x31C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2B8u;
    // 0x31c2bc: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x31C2B8u, 0x31C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2C0u;
label_31c2c0:
    // 0x31c2c0: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x31c2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x31c2c4: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x31c2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x31c2c8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x31c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x31c2cc: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x31c2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x31c2d0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x31C2D0u;
    SET_GPR_U32(ctx, 31, 0x31C2D8u);
    ctx->pc = 0x31C2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C2D0u;
    // 0x31c2d4: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x31C2D0u, 0x31C2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2D8u;
label_31c2d8:
    // 0x31c2d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31c2dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31c2dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c2e0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x31c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x31c2e4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31c2e8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x31c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x31c2ec: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x31c2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x31c2f0: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31C2F0u;
    {
        const bool branch_taken_0x31c2f0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x31C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C2F0u;
        // 0x31c2f4: 0xae040018  sw          $a0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c2f0) {
            ctx->pc = 0x31C32Cu;
            goto label_31c32c;
        }
    }
    ctx->pc = 0x31C2F8u;
    // 0x31c2f8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x31c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31c2fc: 0x0  nop
    ctx->pc = 0x31c2fcu;
    // NOP
label_31c300:
    // 0x31c300: 0x72140  sll         $a0, $a3, 5
    ctx->pc = 0x31c300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x31c304: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x31c304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x31c308: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31c308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31c30c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x31c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31c310: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x31c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x31c314: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x31c314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31c318: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x31c318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x31c31c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x31c31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x31c320: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x31c320u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31c324: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x31C324u;
    {
        const bool branch_taken_0x31c324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c324) {
            ctx->pc = 0x31C328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C324u;
            // 0x31c328: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c300;
        }
    }
    ctx->pc = 0x31C32Cu;
label_31c32c:
    // 0x31c32c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31c32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c330: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31c330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c334: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31c334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c33c: 0x3e00008  jr          $ra
    ctx->pc = 0x31C33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C33Cu;
        // 0x31c340: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C344u;
    // 0x31c344: 0x0  nop
    ctx->pc = 0x31c344u;
    // NOP
    ctx->pc = 0x31c348u;
}
