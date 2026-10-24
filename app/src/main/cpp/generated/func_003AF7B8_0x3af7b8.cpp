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

// Function: func_003AF7B8
// Address: 0x3af7b8 - 0x3af880
void func_003AF7B8_0x3af7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AF7B8_0x3af7b8");
#endif

    switch (ctx->pc) {
        case 0x3af7d4u: goto label_3af7d4;
        case 0x3af860u: goto label_3af860;
        default: break;
    }

    ctx->pc = 0x3af7b8u;

    // 0x3af7b8: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x3af7b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3af7bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3af7bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3af7c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3af7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3af7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3af7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3af7c8: 0x2812  mflo        $a1
    ctx->pc = 0x3af7c8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x3af7cc: 0xc0eb0be  jal         func_3AC2F8
    ctx->pc = 0x3AF7CCu;
    SET_GPR_U32(ctx, 31, 0x3AF7D4u);
    ctx->pc = 0x3AC2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC2F8u, 0x3AF7CCu, 0x3AF7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF7D4u;
label_3af7d4:
    // 0x3af7d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3af7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af7d8: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF7D8u;
    {
        const bool branch_taken_0x3af7d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3af7d8) {
            ctx->pc = 0x3AF7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AF7D8u;
            // 0x3af7dc: 0x8e03fffc  lw          $v1, -0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AF7E8u;
            goto label_3af7e8;
        }
    }
    ctx->pc = 0x3AF7E0u;
    // 0x3af7e0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3AF7E0u;
    {
        const bool branch_taken_0x3af7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF7E0u;
        // 0x3af7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af7e0) {
            ctx->pc = 0x3AF864u;
            goto label_3af864;
        }
    }
    ctx->pc = 0x3AF7E8u;
label_3af7e8:
    // 0x3af7e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3af7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3af7ec: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3af7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3af7f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3af7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3af7f4: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x3af7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x3af7f8: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x3af7f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x3af7fc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3AF7FCu;
    {
        const bool branch_taken_0x3af7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF7FCu;
        // 0x3af800: 0x2cc20014  sltiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af7fc) {
            ctx->pc = 0x3AF854u;
            goto label_3af854;
        }
    }
    ctx->pc = 0x3AF804u;
    // 0x3af804: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3AF804u;
    {
        const bool branch_taken_0x3af804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF804u;
        // 0x3af808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af804) {
            ctx->pc = 0x3AF840u;
            goto label_3af840;
        }
    }
    ctx->pc = 0x3AF80Cu;
    // 0x3af80c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3af80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3af810: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3af810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3af814: 0x2cc2001c  sltiu       $v0, $a2, 0x1C
    ctx->pc = 0x3af814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x3af818: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AF818u;
    {
        const bool branch_taken_0x3af818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF818u;
        // 0x3af81c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af818) {
            ctx->pc = 0x3AF840u;
            goto label_3af840;
        }
    }
    ctx->pc = 0x3AF820u;
    // 0x3af820: 0x2cc20024  sltiu       $v0, $a2, 0x24
    ctx->pc = 0x3af820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x3af824: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3af824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3af828: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3af828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3af82c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF82Cu;
    {
        const bool branch_taken_0x3af82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF82Cu;
        // 0x3af830: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af82c) {
            ctx->pc = 0x3AF840u;
            goto label_3af840;
        }
    }
    ctx->pc = 0x3AF834u;
    // 0x3af834: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3af834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x3af838: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x3af838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3af83c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3af83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3af840:
    // 0x3af840: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3af840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3af844: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3af844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3af848: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3af848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3af84c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF84Cu;
    {
        const bool branch_taken_0x3af84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF84Cu;
        // 0x3af850: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af84c) {
            ctx->pc = 0x3AF860u;
            goto label_3af860;
        }
    }
    ctx->pc = 0x3AF854u;
label_3af854:
    // 0x3af854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3af854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af858: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3AF858u;
    SET_GPR_U32(ctx, 31, 0x3AF860u);
    ctx->pc = 0x3AF85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF858u;
    // 0x3af85c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3AF858u, 0x3AF860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF860u;
label_3af860:
    // 0x3af860: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3af860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3af864:
    // 0x3af864: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3af864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3af868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3af868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af86c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF86Cu;
        // 0x3af870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF874u;
    // 0x3af874: 0x0  nop
    ctx->pc = 0x3af874u;
    // NOP
    // 0x3af878: 0x0  nop
    ctx->pc = 0x3af878u;
    // NOP
    // 0x3af87c: 0x0  nop
    ctx->pc = 0x3af87cu;
    // NOP
    ctx->pc = 0x3af880u;
}
