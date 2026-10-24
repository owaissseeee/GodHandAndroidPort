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

// Function: func_00159AD0
// Address: 0x159ad0 - 0x159da0
void func_00159AD0_0x159ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00159AD0_0x159ad0");
#endif

    switch (ctx->pc) {
        case 0x159b58u: goto label_159b58;
        case 0x159ba8u: goto label_159ba8;
        case 0x159bf0u: goto label_159bf0;
        case 0x159c30u: goto label_159c30;
        case 0x159c68u: goto label_159c68;
        default: break;
    }

    ctx->pc = 0x159ad0u;

    // 0x159ad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x159ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x159ad4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x159ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x159ad8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x159ad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x159adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ae0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x159ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x159ae4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x159ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x159ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x159aec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x159aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159af0: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x159AF0u;
    {
        const bool branch_taken_0x159af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AF0u;
        // 0x159af4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159af0) {
            ctx->pc = 0x159D7Cu;
            goto label_159d7c;
        }
    }
    ctx->pc = 0x159AF8u;
    // 0x159af8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159afc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x159afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159b00: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x159b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159b04: 0x0  nop
    ctx->pc = 0x159b04u;
    // NOP
    // 0x159b08: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x159B08u;
    {
        const bool branch_taken_0x159b08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x159B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B08u;
        // 0x159b0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b08) {
            ctx->pc = 0x159B30u;
            goto label_159b30;
        }
    }
    ctx->pc = 0x159B10u;
    // 0x159b10: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x159b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x159b14: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x159b14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x159b18: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x159b18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x159b1c: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x159b1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159b20: 0x0  nop
    ctx->pc = 0x159b20u;
    // NOP
    // 0x159b24: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x159B24u;
    {
        const bool branch_taken_0x159b24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x159b24) {
            ctx->pc = 0x159B30u;
            goto label_159b30;
        }
    }
    ctx->pc = 0x159B2Cu;
    // 0x159b2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x159b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_159b30:
    // 0x159b30: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x159b30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x159b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159b38: 0x0  nop
    ctx->pc = 0x159b38u;
    // NOP
    // 0x159b3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159b3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159b40: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x159b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159b44: 0x0  nop
    ctx->pc = 0x159b44u;
    // NOP
    // 0x159b48: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x159B48u;
    {
        const bool branch_taken_0x159b48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159b48) {
            ctx->pc = 0x159B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159B48u;
            // 0x159b4c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159B5Cu;
            goto label_159b5c;
        }
    }
    ctx->pc = 0x159B50u;
    // 0x159b50: 0xc05666c  jal         func_1599B0
    ctx->pc = 0x159B50u;
    SET_GPR_U32(ctx, 31, 0x159B58u);
    ctx->pc = 0x159B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159B50u;
    // 0x159b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1599B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1599B0u, 0x159B50u, 0x159B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B58u;
label_159b58:
    // 0x159b58: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x159b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_159b5c:
    // 0x159b5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x159b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x159b60: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x159B60u;
    {
        const bool branch_taken_0x159b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B60u;
        // 0x159b64: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b60) {
            ctx->pc = 0x159BDCu;
            goto label_159bdc;
        }
    }
    ctx->pc = 0x159B68u;
    // 0x159b68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159B68u;
    {
        const bool branch_taken_0x159b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B68u;
        // 0x159b6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b68) {
            ctx->pc = 0x159B80u;
            goto label_159b80;
        }
    }
    ctx->pc = 0x159B70u;
    // 0x159b70: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x159B70u;
    {
        const bool branch_taken_0x159b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159b70) {
            ctx->pc = 0x159B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159B70u;
            // 0x159b74: 0x9602000e  lhu         $v0, 0xE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159B94u;
            goto label_159b94;
        }
    }
    ctx->pc = 0x159B78u;
    // 0x159b78: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x159B78u;
    {
        const bool branch_taken_0x159b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159b78) {
            ctx->pc = 0x159C58u;
            goto label_159c58;
        }
    }
    ctx->pc = 0x159B80u;
label_159b80:
    // 0x159b80: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x159b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x159b84: 0x50620026  beql        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x159B84u;
    {
        const bool branch_taken_0x159b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159b84) {
            ctx->pc = 0x159B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159B84u;
            // 0x159b88: 0x9602000e  lhu         $v0, 0xE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159C20u;
            goto label_159c20;
        }
    }
    ctx->pc = 0x159B8Cu;
    // 0x159b8c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x159B8Cu;
    {
        const bool branch_taken_0x159b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159b8c) {
            ctx->pc = 0x159C58u;
            goto label_159c58;
        }
    }
    ctx->pc = 0x159B94u;
label_159b94:
    // 0x159b94: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x159b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x159b98: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x159B98u;
    {
        const bool branch_taken_0x159b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159b98) {
            ctx->pc = 0x159C58u;
            goto label_159c58;
        }
    }
    ctx->pc = 0x159BA0u;
    // 0x159ba0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x159ba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159ba4: 0x0  nop
    ctx->pc = 0x159ba4u;
    // NOP
