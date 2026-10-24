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

// Function: func_00293C40
// Address: 0x293c40 - 0x294488
void func_00293C40_0x293c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00293C40_0x293c40");
#endif

    switch (ctx->pc) {
        case 0x293c8cu: goto label_293c8c;
        case 0x293cb8u: goto label_293cb8;
        case 0x293cd8u: goto label_293cd8;
        case 0x293d18u: goto label_293d18;
        case 0x293d28u: goto label_293d28;
        case 0x293d7cu: goto label_293d7c;
        case 0x293ddcu: goto label_293ddc;
        case 0x293decu: goto label_293dec;
        case 0x293e28u: goto label_293e28;
        case 0x293e38u: goto label_293e38;
        case 0x293e60u: goto label_293e60;
        case 0x293e70u: goto label_293e70;
        case 0x293e78u: goto label_293e78;
        case 0x293ec8u: goto label_293ec8;
        case 0x293ed0u: goto label_293ed0;
        case 0x293ee0u: goto label_293ee0;
        case 0x293f20u: goto label_293f20;
        case 0x293f68u: goto label_293f68;
        case 0x293f94u: goto label_293f94;
        case 0x293facu: goto label_293fac;
        case 0x293fecu: goto label_293fec;
        case 0x293ff4u: goto label_293ff4;
        case 0x294000u: goto label_294000;
        case 0x294038u: goto label_294038;
        case 0x294080u: goto label_294080;
        case 0x2940a4u: goto label_2940a4;
        case 0x294178u: goto label_294178;
        case 0x2942c0u: goto label_2942c0;
        default: break;
    }

    ctx->pc = 0x293c40u;

    // 0x293c40: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x293c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x293c44: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x293c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x293c48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x293c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c4c: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x293c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
    // 0x293c50: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x293c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x293c54: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x293c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x293c58: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x293c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x293c5c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x293c5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293c60: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x293c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x293c64: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x293c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x293c68: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x293c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x293c6c: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x293c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x293c70: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x293c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x293c74: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x293c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x293c78: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x293c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x293c7c: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x293c7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x293c80: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x293c80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x293c84: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x293C84u;
    SET_GPR_U32(ctx, 31, 0x293C8Cu);
    ctx->pc = 0x293C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293C84u;
    // 0x293c88: 0xe7b401b0  swc1        $f20, 0x1B0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x293C84u, 0x293C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293C8Cu;
label_293c8c:
    // 0x293c8c: 0x144001ee  bnez        $v0, . + 4 + (0x1EE << 2)
    ctx->pc = 0x293C8Cu;
    {
        const bool branch_taken_0x293c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C8Cu;
        // 0x293c90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c8c) {
            ctx->pc = 0x294448u;
            goto label_294448;
        }
    }
    ctx->pc = 0x293C94u;
    // 0x293c94: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x293c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x293c98: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x293c98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x293c9c: 0x146001ea  bnez        $v1, . + 4 + (0x1EA << 2)
    ctx->pc = 0x293C9Cu;
    {
        const bool branch_taken_0x293c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x293CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C9Cu;
        // 0x293ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c9c) {
            ctx->pc = 0x294448u;
            goto label_294448;
        }
    }
    ctx->pc = 0x293CA4u;
    // 0x293ca4: 0x26160574  addiu       $s6, $s0, 0x574
    ctx->pc = 0x293ca4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1396));
    // 0x293ca8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x293ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x293cac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x293cacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293cb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x293cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293cb4: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x293cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_293cb8:
    // 0x293cb8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x293cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293cbc: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x293CBCu;
    {
        const bool branch_taken_0x293cbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x293cbc) {
            ctx->pc = 0x293CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293CBCu;
            // 0x293cc0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293D34u;
            goto label_293d34;
        }
    }
    ctx->pc = 0x293CC4u;
    // 0x293cc4: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x293cc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x293cc8: 0x5840001a  blezl       $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x293CC8u;
    {
        const bool branch_taken_0x293cc8 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x293cc8) {
            ctx->pc = 0x293CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293CC8u;
            // 0x293ccc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293D34u;
            goto label_293d34;
        }
    }
    ctx->pc = 0x293CD0u;
    // 0x293cd0: 0xc09bcc2  jal         func_26F308
    ctx->pc = 0x293CD0u;
    SET_GPR_U32(ctx, 31, 0x293CD8u);
    ctx->pc = 0x293CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293CD0u;
    // 0x293cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F308u, 0x293CD0u, 0x293CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293CD8u;
