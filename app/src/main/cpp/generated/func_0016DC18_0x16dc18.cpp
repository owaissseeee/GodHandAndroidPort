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

// Function: func_0016DC18
// Address: 0x16dc18 - 0x16df38
void func_0016DC18_0x16dc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016DC18_0x16dc18");
#endif

    switch (ctx->pc) {
        case 0x16dc98u: goto label_16dc98;
        case 0x16dcb4u: goto label_16dcb4;
        case 0x16dcc4u: goto label_16dcc4;
        case 0x16dcf4u: goto label_16dcf4;
        case 0x16dd24u: goto label_16dd24;
        case 0x16dd3cu: goto label_16dd3c;
        case 0x16dd44u: goto label_16dd44;
        case 0x16dd70u: goto label_16dd70;
        case 0x16dd78u: goto label_16dd78;
        case 0x16dd88u: goto label_16dd88;
        case 0x16de30u: goto label_16de30;
        case 0x16dee8u: goto label_16dee8;
        default: break;
    }

    ctx->pc = 0x16dc18u;

    // 0x16dc18: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x16dc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x16dc1c: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x16dc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x16dc20: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x16dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16dc24: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x16dc24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x16dc28: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x16dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16dc2c: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x16dc2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x16dc30: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x16dc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16dc34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16dc34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc38: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x16dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x16dc3c: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x16dc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x16dc40: 0x26910290  addiu       $s1, $s4, 0x290
    ctx->pc = 0x16dc40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 656));
    // 0x16dc44: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x16dc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x16dc48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16dc48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc4c: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x16dc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x16dc50: 0x27b500c0  addiu       $s5, $sp, 0xC0
    ctx->pc = 0x16dc50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16dc54: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x16dc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x16dc58: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x16dc58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16dc5c: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x16dc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
    // 0x16dc60: 0x269702ec  addiu       $s7, $s4, 0x2EC
    ctx->pc = 0x16dc60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 748));
    // 0x16dc64: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x16dc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x16dc68: 0x269e02e0  addiu       $fp, $s4, 0x2E0
    ctx->pc = 0x16dc68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
    // 0x16dc6c: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x16dc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x16dc70: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x16dc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x16dc74: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x16dc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x16dc78: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x16dc78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x16dc7c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x16dc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x16dc80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16dc80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16dc84: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x16dc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x16dc88: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x16dc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x16dc8c: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x16dc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
    // 0x16dc90: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x16dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x16dc94: 0x0  nop
    ctx->pc = 0x16dc94u;
    // NOP
label_16dc98:
    // 0x16dc98: 0x3c29021  addu        $s2, $fp, $v0
    ctx->pc = 0x16dc98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x16dc9c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x16dc9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16dca0: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x16DCA0u;
    {
        const bool branch_taken_0x16dca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCA0u;
        // 0x16dca4: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dca0) {
            ctx->pc = 0x16DD48u;
            goto label_16dd48;
        }
    }
    ctx->pc = 0x16DCA8u;
    // 0x16dca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcac: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x16DCACu;
    SET_GPR_U32(ctx, 31, 0x16DCB4u);
    ctx->pc = 0x16DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DCACu;
    // 0x16dcb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x16DCACu, 0x16DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DCB4u;
label_16dcb4:
    // 0x16dcb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16dcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcbc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x16DCBCu;
    SET_GPR_U32(ctx, 31, 0x16DCC4u);
    ctx->pc = 0x16DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DCBCu;
    // 0x16dcc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x16DCBCu, 0x16DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DCC4u;
label_16dcc4:
    // 0x16dcc4: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x16dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x16dcc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dccc: 0x2633018  mult        $a2, $s3, $v1
    ctx->pc = 0x16dcccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x16dcd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16dcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcd4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x16dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x16dcd8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x16dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dcdc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x16dcdcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16dce0: 0x0  nop
    ctx->pc = 0x16dce0u;
    // NOP
    // 0x16dce4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16dce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16dce8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16dce8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16dcec: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x16DCECu;
    SET_GPR_U32(ctx, 31, 0x16DCF4u);
    ctx->pc = 0x16DCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DCECu;
    // 0x16dcf0: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x16DCECu, 0x16DCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DCF4u;