label_159ba8:
    // 0x159ba8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x159ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x159bac: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x159bacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x159bb0: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x159bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x159bb4: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x159bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x159bb8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x159bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x159bbc: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x159bbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x159bc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x159bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x159bc4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x159bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x159bc8: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x159bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x159bcc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x159BCCu;
    {
        const bool branch_taken_0x159bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BCCu;
        // 0x159bd0: 0xa603000e  sh          $v1, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bcc) {
            ctx->pc = 0x159BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159ba8;
        }
    }
    ctx->pc = 0x159BD4u;
    // 0x159bd4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x159BD4u;
    {
        const bool branch_taken_0x159bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159bd4) {
            ctx->pc = 0x159C58u;
            goto label_159c58;
        }
    }
    ctx->pc = 0x159BDCu;
label_159bdc:
    // 0x159bdc: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x159bdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x159be0: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x159be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x159be4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x159BE4u;
    {
        const bool branch_taken_0x159be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159be4) {
            ctx->pc = 0x159C58u;
            goto label_159c58;
        }
    }
    ctx->pc = 0x159BECu;
    // 0x159bec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x159becu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159bf0:
    // 0x159bf0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x159bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x159bf4: 0x9604000e  lhu         $a0, 0xE($s0)
    ctx->pc = 0x159bf4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x159bf8: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x159bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x159bfc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x159bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x159c00: 0xa604000c  sh          $a0, 0xC($s0)
    ctx->pc = 0x159c00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x159c04: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x159c04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x159c08: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x159c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x159c0c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x159c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x159c10: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x159C10u;
    {
        const bool branch_taken_0x159c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C10u;
        // 0x159c14: 0xa603000e  sh          $v1, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c10) {
            ctx->pc = 0x159BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159bf0;
        }
    }
    ctx->pc = 0x159C18u;
    // 0x159c18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x159C18u;
    {
        const bool branch_taken_0x159c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159c18) {
            ctx->pc = 0x159C58u;
            goto label_159c58;
        }
    }
    ctx->pc = 0x159C20u;
label_159c20:
    // 0x159c20: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x159c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x159c24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x159C24u;
    {
        const bool branch_taken_0x159c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159c24) {
            ctx->pc = 0x159C58u;
            goto label_159c58;
        }
    }
    ctx->pc = 0x159C2Cu;
    // 0x159c2c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x159c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159c30:
    // 0x159c30: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x159c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x159c34: 0x9604000e  lhu         $a0, 0xE($s0)
    ctx->pc = 0x159c34u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x159c38: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x159c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x159c3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x159c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x159c40: 0xa604000c  sh          $a0, 0xC($s0)
    ctx->pc = 0x159c40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x159c44: 0x94a30010  lhu         $v1, 0x10($a1)
    ctx->pc = 0x159c44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x159c48: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x159c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x159c4c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x159c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x159c50: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x159C50u;
    {
        const bool branch_taken_0x159c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C50u;
        // 0x159c54: 0xa603000e  sh          $v1, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c50) {
            ctx->pc = 0x159C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159c30;
        }
    }
    ctx->pc = 0x159C58u;
label_159c58:
    // 0x159c58: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x159C58u;
    {
        const bool branch_taken_0x159c58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x159c58) {
            ctx->pc = 0x159C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159C58u;
            // 0x159c5c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159C6Cu;
            goto label_159c6c;
        }
    }
    ctx->pc = 0x159C60u;
    // 0x159c60: 0xc056768  jal         func_159DA0
    ctx->pc = 0x159C60u;
    SET_GPR_U32(ctx, 31, 0x159C68u);
    ctx->pc = 0x159C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159C60u;
    // 0x159c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159DA0u, 0x159C60u, 0x159C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159C68u;
label_159c68:
    // 0x159c68: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x159c68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_159c6c:
    // 0x159c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159c70: 0x0  nop
    ctx->pc = 0x159c70u;
    // NOP
    // 0x159c74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159c78: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x159c78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159c7c: 0x0  nop
    ctx->pc = 0x159c7cu;
    // NOP
    // 0x159c80: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x159C80u;
    {
        const bool branch_taken_0x159c80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x159C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159C80u;
        // 0x159c84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159c80) {
            ctx->pc = 0x159D7Cu;
            goto label_159d7c;
        }
    }
    ctx->pc = 0x159C88u;
    // 0x159c88: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x159c88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x159c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159c90: 0x0  nop
    ctx->pc = 0x159c90u;
    // NOP
    // 0x159c94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159c98: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x159c98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159c9c: 0x0  nop
    ctx->pc = 0x159c9cu;
    // NOP
    // 0x159ca0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x159CA0u;
    {
        const bool branch_taken_0x159ca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CA0u;
        // 0x159ca4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ca0) {
            ctx->pc = 0x159CB0u;
            goto label_159cb0;
        }
    }
    ctx->pc = 0x159CA8u;
    // 0x159ca8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x159CA8u;
    {
        const bool branch_taken_0x159ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CA8u;
        // 0x159cac: 0xc6000014  lwc1        $f0, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ca8) {
            ctx->pc = 0x159D80u;
            goto label_159d80;
        }
    }
    ctx->pc = 0x159CB0u;
