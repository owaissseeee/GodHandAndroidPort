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
// Function: movePlayDirect__C14cEventScrLightPC17cEventSeqScrLight
// Address: 0x7b1070 - 0x7b11a0
void movePlayDirect__C14cEventScrLightPC17cEventSeqScrLight_0x7b1070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlayDirect__C14cEventScrLightPC17cEventSeqScrLight_0x7b1070");
#endif

    ctx->pc = 0x7b1070u;

    // 0x7b1070: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x7b1070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b1074: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x7b1074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x7b1078: 0x24c24700  addiu       $v0, $a2, 0x4700
    ctx->pc = 0x7b1078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 18176));
    // 0x7b107c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7b107cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7b1080: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7b1080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7b1084: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x7b1084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604730u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604730u, _value); } while (0); }
    // 0x7b1088: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x7b1088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b108c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x7b108cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604734u, _value); } while (0); }
    // 0x7b1090: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x7b1090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b1094: 0xe442003c  swc1        $f2, 0x3C($v0)
    ctx->pc = 0x7b1094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60473Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60473Cu, _value); } while (0); }
    // 0x7b1098: 0xe4410038  swc1        $f1, 0x38($v0)
    ctx->pc = 0x7b1098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604738u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604738u, _value); } while (0); }
    // 0x7b109c: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x7b109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b10a0: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x7b10a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604750u, _value); } while (0); }
    // 0x7b10a4: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x7b10a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b10a8: 0xe4410054  swc1        $f1, 0x54($v0)
    ctx->pc = 0x7b10a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604754u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604754u, _value); } while (0); }
    // 0x7b10ac: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x7b10acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b10b0: 0xe442005c  swc1        $f2, 0x5C($v0)
    ctx->pc = 0x7b10b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60475Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60475Cu, _value); } while (0); }
    // 0x7b10b4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x7b10b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604758u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604758u, _value); } while (0); }
    // 0x7b10b8: 0x90a3002c  lbu         $v1, 0x2C($a1)
    ctx->pc = 0x7b10b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x7b10bc: 0xa0c34700  sb          $v1, 0x4700($a2)
    ctx->pc = 0x7b10bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x604700u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604700u, _value); } while (0);
    // 0x7b10c0: 0x90a4002d  lbu         $a0, 0x2D($a1)
    ctx->pc = 0x7b10c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
    // 0x7b10c4: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x7b10c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x604701u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604701u, _value); } while (0);
    // 0x7b10c8: 0x90a3002e  lbu         $v1, 0x2E($a1)
    ctx->pc = 0x7b10c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x7b10cc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x7b10ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x604702u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604702u, _value); } while (0);
    // 0x7b10d0: 0x90a4002f  lbu         $a0, 0x2F($a1)
    ctx->pc = 0x7b10d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 47)));
    // 0x7b10d4: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x7b10d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x604703u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604703u, _value); } while (0);
    // 0x7b10d8: 0x90a30030  lbu         $v1, 0x30($a1)
    ctx->pc = 0x7b10d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x7b10dc: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x7b10dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x604704u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604704u, _value); } while (0);
    // 0x7b10e0: 0x90a40031  lbu         $a0, 0x31($a1)
    ctx->pc = 0x7b10e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 49)));
    // 0x7b10e4: 0xa0440005  sb          $a0, 0x5($v0)
    ctx->pc = 0x7b10e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x604705u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604705u, _value); } while (0);
    // 0x7b10e8: 0x90a30032  lbu         $v1, 0x32($a1)
    ctx->pc = 0x7b10e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x7b10ec: 0xa0430006  sb          $v1, 0x6($v0)
    ctx->pc = 0x7b10ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x604706u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604706u, _value); } while (0);
    // 0x7b10f0: 0x90a40033  lbu         $a0, 0x33($a1)
    ctx->pc = 0x7b10f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 51)));
    // 0x7b10f4: 0xa0440007  sb          $a0, 0x7($v0)
    ctx->pc = 0x7b10f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x604707u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604707u, _value); } while (0);
    // 0x7b10f8: 0x90a30034  lbu         $v1, 0x34($a1)
    ctx->pc = 0x7b10f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x7b10fc: 0xa0430060  sb          $v1, 0x60($v0)
    ctx->pc = 0x7b10fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x604760u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604760u, _value); } while (0);
    // 0x7b1100: 0x90a40035  lbu         $a0, 0x35($a1)
    ctx->pc = 0x7b1100u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 53)));
    // 0x7b1104: 0xa0440061  sb          $a0, 0x61($v0)
    ctx->pc = 0x7b1104u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x604761u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604761u, _value); } while (0);
    // 0x7b1108: 0x90a30036  lbu         $v1, 0x36($a1)
    ctx->pc = 0x7b1108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 54)));
    // 0x7b110c: 0xa0430062  sb          $v1, 0x62($v0)
    ctx->pc = 0x7b110cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x604762u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604762u, _value); } while (0);
    // 0x7b1110: 0x90a40037  lbu         $a0, 0x37($a1)
    ctx->pc = 0x7b1110u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 55)));
    // 0x7b1114: 0xa0440063  sb          $a0, 0x63($v0)
    ctx->pc = 0x7b1114u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x604763u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604763u, _value); } while (0);
    // 0x7b1118: 0x90a30038  lbu         $v1, 0x38($a1)
    ctx->pc = 0x7b1118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x7b111c: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x7b111cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x604708u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604708u, _value); } while (0);
    // 0x7b1120: 0x90a40039  lbu         $a0, 0x39($a1)
    ctx->pc = 0x7b1120u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 57)));
    // 0x7b1124: 0xa0440009  sb          $a0, 0x9($v0)
    ctx->pc = 0x7b1124u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x604709u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x604709u, _value); } while (0);
    // 0x7b1128: 0x90a3003a  lbu         $v1, 0x3A($a1)
    ctx->pc = 0x7b1128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x7b112c: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x7b112cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60470Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60470Au, _value); } while (0);
    // 0x7b1130: 0x90a4003b  lbu         $a0, 0x3B($a1)
    ctx->pc = 0x7b1130u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 59)));
    // 0x7b1134: 0xa044000b  sb          $a0, 0xB($v0)
    ctx->pc = 0x7b1134u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60470Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60470Bu, _value); } while (0);
    // 0x7b1138: 0x90a3003c  lbu         $v1, 0x3C($a1)
    ctx->pc = 0x7b1138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x7b113c: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x7b113cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60470Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60470Cu, _value); } while (0);
    // 0x7b1140: 0x90a4003d  lbu         $a0, 0x3D($a1)
    ctx->pc = 0x7b1140u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 61)));
    // 0x7b1144: 0xa044000d  sb          $a0, 0xD($v0)
    ctx->pc = 0x7b1144u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60470Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60470Du, _value); } while (0);
    // 0x7b1148: 0x90a3003e  lbu         $v1, 0x3E($a1)
    ctx->pc = 0x7b1148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x7b114c: 0xa043000e  sb          $v1, 0xE($v0)
    ctx->pc = 0x7b114cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60470Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60470Eu, _value); } while (0);
    // 0x7b1150: 0x90a4003f  lbu         $a0, 0x3F($a1)
    ctx->pc = 0x7b1150u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 63)));
    // 0x7b1154: 0xa044000f  sb          $a0, 0xF($v0)
    ctx->pc = 0x7b1154u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60470Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60470Fu, _value); } while (0);
    // 0x7b1158: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x7b1158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b115c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x7b115cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604710u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604710u, _value); } while (0); }
    // 0x7b1160: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x7b1160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b1164: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x7b1164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604714u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604714u, _value); } while (0); }
    // 0x7b1168: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x7b1168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b116c: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x7b116cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604764u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604764u, _value); } while (0); }
    // 0x7b1170: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x7b1170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b1174: 0xe4410068  swc1        $f1, 0x68($v0)
    ctx->pc = 0x7b1174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604768u, _value); } while (0); }
    // 0x7b1178: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x7b1178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b117c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x7b117cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604718u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604718u, _value); } while (0); }
    // 0x7b1180: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x7b1180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b1184: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x7b1184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60471Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60471Cu, _value); } while (0); }
    // 0x7b1188: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x7b1188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b118c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x7b118cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x604720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604720u, _value); } while (0); }
    // 0x7b1190: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x7b1190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b1194: 0x3e00008  jr          $ra
    ctx->pc = 0x7B1194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1194u;
        // 0x7b1198: 0xe4410024  swc1        $f1, 0x24($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B1194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B119Cu;
    // 0x7b119c: 0x0  nop
    ctx->pc = 0x7b119cu;
    // NOP
    ctx->pc = 0x7b11a0u;
}
} // namespace gh_event
