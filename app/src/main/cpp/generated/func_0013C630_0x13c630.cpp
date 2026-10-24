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

// Function: func_0013C630
// Address: 0x13c630 - 0x13c750
void func_0013C630_0x13c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013C630_0x13c630");
#endif

    switch (ctx->pc) {
        case 0x13c730u: goto label_13c730;
        default: break;
    }

    ctx->pc = 0x13c630u;

    // 0x13c630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13c634: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13c634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x13c638: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13c638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13c63c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c640: 0x92020074  lbu         $v0, 0x74($s0)
    ctx->pc = 0x13c640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x13c644: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x13C644u;
    {
        const bool branch_taken_0x13c644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c644) {
            ctx->pc = 0x13C648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C644u;
            // 0x13c648: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C744u;
            goto label_13c744;
        }
    }
    ctx->pc = 0x13C64Cu;
    // 0x13c64c: 0x92020075  lbu         $v0, 0x75($s0)
    ctx->pc = 0x13c64cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
    // 0x13c650: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x13C650u;
    {
        const bool branch_taken_0x13c650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c650) {
            ctx->pc = 0x13C654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C650u;
            // 0x13c654: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C744u;
            goto label_13c744;
        }
    }
    ctx->pc = 0x13C658u;
    // 0x13c658: 0x92020076  lbu         $v0, 0x76($s0)
    ctx->pc = 0x13c658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 118)));
    // 0x13c65c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13C65Cu;
    {
        const bool branch_taken_0x13c65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C65Cu;
        // 0x13c660: 0x96020072  lhu         $v0, 0x72($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 114)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c65c) {
            ctx->pc = 0x13C68Cu;
            goto label_13c68c;
        }
    }
    ctx->pc = 0x13C664u;
    // 0x13c664: 0x86040070  lh          $a0, 0x70($s0)
    ctx->pc = 0x13c664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x13c668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13c668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13c66c: 0x96050070  lhu         $a1, 0x70($s0)
    ctx->pc = 0x13c66cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x13c670: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x13c670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13c674: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x13c674u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x13c678: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x13c678u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13c67c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C67Cu;
    {
        const bool branch_taken_0x13c67c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C67Cu;
        // 0x13c680: 0xa6020072  sh          $v0, 0x72($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c67c) {
            ctx->pc = 0x13C6A4u;
            goto label_13c6a4;
        }
    }
    ctx->pc = 0x13C684u;
    // 0x13c684: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13C684u;
    {
        const bool branch_taken_0x13c684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C684u;
        // 0x13c688: 0xa6050072  sh          $a1, 0x72($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c684) {
            ctx->pc = 0x13C6A0u;
            goto label_13c6a0;
        }
    }
    ctx->pc = 0x13C68Cu;
label_13c68c:
    // 0x13c68c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13c690: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x13c690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x13c694: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C694u;
    {
        const bool branch_taken_0x13c694 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x13C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C694u;
        // 0x13c698: 0xa6020072  sh          $v0, 0x72($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c694) {
            ctx->pc = 0x13C6A4u;
            goto label_13c6a4;
        }
    }
    ctx->pc = 0x13C69Cu;
    // 0x13c69c: 0xa6000072  sh          $zero, 0x72($s0)
    ctx->pc = 0x13c69cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 0));
label_13c6a0:
    // 0x13c6a0: 0xa2000075  sb          $zero, 0x75($s0)
    ctx->pc = 0x13c6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 0));
label_13c6a4:
    // 0x13c6a4: 0x86020072  lh          $v0, 0x72($s0)
    ctx->pc = 0x13c6a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 114)));
    // 0x13c6a8: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x13c6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13c6ac: 0x86030070  lh          $v1, 0x70($s0)
    ctx->pc = 0x13c6acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x13c6b0: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x13c6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c6b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13c6b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13c6b8: 0x0  nop
    ctx->pc = 0x13c6b8u;
    // NOP
    // 0x13c6bc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x13c6bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x13c6c0: 0xc6020050  lwc1        $f2, 0x50($s0)
    ctx->pc = 0x13c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13c6c4: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x13c6c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13c6c8: 0x0  nop
    ctx->pc = 0x13c6c8u;
    // NOP
    // 0x13c6cc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x13c6ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x13c6d0: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x13c6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c6d4: 0xc6030054  lwc1        $f3, 0x54($s0)
    ctx->pc = 0x13c6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13c6d8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x13c6d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x13c6dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13c6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13c6e0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x13c6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x13c6e4: 0x0  nop
    ctx->pc = 0x13c6e4u;
    // NOP
    // 0x13c6e8: 0x0  nop
    ctx->pc = 0x13c6e8u;
    // NOP
    // 0x13c6ec: 0x46046303  div.s       $f12, $f12, $f4
    ctx->pc = 0x13c6ecu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[4]);
    // 0x13c6f0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x13c6f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x13c6f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x13c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x13c6f8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x13c6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x13c6fc: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x13c6fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x13c700: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x13c700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x13c704: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x13c704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x13c708: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x13c708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x13c70c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x13c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x13c710: 0xe4e5000c  swc1        $f5, 0xC($a3)
    ctx->pc = 0x13c710u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x13c714: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x13c714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13c718: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x13c718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13c71c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c720: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13c720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13c724: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13c724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c728: 0xc0b851a  jal         func_2E1468
    ctx->pc = 0x13C728u;
    SET_GPR_U32(ctx, 31, 0x13C730u);
    ctx->pc = 0x13C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C728u;
    // 0x13c72c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1468u, 0x13C728u, 0x13C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C730u;
label_13c730:
    // 0x13c730: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x13c730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c734: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x13c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c738: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x13c738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x13c73c: 0xe6010064  swc1        $f1, 0x64($s0)
    ctx->pc = 0x13c73cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x13c740: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13c740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13c744:
    // 0x13c744: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13c744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c748: 0x3e00008  jr          $ra
    ctx->pc = 0x13C748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C748u;
        // 0x13c74c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C750u;
}