label_293cd8:
    // 0x293cd8: 0x144001db  bnez        $v0, . + 4 + (0x1DB << 2)
    ctx->pc = 0x293CD8u;
    {
        const bool branch_taken_0x293cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CD8u;
        // 0x293cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293cd8) {
            ctx->pc = 0x294448u;
            goto label_294448;
        }
    }
    ctx->pc = 0x293CE0u;
    // 0x293ce0: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x293ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
    // 0x293ce4: 0x144001d8  bnez        $v0, . + 4 + (0x1D8 << 2)
    ctx->pc = 0x293CE4u;
    {
        const bool branch_taken_0x293ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CE4u;
        // 0x293ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ce4) {
            ctx->pc = 0x294448u;
            goto label_294448;
        }
    }
    ctx->pc = 0x293CECu;
    // 0x293cec: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x293cecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x293cf0: 0x3042090c  andi        $v0, $v0, 0x90C
    ctx->pc = 0x293cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2316);
    // 0x293cf4: 0x144001d4  bnez        $v0, . + 4 + (0x1D4 << 2)
    ctx->pc = 0x293CF4u;
    {
        const bool branch_taken_0x293cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CF4u;
        // 0x293cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293cf4) {
            ctx->pc = 0x294448u;
            goto label_294448;
        }
    }
    ctx->pc = 0x293CFCu;
    // 0x293cfc: 0xc600054c  lwc1        $f0, 0x54C($s0)
    ctx->pc = 0x293cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293d00: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x293d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293d04: 0x0  nop
    ctx->pc = 0x293d04u;
    // NOP
    // 0x293d08: 0x450301d0  bc1tl       . + 4 + (0x1D0 << 2)
    ctx->pc = 0x293D08u;
    {
        const bool branch_taken_0x293d08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x293d08) {
            ctx->pc = 0x293D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293D08u;
            // 0x293d0c: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29444Cu;
            goto label_29444c;
        }
    }
    ctx->pc = 0x293D10u;
    // 0x293d10: 0xc09bcc2  jal         func_26F308
    ctx->pc = 0x293D10u;
    SET_GPR_U32(ctx, 31, 0x293D18u);
    ctx->pc = 0x293D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D10u;
    // 0x293d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F308u, 0x293D10u, 0x293D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D18u;
label_293d18:
    // 0x293d18: 0x144001cb  bnez        $v0, . + 4 + (0x1CB << 2)
    ctx->pc = 0x293D18u;
    {
        const bool branch_taken_0x293d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D18u;
        // 0x293d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d18) {
            ctx->pc = 0x294448u;
            goto label_294448;
        }
    }
    ctx->pc = 0x293D20u;
    // 0x293d20: 0xc09cfb8  jal         func_273EE0
    ctx->pc = 0x293D20u;
    SET_GPR_U32(ctx, 31, 0x293D28u);
    ctx->pc = 0x293D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D20u;
    // 0x293d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273EE0u, 0x293D20u, 0x293D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D28u;
label_293d28:
    // 0x293d28: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x293D28u;
    {
        const bool branch_taken_0x293d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D28u;
        // 0x293d2c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d28) {
            ctx->pc = 0x293D4Cu;
            goto label_293d4c;
        }
    }
    ctx->pc = 0x293D30u;
    // 0x293d30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x293d30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_293d34:
    // 0x293d34: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x293d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x293d38: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x293D38u;
    {
        const bool branch_taken_0x293d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D38u;
        // 0x293d3c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d38) {
            ctx->pc = 0x293CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293cb8;
        }
    }
    ctx->pc = 0x293D40u;
    // 0x293d40: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x293d40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x293d44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x293D44u;
    {
        const bool branch_taken_0x293d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D44u;
        // 0x293d48: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d44) {
            ctx->pc = 0x293D54u;
            goto label_293d54;
        }
    }
    ctx->pc = 0x293D4Cu;
label_293d4c:
    // 0x293d4c: 0x100001be  b           . + 4 + (0x1BE << 2)
    ctx->pc = 0x293D4Cu;
    {
        const bool branch_taken_0x293d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D4Cu;
        // 0x293d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d4c) {
            ctx->pc = 0x294448u;
            goto label_294448;
        }
    }
    ctx->pc = 0x293D54u;
label_293d54:
    // 0x293d54: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x293d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293d58: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x293d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293d5c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x293d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293d60: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x293d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293d64: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x293d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293d68: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x293d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293d6c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x293d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293d70: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x293d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293d74: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x293D74u;
    SET_GPR_U32(ctx, 31, 0x293D7Cu);
    ctx->pc = 0x293D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293D74u;
    // 0x293d78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x293D74u, 0x293D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293D7Cu;