label_159cb0:
    // 0x159cb0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x159cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x159cb4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x159cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x159cb8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x159CB8u;
    {
        const bool branch_taken_0x159cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x159CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CB8u;
        // 0x159cbc: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cb8) {
            ctx->pc = 0x159CE4u;
            goto label_159ce4;
        }
    }
    ctx->pc = 0x159CC0u;
    // 0x159cc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159CC0u;
    {
        const bool branch_taken_0x159cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CC0u;
        // 0x159cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cc0) {
            ctx->pc = 0x159CD8u;
            goto label_159cd8;
        }
    }
    ctx->pc = 0x159CC8u;
    // 0x159cc8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159CC8u;
    {
        const bool branch_taken_0x159cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x159cc8) {
            ctx->pc = 0x159CE4u;
            goto label_159ce4;
        }
    }
    ctx->pc = 0x159CD0u;
    // 0x159cd0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x159CD0u;
    {
        const bool branch_taken_0x159cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159CD0u;
        // 0x159cd4: 0xc6000010  lwc1        $f0, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159cd0) {
            ctx->pc = 0x159D80u;
            goto label_159d80;
        }
    }
    ctx->pc = 0x159CD8u;
label_159cd8:
    // 0x159cd8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x159cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x159cdc: 0x54620028  bnel        $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x159CDCu;
    {
        const bool branch_taken_0x159cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x159cdc) {
            ctx->pc = 0x159CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159CDCu;
            // 0x159ce0: 0xc6000010  lwc1        $f0, 0x10($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x159D80u;
            goto label_159d80;
        }
    }
    ctx->pc = 0x159CE4u;
label_159ce4:
    // 0x159ce4: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x159ce4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x159ce8: 0x0  nop
    ctx->pc = 0x159ce8u;
    // NOP
    // 0x159cec: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x159cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x159cf0: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x159cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x159cf4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x159cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159cf8: 0x0  nop
    ctx->pc = 0x159cf8u;
    // NOP
    // 0x159cfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x159cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x159d00: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x159d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x159d04: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x159d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x159d08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x159d0c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x159d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x159d10: 0x4604a101  sub.s       $f4, $f20, $f4
    ctx->pc = 0x159d10u;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[4]);
    // 0x159d14: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x159d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159d18: 0xc6080014  lwc1        $f8, 0x14($s0)
    ctx->pc = 0x159d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x159d1c: 0xc6090018  lwc1        $f9, 0x18($s0)
    ctx->pc = 0x159d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x159d20: 0x0  nop
    ctx->pc = 0x159d20u;
    // NOP
    // 0x159d24: 0x0  nop
    ctx->pc = 0x159d24u;
    // NOP
    // 0x159d28: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x159d28u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[1]);
    // 0x159d2c: 0xc607001c  lwc1        $f7, 0x1C($s0)
    ctx->pc = 0x159d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x159d30: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x159d30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x159d34: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x159d34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x159d38: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x159d38u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x159d3c: 0x46052880  add.s       $f2, $f5, $f5
    ctx->pc = 0x159d3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x159d40: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x159d40u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x159d44: 0x460010c7  neg.s       $f3, $f2
    ctx->pc = 0x159d44u;
    ctx->f[3] = FPU_NEG_S(ctx->f[2]);
    // 0x159d48: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x159d48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x159d4c: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x159d4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x159d50: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x159d50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x159d54: 0x460a1080  add.s       $f2, $f2, $f10
    ctx->pc = 0x159d54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
    // 0x159d58: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x159d58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x159d5c: 0x46034202  mul.s       $f8, $f8, $f3
    ctx->pc = 0x159d5cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x159d60: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x159d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x159d64: 0x46014a42  mul.s       $f9, $f9, $f1
    ctx->pc = 0x159d64u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x159d68: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x159d68u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x159d6c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x159d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x159d70: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x159d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x159d74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x159D74u;
    {
        const bool branch_taken_0x159d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D74u;
        // 0x159d78: 0x46070000  add.s       $f0, $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159d74) {
            ctx->pc = 0x159D80u;
            goto label_159d80;
        }
    }
    ctx->pc = 0x159D7Cu;
label_159d7c:
    // 0x159d7c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x159d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_159d80:
    // 0x159d80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x159d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159d84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x159d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159d88: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x159d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159d90: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x159d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x159d94: 0x3e00008  jr          $ra
    ctx->pc = 0x159D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D94u;
        // 0x159d98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159D9Cu;
    // 0x159d9c: 0x0  nop
    ctx->pc = 0x159d9cu;
    // NOP
    ctx->pc = 0x159da0u;
}
