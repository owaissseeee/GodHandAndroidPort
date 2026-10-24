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

// Function: func_003ACD20
// Address: 0x3acd20 - 0x3ace90
void func_003ACD20_0x3acd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003ACD20_0x3acd20");
#endif

    switch (ctx->pc) {
        case 0x3acd48u: goto label_3acd48;
        case 0x3acd84u: goto label_3acd84;
        case 0x3acd90u: goto label_3acd90;
        case 0x3acda8u: goto label_3acda8;
        case 0x3acdd0u: goto label_3acdd0;
        case 0x3acdecu: goto label_3acdec;
        case 0x3ace30u: goto label_3ace30;
        case 0x3ace68u: goto label_3ace68;
        default: break;
    }

    ctx->pc = 0x3acd20u;

    // 0x3acd20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3acd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3acd24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3acd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3acd28: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3acd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3acd2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3acd2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acd30: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3acd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3acd34: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3acd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3acd38: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3acd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3acd3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3acd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3acd40: 0xc0ea012  jal         func_3A8048
    ctx->pc = 0x3ACD40u;
    SET_GPR_U32(ctx, 31, 0x3ACD48u);
    ctx->pc = 0x3ACD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD40u;
    // 0x3acd44: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8048u, 0x3ACD40u, 0x3ACD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACD48u;
label_3acd48:
    // 0x3acd48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3acd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3acd4c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3acd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3acd50: 0x2454a9d0  addiu       $s4, $v0, -0x5630
    ctx->pc = 0x3acd50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945232));
    // 0x3acd54: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3acd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3acd58: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x3acd58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA9D8u));
    // 0x3acd5c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3acd5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3acd60: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x3acd60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x3acd64: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x3acd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3acd68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3acd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3acd6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3acd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3acd70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3acd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3acd74: 0x2883e  dsrl32      $s1, $v0, 0
    ctx->pc = 0x3acd74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3acd78: 0x230802f  dsubu       $s0, $s1, $s0
    ctx->pc = 0x3acd78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x3acd7c: 0xc0ee3a2  jal         func_3B8E88
    ctx->pc = 0x3ACD7Cu;
    SET_GPR_U32(ctx, 31, 0x3ACD84u);
    ctx->pc = 0x3ACD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD7Cu;
    // 0x3acd80: 0x66040fef  daddiu      $a0, $s0, 0xFEF (Delay Slot)
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4079);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8E88u, 0x3ACD7Cu, 0x3ACD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACD84u;
label_3acd84:
    // 0x3acd84: 0x6444ffff  daddiu      $a0, $v0, -0x1
    ctx->pc = 0x3acd84u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x3acd88: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x3ACD88u;
    SET_GPR_U32(ctx, 31, 0x3ACD90u);
    ctx->pc = 0x3ACD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD88u;
    // 0x3acd8c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x3ACD88u, 0x3ACD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACD90u;
label_3acd90:
    // 0x3acd90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3acd90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acd94: 0x2a021000  slti        $v0, $s0, 0x1000
    ctx->pc = 0x3acd94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x3acd98: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3ACD98u;
    {
        const bool branch_taken_0x3acd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD98u;
        // 0x3acd9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acd98) {
            ctx->pc = 0x3ACE28u;
            goto label_3ace28;
        }
    }
    ctx->pc = 0x3ACDA0u;
    // 0x3acda0: 0xc0eb832  jal         func_3AE0C8
    ctx->pc = 0x3ACDA0u;
    SET_GPR_U32(ctx, 31, 0x3ACDA8u);
    ctx->pc = 0x3ACDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACDA0u;
    // 0x3acda4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE0C8u, 0x3ACDA0u, 0x3ACDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACDA8u;
label_3acda8:
    // 0x3acda8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x3acda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3acdac: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x3acdacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3acdb0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3acdb0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3acdb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3acdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3acdb8: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3ACDB8u;
    {
        const bool branch_taken_0x3acdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3ACDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDB8u;
        // 0x3acdbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acdb8) {
            ctx->pc = 0x3ACE28u;
            goto label_3ace28;
        }
    }
    ctx->pc = 0x3ACDC0u;
    // 0x3acdc0: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3acdc0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3acdc4: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3acdc4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3acdc8: 0xc0eb832  jal         func_3AE0C8
    ctx->pc = 0x3ACDC8u;
    SET_GPR_U32(ctx, 31, 0x3ACDD0u);
    ctx->pc = 0x3ACDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACDC8u;
    // 0x3acdcc: 0x132823  negu        $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE0C8u, 0x3ACDC8u, 0x3ACDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACDD0u;
