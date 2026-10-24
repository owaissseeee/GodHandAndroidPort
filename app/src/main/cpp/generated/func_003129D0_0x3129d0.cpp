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

// Function: func_003129D0
// Address: 0x3129d0 - 0x312a80
void func_003129D0_0x3129d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003129D0_0x3129d0");
#endif

    switch (ctx->pc) {
        case 0x312a64u: goto label_312a64;
        default: break;
    }

    ctx->pc = 0x3129d0u;

    // 0x3129d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3129d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3129d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3129d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3129d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3129d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3129dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3129dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3129e0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3129e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x3129e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3129e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3129e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3129E8u;
    {
        const bool branch_taken_0x3129e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3129ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129E8u;
        // 0x3129ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3129e8) {
            ctx->pc = 0x312A00u;
            goto label_312a00;
        }
    }
    ctx->pc = 0x3129F0u;
    // 0x3129f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3129f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3129f4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3129f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3129f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3129f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3129fc: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x3129fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
label_312a00:
    // 0x312a00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x312a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x312a04: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x312A04u;
    {
        const bool branch_taken_0x312a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x312a04) {
            ctx->pc = 0x312A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312A04u;
            // 0x312a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312A1Cu;
            goto label_312a1c;
        }
    }
    ctx->pc = 0x312A0Cu;
    // 0x312a0c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x312a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x312a10: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x312a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x312a14: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x312a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312a18: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x312a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_312a1c:
    // 0x312a1c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x312a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x312a20: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x312A20u;
    {
        const bool branch_taken_0x312a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312a20) {
            ctx->pc = 0x312A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312A20u;
            // 0x312a24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312A30u;
            goto label_312a30;
        }
    }
    ctx->pc = 0x312A28u;
    // 0x312a28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x312A28u;
    {
        const bool branch_taken_0x312a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A28u;
        // 0x312a2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a28) {
            ctx->pc = 0x312A70u;
            goto label_312a70;
        }
    }
    ctx->pc = 0x312A30u;
label_312a30:
    // 0x312a30: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x312a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x312a34: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x312a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x312a38: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x312A38u;
    {
        const bool branch_taken_0x312a38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x312a38) {
            ctx->pc = 0x312A5Cu;
            goto label_312a5c;
        }
    }
    ctx->pc = 0x312A40u;
    // 0x312a40: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x312A40u;
    {
        const bool branch_taken_0x312a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x312A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A40u;
        // 0x312a44: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a40) {
            ctx->pc = 0x312A4Cu;
            goto label_312a4c;
        }
    }
    ctx->pc = 0x312A48u;
    // 0x312a48: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x312a48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_312a4c:
    // 0x312a4c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x312a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x312a50: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x312a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x312a54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x312A54u;
    {
        const bool branch_taken_0x312a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A54u;
        // 0x312a58: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a54) {
            ctx->pc = 0x312A64u;
            goto label_312a64;
        }
    }
    ctx->pc = 0x312A5Cu;
label_312a5c:
    // 0x312a5c: 0xc0c5ffc  jal         func_317FF0
    ctx->pc = 0x312A5Cu;
    SET_GPR_U32(ctx, 31, 0x312A64u);
    ctx->pc = 0x312A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312A5Cu;
    // 0x312a60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317FF0u, 0x312A5Cu, 0x312A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312A64u;
label_312a64:
    // 0x312a64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x312a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x312a68: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x312a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x312a6c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x312a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_312a70:
    // 0x312a70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x312a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x312a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312a78: 0x3e00008  jr          $ra
    ctx->pc = 0x312A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A78u;
        // 0x312a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312A80u;
}
