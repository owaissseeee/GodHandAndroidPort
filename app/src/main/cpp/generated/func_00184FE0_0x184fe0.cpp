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

// Function: func_00184FE0
// Address: 0x184fe0 - 0x1850b0
void func_00184FE0_0x184fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00184FE0_0x184fe0");
#endif

    switch (ctx->pc) {
        case 0x185094u: goto label_185094;
        default: break;
    }

    ctx->pc = 0x184fe0u;

    // 0x184fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184fe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x184fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184fe8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x184fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x184fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184ff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184ff4: 0x86020626  lh          $v0, 0x626($s0)
    ctx->pc = 0x184ff4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1574)));
    // 0x184ff8: 0x86030634  lh          $v1, 0x634($s0)
    ctx->pc = 0x184ff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1588)));
    // 0x184ffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x184ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185000: 0x0  nop
    ctx->pc = 0x185000u;
    // NOP
    // 0x185004: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x185004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x185008: 0x92040659  lbu         $a0, 0x659($s0)
    ctx->pc = 0x185008u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1625)));
    // 0x18500c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18500cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185010: 0x0  nop
    ctx->pc = 0x185010u;
    // NOP
    // 0x185014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x185014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x185018: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x185018u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x18501c: 0x10850014  beq         $a0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x18501Cu;
    {
        const bool branch_taken_0x18501c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x185020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18501Cu;
        // 0x185020: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18501c) {
            ctx->pc = 0x185070u;
            goto label_185070;
        }
    }
    ctx->pc = 0x185024u;
    // 0x185024: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x185024u;
    {
        const bool branch_taken_0x185024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185024) {
            ctx->pc = 0x185028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185024u;
            // 0x185028: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18503Cu;
            goto label_18503c;
        }
    }
    ctx->pc = 0x18502Cu;
    // 0x18502c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18502Cu;
    {
        const bool branch_taken_0x18502c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18502c) {
            ctx->pc = 0x18504Cu;
            goto label_18504c;
        }
    }
    ctx->pc = 0x185034u;
    // 0x185034: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x185034u;
    {
        const bool branch_taken_0x185034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185034u;
        // 0x185038: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185034) {
            ctx->pc = 0x1850A4u;
            goto label_1850a4;
        }
    }
    ctx->pc = 0x18503Cu;
label_18503c:
    // 0x18503c: 0x50820018  beql        $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x18503Cu;
    {
        const bool branch_taken_0x18503c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x18503c) {
            ctx->pc = 0x185040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18503Cu;
            // 0x185040: 0xa2050660  sb          $a1, 0x660($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1632), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1850A0u;
            goto label_1850a0;
        }
    }
    ctx->pc = 0x185044u;
    // 0x185044: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x185044u;
    {
        const bool branch_taken_0x185044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185044u;
        // 0x185048: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185044) {
            ctx->pc = 0x1850A4u;
            goto label_1850a4;
        }
    }
    ctx->pc = 0x18504Cu;
label_18504c:
    // 0x18504c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18504cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x185050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x185050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185054: 0x0  nop
    ctx->pc = 0x185054u;
    // NOP
    // 0x185058: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18505c: 0x0  nop
    ctx->pc = 0x18505cu;
    // NOP
    // 0x185060: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x185060u;
    {
        const bool branch_taken_0x185060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185060u;
        // 0x185064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185060) {
            ctx->pc = 0x1850A0u;
            goto label_1850a0;
        }
    }
    ctx->pc = 0x185068u;
    // 0x185068: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x185068u;
    {
        const bool branch_taken_0x185068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185068u;
        // 0x18506c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185068) {
            ctx->pc = 0x18508Cu;
            goto label_18508c;
        }
    }
    ctx->pc = 0x185070u;
label_185070:
    // 0x185070: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185074: 0x0  nop
    ctx->pc = 0x185074u;
    // NOP
    // 0x185078: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185078u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18507c: 0x0  nop
    ctx->pc = 0x18507cu;
    // NOP
    // 0x185080: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x185080u;
    {
        const bool branch_taken_0x185080 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185080u;
        // 0x185084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185080) {
            ctx->pc = 0x1850A0u;
            goto label_1850a0;
        }
    }
    ctx->pc = 0x185088u;
    // 0x185088: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x185088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18508c:
    // 0x18508c: 0xc06179a  jal         func_185E68
    ctx->pc = 0x18508Cu;
    SET_GPR_U32(ctx, 31, 0x185094u);
    ctx->pc = 0x185E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185E68u, 0x18508Cu, 0x185094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185094u;
label_185094:
    // 0x185094: 0x92020659  lbu         $v0, 0x659($s0)
    ctx->pc = 0x185094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1625)));
    // 0x185098: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x185098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18509c: 0xa2020659  sb          $v0, 0x659($s0)
    ctx->pc = 0x18509cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1625), (uint8_t)GPR_U32(ctx, 2));
label_1850a0:
    // 0x1850a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1850a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1850a4:
    // 0x1850a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1850a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1850a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1850A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1850ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1850A8u;
        // 0x1850ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1850A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1850B0u;
}
