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

// Function: func_00184B60
// Address: 0x184b60 - 0x184ce0
void func_00184B60_0x184b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00184B60_0x184b60");
#endif

    switch (ctx->pc) {
        case 0x184becu: goto label_184bec;
        case 0x184c1cu: goto label_184c1c;
        case 0x184cb4u: goto label_184cb4;
        default: break;
    }

    ctx->pc = 0x184b60u;

    // 0x184b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184b64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x184b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x184b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184b6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184b70: 0x86020620  lh          $v0, 0x620($s0)
    ctx->pc = 0x184b70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x184b74: 0x8603062e  lh          $v1, 0x62E($s0)
    ctx->pc = 0x184b74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1582)));
    // 0x184b78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x184b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184b7c: 0x0  nop
    ctx->pc = 0x184b7cu;
    // NOP
    // 0x184b80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x184b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x184b84: 0x92050656  lbu         $a1, 0x656($s0)
    ctx->pc = 0x184b84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1622)));
    // 0x184b88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184b88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184b8c: 0x0  nop
    ctx->pc = 0x184b8cu;
    // NOP
    // 0x184b90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x184b94: 0x2ca40007  sltiu       $a0, $a1, 0x7
    ctx->pc = 0x184b94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x184b98: 0x0  nop
    ctx->pc = 0x184b98u;
    // NOP
    // 0x184b9c: 0x0  nop
    ctx->pc = 0x184b9cu;
    // NOP
    // 0x184ba0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184ba0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x184ba4: 0x10800049  beqz        $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x184BA4u;
    {
        const bool branch_taken_0x184ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x184BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BA4u;
        // 0x184ba8: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ba4) {
            ctx->pc = 0x184CCCu;
            goto label_184ccc;
        }
    }
    ctx->pc = 0x184BACu;
    // 0x184bac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x184bacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x184bb0: 0x24422d80  addiu       $v0, $v0, 0x2D80
    ctx->pc = 0x184bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11648));
    // 0x184bb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x184bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x184bb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x184bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184bbc: 0x800008  jr          $a0
    ctx->pc = 0x184BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184BC4u: goto label_184bc4;
            case 0x184BF4u: goto label_184bf4;
            case 0x184C24u: goto label_184c24;
            case 0x184C48u: goto label_184c48;
            case 0x184C6Cu: goto label_184c6c;
            case 0x184C90u: goto label_184c90;
            case 0x184CC4u: goto label_184cc4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184BBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x184BC4u;
label_184bc4:
    // 0x184bc4: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x184bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x184bc8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x184bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x184bcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184bd0: 0x0  nop
    ctx->pc = 0x184bd0u;
    // NOP
    // 0x184bd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184bd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184bd8: 0x0  nop
    ctx->pc = 0x184bd8u;
    // NOP
    // 0x184bdc: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x184BDCu;
    {
        const bool branch_taken_0x184bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BDCu;
        // 0x184be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bdc) {
            ctx->pc = 0x184CCCu;
            goto label_184ccc;
        }
    }
    ctx->pc = 0x184BE4u;
    // 0x184be4: 0xc06156a  jal         func_1855A8
    ctx->pc = 0x184BE4u;
    SET_GPR_U32(ctx, 31, 0x184BECu);
    ctx->pc = 0x184BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184BE4u;
    // 0x184be8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1855A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1855A8u, 0x184BE4u, 0x184BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184BECu;
label_184bec:
    // 0x184bec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x184BECu;
    {
        const bool branch_taken_0x184bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184BECu;
        // 0x184bf0: 0x92020656  lbu         $v0, 0x656($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1622)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bec) {
            ctx->pc = 0x184CB8u;
            goto label_184cb8;
        }
    }
    ctx->pc = 0x184BF4u;
label_184bf4:
    // 0x184bf4: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x184bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x184bf8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x184bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x184bfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184c00: 0x0  nop
    ctx->pc = 0x184c00u;
    // NOP
    // 0x184c04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184c04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184c08: 0x0  nop
    ctx->pc = 0x184c08u;
    // NOP
    // 0x184c0c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x184C0Cu;
    {
        const bool branch_taken_0x184c0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C0Cu;
        // 0x184c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c0c) {
            ctx->pc = 0x184CCCu;
            goto label_184ccc;
        }
    }
    ctx->pc = 0x184C14u;
    // 0x184c14: 0xc06156a  jal         func_1855A8
    ctx->pc = 0x184C14u;
    SET_GPR_U32(ctx, 31, 0x184C1Cu);
    ctx->pc = 0x184C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184C14u;
    // 0x184c18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1855A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1855A8u, 0x184C14u, 0x184C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184C1Cu;
