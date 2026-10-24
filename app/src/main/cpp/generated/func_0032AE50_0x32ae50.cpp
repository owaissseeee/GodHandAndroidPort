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

// Function: func_0032AE50
// Address: 0x32ae50 - 0x32af40
void func_0032AE50_0x32ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032AE50_0x32ae50");
#endif

    switch (ctx->pc) {
        case 0x32ae50u: goto label_32ae50;
        case 0x32ae54u: goto label_32ae54;
        case 0x32ae58u: goto label_32ae58;
        case 0x32ae5cu: goto label_32ae5c;
        case 0x32ae60u: goto label_32ae60;
        case 0x32ae64u: goto label_32ae64;
        case 0x32ae68u: goto label_32ae68;
        case 0x32ae6cu: goto label_32ae6c;
        case 0x32ae70u: goto label_32ae70;
        case 0x32ae74u: goto label_32ae74;
        case 0x32ae78u: goto label_32ae78;
        case 0x32ae7cu: goto label_32ae7c;
        case 0x32ae80u: goto label_32ae80;
        case 0x32ae84u: goto label_32ae84;
        case 0x32ae88u: goto label_32ae88;
        case 0x32ae8cu: goto label_32ae8c;
        case 0x32ae90u: goto label_32ae90;
        case 0x32ae94u: goto label_32ae94;
        case 0x32ae98u: goto label_32ae98;
        case 0x32ae9cu: goto label_32ae9c;
        case 0x32aea0u: goto label_32aea0;
        case 0x32aea4u: goto label_32aea4;
        case 0x32aea8u: goto label_32aea8;
        case 0x32aeacu: goto label_32aeac;
        case 0x32aeb0u: goto label_32aeb0;
        case 0x32aeb4u: goto label_32aeb4;
        case 0x32aeb8u: goto label_32aeb8;
        case 0x32aebcu: goto label_32aebc;
        case 0x32aec0u: goto label_32aec0;
        case 0x32aec4u: goto label_32aec4;
        case 0x32aec8u: goto label_32aec8;
        case 0x32aeccu: goto label_32aecc;
        case 0x32aed0u: goto label_32aed0;
        case 0x32aed4u: goto label_32aed4;
        case 0x32aed8u: goto label_32aed8;
        case 0x32aedcu: goto label_32aedc;
        case 0x32aee0u: goto label_32aee0;
        case 0x32aee4u: goto label_32aee4;
        case 0x32aee8u: goto label_32aee8;
        case 0x32aeecu: goto label_32aeec;
        case 0x32aef0u: goto label_32aef0;
        case 0x32aef4u: goto label_32aef4;
        case 0x32aef8u: goto label_32aef8;
        case 0x32aefcu: goto label_32aefc;
        case 0x32af00u: goto label_32af00;
        case 0x32af04u: goto label_32af04;
        case 0x32af08u: goto label_32af08;
        case 0x32af0cu: goto label_32af0c;
        case 0x32af10u: goto label_32af10;
        case 0x32af14u: goto label_32af14;
        case 0x32af18u: goto label_32af18;
        case 0x32af1cu: goto label_32af1c;
        case 0x32af20u: goto label_32af20;
        case 0x32af24u: goto label_32af24;
        case 0x32af28u: goto label_32af28;
        case 0x32af2cu: goto label_32af2c;
        case 0x32af30u: goto label_32af30;
        case 0x32af34u: goto label_32af34;
        case 0x32af38u: goto label_32af38;
        case 0x32af3cu: goto label_32af3c;
        default: break;
    }

    ctx->pc = 0x32ae50u;

