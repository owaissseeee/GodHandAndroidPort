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

// Function: EspAnim2_stepLoop
// Address: 0x2fcf88 - 0x2fd078
void EspAnim2_stepLoop_0x2fcf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EspAnim2_stepLoop_0x2fcf88");
#endif

    switch (ctx->pc) {
        case 0x2fcfe8u: goto label_2fcfe8;
        default: break;
    }

    ctx->pc = 0x2fcf88u;

    // 0x2fcf88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fcf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fcf8c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2fcf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2fcf90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fcf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fcf94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fcf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fcf98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fcf98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcf9c: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x2fcf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2fcfa0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2fcfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2fcfa4: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2FCFA4u;
    {
        const bool branch_taken_0x2fcfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcfa4) {
            ctx->pc = 0x2FCFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCFA4u;
            // 0x2fcfa8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD068u;
            goto label_2fd068;
        }
    }
    ctx->pc = 0x2FCFACu;
    // 0x2fcfac: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fcfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2fcfb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fcfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fcfb4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fcfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2fcfb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCFB8u;
    {
        const bool branch_taken_0x2fcfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCFB8u;
        // 0x2fcfbc: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcfb8) {
            ctx->pc = 0x2FCFCCu;
            goto label_2fcfcc;
        }
    }
    ctx->pc = 0x2FCFC0u;
    // 0x2fcfc0: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x2fcfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x2fcfc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCFC4u;
    {
        const bool branch_taken_0x2fcfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCFC4u;
        // 0x2fcfc8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcfc4) {
            ctx->pc = 0x2FCFE0u;
            goto label_2fcfe0;
        }
    }
    ctx->pc = 0x2FCFCCu;
label_2fcfcc:
    // 0x2fcfcc: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2fcfccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2fcfd0: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2fcfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2fcfd4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fcfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fcfd8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FCFD8u;
    {
        const bool branch_taken_0x2fcfd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcfd8) {
            ctx->pc = 0x2FCFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCFD8u;
            // 0x2fcfdc: 0xc6000240  lwc1        $f0, 0x240($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCFF0u;
            goto label_2fcff0;
        }
    }
    ctx->pc = 0x2FCFE0u;
label_2fcfe0:
    // 0x2fcfe0: 0xc0be8d4  jal         func_2FA350
    ctx->pc = 0x2FCFE0u;
    SET_GPR_U32(ctx, 31, 0x2FCFE8u);
    ctx->pc = 0x2FCFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCFE0u;
    // 0x2fcfe4: 0x26040240  addiu       $a0, $s0, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA350u, 0x2FCFE0u, 0x2FCFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCFE8u;
label_2fcfe8:
    // 0x2fcfe8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FCFE8u;
    {
        const bool branch_taken_0x2fcfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCFE8u;
        // 0x2fcfec: 0xc6000240  lwc1        $f0, 0x240($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcfe8) {
            ctx->pc = 0x2FD008u;
            goto label_2fd008;
        }
    }
    ctx->pc = 0x2FCFF0u;
label_2fcff0:
    // 0x2fcff0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fcff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fcff4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fcff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fcff8: 0x0  nop
    ctx->pc = 0x2fcff8u;
    // NOP
    // 0x2fcffc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fcffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fd000: 0xe6000240  swc1        $f0, 0x240($s0)
    ctx->pc = 0x2fd000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
    // 0x2fd004: 0xc6000240  lwc1        $f0, 0x240($s0)
    ctx->pc = 0x2fd004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fd008:
    // 0x2fd008: 0x8203023f  lb          $v1, 0x23F($s0)
    ctx->pc = 0x2fd008u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 575)));
    // 0x2fd00c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fd00cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2fd010: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2fd010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fd014: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2fd014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2fd018: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2fd018u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2fd01c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2fd01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fd020: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FD020u;
    {
        const bool branch_taken_0x2fd020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd020) {
            ctx->pc = 0x2FD024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD020u;
            // 0x2fd024: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD068u;
            goto label_2fd068;
        }
    }
    ctx->pc = 0x2FD028u;
    // 0x2fd028: 0x92050244  lbu         $a1, 0x244($s0)
    ctx->pc = 0x2fd028u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x2fd02c: 0x820402a0  lb          $a0, 0x2A0($s0)
    ctx->pc = 0x2fd02cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 672)));
    // 0x2fd030: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2fd030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fd034: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x2fd034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x2fd038: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2fd038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2fd03c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2fd03cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2fd040: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2fd040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2fd044: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FD044u;
    {
        const bool branch_taken_0x2fd044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD044u;
        // 0x2fd048: 0xa2030244  sb          $v1, 0x244($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 580), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd044) {
            ctx->pc = 0x2FD064u;
            goto label_2fd064;
        }
    }
    ctx->pc = 0x2FD04Cu;
    // 0x2fd04c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x2fd04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2fd050: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2fd050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x2fd054: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fd054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fd058: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FD058u;
    {
        const bool branch_taken_0x2fd058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd058) {
            ctx->pc = 0x2FD05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD058u;
            // 0x2fd05c: 0xa2050244  sb          $a1, 0x244($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 580), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD064u;
            goto label_2fd064;
        }
    }
    ctx->pc = 0x2FD060u;
    // 0x2fd060: 0xa2000244  sb          $zero, 0x244($s0)
    ctx->pc = 0x2fd060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 580), (uint8_t)GPR_U32(ctx, 0));
label_2fd064:
    // 0x2fd064: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fd064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd068:
    // 0x2fd068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fd068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd06c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD06Cu;
        // 0x2fd070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD074u;
    // 0x2fd074: 0x0  nop
    ctx->pc = 0x2fd074u;
    // NOP
    ctx->pc = 0x2fd078u;
}
