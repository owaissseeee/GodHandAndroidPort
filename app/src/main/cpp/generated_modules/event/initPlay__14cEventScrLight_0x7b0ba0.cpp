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
// Function: initPlay__14cEventScrLight
// Address: 0x7b0ba0 - 0x7b0f78
void initPlay__14cEventScrLight_0x7b0ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initPlay__14cEventScrLight_0x7b0ba0");
#endif

    switch (ctx->pc) {
        case 0x7b0bc8u: goto label_7b0bc8;
        case 0x7b0be4u: goto label_7b0be4;
        case 0x7b0bf0u: goto label_7b0bf0;
        case 0x7b0c14u: goto label_7b0c14;
        case 0x7b0d48u: goto label_7b0d48;
        default: break;
    }

    ctx->pc = 0x7b0ba0u;

    // 0x7b0ba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7b0ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7b0ba4: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7b0ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
    // 0x7b0ba8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7b0ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7b0bac: 0x24a54ed0  addiu       $a1, $a1, 0x4ED0
    ctx->pc = 0x7b0bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20176));
    // 0x7b0bb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7b0bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0bb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7b0bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7b0bb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7b0bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7b0bbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b0bc0: 0xc1ecdfc  jal         func_7B37F0
    ctx->pc = 0x7B0BC0u;
    SET_GPR_U32(ctx, 31, 0x7B0BC8u);
    ctx->pc = 0x7B0BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0BC0u;
    // 0x7b0bc4: 0x3c110060  lui         $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B37F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B37F0u, 0x7B0BC0u, 0x7B0BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0BC8u;
label_7b0bc8:
    // 0x7b0bc8: 0x26304700  addiu       $s0, $s1, 0x4700
    ctx->pc = 0x7b0bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 18176));
    // 0x7b0bcc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x7b0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x7b0bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b0bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0bd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x7b0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x7b0bd8: 0x8c436288  lw          $v1, 0x6288($v0)
    ctx->pc = 0x7b0bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25224)));
    // 0x7b0bdc: 0xc0b6378  jal         func_2D8DE0
    ctx->pc = 0x7B0BDCu;
    SET_GPR_U32(ctx, 31, 0x7B0BE4u);
    ctx->pc = 0x7B0BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0BDCu;
    // 0x7b0be0: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8DE0u, 0x7B0BDCu, 0x7B0BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0BE4u;
label_7b0be4:
    // 0x7b0be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7b0be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0be8: 0xc0b6102  jal         func_2D8408
    ctx->pc = 0x7B0BE8u;
    SET_GPR_U32(ctx, 31, 0x7B0BF0u);
    ctx->pc = 0x7B0BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0BE8u;
    // 0x7b0bec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8408u, 0x7B0BE8u, 0x7B0BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0BF0u;
label_7b0bf0:
    // 0x7b0bf0: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7b0bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7b0bf4: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x7b0bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x7b0bf8: 0x24634c38  addiu       $v1, $v1, 0x4C38
    ctx->pc = 0x7b0bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x7b0bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7b0bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0c00: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x7b0c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x754C44u, _value); } while (0);
    // 0x7b0c04: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x7b0c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x7b0c08: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x7b0c08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x754C3Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x754C3Cu, _value); } while (0);
    // 0x7b0c0c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7B0C0Cu;
    SET_GPR_U32(ctx, 31, 0x7B0C14u);
    ctx->pc = 0x7B0C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0C0Cu;
    // 0x7b0c10: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7B0C0Cu, 0x7B0C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0C14u;