label_293d7c:
    // 0x293d7c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x293d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x293d80: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x293d80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x293d84: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x293D84u;
    {
        const bool branch_taken_0x293d84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x293D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293D84u;
        // 0x293d88: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d84) {
            ctx->pc = 0x293DA8u;
            goto label_293da8;
        }
    }
    ctx->pc = 0x293D8Cu;
    // 0x293d8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x293d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293d90: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x293d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x293d94: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x293d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293d98: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x293d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x293d9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x293d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293da0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x293da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x293da4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x293da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293da8:
    // 0x293da8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x293da8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293dac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x293dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x293db0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x293db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x293db4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x293db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x293db8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x293db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293dbc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x293dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x293dc0: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x293dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x293dc4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x293dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x293dc8: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x293dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x293dcc: 0xe7b50090  swc1        $f21, 0x90($sp)
    ctx->pc = 0x293dccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x293dd0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x293dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x293dd4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x293DD4u;
    SET_GPR_U32(ctx, 31, 0x293DDCu);
    ctx->pc = 0x293DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293DD4u;
    // 0x293dd8: 0xe7b40094  swc1        $f20, 0x94($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x293DD4u, 0x293DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293DDCu;
label_293ddc:
    // 0x293ddc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x293ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x293de0: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x293de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x293de4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x293DE4u;
    SET_GPR_U32(ctx, 31, 0x293DECu);
    ctx->pc = 0x293DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293DE4u;
    // 0x293de8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x293DE4u, 0x293DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293DECu;
label_293dec:
    // 0x293dec: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x293decu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x293df0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x293df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x293df4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x293df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x293df8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x293df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293dfc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x293dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x293e00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x293e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e04: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x293e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x293e08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e0c: 0xafb70020  sw          $s7, 0x20($sp)
    ctx->pc = 0x293e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
    // 0x293e10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e14: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x293e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x293e18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x293e18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x293e1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e20: 0xc04c784  jal         func_131E10
    ctx->pc = 0x293E20u;
    SET_GPR_U32(ctx, 31, 0x293E28u);
    ctx->pc = 0x293E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E20u;
    // 0x293e24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x293E20u, 0x293E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E28u;
