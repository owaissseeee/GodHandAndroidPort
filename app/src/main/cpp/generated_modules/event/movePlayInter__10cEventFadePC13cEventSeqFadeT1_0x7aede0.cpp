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
// Function: movePlayInter__10cEventFadePC13cEventSeqFadeT1
// Address: 0x7aede0 - 0x7aefa0
void movePlayInter__10cEventFadePC13cEventSeqFadeT1_0x7aede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlayInter__10cEventFadePC13cEventSeqFadeT1_0x7aede0");
#endif

    switch (ctx->pc) {
        case 0x7aee3cu: goto label_7aee3c;
        case 0x7aee5cu: goto label_7aee5c;
        case 0x7aee70u: goto label_7aee70;
        case 0x7aeeb0u: goto label_7aeeb0;
        case 0x7aeee4u: goto label_7aeee4;
        case 0x7aef18u: goto label_7aef18;
        case 0x7aef4cu: goto label_7aef4c;
        case 0x7aef6cu: goto label_7aef6c;
        default: break;
    }

    ctx->pc = 0x7aede0u;

    // 0x7aede0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x7aede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x7aede4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7aede4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7aede8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7aede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7aedec: 0x3c10007b  lui         $s0, 0x7B
    ctx->pc = 0x7aedecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)123 << 16));
    // 0x7aedf0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7aedf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7aedf4: 0x26105248  addiu       $s0, $s0, 0x5248
    ctx->pc = 0x7aedf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21064));
    // 0x7aedf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7aedf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7aedfc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x7aedfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aee00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7aee00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7aee04: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7aee04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7aee08: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x7aee08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aee0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7aee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7aee10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x7aee10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aee14: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x7aee14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x7aee18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7aee18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aee1c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x7aee1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x7aee20: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x7aee20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x7aee24: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x7aee24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x7aee28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7aee28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7aee2c: 0x0  nop
    ctx->pc = 0x7aee2cu;
    // NOP
    // 0x7aee30: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7aee30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7aee34: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7AEE34u;
    SET_GPR_U32(ctx, 31, 0x7AEE3Cu);
    ctx->pc = 0x7AEE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AEE34u;
    // 0x7aee38: 0x92850003  lbu         $a1, 0x3($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7AEE34u, 0x7AEE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AEE3Cu;
label_7aee3c:
    // 0x7aee3c: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x7aee3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x7aee40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7aee40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aee44: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x7aee44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x7aee48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7aee48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7aee4c: 0x0  nop
    ctx->pc = 0x7aee4cu;
    // NOP
    // 0x7aee50: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7aee50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7aee54: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7AEE54u;
    SET_GPR_U32(ctx, 31, 0x7AEE5Cu);
    ctx->pc = 0x7AEE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AEE54u;
    // 0x7aee58: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7AEE54u, 0x7AEE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AEE5Cu;
label_7aee5c:
    // 0x7aee5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7aee5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aee60: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x7aee60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x7aee64: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x7aee64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x7aee68: 0xc1eb3e2  jal         func_7ACF88
    ctx->pc = 0x7AEE68u;
    SET_GPR_U32(ctx, 31, 0x7AEE70u);
    ctx->pc = 0x7AEE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AEE68u;
    // 0x7aee6c: 0xc48c000c  lwc1        $f12, 0xC($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACF88u, 0x7AEE68u, 0x7AEE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AEE70u;
label_7aee70:
    // 0x7aee70: 0x4615a541  sub.s       $f21, $f20, $f21
    ctx->pc = 0x7aee70u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x7aee74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7aee74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7aee78: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x7aee78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x7aee7c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x7aee7cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x7aee80: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x7aee80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x7aee84: 0x9243000c  lbu         $v1, 0xC($s2)
    ctx->pc = 0x7aee84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x7aee88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x7aee88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7aee8c: 0x0  nop
    ctx->pc = 0x7aee8cu;
    // NOP
    // 0x7aee90: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7aee90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7aee94: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x7aee94u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[21]);
    // 0x7aee98: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x7aee98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7aee9c: 0x0  nop
    ctx->pc = 0x7aee9cu;
    // NOP
    // 0x7aeea0: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7aeea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7aeea4: 0x4614b581  sub.s       $f22, $f22, $f20
    ctx->pc = 0x7aeea4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x7aeea8: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AEEA8u;
    SET_GPR_U32(ctx, 31, 0x7AEEB0u);
    ctx->pc = 0x7AEEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AEEA8u;
    // 0x7aeeac: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AEEA8u, 0x7AEEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AEEB0u;