label_3acdd0:
    // 0x3acdd0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3acdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3acdd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3acdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3acdd8: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3ACDD8u;
    {
        const bool branch_taken_0x3acdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3ACDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDD8u;
        // 0x3acddc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acdd8) {
            ctx->pc = 0x3ACE38u;
            goto label_3ace38;
        }
    }
    ctx->pc = 0x3ACDE0u;
    // 0x3acde0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3acde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acde4: 0xc0eb832  jal         func_3AE0C8
    ctx->pc = 0x3ACDE4u;
    SET_GPR_U32(ctx, 31, 0x3ACDECu);
    ctx->pc = 0x3ACDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACDE4u;
    // 0x3acde8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE0C8u, 0x3ACDE4u, 0x3ACDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACDECu;
label_3acdec:
    // 0x3acdec: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x3acdecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3acdf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3acdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acdf4: 0xa68823  subu        $s1, $a1, $a2
    ctx->pc = 0x3acdf4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3acdf8: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x3acdf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3acdfc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3ACDFCu;
    {
        const bool branch_taken_0x3acdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACDFCu;
        // 0x3ace00: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acdfc) {
            ctx->pc = 0x3ACE28u;
            goto label_3ace28;
        }
    }
    ctx->pc = 0x3ACE04u;
    // 0x3ace04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ace04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ace08: 0x8c83ade8  lw          $v1, -0x5218($a0)
    ctx->pc = 0x3ace08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946280)));
    // 0x3ace0c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x3ace0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3ace10: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3ace10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3ace14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ace14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ace18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ace18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ace1c: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x3ace1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3ace20: 0xac83ae00  sw          $v1, -0x5200($a0)
    ctx->pc = 0x3ace20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294946304), GPR_U32(ctx, 3));
    // 0x3ace24: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x3ace24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_3ace28:
    // 0x3ace28: 0xc0ea02a  jal         func_3A80A8
    ctx->pc = 0x3ACE28u;
    SET_GPR_U32(ctx, 31, 0x3ACE30u);
    ctx->pc = 0x3ACE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACE28u;
    // 0x3ace2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A80A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A80A8u, 0x3ACE28u, 0x3ACE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACE30u;
label_3ace30:
    // 0x3ace30: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3ACE30u;
    {
        const bool branch_taken_0x3ace30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE30u;
        // 0x3ace34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ace30) {
            ctx->pc = 0x3ACE6Cu;
            goto label_3ace6c;
        }
    }
    ctx->pc = 0x3ACE38u;
label_3ace38:
    // 0x3ace38: 0x230102f  dsubu       $v0, $s1, $s0
    ctx->pc = 0x3ace38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x3ace3c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x3ace3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3ace40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ace40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ace44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ace44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ace48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ace48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ace4c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3ace4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3ace50: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ace50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ace54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ace54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ace58: 0x8c62ae00  lw          $v0, -0x5200($v1)
    ctx->pc = 0x3ace58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAE00u));
    // 0x3ace5c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3ace5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3ace60: 0xc0ea02a  jal         func_3A80A8
    ctx->pc = 0x3ACE60u;
    SET_GPR_U32(ctx, 31, 0x3ACE68u);
    ctx->pc = 0x3ACE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACE60u;
    // 0x3ace64: 0xac62ae00  sw          $v0, -0x5200($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A80A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A80A8u, 0x3ACE60u, 0x3ACE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACE68u;
label_3ace68:
    // 0x3ace68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ace68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ace6c:
    // 0x3ace6c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ace6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ace70: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ace70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ace74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ace74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ace78: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3ace78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ace7c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3ace7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ace80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ace80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ace84: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACE84u;
        // 0x3ace88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACE8Cu;
    // 0x3ace8c: 0x0  nop
    ctx->pc = 0x3ace8cu;
    // NOP
    ctx->pc = 0x3ace90u;
}