label_293e28:
    // 0x293e28: 0x14400187  bnez        $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x293E28u;
    {
        const bool branch_taken_0x293e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E28u;
        // 0x293e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e28) {
            ctx->pc = 0x294448u;
            goto label_294448;
        }
    }
    ctx->pc = 0x293E30u;
    // 0x293e30: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x293E30u;
    SET_GPR_U32(ctx, 31, 0x293E38u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x293E30u, 0x293E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E38u;
label_293e38:
    // 0x293e38: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x293e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x293e3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x293e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293e40: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x293e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x293e44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x293e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293e48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x293e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x293e4c: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x293e4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x293e50: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x293e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x293e54: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x293e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x293e58: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x293E58u;
    SET_GPR_U32(ctx, 31, 0x293E60u);
    ctx->pc = 0x293E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E58u;
    // 0x293e5c: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x293E58u, 0x293E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E60u;
label_293e60:
    // 0x293e60: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x293e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x293e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x293e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293e68: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x293E68u;
    SET_GPR_U32(ctx, 31, 0x293E70u);
    ctx->pc = 0x293E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293E68u;
    // 0x293e6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x293E68u, 0x293E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E70u;
label_293e70:
    // 0x293e70: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x293E70u;
    SET_GPR_U32(ctx, 31, 0x293E78u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x293E70u, 0x293E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293E78u;
label_293e78:
    // 0x293e78: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x293e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x293e7c: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x293e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293e80: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x293e80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293e84: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x293e84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x293e88: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x293e88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x293e8c: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x293e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x293e90: 0x27b40100  addiu       $s4, $sp, 0x100
    ctx->pc = 0x293e90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x293e94: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x293e94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x293e98: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x293e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x293e9c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x293e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293ea0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x293ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293ea4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x293ea4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x293ea8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x293ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x293eac: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x293eacu;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x293eb0: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x293eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x293eb4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x293eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x293eb8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x293eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x293ebc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x293ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x293ec0: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x293EC0u;
    SET_GPR_U32(ctx, 31, 0x293EC8u);
    ctx->pc = 0x293EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EC0u;
    // 0x293ec4: 0xafa000e4  sw          $zero, 0xE4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x293EC0u, 0x293EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EC8u;
label_293ec8:
    // 0x293ec8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x293EC8u;
    SET_GPR_U32(ctx, 31, 0x293ED0u);
    ctx->pc = 0x293ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293EC8u;
    // 0x293ecc: 0x46160301  sub.s       $f12, $f0, $f22 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x293EC8u, 0x293ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293ED0u;
label_293ed0:
    // 0x293ed0: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x293ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x293ed4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x293ed4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x293ed8: 0xc051e62  jal         func_147988
    ctx->pc = 0x293ED8u;
    SET_GPR_U32(ctx, 31, 0x293EE0u);
    ctx->pc = 0x293EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293ED8u;
    // 0x293edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x293ED8u, 0x293EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293EE0u;
label_293ee0:
    // 0x293ee0: 0x12710006  beq         $s3, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x293EE0u;
    {
        const bool branch_taken_0x293ee0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x293EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293EE0u;
        // 0x293ee4: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ee0) {
            ctx->pc = 0x293EFCu;
            goto label_293efc;
        }
    }
    ctx->pc = 0x293EE8u;
    // 0x293ee8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x293ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293eec: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x293eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293ef0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x293ef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x293ef4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x293ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x293ef8: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x293ef8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_293efc:
    // 0x293efc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x293efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x293f00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x293f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x293f04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x293f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f08: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x293f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x293f0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x293f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f10: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x293f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x293f14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x293f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f18: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x293F18u;
    SET_GPR_U32(ctx, 31, 0x293F20u);
    ctx->pc = 0x293F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F18u;
    // 0x293f1c: 0xe7b40098  swc1        $f20, 0x98($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x293F18u, 0x293F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F20u;
label_293f20:
    // 0x293f20: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x293f20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x293f24: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x293f24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293f28: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x293f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x293f2c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x293f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x293f30: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x293f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x293f34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x293f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f38: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x293f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x293f3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x293f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f40: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x293f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x293f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f48: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x293f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x293f4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x293f4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f50: 0xafb70020  sw          $s7, 0x20($sp)
    ctx->pc = 0x293f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
    // 0x293f54: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x293f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x293f58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x293f58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x293f5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f60: 0xc04c784  jal         func_131E10
    ctx->pc = 0x293F60u;
    SET_GPR_U32(ctx, 31, 0x293F68u);
    ctx->pc = 0x293F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F60u;
    // 0x293f64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x293F60u, 0x293F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F68u;
label_293f68:
    // 0x293f68: 0x14400137  bnez        $v0, . + 4 + (0x137 << 2)
    ctx->pc = 0x293F68u;
    {
        const bool branch_taken_0x293f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293F68u;
        // 0x293f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f68) {
            ctx->pc = 0x294448u;
            goto label_294448;
        }
    }
    ctx->pc = 0x293F70u;
    // 0x293f70: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x293f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x293f74: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x293f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x293f78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x293f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x293f7c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x293f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x293f80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x293f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f84: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x293f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x293f88: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x293f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293f8c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x293F8Cu;
    SET_GPR_U32(ctx, 31, 0x293F94u);
    ctx->pc = 0x293F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293F8Cu;
    // 0x293f90: 0xe7b50048  swc1        $f21, 0x48($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x293F8Cu, 0x293F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293F94u;
label_293f94:
    // 0x293f94: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x293f94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293f98: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x293f98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293f9c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x293f9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x293fa0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x293fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x293fa4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x293FA4u;
    SET_GPR_U32(ctx, 31, 0x293FACu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x293FA4u, 0x293FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FACu;
label_293fac:
    // 0x293fac: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x293facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x293fb0: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x293fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293fb4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x293fb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x293fb8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x293fb8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x293fbc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x293fbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x293fc0: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x293fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x293fc4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x293fc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x293fc8: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x293fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x293fcc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x293fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293fd0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x293fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293fd4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x293fd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x293fd8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x293fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x293fdc: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x293fdcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x293fe0: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x293fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x293fe4: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x293FE4u;
    SET_GPR_U32(ctx, 31, 0x293FECu);
    ctx->pc = 0x293FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293FE4u;
    // 0x293fe8: 0xafa000e4  sw          $zero, 0xE4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x293FE4u, 0x293FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FECu;
label_293fec:
    // 0x293fec: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x293FECu;
    SET_GPR_U32(ctx, 31, 0x293FF4u);
    ctx->pc = 0x293FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293FECu;
    // 0x293ff0: 0x46160300  add.s       $f12, $f0, $f22 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x293FECu, 0x293FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FF4u;
label_293ff4:
    // 0x293ff4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x293ff4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x293ff8: 0xc051e62  jal         func_147988
    ctx->pc = 0x293FF8u;
    SET_GPR_U32(ctx, 31, 0x294000u);
    ctx->pc = 0x293FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293FF8u;
    // 0x293ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x293FF8u, 0x294000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294000u;
label_294000:
    // 0x294000: 0x12710006  beq         $s3, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x294000u;
    {
        const bool branch_taken_0x294000 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x294004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294000u;
        // 0x294004: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294000) {
            ctx->pc = 0x29401Cu;
            goto label_29401c;
        }
    }
    ctx->pc = 0x294008u;
    // 0x294008: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x294008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29400c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x29400cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x294010: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x294010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x294014: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x294014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x294018: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x294018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_29401c:
    // 0x29401c: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x29401cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x294020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x294020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294024: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x294024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x294028: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x294028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29402c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x29402cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x294030: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x294030u;
    SET_GPR_U32(ctx, 31, 0x294038u);
    ctx->pc = 0x294034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294030u;
    // 0x294034: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x294030u, 0x294038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294038u;
