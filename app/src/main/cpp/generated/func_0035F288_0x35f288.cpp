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

// Function: func_0035F288
// Address: 0x35f288 - 0x35f3c8
void func_0035F288_0x35f288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035F288_0x35f288");
#endif

    ctx->pc = 0x35f288u;

    // 0x35f288: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x35f288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35f28c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f28cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f290: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f294: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x35F294u;
    {
        const bool branch_taken_0x35f294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F294u;
        // 0x35f298: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f294) {
            ctx->pc = 0x35F2F8u;
            goto label_35f2f8;
        }
    }
    ctx->pc = 0x35F29Cu;
    // 0x35f29c: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x35f29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x35f2a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35F2A0u;
    {
        const bool branch_taken_0x35f2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F2A0u;
        // 0x35f2a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f2a0) {
            ctx->pc = 0x35F2C0u;
            goto label_35f2c0;
        }
    }
    ctx->pc = 0x35F2A8u;
    // 0x35f2a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f2ac: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35F2ACu;
    {
        const bool branch_taken_0x35f2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f2ac) {
            ctx->pc = 0x35F2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F2ACu;
            // 0x35f2b0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F2D0u;
            goto label_35f2d0;
        }
    }
    ctx->pc = 0x35F2B4u;
    // 0x35f2b4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x35F2B4u;
    {
        const bool branch_taken_0x35f2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F2B4u;
        // 0x35f2b8: 0x3c060046  lui         $a2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f2b4) {
            ctx->pc = 0x35F3A8u;
            goto label_35f3a8;
        }
    }
    ctx->pc = 0x35F2BCu;
    // 0x35f2bc: 0x0  nop
    ctx->pc = 0x35f2bcu;
    // NOP
label_35f2c0:
    // 0x35f2c0: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x35F2C0u;
    {
        const bool branch_taken_0x35f2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f2c0) {
            ctx->pc = 0x35F2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F2C0u;
            // 0x35f2c4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F328u;
            goto label_35f328;
        }
    }
    ctx->pc = 0x35F2C8u;
    // 0x35f2c8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x35F2C8u;
    {
        const bool branch_taken_0x35f2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F2C8u;
        // 0x35f2cc: 0x3c060046  lui         $a2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f2c8) {
            ctx->pc = 0x35F3A8u;
            goto label_35f3a8;
        }
    }
    ctx->pc = 0x35F2D0u;
label_35f2d0:
    // 0x35f2d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x35f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35f2d4: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x35f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x35f2d8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x35f2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x35f2dc: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x35f2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x35f2e0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x35f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x35f2e4: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x35f2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x35f2e8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x35f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x35f2ec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x35F2ECu;
    {
        const bool branch_taken_0x35f2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F2ECu;
        // 0x35f2f0: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f2ec) {
            ctx->pc = 0x35F3B8u;
            goto label_35f3b8;
        }
    }
    ctx->pc = 0x35F2F4u;
    // 0x35f2f4: 0x0  nop
    ctx->pc = 0x35f2f4u;
    // NOP
label_35f2f8:
    // 0x35f2f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f2fc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x35f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35f300: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x35f300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x35f304: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x35f304u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x35f308: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x35f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x35f30c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x35f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x35f310: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x35f310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x35f314: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x35f314u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x35f318: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x35f318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x35f31c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x35F31Cu;
    {
        const bool branch_taken_0x35f31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F31Cu;
        // 0x35f320: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f31c) {
            ctx->pc = 0x35F3B8u;
            goto label_35f3b8;
        }
    }
    ctx->pc = 0x35F324u;
    // 0x35f324: 0x0  nop
    ctx->pc = 0x35f324u;
    // NOP
label_35f328:
    // 0x35f328: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x35f328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x35f32c: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x35f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x35f330: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x35f330u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x35f334: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x35f334u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x35f338: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x35f338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x35f33c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x35f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x35f340: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x35f340u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x35f344: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x35f344u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x35f348: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x35f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x35f34c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x35f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x35f350: 0xacc20024  sw          $v0, 0x24($a2)
    ctx->pc = 0x35f350u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
    // 0x35f354: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x35f354u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x35f358: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x35f358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x35f35c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x35f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x35f360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35f364: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x35f364u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x35f368: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x35f368u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    // 0x35f36c: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x35f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x35f370: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x35f370u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x35f374: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x35f374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x35f378: 0xacc40020  sw          $a0, 0x20($a2)
    ctx->pc = 0x35f378u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 4));
    // 0x35f37c: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x35f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x35f380: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x35f380u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x35f384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35f388: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x35f388u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x35f38c: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x35f38cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
    // 0x35f390: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x35f390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x35f394: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x35f394u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x35f398: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x35f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x35f39c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35F39Cu;
    {
        const bool branch_taken_0x35f39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F39Cu;
        // 0x35f3a0: 0xacc20030  sw          $v0, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f39c) {
            ctx->pc = 0x35F3B8u;
            goto label_35f3b8;
        }
    }
    ctx->pc = 0x35F3A4u;
    // 0x35f3a4: 0x0  nop
    ctx->pc = 0x35f3a4u;
    // NOP
label_35f3a8:
    // 0x35f3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f3ac: 0x24c69f20  addiu       $a2, $a2, -0x60E0
    ctx->pc = 0x35f3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942496));
    // 0x35f3b0: 0x80d7ef6  j           func_35FBD8
    ctx->pc = 0x35F3B0u;
    ctx->pc = 0x35F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F3B0u;
    // 0x35f3b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FBD8u, 0x35F3B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35F3B8u;
label_35f3b8:
    // 0x35f3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x35F3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3BCu;
        // 0x35f3c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F3C4u;
    // 0x35f3c4: 0x0  nop
    ctx->pc = 0x35f3c4u;
    // NOP
    ctx->pc = 0x35f3c8u;
}
