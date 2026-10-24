#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: calcNextFrameStop__9cEventEnv
// Address: 0x7adeb8 - 0x7adf80
void calcNextFrameStop__9cEventEnv_0x7adeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calcNextFrameStop__9cEventEnv_0x7adeb8");
#endif

    switch (ctx->pc) {
        case 0x7aded8u: goto label_7aded8;
        case 0x7adf38u: goto label_7adf38;
        case 0x7adf48u: goto label_7adf48;
        case 0x7adf5cu: goto label_7adf5c;
        case 0x7adf6cu: goto label_7adf6c;
        default: break;
    }

    ctx->pc = 0x7adeb8u;

    // 0x7adeb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7adeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7adebc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7adebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7adec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7adec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7adec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7adec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7adec8: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7adec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7adecc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x7adeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7aded0: 0xc1eb3b8  jal         func_7ACEE0
    ctx->pc = 0x7ADED0u;
    SET_GPR_U32(ctx, 31, 0x7ADED8u);
    ctx->pc = 0x7ADED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADED0u;
    // 0x7aded4: 0x24845248  addiu       $a0, $a0, 0x5248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACEE0u, 0x7ADED0u, 0x7ADED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADED8u;
label_7aded8:
    // 0x7aded8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7ADED8u;
    {
        const bool branch_taken_0x7aded8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7ADEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADED8u;
        // 0x7adedc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aded8) {
            ctx->pc = 0x7ADEF4u;
            goto label_7adef4;
        }
    }
    ctx->pc = 0x7ADEE0u;
    // 0x7adee0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x7adee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7adee4: 0x0  nop
    ctx->pc = 0x7adee4u;
    // NOP
    // 0x7adee8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x7adee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x7adeec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7ADEECu;
    {
        const bool branch_taken_0x7adeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7adeec) {
            ctx->pc = 0x7ADF0Cu;
            goto label_7adf0c;
        }
    }
    ctx->pc = 0x7ADEF4u;
label_7adef4:
    // 0x7adef4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7adef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7adef8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7adef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7adefc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x7adefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7adf00: 0x0  nop
    ctx->pc = 0x7adf00u;
    // NOP
    // 0x7adf04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x7adf04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x7adf08: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x7adf08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_7adf0c:
    // 0x7adf0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7adf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7adf10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7adf10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7adf14: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x7adf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7adf18: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x7adf18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x7adf1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x7adf1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7adf20: 0x0  nop
    ctx->pc = 0x7adf20u;
    // NOP
    // 0x7adf24: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x7ADF24u;
    {
        const bool branch_taken_0x7adf24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7adf24) {
            ctx->pc = 0x7ADF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADF24u;
            // 0x7adf28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ADF70u;
            goto label_7adf70;
        }
    }
    ctx->pc = 0x7ADF2Cu;
    // 0x7adf2c: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7adf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7adf30: 0xc1ec098  jal         func_7B0260
    ctx->pc = 0x7ADF30u;
    SET_GPR_U32(ctx, 31, 0x7ADF38u);
    ctx->pc = 0x7ADF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADF30u;
    // 0x7adf34: 0x248458d0  addiu       $a0, $a0, 0x58D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0260u, 0x7ADF30u, 0x7ADF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADF38u;
label_7adf38:
    // 0x7adf38: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x7ADF38u;
    {
        const bool branch_taken_0x7adf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7adf38) {
            ctx->pc = 0x7ADF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADF38u;
            // 0x7adf3c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ADF70u;
            goto label_7adf70;
        }
    }
    ctx->pc = 0x7ADF40u;
    // 0x7adf40: 0xc1eb7e0  jal         func_7ADF80
    ctx->pc = 0x7ADF40u;
    SET_GPR_U32(ctx, 31, 0x7ADF48u);
    ctx->pc = 0x7ADF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADF40u;
    // 0x7adf44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ADF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ADF80u, 0x7ADF40u, 0x7ADF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADF48u;
label_7adf48:
    // 0x7adf48: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x7ADF48u;
    {
        const bool branch_taken_0x7adf48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7adf48) {
            ctx->pc = 0x7ADF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADF48u;
            // 0x7adf4c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ADF70u;
            goto label_7adf70;
        }
    }
    ctx->pc = 0x7ADF50u;
    // 0x7adf50: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x7adf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7adf54: 0xc1eb892  jal         func_7AE248
    ctx->pc = 0x7ADF54u;
    SET_GPR_U32(ctx, 31, 0x7ADF5Cu);
    ctx->pc = 0x7ADF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADF54u;
    // 0x7adf58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE248u, 0x7ADF54u, 0x7ADF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADF5Cu;
label_7adf5c:
    // 0x7adf5c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7ADF5Cu;
    {
        const bool branch_taken_0x7adf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7adf5c) {
            ctx->pc = 0x7ADF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADF5Cu;
            // 0x7adf60: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ADF70u;
            goto label_7adf70;
        }
    }
    ctx->pc = 0x7ADF64u;
    // 0x7adf64: 0xc1eb85a  jal         func_7AE168
    ctx->pc = 0x7ADF64u;
    SET_GPR_U32(ctx, 31, 0x7ADF6Cu);
    ctx->pc = 0x7ADF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADF64u;
    // 0x7adf68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE168u, 0x7ADF64u, 0x7ADF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADF6Cu;
label_7adf6c:
    // 0x7adf6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7adf6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7adf70:
    // 0x7adf70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7adf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7adf74: 0x3e00008  jr          $ra
    ctx->pc = 0x7ADF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ADF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADF74u;
        // 0x7adf78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ADF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ADF7Cu;
    // 0x7adf7c: 0x0  nop
    ctx->pc = 0x7adf7cu;
    // NOP
    ctx->pc = 0x7adf80u;
}
} // namespace gh_event