label_294038:
    // 0x294038: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x294038u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29403c: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x29403cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x294040: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x294040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x294044: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x294044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x294048: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x294048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29404c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29404cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294050: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x294050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x294054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x294054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294058: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x294058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x29405c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29405cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294060: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x294060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x294064: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x294064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x294068: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x294068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x29406c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29406cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294070: 0xafb70020  sw          $s7, 0x20($sp)
    ctx->pc = 0x294070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
    // 0x294074: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x294074u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294078: 0xc04c784  jal         func_131E10
    ctx->pc = 0x294078u;
    SET_GPR_U32(ctx, 31, 0x294080u);
    ctx->pc = 0x29407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294078u;
    // 0x29407c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x294078u, 0x294080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294080u;
label_294080:
    // 0x294080: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x294080u;
    {
        const bool branch_taken_0x294080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294080u;
        // 0x294084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294080) {
            ctx->pc = 0x294448u;
            goto label_294448;
        }
    }
    ctx->pc = 0x294088u;
    // 0x294088: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x294088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29408c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x29408cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x294090: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x294090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294094: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x294094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x294098: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x294098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x29409c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x29409Cu;
    SET_GPR_U32(ctx, 31, 0x2940A4u);
    ctx->pc = 0x2940A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29409Cu;
    // 0x2940a0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x29409Cu, 0x2940A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2940A4u;
label_2940a4:
    // 0x2940a4: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2940a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2940a8: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2940a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2940ac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2940acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2940b0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2940b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2940b4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2940b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2940b8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2940b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2940bc: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x2940bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2940c0: 0xdba40100  lqc2        $vf4, 0x100($sp)
    ctx->pc = 0x2940c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2940c4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2940c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2940c8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2940c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2940cc: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x2940ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2940d0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2940d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2940d4: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x2940d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2940d8: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2940d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2940dc: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x2940dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2940e0: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x2940e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2940e4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2940e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2940e8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2940e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2940ec: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2940ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2940f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2940f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2940f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2940f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2940f8: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2940f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2940fc: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x2940fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x294100: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x294100u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x294104: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x294104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x294108: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x294108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x29410c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x29410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x294110: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x294110u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x294114: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x294114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x294118: 0xdba40100  lqc2        $vf4, 0x100($sp)
    ctx->pc = 0x294118u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29411c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x29411cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294120: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x294120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x294124: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x294124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x294128: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x294128u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29412c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x29412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x294130: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x294130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294134: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x294134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294138: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x294138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29413c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x29413cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x294140: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x294140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x294144: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x294144u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x294148: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x294148u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29414c: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x29414cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x294150: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x294150u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x294154: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x294154u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x294158: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x294158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x29415c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x29415cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294160: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x294160u;
    {
        const bool branch_taken_0x294160 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x294164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294160u;
        // 0x294164: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294160) {
            ctx->pc = 0x294170u;
            goto label_294170;
        }
    }
    ctx->pc = 0x294168u;
    // 0x294168: 0x53d70052  beql        $fp, $s7, . + 4 + (0x52 << 2)
    ctx->pc = 0x294168u;
    {
        const bool branch_taken_0x294168 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 23));
        if (branch_taken_0x294168) {
            ctx->pc = 0x29416Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294168u;
            // 0x29416c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2942B4u;
            goto label_2942b4;
        }
    }
    ctx->pc = 0x294170u;