label_32ae50:
    // 0x32ae50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32ae54:
    // 0x32ae54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_32ae58:
    // 0x32ae58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32ae58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32ae5c:
    // 0x32ae5c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x32ae5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_32ae60:
    // 0x32ae60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32ae64:
    // 0x32ae64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32ae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_32ae68:
    // 0x32ae68: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x32ae68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_32ae6c:
    // 0x32ae6c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_32ae70:
    if (ctx->pc == 0x32AE70u) {
        ctx->pc = 0x32AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE6Cu;
        // 0x32ae70: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE74u;
        goto label_32ae74;
    }
    ctx->pc = 0x32AE6Cu;
    {
        const bool branch_taken_0x32ae6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE6Cu;
        // 0x32ae70: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae6c) {
            ctx->pc = 0x32AE90u;
            goto label_32ae90;
        }
    }
    ctx->pc = 0x32AE74u;
label_32ae74:
    // 0x32ae74: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32ae78:
    // 0x32ae78: 0xc0cfc4c  jal         func_33F130
label_32ae7c:
    if (ctx->pc == 0x32AE7Cu) {
        ctx->pc = 0x32AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE78u;
        // 0x32ae7c: 0x24842438  addiu       $a0, $a0, 0x2438 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE80u;
        goto label_32ae80;
    }
    ctx->pc = 0x32AE78u;
    SET_GPR_U32(ctx, 31, 0x32AE80u);
    ctx->pc = 0x32AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE78u;
    // 0x32ae7c: 0x24842438  addiu       $a0, $a0, 0x2438 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32AE78u, 0x32AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE80u;
label_32ae80:
    // 0x32ae80: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x32ae80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_32ae84:
    // 0x32ae84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32ae84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32ae88:
    // 0x32ae88: 0x10000024  b           . + 4 + (0x24 << 2)
label_32ae8c:
    if (ctx->pc == 0x32AE8Cu) {
        ctx->pc = 0x32AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE88u;
        // 0x32ae8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AE90u;
        goto label_32ae90;
    }
    ctx->pc = 0x32AE88u;
    {
        const bool branch_taken_0x32ae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE88u;
        // 0x32ae8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae88) {
            ctx->pc = 0x32AF1Cu;
            goto label_32af1c;
        }
    }
    ctx->pc = 0x32AE90u;
label_32ae90:
    // 0x32ae90: 0xc0ca7f4  jal         func_329FD0
label_32ae94:
    if (ctx->pc == 0x32AE94u) {
        ctx->pc = 0x32AE98u;
        goto label_32ae98;
    }
    ctx->pc = 0x32AE90u;
    SET_GPR_U32(ctx, 31, 0x32AE98u);
    ctx->pc = 0x329FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329FD0u, 0x32AE90u, 0x32AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE98u;
label_32ae98:
    // 0x32ae98: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x32ae98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_32ae9c:
    // 0x32ae9c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_32aea0:
    if (ctx->pc == 0x32AEA0u) {
        ctx->pc = 0x32AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE9Cu;
        // 0x32aea0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEA4u;
        goto label_32aea4;
    }
    ctx->pc = 0x32AE9Cu;
    {
        const bool branch_taken_0x32ae9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE9Cu;
        // 0x32aea0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae9c) {
            ctx->pc = 0x32AF18u;
            goto label_32af18;
        }
    }
    ctx->pc = 0x32AEA4u;
label_32aea4:
    // 0x32aea4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x32aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_32aea8:
    // 0x32aea8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_32aeac:
    if (ctx->pc == 0x32AEACu) {
        ctx->pc = 0x32AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEA8u;
        // 0x32aeac: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEB0u;
        goto label_32aeb0;
    }
    ctx->pc = 0x32AEA8u;
    {
        const bool branch_taken_0x32aea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEA8u;
        // 0x32aeac: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aea8) {
            ctx->pc = 0x32AF18u;
            goto label_32af18;
        }
    }
    ctx->pc = 0x32AEB0u;
label_32aeb0:
    // 0x32aeb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32aeb4:
    // 0x32aeb4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x32aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_32aeb8:
    // 0x32aeb8: 0x40f809  jalr        $v0