label_7aeeb0:
    // 0x7aeeb0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7aeeb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7aeeb4: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x7aeeb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x7aeeb8: 0x9283000d  lbu         $v1, 0xD($s4)
    ctx->pc = 0x7aeeb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x7aeebc: 0x9242000d  lbu         $v0, 0xD($s2)
    ctx->pc = 0x7aeebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
    // 0x7aeec0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x7aeec0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x7aeec4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7aeec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7aeec8: 0x0  nop
    ctx->pc = 0x7aeec8u;
    // NOP
    // 0x7aeecc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7aeeccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7aeed0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7aeed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7aeed4: 0x0  nop
    ctx->pc = 0x7aeed4u;
    // NOP
    // 0x7aeed8: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7aeed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7aeedc: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AEEDCu;
    SET_GPR_U32(ctx, 31, 0x7AEEE4u);
    ctx->pc = 0x7AEEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AEEDCu;
    // 0x7aeee0: 0x327300ff  andi        $s3, $s3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AEEDCu, 0x7AEEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AEEE4u;
label_7aeee4:
    // 0x7aeee4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7aeee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7aeee8: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x7aeee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x7aeeec: 0x9283000e  lbu         $v1, 0xE($s4)
    ctx->pc = 0x7aeeecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x7aeef0: 0x9242000e  lbu         $v0, 0xE($s2)
    ctx->pc = 0x7aeef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x7aeef4: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x7aeef4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x7aeef8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7aeef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7aeefc: 0x0  nop
    ctx->pc = 0x7aeefcu;
    // NOP
    // 0x7aef00: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7aef00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7aef04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7aef04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7aef08: 0x0  nop
    ctx->pc = 0x7aef08u;
    // NOP
    // 0x7aef0c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7aef0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7aef10: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AEF10u;
    SET_GPR_U32(ctx, 31, 0x7AEF18u);
    ctx->pc = 0x7AEF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AEF10u;
    // 0x7aef14: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AEF10u, 0x7AEF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AEF18u;
label_7aef18:
    // 0x7aef18: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7aef18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7aef1c: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x7aef1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x7aef20: 0x9283000f  lbu         $v1, 0xF($s4)
    ctx->pc = 0x7aef20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15)));
    // 0x7aef24: 0x9242000f  lbu         $v0, 0xF($s2)
    ctx->pc = 0x7aef24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 15)));
    // 0x7aef28: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x7aef28u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x7aef2c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x7aef2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7aef30: 0x0  nop
    ctx->pc = 0x7aef30u;
    // NOP
    // 0x7aef34: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7aef34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7aef38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x7aef38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7aef3c: 0x0  nop
    ctx->pc = 0x7aef3cu;
    // NOP
    // 0x7aef40: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x7aef40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x7aef44: 0xc1ebb2e  jal         func_7AECB8
    ctx->pc = 0x7AEF44u;
    SET_GPR_U32(ctx, 31, 0x7AEF4Cu);
    ctx->pc = 0x7AEF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AEF44u;
    // 0x7aef48: 0x321000ff  andi        $s0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AECB8u, 0x7AEF44u, 0x7AEF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AEF4Cu;
label_7aef4c:
    // 0x7aef4c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7aef4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7aef50: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x7aef50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x7aef54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x7aef54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aef58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x7aef58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aef5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7aef5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aef60: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7aef60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aef64: 0xc1ebbe8  jal         func_7AEFA0
    ctx->pc = 0x7AEF64u;
    SET_GPR_U32(ctx, 31, 0x7AEF6Cu);
    ctx->pc = 0x7AEF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AEF64u;
    // 0x7aef68: 0x310800ff  andi        $t0, $t0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEFA0u, 0x7AEF64u, 0x7AEF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AEF6Cu;
label_7aef6c:
    // 0x7aef6c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7aef6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7aef70: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7aef70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7aef74: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7aef74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7aef78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7aef78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7aef7c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7aef7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7aef80: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7aef80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7aef84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aef84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7aef88: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x7aef88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x7aef8c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x7aef8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7aef90: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x7aef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7aef94: 0x3e00008  jr          $ra
    ctx->pc = 0x7AEF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEF94u;
        // 0x7aef98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEF9Cu;
    // 0x7aef9c: 0x0  nop
    ctx->pc = 0x7aef9cu;
    // NOP
    ctx->pc = 0x7aefa0u;
}
} // namespace gh_event