label_294170:
    // 0x294170: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x294170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294174: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x294174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_294178:
    // 0x294178: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x294178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x29417c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x29417cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294180: 0x52000047  beql        $s0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x294180u;
    {
        const bool branch_taken_0x294180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x294180) {
            ctx->pc = 0x294184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294180u;
            // 0x294184: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2942A0u;
            goto label_2942a0;
        }
    }
    ctx->pc = 0x294188u;
    // 0x294188: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x294188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x29418c: 0x58400044  blezl       $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x29418Cu;
    {
        const bool branch_taken_0x29418c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x29418c) {
            ctx->pc = 0x294190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29418Cu;
            // 0x294190: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2942A0u;
            goto label_2942a0;
        }
    }
    ctx->pc = 0x294194u;
    // 0x294194: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x294194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x294198: 0x2444fd90  addiu       $a0, $v0, -0x270
    ctx->pc = 0x294198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966672));
    // 0x29419c: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x29419cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2941a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2941A0u;
    {
        const bool branch_taken_0x2941a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2941A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941A0u;
        // 0x2941a4: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941a0) {
            ctx->pc = 0x2941C0u;
            goto label_2941c0;
        }
    }
    ctx->pc = 0x2941A8u;
    // 0x2941a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2941a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2941ac: 0x2442a7f0  addiu       $v0, $v0, -0x5810
    ctx->pc = 0x2941acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944752));
    // 0x2941b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2941b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2941b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2941b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2941b8: 0x800008  jr          $a0
    ctx->pc = 0x2941B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2941C0u: goto label_2941c0;
            case 0x2941E0u: goto label_2941e0;
            case 0x294200u: goto label_294200;
            case 0x294228u: goto label_294228;
            case 0x294250u: goto label_294250;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2941B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2941C0u;
label_2941c0:
    // 0x2941c0: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x2941c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x2941c4: 0x1048002a  beq         $v0, $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2941C4u;
    {
        const bool branch_taken_0x2941c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x2941C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941C4u;
        // 0x2941c8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941c4) {
            ctx->pc = 0x294270u;
            goto label_294270;
        }
    }
    ctx->pc = 0x2941CCu;
    // 0x2941cc: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x2941ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x2941d0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2941d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2941d4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2941d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2941d8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2941D8u;
    {
        const bool branch_taken_0x2941d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2941DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941D8u;
        // 0x2941dc: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941d8) {
            ctx->pc = 0x29426Cu;
            goto label_29426c;
        }
    }
    ctx->pc = 0x2941E0u;
label_2941e0:
    // 0x2941e0: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x2941e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x2941e4: 0x10470022  beq         $v0, $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x2941E4u;
    {
        const bool branch_taken_0x2941e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2941E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941E4u;
        // 0x2941e8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941e4) {
            ctx->pc = 0x294270u;
            goto label_294270;
        }
    }
    ctx->pc = 0x2941ECu;
    // 0x2941ec: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x2941ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x2941f0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2941f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2941f4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2941f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2941f8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2941F8u;
    {
        const bool branch_taken_0x2941f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2941FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2941F8u;
        // 0x2941fc: 0xc7a00058  lwc1        $f0, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941f8) {
            ctx->pc = 0x29426Cu;
            goto label_29426c;
        }
    }
    ctx->pc = 0x294200u;
label_294200:
    // 0x294200: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x294200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x294204: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x294204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x294208: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x294208u;
    {
        const bool branch_taken_0x294208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294208u;
        // 0x29420c: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294208) {
            ctx->pc = 0x294270u;
            goto label_294270;
        }
    }
    ctx->pc = 0x294210u;
    // 0x294210: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x294210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x294214: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x294214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294218: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x294218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x29421c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x29421cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294220: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x294220u;
    {
        const bool branch_taken_0x294220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294220u;
        // 0x294224: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294220) {
            ctx->pc = 0x294270u;
            goto label_294270;
        }
    }
    ctx->pc = 0x294228u;
label_294228:
    // 0x294228: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x294228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x29422c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x29422cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x294230: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x294230u;
    {
        const bool branch_taken_0x294230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x294234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294230u;
        // 0x294234: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294230) {
            ctx->pc = 0x294270u;
            goto label_294270;
        }
    }
    ctx->pc = 0x294238u;
    // 0x294238: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x294238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x29423c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x29423cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294240: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x294240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x294244: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x294244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294248: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x294248u;
    {
        const bool branch_taken_0x294248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294248u;
        // 0x29424c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294248) {
            ctx->pc = 0x294270u;
            goto label_294270;
        }
    }
    ctx->pc = 0x294250u;