label_16dcf4:
    // 0x16dcf4: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x16dcf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16dcf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16dcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dcfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16dd00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dd04: 0x0  nop
    ctx->pc = 0x16dd04u;
    // NOP
    // 0x16dd08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16dd08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16dd0c: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x16dd0cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[21]);
    // 0x16dd10: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x16dd10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x16dd14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16dd14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x16dd18: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16dd18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16dd1c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x16DD1Cu;
    SET_GPR_U32(ctx, 31, 0x16DD24u);
    ctx->pc = 0x16DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD1Cu;
    // 0x16dd20: 0xa043004f  sb          $v1, 0x4F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x16DD1Cu, 0x16DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD24u;
label_16dd24:
    // 0x16dd24: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x16dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16dd28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd2c: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x16dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x16dd30: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16dd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16dd34: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x16DD34u;
    SET_GPR_U32(ctx, 31, 0x16DD3Cu);
    ctx->pc = 0x16DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD34u;
    // 0x16dd38: 0xac450084  sw          $a1, 0x84($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x16DD34u, 0x16DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD3Cu;
label_16dd3c:
    // 0x16dd3c: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x16DD3Cu;
    SET_GPR_U32(ctx, 31, 0x16DD44u);
    ctx->pc = 0x16DD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD3Cu;
    // 0x16dd40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x16DD3Cu, 0x16DD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD44u;
label_16dd44:
    // 0x16dd44: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x16dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16dd48:
    // 0x16dd48: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x16dd48u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16dd4c: 0x2e630005  sltiu       $v1, $s3, 0x5
    ctx->pc = 0x16dd4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x16dd50: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x16DD50u;
    {
        const bool branch_taken_0x16dd50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD50u;
        // 0x16dd54: 0x131040  sll         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd50) {
            ctx->pc = 0x16DC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16dc98;
        }
    }
    ctx->pc = 0x16DD58u;
    // 0x16dd58: 0x8282005a  lb          $v0, 0x5A($s4)
    ctx->pc = 0x16dd58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 90)));
    // 0x16dd5c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x16dd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dd60: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DD60u;
    {
        const bool branch_taken_0x16dd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x16dd60) {
            ctx->pc = 0x16DD70u;
            goto label_16dd70;
        }
    }
    ctx->pc = 0x16DD68u;
    // 0x16dd68: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x16DD68u;
    SET_GPR_U32(ctx, 31, 0x16DD70u);
    ctx->pc = 0x16DD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD68u;
    // 0x16dd6c: 0x26840170  addiu       $a0, $s4, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x16DD68u, 0x16DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD70u;
label_16dd70:
    // 0x16dd70: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x16DD70u;
    SET_GPR_U32(ctx, 31, 0x16DD78u);
    ctx->pc = 0x16DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD70u;
    // 0x16dd74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x16DD70u, 0x16DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD78u;