label_7b0c14:
    // 0x7b0c14: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x7b0c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0c18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7b0c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0c1c: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x7b0c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x7b0c20: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x7b0c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0c24: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x7b0c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x7b0c28: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x7b0c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0c2c: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x7b0c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x7b0c30: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x7b0c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0c34: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x7b0c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x7b0c38: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x7b0c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0c3c: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x7b0c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x7b0c40: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x7b0c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0c44: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x7b0c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x7b0c48: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x7b0c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0c4c: 0xe6410040  swc1        $f1, 0x40($s2)
    ctx->pc = 0x7b0c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x7b0c50: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x7b0c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0c54: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x7b0c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x7b0c58: 0x92224700  lbu         $v0, 0x4700($s1)
    ctx->pc = 0x7b0c58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18176)));
    // 0x7b0c5c: 0xa2420048  sb          $v0, 0x48($s2)
    ctx->pc = 0x7b0c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0c60: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x7b0c60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x7b0c64: 0xa2430049  sb          $v1, 0x49($s2)
    ctx->pc = 0x7b0c64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 73), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0c68: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x7b0c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b0c6c: 0xa242004a  sb          $v0, 0x4A($s2)
    ctx->pc = 0x7b0c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 74), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0c70: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x7b0c70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x7b0c74: 0xa243004b  sb          $v1, 0x4B($s2)
    ctx->pc = 0x7b0c74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 75), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0c78: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x7b0c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7b0c7c: 0xa242004c  sb          $v0, 0x4C($s2)
    ctx->pc = 0x7b0c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0c80: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x7b0c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x7b0c84: 0xa243004d  sb          $v1, 0x4D($s2)
    ctx->pc = 0x7b0c84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 77), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0c88: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x7b0c88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x7b0c8c: 0xa242004e  sb          $v0, 0x4E($s2)
    ctx->pc = 0x7b0c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0c90: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x7b0c90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x7b0c94: 0xa243004f  sb          $v1, 0x4F($s2)
    ctx->pc = 0x7b0c94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0c98: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x7b0c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x7b0c9c: 0xa2420050  sb          $v0, 0x50($s2)
    ctx->pc = 0x7b0c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0ca0: 0x92030061  lbu         $v1, 0x61($s0)
    ctx->pc = 0x7b0ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
    // 0x7b0ca4: 0xa2430051  sb          $v1, 0x51($s2)
    ctx->pc = 0x7b0ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 81), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0ca8: 0x92020062  lbu         $v0, 0x62($s0)
    ctx->pc = 0x7b0ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x7b0cac: 0xa2420052  sb          $v0, 0x52($s2)
    ctx->pc = 0x7b0cacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 82), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0cb0: 0x92030063  lbu         $v1, 0x63($s0)
    ctx->pc = 0x7b0cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 99)));
    // 0x7b0cb4: 0xa2430053  sb          $v1, 0x53($s2)
    ctx->pc = 0x7b0cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 83), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0cb8: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x7b0cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7b0cbc: 0xa2420054  sb          $v0, 0x54($s2)
    ctx->pc = 0x7b0cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 84), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0cc0: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x7b0cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x7b0cc4: 0xa2430055  sb          $v1, 0x55($s2)
    ctx->pc = 0x7b0cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0cc8: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x7b0cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x7b0ccc: 0xa2420056  sb          $v0, 0x56($s2)
    ctx->pc = 0x7b0cccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 86), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0cd0: 0x9203000b  lbu         $v1, 0xB($s0)
    ctx->pc = 0x7b0cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x7b0cd4: 0xa2430057  sb          $v1, 0x57($s2)
    ctx->pc = 0x7b0cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 87), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0cd8: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x7b0cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7b0cdc: 0xa2420058  sb          $v0, 0x58($s2)
    ctx->pc = 0x7b0cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0ce0: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x7b0ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x7b0ce4: 0xa2430059  sb          $v1, 0x59($s2)
    ctx->pc = 0x7b0ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 89), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0ce8: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x7b0ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x7b0cec: 0xa242005a  sb          $v0, 0x5A($s2)
    ctx->pc = 0x7b0cecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 90), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0cf0: 0x9203000f  lbu         $v1, 0xF($s0)
    ctx->pc = 0x7b0cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x7b0cf4: 0xa243005b  sb          $v1, 0x5B($s2)
    ctx->pc = 0x7b0cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 91), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0cf8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x7b0cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0cfc: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x7b0cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x7b0d00: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x7b0d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0d04: 0xe6410060  swc1        $f1, 0x60($s2)
    ctx->pc = 0x7b0d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x7b0d08: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x7b0d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0d0c: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x7b0d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x7b0d10: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x7b0d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0d14: 0xe6410068  swc1        $f1, 0x68($s2)
    ctx->pc = 0x7b0d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x7b0d18: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x7b0d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0d1c: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x7b0d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x7b0d20: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x7b0d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0d24: 0xe6410070  swc1        $f1, 0x70($s2)
    ctx->pc = 0x7b0d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x7b0d28: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x7b0d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0d2c: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x7b0d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x7b0d30: 0xe6410074  swc1        $f1, 0x74($s2)
    ctx->pc = 0x7b0d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x7b0d34: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x7b0d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x7b0d38: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x7b0d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0d3c: 0x10c00081  beqz        $a2, . + 4 + (0x81 << 2)
    ctx->pc = 0x7B0D3Cu;
    {
        const bool branch_taken_0x7b0d3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0D3Cu;
        // 0x7b0d40: 0xe6400078  swc1        $f0, 0x78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0d3c) {
            ctx->pc = 0x7B0F44u;
            goto label_7b0f44;
        }
    }
    ctx->pc = 0x7B0D44u;
    // 0x7b0d44: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x7b0d44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_7b0d48:
    // 0x7b0d48: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x7b0d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0d4c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x7b0d4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b0d50: 0x0  nop
    ctx->pc = 0x7b0d50u;
    // NOP
    // 0x7b0d54: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x7B0D54u;
    {
        const bool branch_taken_0x7b0d54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b0d54) {
            ctx->pc = 0x7B0D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B0D54u;
            // 0x7b0d58: 0xc4800040  lwc1        $f0, 0x40($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B0DBCu;
            goto label_7b0dbc;
        }
    }
    ctx->pc = 0x7B0D5Cu;
    // 0x7b0d5c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x7b0d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0d60: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x7b0d60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b0d64: 0x0  nop
    ctx->pc = 0x7b0d64u;
    // NOP
    // 0x7b0d68: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x7B0D68u;
    {
        const bool branch_taken_0x7b0d68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b0d68) {
            ctx->pc = 0x7B0D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B0D68u;
            // 0x7b0d6c: 0xc4800040  lwc1        $f0, 0x40($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B0DBCu;
            goto label_7b0dbc;
        }
    }
    ctx->pc = 0x7B0D70u;
    // 0x7b0d70: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x7b0d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0d74: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x7b0d74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b0d78: 0x0  nop
    ctx->pc = 0x7b0d78u;
    // NOP
    // 0x7b0d7c: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x7B0D7Cu;
    {
        const bool branch_taken_0x7b0d7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b0d7c) {
            ctx->pc = 0x7B0D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B0D7Cu;
            // 0x7b0d80: 0xc4800040  lwc1        $f0, 0x40($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B0DBCu;
            goto label_7b0dbc;
        }
    }
    ctx->pc = 0x7B0D84u;
    // 0x7b0d84: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x7b0d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0d88: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x7b0d88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b0d8c: 0x0  nop
    ctx->pc = 0x7b0d8cu;
    // NOP
    // 0x7b0d90: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x7B0D90u;
    {
        const bool branch_taken_0x7b0d90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b0d90) {
            ctx->pc = 0x7B0D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B0D90u;
            // 0x7b0d94: 0xc4800040  lwc1        $f0, 0x40($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B0DBCu;
            goto label_7b0dbc;
        }
    }
    ctx->pc = 0x7B0D98u;
    // 0x7b0d98: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x7b0d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0d9c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x7b0d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x7b0da0: 0xc641003c  lwc1        $f1, 0x3C($s2)
    ctx->pc = 0x7b0da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0da4: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x7b0da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x7b0da8: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x7b0da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0dac: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x7b0dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x7b0db0: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x7b0db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0db4: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x7b0db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x7b0db8: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x7b0db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7b0dbc:
    // 0x7b0dbc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7b0dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7b0dc0: 0x0  nop
    ctx->pc = 0x7b0dc0u;
    // NOP
    // 0x7b0dc4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7b0dc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b0dc8: 0x0  nop
    ctx->pc = 0x7b0dc8u;
    // NOP
    // 0x7b0dcc: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x7B0DCCu;
    {
        const bool branch_taken_0x7b0dcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b0dcc) {
            ctx->pc = 0x7B0DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B0DCCu;
            // 0x7b0dd0: 0xc4800048  lwc1        $f0, 0x48($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B0E20u;
            goto label_7b0e20;
        }
    }
    ctx->pc = 0x7B0DD4u;
    // 0x7b0dd4: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x7b0dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0dd8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7b0dd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b0ddc: 0x0  nop
    ctx->pc = 0x7b0ddcu;
    // NOP
    // 0x7b0de0: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x7B0DE0u;
    {
        const bool branch_taken_0x7b0de0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b0de0) {
            ctx->pc = 0x7B0DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B0DE0u;
            // 0x7b0de4: 0xc4800048  lwc1        $f0, 0x48($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B0E20u;
            goto label_7b0e20;
        }
    }
    ctx->pc = 0x7B0DE8u;
    // 0x7b0de8: 0x9242004c  lbu         $v0, 0x4C($s2)
    ctx->pc = 0x7b0de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x7b0dec: 0xa0820030  sb          $v0, 0x30($a0)
    ctx->pc = 0x7b0decu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0df0: 0x9243004d  lbu         $v1, 0x4D($s2)
    ctx->pc = 0x7b0df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 77)));
    // 0x7b0df4: 0xa0830031  sb          $v1, 0x31($a0)
    ctx->pc = 0x7b0df4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0df8: 0x9242004e  lbu         $v0, 0x4E($s2)
    ctx->pc = 0x7b0df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 78)));
    // 0x7b0dfc: 0xa0820032  sb          $v0, 0x32($a0)
    ctx->pc = 0x7b0dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0e00: 0x9243004f  lbu         $v1, 0x4F($s2)
    ctx->pc = 0x7b0e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 79)));
    // 0x7b0e04: 0xa0830033  sb          $v1, 0x33($a0)
    ctx->pc = 0x7b0e04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 51), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0e08: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x7b0e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0e0c: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x7b0e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x7b0e10: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x7b0e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0e14: 0xe4810044  swc1        $f1, 0x44($a0)
    ctx->pc = 0x7b0e14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x7b0e18: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x7b0e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0e1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7b0e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7b0e20:
    // 0x7b0e20: 0x0  nop
    ctx->pc = 0x7b0e20u;
    // NOP
    // 0x7b0e24: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7b0e24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b0e28: 0x0  nop
    ctx->pc = 0x7b0e28u;
    // NOP
    // 0x7b0e2c: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x7B0E2Cu;
    {
        const bool branch_taken_0x7b0e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b0e2c) {
            ctx->pc = 0x7B0E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B0E2Cu;
            // 0x7b0e30: 0xc4800050  lwc1        $f0, 0x50($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B0E7Cu;
            goto label_7b0e7c;
        }
    }
    ctx->pc = 0x7B0E34u;
    // 0x7b0e34: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x7b0e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0e38: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7b0e38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b0e3c: 0x0  nop
    ctx->pc = 0x7b0e3cu;
    // NOP
    // 0x7b0e40: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x7B0E40u;
    {
        const bool branch_taken_0x7b0e40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b0e40) {
            ctx->pc = 0x7B0E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B0E40u;
            // 0x7b0e44: 0xc4800050  lwc1        $f0, 0x50($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B0E7Cu;
            goto label_7b0e7c;
        }
    }
    ctx->pc = 0x7B0E48u;
    // 0x7b0e48: 0x92420050  lbu         $v0, 0x50($s2)
    ctx->pc = 0x7b0e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x7b0e4c: 0xa0820034  sb          $v0, 0x34($a0)
    ctx->pc = 0x7b0e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0e50: 0x92430051  lbu         $v1, 0x51($s2)
    ctx->pc = 0x7b0e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 81)));
    // 0x7b0e54: 0xa0830035  sb          $v1, 0x35($a0)
    ctx->pc = 0x7b0e54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 53), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0e58: 0x92420052  lbu         $v0, 0x52($s2)
    ctx->pc = 0x7b0e58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 82)));
    // 0x7b0e5c: 0xa0820036  sb          $v0, 0x36($a0)
    ctx->pc = 0x7b0e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 54), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0e60: 0x92430053  lbu         $v1, 0x53($s2)
    ctx->pc = 0x7b0e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 83)));
    // 0x7b0e64: 0xa0830037  sb          $v1, 0x37($a0)
    ctx->pc = 0x7b0e64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0e68: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x7b0e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0e6c: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x7b0e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x7b0e70: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x7b0e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0e74: 0xe481004c  swc1        $f1, 0x4C($a0)
    ctx->pc = 0x7b0e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x7b0e78: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x7b0e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7b0e7c:
    // 0x7b0e7c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7b0e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7b0e80: 0x0  nop
    ctx->pc = 0x7b0e80u;
    // NOP
    // 0x7b0e84: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7b0e84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b0e88: 0x0  nop
    ctx->pc = 0x7b0e88u;
    // NOP
    // 0x7b0e8c: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x7B0E8Cu;
    {
        const bool branch_taken_0x7b0e8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b0e8c) {
            ctx->pc = 0x7B0E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B0E8Cu;
            // 0x7b0e90: 0xc4800058  lwc1        $f0, 0x58($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B0EE0u;
            goto label_7b0ee0;
        }
    }
    ctx->pc = 0x7B0E94u;
    // 0x7b0e94: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x7b0e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0e98: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7b0e98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b0e9c: 0x0  nop
    ctx->pc = 0x7b0e9cu;
    // NOP
    // 0x7b0ea0: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x7B0EA0u;
    {
        const bool branch_taken_0x7b0ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b0ea0) {
            ctx->pc = 0x7B0EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B0EA0u;
            // 0x7b0ea4: 0xc4800058  lwc1        $f0, 0x58($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B0EE0u;
            goto label_7b0ee0;
        }
    }
    ctx->pc = 0x7B0EA8u;
    // 0x7b0ea8: 0x92420054  lbu         $v0, 0x54($s2)
    ctx->pc = 0x7b0ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x7b0eac: 0xa0820038  sb          $v0, 0x38($a0)
    ctx->pc = 0x7b0eacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0eb0: 0x92430055  lbu         $v1, 0x55($s2)
    ctx->pc = 0x7b0eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 85)));
    // 0x7b0eb4: 0xa0830039  sb          $v1, 0x39($a0)
    ctx->pc = 0x7b0eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0eb8: 0x92420056  lbu         $v0, 0x56($s2)
    ctx->pc = 0x7b0eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 86)));
    // 0x7b0ebc: 0xa082003a  sb          $v0, 0x3A($a0)
    ctx->pc = 0x7b0ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0ec0: 0x92430057  lbu         $v1, 0x57($s2)
    ctx->pc = 0x7b0ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 87)));
    // 0x7b0ec4: 0xa083003b  sb          $v1, 0x3B($a0)
    ctx->pc = 0x7b0ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 59), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0ec8: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x7b0ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0ecc: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x7b0eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x7b0ed0: 0xc6410070  lwc1        $f1, 0x70($s2)
    ctx->pc = 0x7b0ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0ed4: 0xe4810054  swc1        $f1, 0x54($a0)
    ctx->pc = 0x7b0ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x7b0ed8: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x7b0ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0edc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7b0edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7b0ee0:
    // 0x7b0ee0: 0x0  nop
    ctx->pc = 0x7b0ee0u;
    // NOP
    // 0x7b0ee4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7b0ee4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b0ee8: 0x0  nop
    ctx->pc = 0x7b0ee8u;
    // NOP
    // 0x7b0eec: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x7B0EECu;
    {
        const bool branch_taken_0x7b0eec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7B0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0EECu;
        // 0x7b0ef0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0eec) {
            ctx->pc = 0x7B0F38u;
            goto label_7b0f38;
        }
    }
    ctx->pc = 0x7B0EF4u;
    // 0x7b0ef4: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x7b0ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0ef8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7b0ef8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7b0efc: 0x0  nop
    ctx->pc = 0x7b0efcu;
    // NOP
    // 0x7b0f00: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x7B0F00u;
    {
        const bool branch_taken_0x7b0f00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7b0f00) {
            ctx->pc = 0x7B0F38u;
            goto label_7b0f38;
        }
    }
    ctx->pc = 0x7B0F08u;
    // 0x7b0f08: 0x92420058  lbu         $v0, 0x58($s2)
    ctx->pc = 0x7b0f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x7b0f0c: 0xa082003c  sb          $v0, 0x3C($a0)
    ctx->pc = 0x7b0f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 60), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0f10: 0x92430059  lbu         $v1, 0x59($s2)
    ctx->pc = 0x7b0f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 89)));
    // 0x7b0f14: 0xa083003d  sb          $v1, 0x3D($a0)
    ctx->pc = 0x7b0f14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0f18: 0x9242005a  lbu         $v0, 0x5A($s2)
    ctx->pc = 0x7b0f18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
    // 0x7b0f1c: 0xa082003e  sb          $v0, 0x3E($a0)
    ctx->pc = 0x7b0f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 62), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b0f20: 0x9243005b  lbu         $v1, 0x5B($s2)
    ctx->pc = 0x7b0f20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 91)));
    // 0x7b0f24: 0xa083003f  sb          $v1, 0x3F($a0)
    ctx->pc = 0x7b0f24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 63), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b0f28: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x7b0f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0f2c: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x7b0f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x7b0f30: 0xc6410078  lwc1        $f1, 0x78($s2)
    ctx->pc = 0x7b0f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0f34: 0xe481005c  swc1        $f1, 0x5C($a0)
    ctx->pc = 0x7b0f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
label_7b0f38:
    // 0x7b0f38: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x7b0f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x7b0f3c: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x7B0F3Cu;
    {
        const bool branch_taken_0x7b0f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B0F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0F3Cu;
        // 0x7b0f40: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0f3c) {
            ctx->pc = 0x7B0D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b0d48;
        }
    }
    ctx->pc = 0x7B0F44u;
label_7b0f44:
    // 0x7b0f44: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x7b0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x7b0f48: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x7b0f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x7b0f4c: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x7b0f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x569B70u));
    // 0x7b0f50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7b0f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7b0f54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7b0f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b0f58: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x7b0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7b0f5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7b0f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b0f60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7b0f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7b0f64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7b0f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b0f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b0f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b0f6c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x7b0f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x7b0f70: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0F70u;
        // 0x7b0f74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0F78u;
}
} // namespace gh_event