label_294250:
    // 0x294250: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x294250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x294254: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x294254u;
    {
        const bool branch_taken_0x294254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x294258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294254u;
        // 0x294258: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294254) {
            ctx->pc = 0x294270u;
            goto label_294270;
        }
    }
    ctx->pc = 0x29425Cu;
    // 0x29425c: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x29425cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x294260: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x294260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294264: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x294264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x294268: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x294268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29426c:
    // 0x29426c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29426cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_294270:
    // 0x294270: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x294270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x294274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x294274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294278: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x294278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29427c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29427cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x294280: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x294280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x294284: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x294284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x294288: 0xe601054c  swc1        $f1, 0x54C($s0)
    ctx->pc = 0x294288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x29428c: 0xe6001720  swc1        $f0, 0x1720($s0)
    ctx->pc = 0x29428cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5920), bits); }
    // 0x294290: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x294290u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x294294: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x294294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x294298: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x294298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x29429c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29429cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2942a0:
    // 0x2942a0: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x2942a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2942a4: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2942A4u;
    {
        const bool branch_taken_0x2942a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2942A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942A4u;
        // 0x2942a8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942a4) {
            ctx->pc = 0x294178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294178;
        }
    }
    ctx->pc = 0x2942ACu;
    // 0x2942ac: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2942ACu;
    {
        const bool branch_taken_0x2942ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2942B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942ACu;
        // 0x2942b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942ac) {
            ctx->pc = 0x294448u;
            goto label_294448;
        }
    }
    ctx->pc = 0x2942B4u;
label_2942b4:
    // 0x2942b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2942b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2942b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942bc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2942bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2942c0:
    // 0x2942c0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2942c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2942c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2942c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2942c8: 0x5200005b  beql        $s0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x2942C8u;
    {
        const bool branch_taken_0x2942c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2942c8) {
            ctx->pc = 0x2942CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2942C8u;
            // 0x2942cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294438u;
            goto label_294438;
        }
    }
    ctx->pc = 0x2942D0u;
    // 0x2942d0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2942d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2942d4: 0x18400057  blez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2942D4u;
    {
        const bool branch_taken_0x2942d4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2942D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942D4u;
        // 0x2942d8: 0x2cc20005  sltiu       $v0, $a2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942d4) {
            ctx->pc = 0x294434u;
            goto label_294434;
        }
    }
    ctx->pc = 0x2942DCu;
    // 0x2942dc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2942dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2942e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2942e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2942e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2942E4u;
    {
        const bool branch_taken_0x2942e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2942E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942E4u;
        // 0x2942e8: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942e4) {
            ctx->pc = 0x294308u;
            goto label_294308;
        }
    }
    ctx->pc = 0x2942ECu;
    // 0x2942ec: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2942ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2942f0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2942f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2942f4: 0x2442a810  addiu       $v0, $v0, -0x57F0
    ctx->pc = 0x2942f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944784));
    // 0x2942f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2942f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2942fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2942fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x294300: 0x800008  jr          $a0
    ctx->pc = 0x294300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294308u: goto label_294308;
            case 0x294348u: goto label_294348;
            case 0x294374u: goto label_294374;
            case 0x2943A0u: goto label_2943a0;
            case 0x2943D0u: goto label_2943d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294300u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x294308u;
label_294308:
    // 0x294308: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x294308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x29430c: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29430Cu;
    {
        const bool branch_taken_0x29430c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x294310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29430Cu;
        // 0x294310: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29430c) {
            ctx->pc = 0x294328u;
            goto label_294328;
        }
    }
    ctx->pc = 0x294314u;
    // 0x294314: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x294314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x294318: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x294318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29431c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x29431cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x294320: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x294320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294324: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x294324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_294328:
    // 0x294328: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x294328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29432c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29432cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294330: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x294330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x294334: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x294334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x294338: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x294338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x29433c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x29433cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x294340: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x294340u;
    {
        const bool branch_taken_0x294340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294340u;
        // 0x294344: 0xae0006b4  sw          $zero, 0x6B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294340) {
            ctx->pc = 0x294410u;
            goto label_294410;
        }
    }
    ctx->pc = 0x294348u;
