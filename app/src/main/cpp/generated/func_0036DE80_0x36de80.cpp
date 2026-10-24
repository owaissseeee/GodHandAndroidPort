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

// Function: func_0036DE80
// Address: 0x36de80 - 0x36dff0
void func_0036DE80_0x36de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036DE80_0x36de80");
#endif

    ctx->pc = 0x36de80u;

    // 0x36de80: 0x24830160  addiu       $v1, $a0, 0x160
    ctx->pc = 0x36de80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x36de84: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x36de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x36de88: 0x8c6502c4  lw          $a1, 0x2C4($v1)
    ctx->pc = 0x36de88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 708)));
    // 0x36de8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36de8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36de90: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x36de90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x36de94: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x36de94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x36de98: 0x8c6202c8  lw          $v0, 0x2C8($v1)
    ctx->pc = 0x36de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 712)));
    // 0x36de9c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x36de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x36dea0: 0x8c6502cc  lw          $a1, 0x2CC($v1)
    ctx->pc = 0x36dea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 716)));
    // 0x36dea4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x36dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x36dea8: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x36dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x36deac: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x36deacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x36deb0: 0x8c6500dc  lw          $a1, 0xDC($v1)
    ctx->pc = 0x36deb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x36deb4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x36deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x36deb8: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x36deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x36debc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x36debcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x36dec0: 0x8c6500bc  lw          $a1, 0xBC($v1)
    ctx->pc = 0x36dec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x36dec4: 0x8c6600e0  lw          $a2, 0xE0($v1)
    ctx->pc = 0x36dec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x36dec8: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x36dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x36decc: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x36deccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x36ded0: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x36ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x36ded4: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x36ded4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x36ded8: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x36ded8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x36dedc: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x36dedcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x36dee0: 0x8c6200c8  lw          $v0, 0xC8($v1)
    ctx->pc = 0x36dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x36dee4: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x36dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x36dee8: 0x8c6500cc  lw          $a1, 0xCC($v1)
    ctx->pc = 0x36dee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x36deec: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x36deecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x36def0: 0x8c62043c  lw          $v0, 0x43C($v1)
    ctx->pc = 0x36def0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1084)));
    // 0x36def4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x36def4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x36def8: 0x8c65042c  lw          $a1, 0x42C($v1)
    ctx->pc = 0x36def8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1068)));
    // 0x36defc: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x36defcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x36df00: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x36df00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x36df04: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x36df04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x36df08: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x36df08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x36df0c: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x36df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x36df10: 0xac870044  sw          $a3, 0x44($a0)
    ctx->pc = 0x36df10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 7));
    // 0x36df14: 0x8c6202d4  lw          $v0, 0x2D4($v1)
    ctx->pc = 0x36df14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 724)));
    // 0x36df18: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x36df18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x36df1c: 0x8c6502d8  lw          $a1, 0x2D8($v1)
    ctx->pc = 0x36df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 728)));
    // 0x36df20: 0xac85004c  sw          $a1, 0x4C($a0)
    ctx->pc = 0x36df20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
    // 0x36df24: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x36df24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x36df28: 0x8c650134  lw          $a1, 0x134($v1)
    ctx->pc = 0x36df28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x36df2c: 0x94670080  lhu         $a3, 0x80($v1)
    ctx->pc = 0x36df2cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x36df30: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x36df30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x36df34: 0x94680084  lhu         $t0, 0x84($v1)
    ctx->pc = 0x36df34u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x36df38: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x36df38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x36df3c: 0x8c66011c  lw          $a2, 0x11C($v1)
    ctx->pc = 0x36df3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x36df40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x36df40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x36df44: 0xa4870050  sh          $a3, 0x50($a0)
    ctx->pc = 0x36df44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 7));
    // 0x36df48: 0xa4880052  sh          $t0, 0x52($a0)
    ctx->pc = 0x36df48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 8));
    // 0x36df4c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x36df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x36df50: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x36df50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x36df54: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x36df54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x36df58: 0x90a5a570  lbu         $a1, -0x5A90($a1)
    ctx->pc = 0x36df58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294944112)));
    // 0x36df5c: 0xa0850054  sb          $a1, 0x54($a0)
    ctx->pc = 0x36df5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
    // 0x36df60: 0x9062013c  lbu         $v0, 0x13C($v1)
    ctx->pc = 0x36df60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x36df64: 0xa0820055  sb          $v0, 0x55($a0)
    ctx->pc = 0x36df64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x36df68: 0x9065011c  lbu         $a1, 0x11C($v1)
    ctx->pc = 0x36df68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x36df6c: 0xa0850056  sb          $a1, 0x56($a0)
    ctx->pc = 0x36df6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 5));
    // 0x36df70: 0x90620134  lbu         $v0, 0x134($v1)
    ctx->pc = 0x36df70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x36df74: 0xa0820057  sb          $v0, 0x57($a0)
    ctx->pc = 0x36df74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 87), (uint8_t)GPR_U32(ctx, 2));
    // 0x36df78: 0x906503c4  lbu         $a1, 0x3C4($v1)
    ctx->pc = 0x36df78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 964)));
    // 0x36df7c: 0xa0850058  sb          $a1, 0x58($a0)
    ctx->pc = 0x36df7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 5));
    // 0x36df80: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x36df80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x36df84: 0xa0820059  sb          $v0, 0x59($a0)
    ctx->pc = 0x36df84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 2));
    // 0x36df88: 0x90650020  lbu         $a1, 0x20($v1)
    ctx->pc = 0x36df88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x36df8c: 0xa085005a  sb          $a1, 0x5A($a0)
    ctx->pc = 0x36df8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 90), (uint8_t)GPR_U32(ctx, 5));
    // 0x36df90: 0x90620064  lbu         $v0, 0x64($v1)
    ctx->pc = 0x36df90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x36df94: 0xa082005b  sb          $v0, 0x5B($a0)
    ctx->pc = 0x36df94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 2));
    // 0x36df98: 0x90650068  lbu         $a1, 0x68($v1)
    ctx->pc = 0x36df98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x36df9c: 0xa085005c  sb          $a1, 0x5C($a0)
    ctx->pc = 0x36df9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 5));
    // 0x36dfa0: 0x90620044  lbu         $v0, 0x44($v1)
    ctx->pc = 0x36dfa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x36dfa4: 0xa082005d  sb          $v0, 0x5D($a0)
    ctx->pc = 0x36dfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 93), (uint8_t)GPR_U32(ctx, 2));
    // 0x36dfa8: 0x90650048  lbu         $a1, 0x48($v1)
    ctx->pc = 0x36dfa8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x36dfac: 0xa085005e  sb          $a1, 0x5E($a0)
    ctx->pc = 0x36dfacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 5));
    // 0x36dfb0: 0x90620060  lbu         $v0, 0x60($v1)
    ctx->pc = 0x36dfb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x36dfb4: 0xa082005f  sb          $v0, 0x5F($a0)
    ctx->pc = 0x36dfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 2));
    // 0x36dfb8: 0x9065006c  lbu         $a1, 0x6C($v1)
    ctx->pc = 0x36dfb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x36dfbc: 0xa0850060  sb          $a1, 0x60($a0)
    ctx->pc = 0x36dfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x36dfc0: 0x90620070  lbu         $v0, 0x70($v1)
    ctx->pc = 0x36dfc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x36dfc4: 0xa0820061  sb          $v0, 0x61($a0)
    ctx->pc = 0x36dfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x36dfc8: 0x90650074  lbu         $a1, 0x74($v1)
    ctx->pc = 0x36dfc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x36dfcc: 0xa0850062  sb          $a1, 0x62($a0)
    ctx->pc = 0x36dfccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 98), (uint8_t)GPR_U32(ctx, 5));
    // 0x36dfd0: 0x90620078  lbu         $v0, 0x78($v1)
    ctx->pc = 0x36dfd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x36dfd4: 0xa0820063  sb          $v0, 0x63($a0)
    ctx->pc = 0x36dfd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x36dfd8: 0x9065007c  lbu         $a1, 0x7C($v1)
    ctx->pc = 0x36dfd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x36dfdc: 0xa0850064  sb          $a1, 0x64($a0)
    ctx->pc = 0x36dfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 5));
    // 0x36dfe0: 0x8c6204ac  lw          $v0, 0x4AC($v1)
    ctx->pc = 0x36dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1196)));
    // 0x36dfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x36DFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DFE4u;
        // 0x36dfe8: 0xac820068  sw          $v0, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DFECu;
    // 0x36dfec: 0x0  nop
    ctx->pc = 0x36dfecu;
    // NOP
    ctx->pc = 0x36dff0u;
}
