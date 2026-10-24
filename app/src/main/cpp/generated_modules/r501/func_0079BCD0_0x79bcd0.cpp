#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: func_0079BCD0
// Address: 0x79bcd0 - 0x79bde0
void func_0079BCD0_0x79bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BCD0_0x79bcd0");
#endif

    ctx->pc = 0x79bcd0u;

    // 0x79bcd0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79bcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79bcd4: 0x14a20040  bne         $a1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x79BCD4u;
    {
        const bool branch_taken_0x79bcd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x79bcd4) {
            ctx->pc = 0x79BDD8u;
            goto label_79bdd8;
        }
    }
    ctx->pc = 0x79BCDCu;
    // 0x79bcdc: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x79BCDCu;
    {
        const bool branch_taken_0x79bcdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BCDCu;
        // 0x79bce0: 0x3c07007a  lui         $a3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bcdc) {
            ctx->pc = 0x79BDD8u;
            goto label_79bdd8;
        }
    }
    ctx->pc = 0x79BCE4u;
    // 0x79bce4: 0x3c01c005  lui         $at, 0xC005
    ctx->pc = 0x79bce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49157 << 16));
    // 0x79bce8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x79bce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x79bcec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79bcecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79bcf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79bcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79bcf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79bcf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79bcf8: 0x3c0b007a  lui         $t3, 0x7A
    ctx->pc = 0x79bcf8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)122 << 16));
    // 0x79bcfc: 0xe4e20980  swc1        $f2, 0x980($a3)
    ctx->pc = 0x79bcfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 2432), bits); }
    // 0x79bd00: 0x256509c0  addiu       $a1, $t3, 0x9C0
    ctx->pc = 0x79bd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 2496));
    // 0x79bd04: 0x3c013fbe  lui         $at, 0x3FBE
    ctx->pc = 0x79bd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16318 << 16));
    // 0x79bd08: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x79bd08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x79bd0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79bd0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79bd10: 0x24e20980  addiu       $v0, $a3, 0x980
    ctx->pc = 0x79bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2432));
    // 0x79bd14: 0x3c01401a  lui         $at, 0x401A
    ctx->pc = 0x79bd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16410 << 16));
    // 0x79bd18: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x79bd18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x79bd1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79bd1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79bd20: 0x3c08007a  lui         $t0, 0x7A
    ctx->pc = 0x79bd20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)122 << 16));
    // 0x79bd24: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x79bd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7A09CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A09CCu, _value); } while (0); }
    // 0x79bd28: 0x25060990  addiu       $a2, $t0, 0x990
    ctx->pc = 0x79bd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 2448));
    // 0x79bd2c: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x79bd2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79bd30: 0x3c09007a  lui         $t1, 0x7A
    ctx->pc = 0x79bd30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)122 << 16));
    // 0x79bd34: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79bd34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79bd38: 0x252309a0  addiu       $v1, $t1, 0x9A0
    ctx->pc = 0x79bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 2464));
    // 0x79bd3c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x79bd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79bd40: 0x3c0a007a  lui         $t2, 0x7A
    ctx->pc = 0x79bd40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)122 << 16));
    // 0x79bd44: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x79bd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
    // 0x79bd48: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x79bd48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x79bd4c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79bd4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79bd50: 0x254409b0  addiu       $a0, $t2, 0x9B0
    ctx->pc = 0x79bd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 2480));
    // 0x79bd54: 0xad000990  sw          $zero, 0x990($t0)
    ctx->pc = 0x79bd54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7A0990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A0990u, _value); } while (0);
    // 0x79bd58: 0xe4c40004  swc1        $f4, 0x4($a2)
    ctx->pc = 0x79bd58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7A0994u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A0994u, _value); } while (0); }
    // 0x79bd5c: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x79bd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7A099Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A099Cu, _value); } while (0); }
    // 0x79bd60: 0x3c0140aa  lui         $at, 0x40AA
    ctx->pc = 0x79bd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16554 << 16));
    // 0x79bd64: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x79bd64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x79bd68: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x79bd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x79bd6c: 0x3c0141c2  lui         $at, 0x41C2
    ctx->pc = 0x79bd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16834 << 16));
    // 0x79bd70: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x79bd70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x79bd74: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79bd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79bd78: 0xad2009a0  sw          $zero, 0x9A0($t1)
    ctx->pc = 0x79bd78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7A09A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A09A0u, _value); } while (0);
    // 0x79bd7c: 0x3c0140aa  lui         $at, 0x40AA
    ctx->pc = 0x79bd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16554 << 16));
    // 0x79bd80: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x79bd80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x79bd84: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x79bd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x79bd88: 0x3c01420b  lui         $at, 0x420B
    ctx->pc = 0x79bd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16907 << 16));
    // 0x79bd8c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x79bd8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x79bd90: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x79bd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x79bd94: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x79bd94u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7A09A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A09A4u, _value); } while (0); }
    // 0x79bd98: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x79bd98u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7A09A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A09A8u, _value); } while (0); }
    // 0x79bd9c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x79bd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7A09ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A09ACu, _value); } while (0); }
    // 0x79bda0: 0xad4009b0  sw          $zero, 0x9B0($t2)
    ctx->pc = 0x79bda0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7A09B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A09B0u, _value); } while (0);
    // 0x79bda4: 0xe4870004  swc1        $f7, 0x4($a0)
    ctx->pc = 0x79bda4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7A09B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A09B4u, _value); } while (0); }
    // 0x79bda8: 0xe4880008  swc1        $f8, 0x8($a0)
    ctx->pc = 0x79bda8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7A09B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A09B8u, _value); } while (0); }
    // 0x79bdac: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x79bdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7A09BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A09BCu, _value); } while (0); }
    // 0x79bdb0: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x79bdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x79bdb4: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x79bdb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x79bdb8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x79bdb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x79bdbc: 0x3c0141d2  lui         $at, 0x41D2
    ctx->pc = 0x79bdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16850 << 16));
    // 0x79bdc0: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x79bdc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x79bdc4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x79bdc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x79bdc8: 0xad6009c0  sw          $zero, 0x9C0($t3)
    ctx->pc = 0x79bdc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7A09C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A09C0u, _value); } while (0);
    // 0x79bdcc: 0xe4a90004  swc1        $f9, 0x4($a1)
    ctx->pc = 0x79bdccu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7A09C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A09C4u, _value); } while (0); }
    // 0x79bdd0: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x79bdd0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x7A09C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A09C8u, _value); } while (0); }
    // 0x79bdd4: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x79bdd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7A0998u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7A0998u, _value); } while (0);
label_79bdd8:
    // 0x79bdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x79BDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BDE0u;
}
} // namespace gh_r501