label_32aebc:
    if (ctx->pc == 0x32AEBCu) {
        ctx->pc = 0x32AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEB8u;
        // 0x32aebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEC0u;
        goto label_32aec0;
    }
    ctx->pc = 0x32AEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32AEC0u);
        ctx->pc = 0x32AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEB8u;
        // 0x32aebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AEB8u, 0x32AEC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AEC0u;
label_32aec0:
    // 0x32aec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32aec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32aec4:
    // 0x32aec4: 0xc0ca97c  jal         func_32A5F0
label_32aec8:
    if (ctx->pc == 0x32AEC8u) {
        ctx->pc = 0x32AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEC4u;
        // 0x32aec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AECCu;
        goto label_32aecc;
    }
    ctx->pc = 0x32AEC4u;
    SET_GPR_U32(ctx, 31, 0x32AECCu);
    ctx->pc = 0x32AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AEC4u;
    // 0x32aec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A5F0u, 0x32AEC4u, 0x32AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AECCu;
label_32aecc:
    // 0x32aecc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32aeccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32aed0:
    // 0x32aed0: 0xc0ca95a  jal         func_32A568
label_32aed4:
    if (ctx->pc == 0x32AED4u) {
        ctx->pc = 0x32AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AED0u;
        // 0x32aed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AED8u;
        goto label_32aed8;
    }
    ctx->pc = 0x32AED0u;
    SET_GPR_U32(ctx, 31, 0x32AED8u);
    ctx->pc = 0x32AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AED0u;
    // 0x32aed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A568u, 0x32AED0u, 0x32AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AED8u;
label_32aed8:
    // 0x32aed8: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x32aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_32aedc:
    // 0x32aedc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x32aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_32aee0:
    // 0x32aee0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32aee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_32aee4:
    // 0x32aee4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32aee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_32aee8:
    // 0x32aee8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_32aeec:
    // 0x32aeec: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x32aeecu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_32aef0:
    // 0x32aef0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_32aef4:
    if (ctx->pc == 0x32AEF4u) {
        ctx->pc = 0x32AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEF0u;
        // 0x32aef4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEF8u;
        goto label_32aef8;
    }
    ctx->pc = 0x32AEF0u;
    {
        const bool branch_taken_0x32aef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aef0) {
            ctx->pc = 0x32AEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AEF0u;
            // 0x32aef4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AEF8u;
            goto label_32aef8;
        }
    }
    ctx->pc = 0x32AEF8u;
label_32aef8:
    // 0x32aef8: 0x8012  mflo        $s0
    ctx->pc = 0x32aef8u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_32aefc:
    // 0x32aefc: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x32aefcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_32af00:
    // 0x32af00: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x32af00u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32af04:
    // 0x32af04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32af04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_32af08:
    // 0x32af08: 0x0  nop
    ctx->pc = 0x32af08u;
    // NOP
label_32af0c:
    // 0x32af0c: 0x0  nop
    ctx->pc = 0x32af0cu;
    // NOP
label_32af10:
    // 0x32af10: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x32af10u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_32af14:
    // 0x32af14: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x32af14u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_32af18:
    // 0x32af18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32af18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32af1c:
    // 0x32af1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32af1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32af20:
    // 0x32af20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32af20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32af24:
    // 0x32af24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32af24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32af28:
    // 0x32af28: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x32af28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_32af2c:
    // 0x32af2c: 0x3e00008  jr          $ra
label_32af30:
    if (ctx->pc == 0x32AF30u) {
        ctx->pc = 0x32AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF2Cu;
        // 0x32af30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF34u;
        goto label_32af34;
    }
    ctx->pc = 0x32AF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF2Cu;
        // 0x32af30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AF34u;
label_32af34:
    // 0x32af34: 0x0  nop
    ctx->pc = 0x32af34u;
    // NOP
label_32af38:
    // 0x32af38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32af38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32af3c:
    // 0x32af3c: 0x0  nop
    ctx->pc = 0x32af3cu;
    // NOP
    ctx->pc = 0x32af40u;
}