label_184c1c:
    // 0x184c1c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x184C1Cu;
    {
        const bool branch_taken_0x184c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C1Cu;
        // 0x184c20: 0x92020656  lbu         $v0, 0x656($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1622)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c1c) {
            ctx->pc = 0x184CB8u;
            goto label_184cb8;
        }
    }
    ctx->pc = 0x184C24u;
label_184c24:
    // 0x184c24: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x184c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x184c28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184c2c: 0x0  nop
    ctx->pc = 0x184c2cu;
    // NOP
    // 0x184c30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184c30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184c34: 0x0  nop
    ctx->pc = 0x184c34u;
    // NOP
    // 0x184c38: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x184C38u;
    {
        const bool branch_taken_0x184c38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C38u;
        // 0x184c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c38) {
            ctx->pc = 0x184CCCu;
            goto label_184ccc;
        }
    }
    ctx->pc = 0x184C40u;
    // 0x184c40: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x184C40u;
    {
        const bool branch_taken_0x184c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C40u;
        // 0x184c44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c40) {
            ctx->pc = 0x184CACu;
            goto label_184cac;
        }
    }
    ctx->pc = 0x184C48u;
label_184c48:
    // 0x184c48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x184c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x184c4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184c50: 0x0  nop
    ctx->pc = 0x184c50u;
    // NOP
    // 0x184c54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184c54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184c58: 0x0  nop
    ctx->pc = 0x184c58u;
    // NOP
    // 0x184c5c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x184C5Cu;
    {
        const bool branch_taken_0x184c5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C5Cu;
        // 0x184c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c5c) {
            ctx->pc = 0x184CCCu;
            goto label_184ccc;
        }
    }
    ctx->pc = 0x184C64u;
    // 0x184c64: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x184C64u;
    {
        const bool branch_taken_0x184c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C64u;
        // 0x184c68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c64) {
            ctx->pc = 0x184CACu;
            goto label_184cac;
        }
    }
    ctx->pc = 0x184C6Cu;
label_184c6c:
    // 0x184c6c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x184c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x184c70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x184c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184c74: 0x0  nop
    ctx->pc = 0x184c74u;
    // NOP
    // 0x184c78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184c7c: 0x0  nop
    ctx->pc = 0x184c7cu;
    // NOP
    // 0x184c80: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x184C80u;
    {
        const bool branch_taken_0x184c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C80u;
        // 0x184c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c80) {
            ctx->pc = 0x184CCCu;
            goto label_184ccc;
        }
    }
    ctx->pc = 0x184C88u;
    // 0x184c88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x184C88u;
    {
        const bool branch_taken_0x184c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184C88u;
        // 0x184c8c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c88) {
            ctx->pc = 0x184CACu;
            goto label_184cac;
        }
    }
    ctx->pc = 0x184C90u;
label_184c90:
    // 0x184c90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184c94: 0x0  nop
    ctx->pc = 0x184c94u;
    // NOP
    // 0x184c98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x184c98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184c9c: 0x0  nop
    ctx->pc = 0x184c9cu;
    // NOP
    // 0x184ca0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x184CA0u;
    {
        const bool branch_taken_0x184ca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CA0u;
        // 0x184ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ca0) {
            ctx->pc = 0x184CCCu;
            goto label_184ccc;
        }
    }
    ctx->pc = 0x184CA8u;
    // 0x184ca8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x184ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_184cac:
    // 0x184cac: 0xc0615a4  jal         func_185690
    ctx->pc = 0x184CACu;
    SET_GPR_U32(ctx, 31, 0x184CB4u);
    ctx->pc = 0x185690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185690u, 0x184CACu, 0x184CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184CB4u;
label_184cb4:
    // 0x184cb4: 0x92020656  lbu         $v0, 0x656($s0)
    ctx->pc = 0x184cb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1622)));
label_184cb8:
    // 0x184cb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x184cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x184cbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x184CBCu;
    {
        const bool branch_taken_0x184cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CBCu;
        // 0x184cc0: 0xa2020656  sb          $v0, 0x656($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1622), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184cbc) {
            ctx->pc = 0x184CCCu;
            goto label_184ccc;
        }
    }
    ctx->pc = 0x184CC4u;
label_184cc4:
    // 0x184cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184cc8: 0xa202065d  sb          $v0, 0x65D($s0)
    ctx->pc = 0x184cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1629), (uint8_t)GPR_U32(ctx, 2));
label_184ccc:
    // 0x184ccc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x184cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x184CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CD4u;
        // 0x184cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184CDCu;
    // 0x184cdc: 0x0  nop
    ctx->pc = 0x184cdcu;
    // NOP
    ctx->pc = 0x184ce0u;
}