label_294348:
    // 0x294348: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x294348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x29434c: 0x10480006  beq         $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29434Cu;
    {
        const bool branch_taken_0x29434c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x294350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29434Cu;
        // 0x294350: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29434c) {
            ctx->pc = 0x294368u;
            goto label_294368;
        }
    }
    ctx->pc = 0x294354u;
    // 0x294354: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x294354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x294358: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x294358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29435c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x29435cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x294360: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x294360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294364: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x294364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_294368:
    // 0x294368: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x294368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29436c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x29436Cu;
    {
        const bool branch_taken_0x29436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29436Cu;
        // 0x294370: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29436c) {
            ctx->pc = 0x2943FCu;
            goto label_2943fc;
        }
    }
    ctx->pc = 0x294374u;
label_294374:
    // 0x294374: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x294374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x294378: 0x10470006  beq         $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x294378u;
    {
        const bool branch_taken_0x294378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x29437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294378u;
        // 0x29437c: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294378) {
            ctx->pc = 0x294394u;
            goto label_294394;
        }
    }
    ctx->pc = 0x294380u;
    // 0x294380: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x294380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x294384: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x294384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294388: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x294388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x29438c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x29438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294390: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x294390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_294394:
    // 0x294394: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x294394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x294398: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x294398u;
    {
        const bool branch_taken_0x294398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294398u;
        // 0x29439c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294398) {
            ctx->pc = 0x2943FCu;
            goto label_2943fc;
        }
    }
    ctx->pc = 0x2943A0u;
label_2943a0:
    // 0x2943a0: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x2943a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x2943a4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2943a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2943a8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2943A8u;
    {
        const bool branch_taken_0x2943a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2943ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943A8u;
        // 0x2943ac: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2943a8) {
            ctx->pc = 0x2943C4u;
            goto label_2943c4;
        }
    }
    ctx->pc = 0x2943B0u;
    // 0x2943b0: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x2943b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x2943b4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2943b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2943b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2943b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2943bc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2943bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2943c0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2943c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2943c4:
    // 0x2943c4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2943c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2943c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2943C8u;
    {
        const bool branch_taken_0x2943c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2943CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943C8u;
        // 0x2943cc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2943c8) {
            ctx->pc = 0x2943FCu;
            goto label_2943fc;
        }
    }
    ctx->pc = 0x2943D0u;
label_2943d0:
    // 0x2943d0: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x2943d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x2943d4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2943d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2943d8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2943D8u;
    {
        const bool branch_taken_0x2943d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2943DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943D8u;
        // 0x2943dc: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2943d8) {
            ctx->pc = 0x2943F4u;
            goto label_2943f4;
        }
    }
    ctx->pc = 0x2943E0u;
    // 0x2943e0: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x2943e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x2943e4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2943e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2943e8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2943e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2943ec: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2943ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2943f0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2943f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2943f4:
    // 0x2943f4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2943f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2943f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2943f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2943fc:
    // 0x2943fc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2943fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x294400: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x294400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x294404: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x294404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x294408: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x294408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x29440c: 0xae0506b4  sw          $a1, 0x6B4($s0)
    ctx->pc = 0x29440cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 5));
label_294410:
    // 0x294410: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x294410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x294414: 0x14750003  bne         $v1, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x294414u;
    {
        const bool branch_taken_0x294414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x294418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294414u;
        // 0x294418: 0xa6000568  sh          $zero, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294414) {
            ctx->pc = 0x294424u;
            goto label_294424;
        }
    }
    ctx->pc = 0x29441Cu;
    // 0x29441c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294420: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x294420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_294424:
    // 0x294424: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x294424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x294428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x294428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29442c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x29442cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294430: 0xe6001720  swc1        $f0, 0x1720($s0)
    ctx->pc = 0x294430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5920), bits); }
label_294434:
    // 0x294434: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x294434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_294438:
    // 0x294438: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x294438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29443c: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x29443Cu;
    {
        const bool branch_taken_0x29443c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29443Cu;
        // 0x294440: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29443c) {
            ctx->pc = 0x2942C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2942c0;
        }
    }
    ctx->pc = 0x294444u;
    // 0x294444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294448:
    // 0x294448: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x294448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_29444c:
    // 0x29444c: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x29444cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x294450: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x294450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x294454: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x294454u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x294458: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x294458u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x29445c: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x29445cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x294460: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x294460u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x294464: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x294464u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x294468: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x294468u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29446c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x29446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x294470: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x294470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x294474: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x294474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x294478: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x294478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29447c: 0x3e00008  jr          $ra
    ctx->pc = 0x29447Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29447Cu;
        // 0x294480: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29447Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294484u;
    // 0x294484: 0x0  nop
    ctx->pc = 0x294484u;
    // NOP
    ctx->pc = 0x294488u;
}
