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
// Function: calcNextFrameNormal__9cEventEnv
// Address: 0x7add28 - 0x7ade58
void calcNextFrameNormal__9cEventEnv_0x7add28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calcNextFrameNormal__9cEventEnv_0x7add28");
#endif

    switch (ctx->pc) {
        case 0x7add4cu: goto label_7add4c;
        case 0x7addd4u: goto label_7addd4;
        case 0x7ade34u: goto label_7ade34;
        case 0x7ade44u: goto label_7ade44;
        default: break;
    }

    ctx->pc = 0x7add28u;

    // 0x7add28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7add28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7add2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7add2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7add30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7add30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7add34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7add34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7add38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7add38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7add3c: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7add3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7add40: 0x24845248  addiu       $a0, $a0, 0x5248
    ctx->pc = 0x7add40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21064));
    // 0x7add44: 0xc1eb3b8  jal         func_7ACEE0
    ctx->pc = 0x7ADD44u;
    SET_GPR_U32(ctx, 31, 0x7ADD4Cu);
    ctx->pc = 0x7ADD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADD44u;
    // 0x7add48: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACEE0u, 0x7ADD44u, 0x7ADD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADD4Cu;
label_7add4c:
    // 0x7add4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7add4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7add50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x7add50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7add54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x7add54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7add58: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x7add58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x7add5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x7add5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x7add60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7add60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x7add64: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x7add64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x7add68: 0x1465001a  bne         $v1, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x7ADD68u;
    {
        const bool branch_taken_0x7add68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x7ADD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADD68u;
        // 0x7add6c: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7add68) {
            ctx->pc = 0x7ADDD4u;
            goto label_7addd4;
        }
    }
    ctx->pc = 0x7ADD70u;
    // 0x7add70: 0x2624ffe2  addiu       $a0, $s1, -0x1E
    ctx->pc = 0x7add70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967266));
    // 0x7add74: 0x8c626b34  lw          $v0, 0x6B34($v1)
    ctx->pc = 0x7add74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27444)));
    // 0x7add78: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x7add78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x7add7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7add7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7add80: 0x222200b  movn        $a0, $s1, $v0
    ctx->pc = 0x7add80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
    // 0x7add84: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7ADD84u;
    {
        const bool branch_taken_0x7add84 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x7ADD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADD84u;
        // 0x7add88: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7add84) {
            ctx->pc = 0x7ADDA0u;
            goto label_7adda0;
        }
    }
    ctx->pc = 0x7ADD8Cu;
    // 0x7add8c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x7add8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7add90: 0x0  nop
    ctx->pc = 0x7add90u;
    // NOP
    // 0x7add94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x7add94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x7add98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x7ADD98u;
    {
        const bool branch_taken_0x7add98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ADD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADD98u;
        // 0x7add9c: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7add98) {
            ctx->pc = 0x7ADDBCu;
            goto label_7addbc;
        }
    }
    ctx->pc = 0x7ADDA0u;
label_7adda0:
    // 0x7adda0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x7adda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x7adda4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7adda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7adda8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x7adda8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7addac: 0x0  nop
    ctx->pc = 0x7addacu;
    // NOP
    // 0x7addb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x7addb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x7addb4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x7addb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x7addb8: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x7addb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7addbc:
    // 0x7addbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x7addbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7addc0: 0x0  nop
    ctx->pc = 0x7addc0u;
    // NOP
    // 0x7addc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x7ADDC4u;
    {
        const bool branch_taken_0x7addc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7ADDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADDC4u;
        // 0x7addc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7addc4) {
            ctx->pc = 0x7ADDD4u;
            goto label_7addd4;
        }
    }
    ctx->pc = 0x7ADDCCu;
    // 0x7addcc: 0xc1eb924  jal         func_7AE490
    ctx->pc = 0x7ADDCCu;
    SET_GPR_U32(ctx, 31, 0x7ADDD4u);
    ctx->pc = 0x7ADDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADDCCu;
    // 0x7addd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE490u, 0x7ADDCCu, 0x7ADDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADDD4u;
label_7addd4:
    // 0x7addd4: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7ADDD4u;
    {
        const bool branch_taken_0x7addd4 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x7ADDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADDD4u;
        // 0x7addd8: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7addd4) {
            ctx->pc = 0x7ADDF0u;
            goto label_7addf0;
        }
    }
    ctx->pc = 0x7ADDDCu;
    // 0x7adddc: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x7adddcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7adde0: 0x0  nop
    ctx->pc = 0x7adde0u;
    // NOP
    // 0x7adde4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x7adde4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x7adde8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7ADDE8u;
    {
        const bool branch_taken_0x7adde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7adde8) {
            ctx->pc = 0x7ADE08u;
            goto label_7ade08;
        }
    }
    ctx->pc = 0x7ADDF0u;
label_7addf0:
    // 0x7addf0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x7addf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x7addf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7addf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7addf8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x7addf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7addfc: 0x0  nop
    ctx->pc = 0x7addfcu;
    // NOP
    // 0x7ade00: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x7ade00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x7ade04: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x7ade04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_7ade08:
    // 0x7ade08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7ade08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7ade0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7ade0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ade10: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x7ade10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ade14: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x7ade14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x7ade18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x7ade18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ade1c: 0x0  nop
    ctx->pc = 0x7ade1cu;
    // NOP
    // 0x7ade20: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x7ADE20u;
    {
        const bool branch_taken_0x7ade20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ade20) {
            ctx->pc = 0x7ADE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADE20u;
            // 0x7ade24: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ADE48u;
            goto label_7ade48;
        }
    }
    ctx->pc = 0x7ADE28u;
    // 0x7ade28: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x7ade28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7ade2c: 0xc1eb892  jal         func_7AE248
    ctx->pc = 0x7ADE2Cu;
    SET_GPR_U32(ctx, 31, 0x7ADE34u);
    ctx->pc = 0x7ADE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADE2Cu;
    // 0x7ade30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE248u, 0x7ADE2Cu, 0x7ADE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADE34u;
label_7ade34:
    // 0x7ade34: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7ADE34u;
    {
        const bool branch_taken_0x7ade34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ade34) {
            ctx->pc = 0x7ADE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ADE34u;
            // 0x7ade38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ADE48u;
            goto label_7ade48;
        }
    }
    ctx->pc = 0x7ADE3Cu;
    // 0x7ade3c: 0xc1eb85a  jal         func_7AE168
    ctx->pc = 0x7ADE3Cu;
    SET_GPR_U32(ctx, 31, 0x7ADE44u);
    ctx->pc = 0x7ADE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADE3Cu;
    // 0x7ade40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE168u, 0x7ADE3Cu, 0x7ADE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADE44u;
label_7ade44:
    // 0x7ade44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7ade44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7ade48:
    // 0x7ade48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7ade48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ade4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ade4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ade50: 0x3e00008  jr          $ra
    ctx->pc = 0x7ADE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ADE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADE50u;
        // 0x7ade54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ADE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ADE58u;
}
} // namespace gh_event
