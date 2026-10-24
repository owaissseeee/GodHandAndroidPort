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
// Function: copyFromRoomData__14cEventScrLightP17cEventSeqScrLighti
// Address: 0x7b18a0 - 0x7b19e0
void copyFromRoomData__14cEventScrLightP17cEventSeqScrLighti_0x7b18a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copyFromRoomData__14cEventScrLightP17cEventSeqScrLighti_0x7b18a0");
#endif

    ctx->pc = 0x7b18a0u;

    // 0x7b18a0: 0x28c40020  slti        $a0, $a2, 0x20
    ctx->pc = 0x7b18a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x7b18a4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x7b18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x7b18a8: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x7b18a8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x7b18ac: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x7b18acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x7b18b0: 0x2463a400  addiu       $v1, $v1, -0x5C00
    ctx->pc = 0x7b18b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943744));
    // 0x7b18b4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x7b18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x7b18b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7b18b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7b18bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x7b18bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b18c0: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x7b18c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x7b18c4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x7b18c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b18c8: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x7b18c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x7b18cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x7b18ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b18d0: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x7b18d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x7b18d4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x7b18d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b18d8: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x7b18d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x7b18dc: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x7b18dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b18e0: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x7b18e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x7b18e4: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x7b18e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b18e8: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x7b18e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x7b18ec: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x7b18ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b18f0: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x7b18f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x7b18f4: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x7b18f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b18f8: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x7b18f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x7b18fc: 0x90430030  lbu         $v1, 0x30($v0)
    ctx->pc = 0x7b18fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x7b1900: 0xa0a3002c  sb          $v1, 0x2C($a1)
    ctx->pc = 0x7b1900u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1904: 0x90440031  lbu         $a0, 0x31($v0)
    ctx->pc = 0x7b1904u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 49)));
    // 0x7b1908: 0xa0a4002d  sb          $a0, 0x2D($a1)
    ctx->pc = 0x7b1908u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x7b190c: 0x90430032  lbu         $v1, 0x32($v0)
    ctx->pc = 0x7b190cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x7b1910: 0xa0a3002e  sb          $v1, 0x2E($a1)
    ctx->pc = 0x7b1910u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 46), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1914: 0x90440033  lbu         $a0, 0x33($v0)
    ctx->pc = 0x7b1914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 51)));
    // 0x7b1918: 0xa0a4002f  sb          $a0, 0x2F($a1)
    ctx->pc = 0x7b1918u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x7b191c: 0x90430034  lbu         $v1, 0x34($v0)
    ctx->pc = 0x7b191cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x7b1920: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x7b1920u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1924: 0x90440035  lbu         $a0, 0x35($v0)
    ctx->pc = 0x7b1924u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 53)));
    // 0x7b1928: 0xa0a40031  sb          $a0, 0x31($a1)
    ctx->pc = 0x7b1928u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 4));
    // 0x7b192c: 0x90430036  lbu         $v1, 0x36($v0)
    ctx->pc = 0x7b192cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x7b1930: 0xa0a30032  sb          $v1, 0x32($a1)
    ctx->pc = 0x7b1930u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1934: 0x90440037  lbu         $a0, 0x37($v0)
    ctx->pc = 0x7b1934u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 55)));
    // 0x7b1938: 0xa0a40033  sb          $a0, 0x33($a1)
    ctx->pc = 0x7b1938u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 51), (uint8_t)GPR_U32(ctx, 4));
    // 0x7b193c: 0x90430058  lbu         $v1, 0x58($v0)
    ctx->pc = 0x7b193cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x7b1940: 0xa0a30034  sb          $v1, 0x34($a1)
    ctx->pc = 0x7b1940u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 52), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1944: 0x90440059  lbu         $a0, 0x59($v0)
    ctx->pc = 0x7b1944u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 89)));
    // 0x7b1948: 0xa0a40035  sb          $a0, 0x35($a1)
    ctx->pc = 0x7b1948u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 53), (uint8_t)GPR_U32(ctx, 4));
    // 0x7b194c: 0x9043005a  lbu         $v1, 0x5A($v0)
    ctx->pc = 0x7b194cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 90)));
    // 0x7b1950: 0xa0a30036  sb          $v1, 0x36($a1)
    ctx->pc = 0x7b1950u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 54), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1954: 0x9044005b  lbu         $a0, 0x5B($v0)
    ctx->pc = 0x7b1954u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 91)));
    // 0x7b1958: 0xa0a40037  sb          $a0, 0x37($a1)
    ctx->pc = 0x7b1958u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 55), (uint8_t)GPR_U32(ctx, 4));
    // 0x7b195c: 0x90430038  lbu         $v1, 0x38($v0)
    ctx->pc = 0x7b195cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x7b1960: 0xa0a30038  sb          $v1, 0x38($a1)
    ctx->pc = 0x7b1960u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1964: 0x90440039  lbu         $a0, 0x39($v0)
    ctx->pc = 0x7b1964u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x7b1968: 0xa0a40039  sb          $a0, 0x39($a1)
    ctx->pc = 0x7b1968u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 57), (uint8_t)GPR_U32(ctx, 4));
    // 0x7b196c: 0x9043003a  lbu         $v1, 0x3A($v0)
    ctx->pc = 0x7b196cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x7b1970: 0xa0a3003a  sb          $v1, 0x3A($a1)
    ctx->pc = 0x7b1970u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1974: 0x9044003b  lbu         $a0, 0x3B($v0)
    ctx->pc = 0x7b1974u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 59)));
    // 0x7b1978: 0xa0a4003b  sb          $a0, 0x3B($a1)
    ctx->pc = 0x7b1978u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 59), (uint8_t)GPR_U32(ctx, 4));
    // 0x7b197c: 0x9043003c  lbu         $v1, 0x3C($v0)
    ctx->pc = 0x7b197cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x7b1980: 0xa0a3003c  sb          $v1, 0x3C($a1)
    ctx->pc = 0x7b1980u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 60), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1984: 0x9044003d  lbu         $a0, 0x3D($v0)
    ctx->pc = 0x7b1984u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 61)));
    // 0x7b1988: 0xa0a4003d  sb          $a0, 0x3D($a1)
    ctx->pc = 0x7b1988u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 61), (uint8_t)GPR_U32(ctx, 4));
    // 0x7b198c: 0x9043003e  lbu         $v1, 0x3E($v0)
    ctx->pc = 0x7b198cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x7b1990: 0xa0a3003e  sb          $v1, 0x3E($a1)
    ctx->pc = 0x7b1990u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 62), (uint8_t)GPR_U32(ctx, 3));
    // 0x7b1994: 0x9044003f  lbu         $a0, 0x3F($v0)
    ctx->pc = 0x7b1994u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x7b1998: 0xa0a4003f  sb          $a0, 0x3F($a1)
    ctx->pc = 0x7b1998u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 63), (uint8_t)GPR_U32(ctx, 4));
    // 0x7b199c: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x7b199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b19a0: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x7b19a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x7b19a4: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x7b19a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b19a8: 0xe4a10044  swc1        $f1, 0x44($a1)
    ctx->pc = 0x7b19a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x7b19ac: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x7b19acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b19b0: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x7b19b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x7b19b4: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x7b19b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b19b8: 0xe4a1004c  swc1        $f1, 0x4C($a1)
    ctx->pc = 0x7b19b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x7b19bc: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x7b19bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b19c0: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x7b19c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x7b19c4: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x7b19c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b19c8: 0xe4a10054  swc1        $f1, 0x54($a1)
    ctx->pc = 0x7b19c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x7b19cc: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x7b19ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b19d0: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x7b19d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x7b19d4: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x7b19d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b19d8: 0x3e00008  jr          $ra
    ctx->pc = 0x7B19D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B19DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B19D8u;
        // 0x7b19dc: 0xe4a1005c  swc1        $f1, 0x5C($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B19D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B19E0u;
}
} // namespace gh_event