label_16dd78:
    // 0x16dd78: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x16dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x16dd7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16dd80: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x16dd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16dd88:
    // 0x16dd88: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16dd88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16dd8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16dd90: 0x0  nop
    ctx->pc = 0x16dd90u;
    // NOP
    // 0x16dd94: 0x0  nop
    ctx->pc = 0x16dd94u;
    // NOP
    // 0x16dd98: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16DD98u;
    {
        const bool branch_taken_0x16dd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x16DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD98u;
        // 0x16dd9c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd98) {
            ctx->pc = 0x16DD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16dd88;
        }
    }
    ctx->pc = 0x16DDA0u;
    // 0x16dda0: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x16dda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16dda4: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x16dda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16dda8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16dda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16ddac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16ddacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ddb0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x16ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x16ddb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16ddb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16ddb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x16ddb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16ddbc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16ddbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16ddc0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x16ddc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x16ddc4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16ddc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16ddc8: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x16ddc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x16ddcc: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x16ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x16ddd0: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x16ddd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x16ddd4: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x16ddd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x16ddd8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x16ddd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x16dddc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16dddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16dde0: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x16dde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16dde4: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x16dde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16dde8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x16dde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ddec: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x16ddecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x16ddf0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16ddf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16ddf4: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x16ddf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x16ddf8: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x16ddf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x16ddfc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x16ddfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x16de00: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x16de00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x16de04: 0xe6a30004  swc1        $f3, 0x4($s5)
    ctx->pc = 0x16de04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x16de08: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x16de08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x16de0c: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x16de0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x16de10: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x16de10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16de14: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x16de14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16de18: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x16de18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16de1c: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x16de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x16de20: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x16de20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x16de24: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x16de24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x16de28: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x16DE28u;
    SET_GPR_U32(ctx, 31, 0x16DE30u);
    ctx->pc = 0x16DE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE28u;
    // 0x16de2c: 0xe7a200b8  swc1        $f2, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x16DE28u, 0x16DE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE30u;
label_16de30:
    // 0x16de30: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x16de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16de34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16de34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de38: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x16de38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16de3c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16de40: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x16de40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x16de44: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x16de44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x16de48: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x16de48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x16de4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16de4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de50: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x16de50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x16de54: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x16de54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x16de58: 0xe6d4000c  swc1        $f20, 0xC($s6)
    ctx->pc = 0x16de58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x16de5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16de5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16de60: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x16de60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x16de64: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x16de64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x16de68: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x16de68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16de6c: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x16de6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16de70: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x16de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16de74: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x16de74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de78: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16de7c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x16de7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x16de80: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x16de80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x16de84: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x16de84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x16de88: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x16de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16de8c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x16de8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16de90: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x16de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16de94: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x16de94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x16de98: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x16de98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x16de9c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x16de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x16dea0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x16dea0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x16dea4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16dea8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x16dea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16deac: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x16deacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16deb0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x16deb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x16deb4: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x16deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x16deb8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x16deb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x16debc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x16debcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x16dec0: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x16dec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x16dec4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16dec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16dec8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x16dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x16decc: 0x8c4811b0  lw          $t0, 0x11B0($v0)
    ctx->pc = 0x16deccu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x16ded0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x16ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x16ded4: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x16ded4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x16ded8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x16ded8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x16dedc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x16dedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x16dee0: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x16DEE0u;
    SET_GPR_U32(ctx, 31, 0x16DEE8u);
    ctx->pc = 0x16DEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEE0u;
    // 0x16dee4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x16DEE0u, 0x16DEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DEE8u;
label_16dee8:
    // 0x16dee8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16dee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16deec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DEECu;
    {
        const bool branch_taken_0x16deec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEECu;
        // 0x16def0: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16deec) {
            ctx->pc = 0x16DF00u;
            goto label_16df00;
        }
    }
    ctx->pc = 0x16DEF4u;
    // 0x16def4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x16def4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x16def8: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x16def8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x16defc: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x16defcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_16df00:
    // 0x16df00: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x16df00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16df04: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x16df04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x16df08: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x16df08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16df0c: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x16df0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16df10: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x16df10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x16df14: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x16df14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16df18: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x16df18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16df1c: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x16df1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16df20: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x16df20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16df24: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x16df24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16df28: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x16df28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16df2c: 0x3e00008  jr          $ra
    ctx->pc = 0x16DF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF2Cu;
        // 0x16df30: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DF34u;
    // 0x16df34: 0x0  nop
    ctx->pc = 0x16df34u;
    // NOP
    ctx->pc = 0x16df38u;
}
